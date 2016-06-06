/*
 * stdio.h
 *
 * Definitions of types and prototypes of functions for standard input and
 * output.
 *
 * NOTE: The file manipulation functions provided by Microsoft seem to
 * work with either slash (/) or backslash (\) as the path separator.
 *
 * This file is part of the Mingw32 package.
 *
 * Contributors:
 *  Created by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 *
 *  THIS SOFTWARE IS NOT COPYRIGHTED
 *
 *  This source code is offered for use in the public domain. You may
 *  use, modify or distribute it freely.
 *
 *  This code is distributed in the hope that it will be useful but
 *  WITHOUT ANY WARRANTY. ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
 *  DISCLAMED. This includes but is not limited to warranties of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * $Revision: 2.5 $
 * $Author: colin $
 * $Date: 1998/05/12 21:58:59 $
 *
 */

#ifndef _STDIO_H_
#define	_STDIO_H_

#define __need_size_t
#define __need_NULL
#define __need_wchar_t
#define	__need_wint_t
#include <stddef.h>
#include <sys/config.h>


/* Some flags for the iobuf structure provided by <paag@tid.es> */
#define	_IOREAD	1
#define	_IOWRT	2
#define	_IORW	4

/*
 * The three standard file pointers provided by the run time library.
 * NOTE: These will go to the bit-bucket silently in GUI applications!
 */
#define	STDIN_FILENO	0
#define	STDOUT_FILENO	1
#define	STDERR_FILENO	2

/* Returned by various functions on end of file condition or error. */
#define	EOF	(-1)

/*
 * The maximum length of a file name. You should use GetVolumeInformation
 * instead of this constant. But hey, this works.
 *
 * NOTE: This is used in the structure _finddata_t (see dir.h) so changing it
 *       is probably not a good idea.
 */
#define	FILENAME_MAX	(260)

/*
 * The maximum number of files that may be open at once. I have set this to
 * a conservative number. The actual value may be higher.
 */
#define FOPEN_MAX	(20)

/*
 * The maximum size of name (including NUL) that will be put in the user
 * supplied buffer caName for tmpnam.
 * NOTE: This has not been determined by experiment, but based on the
 * maximum file name length above it is probably reasonable. I could be
 * wrong...
 */
#define	L_tmpnam	(260)

/*
 * The three possible buffering mode (nMode) values for setvbuf.
 * NOTE: _IOFBF works, but _IOLBF seems to work like unbuffered...
 * maybe I'm testing it wrong?
 */
#define	_IOFBF	0	/* fully buffered */
#define	_IOLBF	1	/* line buffered */
#define	_IONBF	2	/* unbuffered */

/*
 * The buffer size as used by setbuf such that it is equivalent to
 * (void) setvbuf(fileSetBuffer, caBuffer, _IOFBF, BUFSIZ).
 */
#define	BUFSIZ	512

/* Constants for nOrigin indicating the position relative to which fseek
 * sets the file position. Enclosed in ifdefs because io.h could also
 * define them. (Though not anymore since io.h includes this file now.) */
#ifndef	SEEK_SET
#define SEEK_SET	(0)
#endif

#ifndef	SEEK_CUR
#define	SEEK_CUR	(1)
#endif

#ifndef	SEEK_END
#define SEEK_END	(2)
#endif


#ifndef	RC_INVOKED

/*
 * I used to include stdarg.h at this point, in order to allow for the
 * functions later on in the file which use va_list. That conflicts with
 * using stdio.h and varargs.h in the same file, so I do the typedef myself.
 */
#ifndef _VA_LIST
#define _VA_LIST
typedef	char* va_list;
#endif

/*
 * The structure underlying the FILE type.
 *
 * I still believe that nobody in their right mind should make use of the
 * internals of this structure. Provided by Pedro A. Aranda Gutiirrez
 * <paag@tid.es>.
 */
#ifndef _FILE_DEFINED
#define	_FILE_DEFINED
typedef struct _iobuf
{
	char*	_ptr;
	int	_cnt;
	char*	_base;
	int	_flag;
	int	_file;
	int	_charbuf;
	int	_bufsiz;
	char*	_tmpfname;
} FILE;
#endif	/* Not _FILE_DEFINED */


/*
 * The standard file handles
 */
extern FILE __imported_name(_iob)[];	/* A pointer to an array of FILE */

#define _iob	__imported_name(_iob)	/* An array of FILE */

#define stdin	(&_iob[STDIN_FILENO])
#define stdout	(&_iob[STDOUT_FILENO])
#define stderr	(&_iob[STDERR_FILENO])


