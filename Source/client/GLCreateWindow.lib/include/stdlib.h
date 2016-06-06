/*
 * stdlib.h
 *
 * Definitions for common types, variables, and functions.
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
 * $Revision: 2.3 $
 * $Author: colin $
 * $Date: 1998/05/12 22:26:23 $
 *
 */

#ifndef _STDLIB_H_
#define _STDLIB_H_

#include <sys/config.h>

/*
 * RAND_MAX is the maximum value that may be returned by rand.
 * The minimum is zero.
 */
#define	RAND_MAX	0x7FFF

/*
 * These values may be used as exit status codes.
 */
#define	EXIT_SUCCESS	0
#define	EXIT_FAILURE	-1

/*
 * Definitions for path name functions.
 * NOTE: All of these values have simply been chosen to be conservatively high.
 *       Remember that with long file names we can no longer depend on
 *       extensions being short.
 */
#ifndef __STRICT_ANSI__

#ifndef MAX_PATH
#define	MAX_PATH	(260)
#endif

#define	_MAX_PATH	MAX_PATH
#define	_MAX_DRIVE	(3)
#define	_MAX_DIR	_MAX_PATH
#define	_MAX_FNAME	(256)
#define	_MAX_EXT	_MAX_PATH

#endif	/* Not __STRICT_ANSI__ */


#ifndef RC_INVOKED

