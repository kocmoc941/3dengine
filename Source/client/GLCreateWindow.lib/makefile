.PHONY = USAGE compile clean rebuild

COMPILER = nasm.exe
CFLAGS   = -fwin32

LINKER = golink.exe
LFLAGS = /dll /entry DLLMain /fo $@
EXPORTDLL = kernel32.dll user32.dll

OBJFILE = cogl.obj
OUTFILE = ../bin/cogl_golink.dll

USAGE: 
  @echo "USAGE: make compile"
  @echo "       make clean"

compile: $(OUTFILE)

$(OUTFILE) : $(OBJFILE)
  @$(LINKER) $? $(LFLAGS) $(EXPORTDLL)
  
$(OBJFILE) : main.asm
  @$(COMPILER) $(CFLAGS) $? -o$@
  
clean:
  rm -rdf *.obj *.dll

rebuild: clean compile