#ifdef __cplusplus
extern "C" {
#endif

/*
 * File Operations
 */

#define fopen __imported_name(fopen)
extern FILE*	fopen (const char* szFileName, const char* szMode);
#define freopen __imported_name(freopen)
extern FILE*	freopen (const char* szNewFileName, const char* szNewMode,
		 FILE* fileChangeAssociation);
#define fflush __imported_name(fflush)
extern int	fflush (FILE* fileFlush);
#define fclose __imported_name(fclose)
extern int	fclose (FILE* fileClose);
#define remove __imported_name(remove)
extern int	remove (const char* szFileName);
#define rename __imported_name(rename)
extern int	rename (const char* szOldFileName, const char* szNewFileName);
#define tmpfile __imported_name(tmpfile)
extern FILE*	tmpfile ();
#define tmpnam __imported_name(tmpnam)
extern char*	tmpnam (char caName[]);
#define _tempnam __imported_name(_tempnam)
extern char*	_tempnam (char* szPath, const char* szPrefix);

#ifndef	NO_OLDNAMES
#define tempnam _tempnam
#endif

#define setvbuf __imported_name(setvbuf)
extern int	setvbuf (FILE* fileSetBuffer, char* caBuffer, int nMode,
		 size_t sizeBuffer);

#define setbuf __imported_name(setbuf)
extern void	setbuf (FILE* fileSetBuffer, char* caBuffer);

/*
 * Formatted Output
 */

#define fprintf __imported_name(fprintf)
extern int	fprintf (FILE* filePrintTo, const char* szFormat, ...);
#define printf __imported_name(printf)
extern int	printf (const char* szFormat, ...);
#define sprintf __imported_name(sprintf)
extern int	sprintf (char* caBuffer, const char* szFormat, ...);
#define vfprintf __imported_name(vfprintf)
extern int	vfprintf (FILE* filePrintTo, const char* szFormat, va_list varg);
#define vprintf __imported_name(vprintf)
extern int	vprintf (const char* szFormat, va_list varg);
#define vsprintf __imported_name(vsprintf)
extern int	vsprintf (char* caBuffer, const char* szFormat, va_list varg);

/* Wide character versions */
#define fwprintf __imported_name(fwprintf)
extern int	fwprintf (FILE* filePrintTo, const wchar_t* wsFormat, ...);
#define wprintf __imported_name(wprintf)
extern int	wprintf (const wchar_t* wsFormat, ...);
#define swprintf __imported_name(swprintf)
extern int	swprintf (wchar_t* wcaBuffer, const wchar_t* wsFormat, ...);
#define vfwprintf __imported_name(vfwprintf)
extern int	vfwprintf (FILE* filePrintTo, const wchar_t* wsFormat, va_list varg);
#define vwprintf __imported_name(vwprintf)
extern int	vwprintf (const wchar_t* wsFormat, va_list varg);
#define vswprintf __imported_name(vswprintf)
extern int	vswprintf (wchar_t* wcaBuffer, const wchar_t* wsFormat, va_list varg);

/*
 * Formatted Input
 */

#define fscanf __imported_name(fscanf)
extern int	fscanf (FILE* fileReadFrom, const char* szFormat, ...);
#define scanf __imported_name(scanf)
extern int	scanf (const char* szFormat, ...);
#define sscanf __imported_name(sscanf)
extern int	sscanf (const char* szReadFrom, const char* szFormat, ...);

/* Wide character versions */
#define fwscanf __imported_name(fwscanf)
extern int	fwscanf (FILE* fileReadFrom, const wchar_t* wsFormat, ...);
#define wscanf __imported_name(wscanf)
extern int	wscanf (const wchar_t* wsFormat, ...);
#define swscanf __imported_name(swscanf)
extern int	swscanf (wchar_t* wsReadFrom, const wchar_t* wsFormat, ...);

/*
 * Character Input and Output Functions
 */

#define fgetc __imported_name(fgetc)
extern int	fgetc (FILE* fileRead);
#define fgets __imported_name(fgets)
extern char*	fgets (char* caBuffer, int nBufferSize, FILE* fileRead);
#define fputc __imported_name(fputc)
extern int	fputc (int c, FILE* fileWrite);
#define fputs __imported_name(fputs)
extern int	fputs (const char* szOutput, FILE* fileWrite);
#define getc __imported_name(getc)
extern int	getc (FILE* fileRead);
#define getchar __imported_name(getchar)
extern int	getchar ();
#define gets __imported_name(gets)
extern char*	gets (char* caBuffer);	/* Unsafe: how does gets know how long the
				 * buffer is? */
#define putc __imported_name(putc)
extern int	putc (int c, FILE* fileWrite);
#define putchar __imported_name(putchar)
extern int	putchar (int c);
#define puts __imported_name(puts)
extern int	puts (const char* szOutput);
#define ungetc __imported_name(ungetc)
extern int	ungetc (int c, FILE* fileWasRead);

/* Wide character versions */
#define fgetwc __imported_name(fgetwc)
extern wint_t	fgetwc (FILE* fileRead);
#define fputwc __imported_name(fputwc)
extern wint_t	fputwc (wchar_t wc, FILE* fileWrite);
#define ungetwc __imported_name(ungetwc)
extern wint_t	ungetwc (wchar_t wc, FILE* fileWasRead);


/*
 * Not exported by CRTDLL.DLL included for reference purposes.
 */
#if 0
#define fgetws __imported_name(fgetws)
extern wchar_t*	fgetws (wchar_t* wcaBuffer, int nBufferSize, FILE* fileRead);
#define fputws __imported_name(fputws)
extern int		fputws (const wchar_t* wsOutput, FILE* fileWrite);
#define getwc __imported_name(getwc)
extern int		getwc (FILE* fileRead);
#define getwchar __imported_name(getwchar)
extern int		getwchar ();
#define getws __imported_name(getws)
extern wchar_t*	getws (wchar_t* wcaBuffer);
#define putwc __imported_name(putwc)
extern int		putwc (wchar_t wc, FILE* fileWrite);
#define putws __imported_name(putws)
extern int		putws (const wchar_t* wsOutput);
#endif	/* 0 */

/* NOTE: putchar has no wide char equivalent even in tchar.h */


/*
 * Direct Input and Output Functions
 */

#define fread __imported_name(fread)
extern size_t	fread (void* pBuffer, size_t sizeObject, size_t sizeObjCount,
		FILE* fileRead);
#define fwrite __imported_name(fwrite)
extern size_t	fwrite (const void* pObjArray, size_t sizeObject, size_t sizeObjCount,
		FILE* fileWrite);


/*
 * File Positioning Functions
 */

#define fseek __imported_name(fseek)
extern int	fseek	(FILE* fileSetPosition, long lnOffset, int nOrigin);
#define ftell __imported_name(ftell)
extern long	ftell	(FILE* fileGetPosition);
#define rewind __imported_name(rewind)
extern void	rewind	(FILE* fileRewind);

/*
 * An opaque data type used for storing file positions... The contents of
 * this type are unknown, but we (the compiler) need to know the size
 * because the programmer using fgetpos and fsetpos will be setting aside
 * storage for fpos_t structres. Actually I tested using a byte array and
 * it is fairly evident that the fpos_t type is a long (in CRTDLL.DLL).
 * Perhaps an unsigned long? TODO?
 */
typedef long	fpos_t;

#define fgetpos __imported_name(fgetpos)
extern int	fgetpos	(FILE* fileGetPosition, fpos_t* pfpos);
#define fsetpos __imported_name(fsetpos)
extern int	fsetpos (FILE* fileSetPosition, fpos_t* pfpos);

/*
 * Error Functions
 */

#define clearerr __imported_name(clearerr)
extern void	clearerr (FILE* fileClearErrors);
#define feof __imported_name(feof)
extern int	feof (FILE* fileIsAtEnd);
#define ferror __imported_name(ferror)
extern int	ferror (FILE* fileIsError);
#define perror __imported_name(perror)
extern void	perror (const char* szErrorMessage);


#ifndef __STRICT_ANSI__

/*
 * Pipes
 */
#define _popen __imported_name(_popen)
extern FILE*	_popen (const char* szPipeName, const char* szMode);
#define _pclose __imported_name(_pclose)
extern int	_pclose (FILE* pipeClose);

#ifndef NO_OLDNAMES
#define popen _popen
#define pclose _pclose
#endif

/* The wide character version, only available in MSVCRT DLL versions, not
 * CRTDLL. */
#ifdef __MSVCRT__
#define _wpopen __imported_name(_wpopen)
extern FILE*	_wpopen (const wchar_t* szPipeName, const wchar_t* szMode);

#ifndef NO_OLDNAMES
#if 0
#define wpopen __imported_name(wpopen)
extern FILE*	wpopen (const wchar_t* szPipeName, const wchar_t* szMode);
#else /* Always true */
/*
 * The above prototypeing is not possible unless the wpopen export is added
 * to moldnames, which can't be done unless we make separate moldnames.def
 * files for every supported runtime. For the time being we use a define
 * instead. Pedro's modified dlltool should take care of this I think.
 */
#define wpopen _wpopen
#endif	/* Always true */

#endif /* not NO_OLDNAMES */
#endif /* MSVCRT runtime */

/*
 * Other Non ANSI functions
 */
#define _fgetchar __imported_name(_fgetchar)
extern int	_fgetchar ();
#define _fputchar __imported_name(_fputchar)
extern int	_fputchar (int c);
#define _fdopen __imported_name(_fdopen)
extern FILE*	_fdopen (int nHandle, const char* szMode);
#define _fgetwchar __imported_name(_fgetwchar)
extern wint_t	_fgetwchar(void);
#define _fputwchar __imported_name(_fputwchar)
extern wint_t	_fputwchar(wint_t c);
#define _getw __imported_name(_getw)
extern int	_getw (FILE* fileRead);
#define _putw __imported_name(_putw)
extern int	_putw (int nValue, FILE* fileWrite);

#ifndef _NO_OLDNAMES
#define fgetchar _fgetchar
#define fputchar _fputchar
#define fdopen _fdopen
#define fgetwchar _fgetwchar
#define fputwchar _fputwchar
#define getw _getw
#define putw _putw
#endif	/* Not _NO_OLDNAMES */

#endif	/* Not __STRICT_ANSI__ */

#ifdef __cplusplus
}
#endif

#endif	/* Not RC_INVOKED */

#endif /* _STDIO_H_ */
