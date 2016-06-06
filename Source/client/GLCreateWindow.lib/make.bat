@echo off
SET input=main.asm
SET obj=cogl.obj
SET output=cogl
SET format=obj
SET needdll=yes
SET entry=DLLMain
SET export=GLCreateWindow
SET cmdline=""
if %format% neq "" SET cmdline=%cmdline% -f%format%
if %input% neq "" SET cmdline=%cmdline% %input%
if %obj% neq "" SET cmdline=%cmdline% -o%obj%
nasm%cmdline%
SET cmdline=""
SET format=PE
if %format% neq "" SET cmdline=%cmdline% -o%format%
if %obj% neq "" SET cmdline=%cmdline% %obj%
if %needdll% equ yes SET cmdline=%cmdline% -dll
if %entry% neq "" SET cmdline=%cmdline% -entry %entry%
if %output% neq "" SET cmdline=%cmdline% -o %output%_alink.dll
rem alink%cmdline%

SET cmdline=""
SET format=win32
if  %format% neq "" SET cmdline=%cmdline% -f%format%
if  %input% neq "" SET cmdline=%cmdline% %input%
if %obj% neq "" SET cmdline=%cmdline% -o%obj%
nasm%cmdline%

SET cmdline=""
if %obj% neq "" SET cmdline=%cmdline% %obj%
if %needdll% equ yes SET cmdline=%cmdline% /dll
if %output% neq "" SET cmdline=%cmdline% /fo %output%_golink.dll
if %entry% neq "" SET cmdline=%cmdline% /entry %entry%
golink%cmdline% kernel32.dll

rem if %obj% neq "" del %obj%
