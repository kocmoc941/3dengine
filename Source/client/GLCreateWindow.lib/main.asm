;%define __DEBUG__

; graphical module for opengl rendering
; calling convention is stdcall

%INCLUDE "externs.inc"
%INCLUDE "consts.inc"

GLOBAL DLLMain
EXPORT GLCreateWindow
EXPORT GLMainLoop
EXPORT GetScreenWH
EXPORT GLChangeResolution

%define wndeax(arg) mov [WNDCLASSEX.%+arg], eax
%define pxeax(arg) mov [PIXELFORMAT.%+arg], eax

segment .data use32 align=1
  hwnd: dd 0
  hdc: dd 0
  curr_disp_res: dq 0
  cl_name db '__unique_class_name_cogl_creator__',0
  msgerr:
    .register: db 'RegisterClassExA',0
    .window: db 'CreateWindowExA',0
    .unregister: db 'UnregisterClassA',0
    .destroy: db 'DestroyWindow',0
    .hdc: db 'GetDC',0
    .ChoosePixelFormat: db 'ChoosePixelFormat',0
    .SetPixelFormat: db 'SetPixelFormat',0
    .EnumDisplaySettings: db 'EnumDisplaySettings',0
    .ChangeDisplaySettings:    db "ChangeDisplaySettings",0
    .cds_test: db 'CDS_TEST not pass',0

  wnd_size: equ dword WNDCLASSEX.wndsize
  px_size: equ dword PIXELFORMAT.pxsize

segment .bss use32 align=1
WNDCLASSEX:
	.cbSize resd 1
	.cbStyle resd 1
	.lpfnWndProc resd 1
	.cbClsExtra resd 1
  .cbWndExtra resd 1
	.hInstance resd 1
	.hIcCurBr resd 1*3
	.lpszMenuName resd 1
	.lpszClassName resd 1
	.hIconSm resd 1
  .wndsize equ $-WNDCLASSEX
  
PIXELFORMAT:
  .nSize: resw 1
  .nVersion: resw 1
  .dwFlags: resd 1
  .iPixelType: resb 1
  .cColorBits: resb 1
  .cRedBits: resb 1
  .cRedShift: resb 1
  .cGreenBits: resb 1
  .cGreenShift: resb 1
  .cBlueBits: resb 1
  .cBlueShift: resb 1
  .cAlphaBits: resb 1
  .cAlphaShift: resb 1
  .cAccumBits: resb 1
  .cAccumRedBits: resb 1
  .cAccumGreenBits: resb 1
  .cAccumBlueBits: resb 1
  .cAccumAlphaBits: resb 1
  .cDepthBits: resb 1
  .cStencilBits: resb 1
  .cAuxBuffers: resb 1
  .iLayerType: resb 1
  .bReserved: resb 1
  .dwLayerMask: resd 1
  .dwVisibleMask: resd 1
  .dwDamageMask: resd 1
  .pxsize: equ $-PIXELFORMAT

MSG:
  .hwnd resd 1
  .message resd 1
  .wParam resd 1
  .lParam resd 1
  .time resd 1
  .pt resd 1
  
SCREEN_SIZE:
  .width resd 1
  .height resd 1

WNDPOS:
  .x resd 1
  .y resd 1
  .width resd 1
  .height resd 1
  
DEVMODE:
  .dmDeviceName: resb 32
  .dmSpecVersion: resw 1
  .dmDriverVersion: resw 1
  .dmSize: resw 1
  .dmDriverExtra: resw 1
  .dmFields: resd 1
  .dmOrientation: resw 1
  .dmPaperSize: resw 1
  .dmPaperLength: resw 1
  .dmPaperWidth: resw 1
  .dmScale: resw 1
  .dmCopies: resw 1
  .dmDefaultSource: resw 1
  .dmPrintQuality: resw 1
  .dmColor: resw 1
  .dmDuplex: resw 1
  .dmYResolution: resw 1
  .dmTTOption: resw 1
  .dmCollate: resw 1
  .dmFormName: resb 32
  .dmLogPixels: resw 1
  .dmBitsPerPel: resd 1
  .dmPelsWidth: resd 1
  .dmPelsHeight: resd 1
  .dmDisplayFlags: resd 1
  .dmDisplayFrequency: resd 1
  ; только для Windows 95, 98, 2000
  ;.dmICMMethod As Long
  ;.dmICMIntent As Long
  ;.dmMediaType As Long
  ;.dmDitherType As Long
  ;.dmReserved1 As Long
  ;.dmReserved2 As Long
  ; только для Windows 2000
  ;.dmPanningWidth As Long
  ;.dmPanningHeight As Long

