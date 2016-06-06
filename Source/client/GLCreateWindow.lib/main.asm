
GLOBAL DLLMain
EXPORT GLCreateWindow

EXTERN ExitProcess

segment .text use32 align=16

DLLMain:
  xor eax, eax
  sete al
  ret 12

GLCreateWindow:
  push ebp
  mov ebp, esp
  mov eax, 123
  leave
  ret
