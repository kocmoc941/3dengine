
%INCLUDE "externs.inc"

GLOBAL DLLMain
EXPORT GLCreateWindow

%define wndeax(arg) mov [WNDCLASSEX.%+arg], eax

segment .data use32 align=1
  cl_name db '__unique_class_name_cogl_creator__',0
  wn_name db '3D Engine',0
  wnd_size equ dword wndsize-WNDCLASSEX

struc WNDCLASSEX
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
  wndsize:
endstruc
  
segment .text use32 align=1

DLLMain:
  xor eax, eax
  sete al
  ret 12

InitWnd:
  push ebp
  mov ebp, esp
  mov eax, wnd_size
  ;wndeax(cbSize)
  mov [WNDCLASSEX.cbSize], dword 0
  mov eax, 0x0002 ;CS_HREDRAW
  or eax, 0x0001  ;CS_VREDRAW
  ;wndeax(cbStyle)
  ;mov eax, [esp-8]
  ;wndeax(lpfnWndProc)
  xor eax, eax
  ;wndeax(cbClsExtra)
  ;wndeax(cbWndExtra)
  ;wndeax(hInstance)
  ;wndeax(hIcCurBr)
  ;wndeax(lpszMenuName)
  ;wndeax(lpszMenuName)
  mov eax, cl_name
  ;wndeax(lpszClassName)
  xor eax, eax
  ;wndeax(hIconSm)
  leave
  ret
  
GLCreateWindow:
  push ebp
  mov ebp, esp
  ;push 0
  call InitWnd
  leave
  ret