segment .text use32 align=1
DLLMain: ; params: histance/reason/reserved
         ; return: 1
  cmp [esp+8], dword 1 ; DLL_PROCESS_ATTACH
  jne dllexit
    mov eax, [esp+4]
    mov [WNDCLASSEX.hInstance], eax
  dllexit:
    xor eax, eax
    sete al
    retn 12

ChangePixelFormat: ; params: no
                 ; return: no
  ; clear
  mov eax, px_size
  mov ecx, 2
  div dword ecx
  mov ecx, eax
  %ifdef __DEBUG__
  int3
  %endif
  pushf
  cld
  xor eax, eax
  mov edi, PIXELFORMAT
  repne stosw
  popf
  
  ; init for ChoosePixelFormat
  mov eax, px_size
  pxeax(nSize)
  mov eax, 1
  pxeax(nVersion)
  mov eax, PFD_SUPPORT_OPENGL
  or eax, PFD_NEED_PALETTE ; Colors in the palette should be specified according to the values of the cRedBits, cRedShift, cGreenBits, cGreenShift, cBluebits, and cBlueShift members
  or eax, PFD_DOUBLEBUFFER
  or eax, PFD_DRAW_TO_WINDOW
  pxeax(dwFlags)
  mov eax, PFD_TYPE_RGBA
  pxeax(iPixelType)
  mov eax, 32
  pxeax(cColorBits)
  pxeax(cAlphaBits)
  ;cAccumBits
  pxeax(cDepthBits)
  ;pxeax(cStencilBits)
  ;pxeax(cAuxBuffers)
  mov eax, PFD_MAIN_PLANE
  pxeax(iLayerType)
  
  push PIXELFORMAT
  push dword [hwnd]
  call [GetDC]
  test eax, eax
  jz error.dc
  mov [hdc], eax
  push eax
  call [ChoosePixelFormat]
  test eax, eax
  jz error.ChoosePixelFormat
  
  push PIXELFORMAT
  push eax ; format from ChoosePixelFormat
  push dword [hdc]
  call dword [SetPixelFormat]
  test eax, eax
  jz error.SetPixelFormat

  retn

GLCreateWindow_InitWndClass: ; params: no, but use params GLCreateWindow
                             ; return: 0
  call ChangePixelFormat
  mov eax, wnd_size
  wndeax(cbSize)
  mov eax, 0x0002 ; CS_HREDRAW
  or eax, 0x0001  ; CS_VREDRAW
  wndeax(cbStyle)
  mov eax, [ebp+8] ; ptr lpfnWndProc
  wndeax(lpfnWndProc)
  xor eax, eax
  wndeax(cbClsExtra)
  wndeax(cbWndExtra)
  ;wndeax(hInstance) ; receive from in DLLMain
  wndeax(hIcCurBr)
  wndeax(lpszMenuName)
  wndeax(lpszMenuName)
  mov eax, cl_name
  wndeax(lpszClassName)
  xor eax, eax
  wndeax(hIconSm)
  retn

UnloadClass: ; params: no
             ; return: no
  push cl_name
  push WNDCLASSEX.hInstance
  call [UnregisterClassA]
  push 0
  push 0
  push msgerr.unregister
  push 0
  test eax, eax
  jz error.msgbox
  add esp, 16
  retn

GLChangeResolution: ; params: width{long}/height{long}
                    ; return: no
  push DEVMODE
  push ENUM_CURRENT_SETTINGS
  push 0
  call [EnumDisplaySettingsA]
  test eax, eax
  jz error.EnumDisplaySettings
  
  ;save current settings
  mov edx, dword [DEVMODE.dmPelsWidth]
  mov dword [curr_disp_res], edx
  mov edx, dword [DEVMODE.dmPelsHeight]
  mov dword [curr_disp_res+4], edx
  
  mov eax, [esp+4]
  mov dword [DEVMODE.dmPelsWidth], eax
  mov eax, [esp+8]
  mov dword [DEVMODE.dmPelsHeight], eax
  push CDS_TEST
  push DEVMODE
  call [ChangeDisplaySettingsA]
  test eax, eax ; DISP_CHANGE_SUCCESSFUL = 0
  jnz error.cds_test
  push CDS_UPDATEREGISTRY
  push DEVMODE
  call [ChangeDisplaySettingsA]
  test eax, eax ; DISP_CHANGE_SUCCESSFUL = 0
  jnz error.ChangeDisplaySettings
  chng.exit:
  retn 8

  error.cds_test:
    push 0
    push 0
    push msgerr.cds_test
    push 0
    call [MessageBoxA]
    jmp chng.exit
  error.ChangeDisplaySettings:
    push 0
    push 0
    push msgerr.ChangeDisplaySettings
    push 0
    call [MessageBoxA]
    jmp chng.exit
  error.EnumDisplaySettings:
    push 0
    push 0
    push msgerr.EnumDisplaySettings
    push 0
    call [MessageBoxA]
    jmp chng.exit

