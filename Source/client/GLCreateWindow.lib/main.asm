
; graphical module for opengl rendering
; calling convention is stdcall

%INCLUDE "externs.inc"

GLOBAL DLLMain
EXPORT GLCreateWindow
EXPORT GLMainLoop
EXPORT GetScreenWH

%define wndeax(arg) mov [WNDCLASSEX.%+arg], eax

segment .data use32 align=1
  hwnd: dd 0
  cl_name db '__unique_class_name_cogl_creator__',0
  msgerr:
    .register: db 'RegisterClassExA',0
    .window: db 'CreateWindowExA',0
    .unregister: db 'UnregisterClassA',0
    .destroy: db 'DestroyWindow',0

  wnd_size equ dword WNDCLASSEX.wndsize
  
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
  
segment .text use32 align=1
DLLMain: ; params: histance/reason/reserved
         ; return: 1
  cmp [esp+8], dword 1 ; DLL_PROCESS_ATTACH
  jne dllexit
    mov eax, [esp+8]
    mov [WNDCLASSEX.hInstance], eax
  dllexit:
    xor eax, eax
    sete al
    retn 12

GLCreateWindow_InitWndClass: ; params: no, but use params GLCreateWindow
                             ; return: 0
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
;  wndeax(hInstance) ; receive from in DLLMain
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
    push dword [hwnd]
    call [DestroyWindow]
    test eax, eax
    jz error.dest
    ;call UnloadClass
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

GLCreateWindow: ; params: ptr lpfnWndProc, ptr struct RECT{LONG pos_x,LONG pos_y,LONG width,LONG height}, wndname
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