#ifdef __cplusplus
extern "C" {
#endif

/*
 * This seems like a convenient place to declare these variables, which
 * give programs using WinMain (or main for that matter) access to main-ish
 * argc and argv. environ is a pointer to a table of environment variables.
 * NOTE: Strings in _argv and environ are ANSI strings.
 */
extern int	_argc;
extern char**	_argv;

/* extern char* environ[]; */
#ifdef	__MSVCRT__
extern char***	__p__environ();
#define	environ	(*__p__environ())
#else	/* Not __MSVCRT__ */
extern char**	__imported_name(_environ_dll);
#define	environ	__imported_name(_environ_dll)
#endif	/* Not __MSVCRT__ */
#define	_environ	environ


/*
 * OS version and such constants.
 */
#ifndef __STRICT_ANSI__

#ifdef	__MSVCRT__
/* msvcrtxx.dll */

extern unsigned int*	__p__osver();
extern unsigned int*	__p__winver();
extern unsigned int*	__p__winmajor();
extern unsigned int*	__p__winminor();

#define _osver		(*__p__osver())
#define _winver		(*__p__winver())
#define _winmajor	(*__p__winmajor())
#define _winminor	(*__p__winminor())

#else
/* Not msvcrtxx.dll, thus crtdll.dll */

extern unsigned int	__imported_name(_osver_dll);
extern unsigned int	__imported_name(_winver_dll);
extern unsigned int	__imported_name(_winmajor_dll);
extern unsigned int	__imported_name(_winminor_dll);

#define _osver		__imported_name(_osver_dll)
#define _winver		__imported_name(_winver_dll)
#define _winmajor	__imported_name(_winmajor_dll)
#define _winminor	__imported_name(_winminor_dll)

#endif

#endif /* Not __STRICT_ANSI__ */


#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#include <stddef.h>

#ifdef	__GNUC__
#define	_ATTRIB_NORETURN	__attribute__ ((noreturn))
#else	/* Not __GNUC__ */
#define	_ATTRIB_NORETURN
#endif	/* __GNUC__ */

#define atof __imported_name(atof)
extern double	atof	(const char* szNumber);
#define atoi __imported_name(atoi)
extern int	atoi	(const char* szNumber);
#define atol __imported_name(atol)
extern long	atol	(const char* szNumber);


#define strtod __imported_name(strtod)
extern double	strtod	(const char* szNumber, char** pszAfterNumber);
#define wcstod __imported_name(wcstod)
extern double	wcstod	(const wchar_t* wsNumber, wchar_t** pwsAfterNumber);
#define strtol __imported_name(strtol)
extern long	strtol	(const char* szNumber, char** pszAfterNumber, int nBase);
#define wcstol __imported_name(wcstol)
extern long	wcstol	(const wchar_t* wsNumber, wchar_t** pwsAfterNumber, int nBase);

#define strtoul __imported_name(strtoul)
extern unsigned long	strtoul	(const char* szNumber, char** pszAfterNumber,
			int nBase);
#define wcstoul __imported_name(wcstoul)
extern unsigned long	wcstoul (const wchar_t* wsNumber, wchar_t** pwsAfterNumber,
			int nBase);

#define wcstombs __imported_name(wcstombs)
extern size_t	wcstombs	(char* mbsDest, const wchar_t* wsConvert, size_t size);
#define wctomb __imported_name(wctomb)
extern int	wctomb		(char* mbDest, wchar_t wc);

#define mblen __imported_name(mblen)
extern int	mblen		(const char* mbs, size_t sizeString);
#define mbstowcs __imported_name(mbstowcs)
extern size_t	mbstowcs	(wchar_t* wcaDest, const char* mbsConvert,
			 size_t size);
#define mbtowc __imported_name(mbtowc)
extern int	mbtowc		(wchar_t* wcDest, const char* mbConvert, size_t size);

#define rand __imported_name(rand)
extern int	rand	();
#define srand __imported_name(srand)
extern void	srand	(unsigned int nSeed);

#define calloc __imported_name(calloc)
extern void*	calloc	(size_t sizeObjCnt, size_t sizeObject);
#define malloc __imported_name(malloc)
extern void*	malloc	(size_t	sizeObject);
#define realloc __imported_name(realloc)
extern void*	realloc	(void* pObject, size_t sizeNew);
#define free __imported_name(free)
extern void	free	(void* pObject);

#define abort __imported_name(abort)
extern void	abort	() _ATTRIB_NORETURN;
#define exit __imported_name(exit)
extern void	exit	(int nStatus) _ATTRIB_NORETURN;
#define atexit __imported_name(atexit)
extern int	atexit	(void (*pfuncExitProcessing)());

#define system __imported_name(system)
extern int	system	(const char* szCommand);
#define getenv __imported_name(getenv)
extern char*	getenv	(const char* szVarName);

typedef	int (*_pfunccmp_t)(const void*, const void*);

#define bsearch __imported_name(bsearch)
extern void*	bsearch	(const void* pKey, const void* pBase, size_t cntObjects,
		size_t sizeObject, _pfunccmp_t pfuncCmp);
#define qsort __imported_name(qsort)
extern void	qsort	(const void* pBase, size_t cntObjects, size_t sizeObject,
		_pfunccmp_t pfuncCmp);

#define abs __imported_name(abs)
extern int	abs	(int n);
#define labs __imported_name(labs)
extern long	labs	(long n);

/*
 * div_t and ldiv_t are structures used to return the results of div and
 * ldiv.
 *
 * NOTE: div and ldiv appear not to work correctly unless
 *       -fno-pcc-struct-return is specified. This is included in the
 *       mingw32 specs file.
 */
typedef struct { int quot, rem; } div_t;
typedef struct { long quot, rem; } ldiv_t;

#define div __imported_name(div)
extern div_t	div	(int nNumerator, int nDenominator);
#define ldiv __imported_name(ldiv)
extern ldiv_t	ldiv	(long lNumerator, long lDenominator);


#ifndef	__STRICT_ANSI__

/*
 * NOTE: Officially the three following functions are obsolete. The Win32 API
 *       functions SetErrorMode, Beep and Sleep are their replacements.
 */
#define _beep __imported_name(_beep)
extern void	_beep (unsigned int, unsigned int);
#define _seterrormode __imported_name(_seterrormode)
extern void	_seterrormode (int nMode);
#define _sleep __imported_name(_sleep)
extern void	_sleep (unsigned long ulTime);

#define _exit __imported_name(_exit)
extern void	_exit	(int nStatus) _ATTRIB_NORETURN;

#define _putenv __imported_name(_putenv)
extern int	_putenv	(const char* szNameEqValue);
#define _searchenv __imported_name(_searchenv)
extern void	_searchenv (const char* szFileName, const char* szVar,
		char* szFullPathBuf);

#define _itoa __imported_name(_itoa)
extern char*	_itoa (int nValue, char* sz, int nRadix);
#define _ltoa __imported_name(_ltoa)
extern char*	_ltoa (long lnValue, char* sz, int nRadix);

#define _ecvt __imported_name(_ecvt)
extern char*	_ecvt (double dValue, int nDig, int* pnDec, int* pnSign);
#define _fcvt __imported_name(_fcvt)
extern char*	_fcvt (double dValue, int nDig, int* pnDec, int* pnSign);
#define _gcvt __imported_name(_gcvt)
extern char*	_gcvt (double dValue, int nDec, char* caBuf);

#define _makepath __imported_name(_makepath)
extern void	_makepath (char* caPath, const char* szDrive, const char* szDir,
		const char* szName, const char* szExtension);
#define _splitpath __imported_name(_splitpath)
extern void	_splitpath (const char* szPath, char* caDrive, char* caDir,
		char* caName, char* caExtension);
#define _fullpath __imported_name(_fullpath)
extern char*	_fullpath (char* caBuf, const char* szPath, size_t sizeMax);

#ifndef	_NO_OLDNAMES
#define beep _beep
#define seterrormode _seterrormode
#define sleep _sleep
#define putenv _putenv
#define searchenv _searchenv
#define itoa _itoa
#define ltoa _ltoa
#define ecvt _ecvt
#define fcvt _fcvt
#define gcvt _gcvt
#endif	/* Not _NO_OLDNAMES */

#endif	/* Not __STRICT_ANSI__ */

/*
 * Undefine the no return attribute used in some function definitions
 */
#undef	_ATTRIB_NORETURN

#ifdef __cplusplus
}
#endif

#endif	/* Not RC_INVOKED */

#endif	/* Not _STDLIB_H_ */

