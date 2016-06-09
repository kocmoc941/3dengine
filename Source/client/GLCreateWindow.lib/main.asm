
%INCLUDE "externs.inc"

GLOBAL DLLMain
EXPORT GLCreateWindow

%define wndeax(arg) mov [WNDCLASSEX.%+arg], eax

segment .data use32 align=1
  cl_name db '__unique_class_name_cogl_creator__',0
  wn_name db '3D Engine',0
  msgerr:
    .register: db 'RegisterClassExA', 0
    .window: db 'CreateWindowExA',0
    
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
  
segment .text use32 align=1
DLLMain:
  cmp [esp+8], dword 1 ; DLL_PROCESS_ATTACH
  jne dllexit
    mov eax, [esp+16]
    mov [WNDCLASSEX.hInstance], eax
  dllexit:
    xor eax, eax
    sete al
    ret 12

InitWndClass:
  push ebp
  mov ebp, esp
  mov eax, wnd_size
  wndeax(cbSize)
  mov eax, 0x0002 ;CS_HREDRAW
  or eax, 0x0001  ;CS_VREDRAW
  wndeax(cbStyle)
  mov eax, [esp+16] ; lpfnWndProc
  wndeax(lpfnWndProc)
  xor eax, eax
  wndeax(cbClsExtra)
  wndeax(cbWndExtra)
;  wndeax(hInstance) ; in DLLMain
  wndeax(hIcCurBr)
  wndeax(lpszMenuName)
  wndeax(lpszMenuName)
  mov eax, cl_name
  wndeax(lpszClassName)
  xor eax, eax
  wndeax(hIconSm)
  leave
  ret
  
GLCreateWindow: ; one param - lpfnWndProc
  push ebp
  mov ebp, esp
  call InitWndClass
  push WNDCLASSEX
  call [RegisterClassExA]
  test eax,eax
  jz error.reg

  push 0 ; lpparam
  push dword [WNDCLASSEX.hInstance]
  push 0 ; menu
  push 0 ; parent
  push 768 ; height
  push 1024 ; width
  push 10 ; y
  push 10 ; x
  mov eax, 0x00000000 ; overlaooed
  push eax ; style
  push wn_name
  push cl_name
  mov eax, 00000200h ; clientedge
  or eax, 00000100h ; windowdedge
  push eax ; dwexstyle
  call [CreateWindowExA]
  test eax, eax
  jz error.wnd

  exit:
    leave  
    ret

  error:
    .reg:
      push cl_name
      push WNDCLASSEX.hInstance
      call [UnregisterClassA]
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
      call [GetLastError]
    jmp exit