GLMainLoop: ; params: no
            ; return: no
  push 0
  push 0
  push 0
  push MSG
  call [GetMessageA]
  test eax, eax
  jz GLMainLoop_exit
    cmp dword [MSG.message], 0x0002 ; WM_DESTROY
    jz GLDestroy
    push MSG
    call [TranslateMessage]
    push MSG
    call [DispatchMessageA]
  jmp GLMainLoop
  GLMainLoop_exit:
  retn

  GLDestroy:
    ; restore display settings
    push DEVMODE
    push ENUM_CURRENT_SETTINGS
    push 0
    call [EnumDisplaySettingsA]
    mov eax, [curr_disp_res]
    mov dword [DEVMODE.dmPelsWidth], eax
    mov eax, [curr_disp_res+4]
    mov dword [DEVMODE.dmPelsHeight], eax
    push CDS_UPDATEREGISTRY
    push DEVMODE
    call [ChangeDisplaySettingsA]
    
    push dword [hwnd]
    call [DestroyWindow]
    test eax, eax
    jz error.dest
    
    push cl_name
    push WNDCLASSEX.hInstance
    call [UnregisterClassA]    
    test eax, eax
    jz error.destroy
    jmp GLMainLoop_exit

    error.destroy:
      push 0
      push 0
      push msgerr.destroy
      push 0
      call [MessageBoxA]
      jmp GLMainLoop_exit

GetScreenWH: ; params: no
             ; return: ptr struct {LONG width,LONG height}
  xor eax, eax
  push 17 ; SM_CXFULLSCREEN
  call [GetSystemMetrics]
  test eax, eax
  jz next_exit
  mov [SCREEN_SIZE.width], eax
  xor eax, eax
  push 16 ; SM_CYFULLSCREEN
  call [GetSystemMetrics]
  test eax, eax
  jz next_exit
  mov [SCREEN_SIZE.height], eax
  next_exit:
  mov eax, SCREEN_SIZE
  retn

GLCreateWindow: ; params: ptr lpfnWndProc, ptr struct RECT{LONG pos_x,LONG pos_y,LONG width,LONG height}, ptr wndname
                ; return: handle window {HWND}
  push ebp
  mov ebp, esp
  mov ebx, [ebp+12] ; pos in RECT
  mov eax, [ebx+0]
  mov [WNDPOS.x], eax
  mov eax, [ebx+4]
  mov [WNDPOS.y], eax
  mov eax, [ebx+8]
  mov [WNDPOS.width], eax
  mov eax, [ebx+12]
  mov [WNDPOS.height], eax

  call GLCreateWindow_InitWndClass

  push WNDCLASSEX
  call [RegisterClassExA]
  test eax,eax
  jz error.unreg

  push 0 ; lpparam
  push dword [WNDCLASSEX.hInstance]
  push 0 ; menu
  push 0 ; parent
  push dword [WNDPOS.height] ; height
  push dword [WNDPOS.width] ; width
  push dword [WNDPOS.y] ; y
  push dword [WNDPOS.x] ; x
  mov eax, 0x00000000 ; overload
  or eax, 0x00080000 ; SYSMENU
  push eax ; style
  push dword [ebp+16]
  push cl_name
  mov eax, 0200h ; clientedge
  or eax, 0100h ; windowdedge
  push eax ; dwexstyle
  call [CreateWindowExA]
  test eax, eax
  jz error.wnd

  mov [hwnd], eax

  exit:
    leave
    retn 12

  error:
    .SetPixelFormat:
      push 0
      push 0
      push msgerr.SetPixelFormat
      push 0
      jmp .msgbox    
    .ChoosePixelFormat:
      push 0
      push 0
      push msgerr.ChoosePixelFormat
      push 0
      jmp .msgbox    
    .dc:
      push 0
      push 0
      push msgerr.hdc
      push 0
      jmp .msgbox    
    .dest:
      push 0
      push 0
      push msgerr.destroy
      push 0
      jmp .msgbox    
    .unreg:
      call UnloadClass
      jmp .msgbox
    .reg:
      push 0
      push 0
      push msgerr.register
      push 0
      jmp .msgbox
    .wnd:
      push 0
      push 0      
      push msgerr.window
      push 0
      jmp .msgbox
    .msgbox:
      call [MessageBoxA]
      xor eax, eax
    jmp exit
