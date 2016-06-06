/*
 * string.h
 *
 * Definitions for memory and string functions.
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
 * $Revision: 2.2 $
 * $Author: colin $
 * $Date: 1998/01/26 04:48:00 $
 *
 */

#ifndef _STRING_H_
#define	_STRING_H_

#include <sys/config.h>

/*
 * Define size_t, wchar_t and NULL
 */
#define __need_size_t
#define __need_wchar_t
#define	__need_NULL
#include <stddef.h>

#ifndef RC_INVOKED

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Prototypes of the ANSI Standard C library string functions.
 */
#define memchr __imported_name(memchr)
extern void*	memchr (const void* p, int cSearchFor, size_t sizeSearch);
#define memcmp __imported_name(memcmp)
extern int 	memcmp (const void* p1, const void* p2, size_t sizeSearch);
#define memcpy __imported_name(memcpy)
extern void* 	memcpy (void* pCopyTo, const void* pSource, size_t sizeSource);
#define memmove __imported_name(memmove)
extern void*	memmove (void* pMoveTo, const void* pSource, size_t sizeSource);
#define memset __imported_name(memset)
extern void*	memset (void* p, int cFill, size_t sizeRepeatCount);
#define strcat __imported_name(strcat)
extern char*	strcat (char* szAddTo, const char* szAdd);
#define strchr __imported_name(strchr)
extern char*	strchr (const char* szSearch, int cFor);
#define strcmp __imported_name(strcmp)
extern int	strcmp (const char* sz1, const char* sz2);
#define strcoll __imported_name(strcoll)
extern int	strcoll (const char* sz1, const char* sz2); /* Compare using locale */
#define strcpy __imported_name(strcpy)
extern char*	strcpy (char* szCopyTo, const char* szSource);
#define strcspn __imported_name(strcspn)
extern size_t	strcspn (const char* szGetPrefix, const char* szNotIncluding);
#define strerror __imported_name(strerror)
extern char*	strerror (int nError); /* NOTE: NOT an old name wrapper. */
#define _strerror __imported_name(_strerror)
extern char*	_strerror (int nError);
#define strlen __imported_name(strlen)
extern size_t	strlen (const char* sz);
#define strncat __imported_name(strncat)
extern char*	strncat (char* szAddTo, const char* szAdd, size_t sizeMaxAdd);
#define strncmp __imported_name(strncmp)
extern int	strncmp (const char* sz1, const char* sz2, size_t sizeMaxCompare);
#define strncpy __imported_name(strncpy)
extern char*	strncpy (char* szCopyTo, const char* szSource, size_t sizeMaxCopy);
#define strpbrk __imported_name(strpbrk)
extern char*	strpbrk (const char* szSearch, const char* szAnyOf);
#define strrchr __imported_name(strrchr)
extern char*	strrchr (const char* szSearch, int cFor);
#define strspn __imported_name(strspn)
extern size_t	strspn (const char* szGetPrefix, const char *szIncluding);
#define strstr __imported_name(strstr)
extern char*	strstr (const char* szSearch, const char *szFor);
#define strtok __imported_name(strtok)
extern char*	strtok (char* szTokenize, const char* szDelimiters);
#define strxfrm __imported_name(strxfrm)
extern size_t	strxfrm (char* szTransformed, const char *szSource,
	         size_t sizeTransform);

#ifndef __STRICT_ANSI__
/*
 * Extra non-ANSI functions provided by the CRTDLL library
 */
#define _memccpy __imported_name(_memccpy)
extern void*	_memccpy (void* pCopyTo, const void* pSource, int cTerminator,
	          size_t sizeMaxCopy);
#define _memicmp __imported_name(_memicmp)
extern int 	_memicmp (const void* p1, const void* p2, size_t sizeSearch);
#define _strdup __imported_name(_strdup)
extern char* 	_strdup (const char *szDuplicate);
#define _strcmpi __imported_name(_strcmpi)
extern int	_strcmpi (const char* sz1, const char* sz2);
#define _stricmp __imported_name(_stricmp)
extern int	_stricmp (const char* sz1, const char* sz2);
#define _stricoll __imported_name(_stricoll)
extern int	_stricoll (const char* sz1, const char* sz2);
#define _strlwr __imported_name(_strlwr)
extern char*	_strlwr (char* szToConvert);
#define _strnicmp __imported_name(_strnicmp)
extern int	_strnicmp (const char* sz1, const char* sz2,
	           size_t sizeMaxCompare);
#define _strnset __imported_name(_strnset)
extern char*	_strnset (char* szToFill, int cFill, size_t sizeMaxFill);
#define _strrev __imported_name(_strrev)
extern char*	_strrev (char* szToReverse);
#define _strset __imported_name(_strset)
extern char*	_strset (char* szToFill, int cFill);
#define _strupr __imported_name(_strupr)
extern char*	_strupr (char* szToConvert);
#define _swab __imported_name(_swab)
extern void	_swab (const char* caFrom, char* caTo, size_t sizeToCopy);

/*
 * Multi-byte character functions
 */
#define _mbschr __imported_name(_mbschr)
extern unsigned char*	_mbschr (unsigned char*, unsigned char*);
#define _mbsncat __imported_name(_mbsncat)
extern unsigned char*	_mbsncat (unsigned char*, const unsigned char*, size_t);
#define _mbstok __imported_name(_mbstok)
extern unsigned char*	_mbstok (unsigned char*, unsigned char*);

#endif	/* Not __STRICT_ANSI__ */


/*
 * Unicode versions of the standard calls.
 */
#define wcscat __imported_name(wcscat)
extern wchar_t* wcscat (wchar_t* wsAddTo, const wchar_t* wsAdd);
#define wcschr __imported_name(wcschr)
extern wchar_t* wcschr (const wchar_t* wsSearch, wchar_t wcFor);
#define wcscmp __imported_name(wcscmp)
extern int	wcscmp (const wchar_t* ws1, const wchar_t* ws2);
#define wcscoll __imported_name(wcscoll)
extern int	wcscoll (const wchar_t* ws1, const wchar_t* ws2);
#define wcscpy __imported_name(wcscpy)
extern wchar_t* wcscpy (wchar_t* wsCopyTo, const wchar_t* wsSource);
#define wcscspn __imported_name(wcscspn)
extern size_t	wcscspn (const wchar_t* wsGetPrefix, const wchar_t* wsNotIncluding);
/* Note: No wcserror in CRTDLL. */
#define wcslen __imported_name(wcslen)
extern size_t	wcslen (const wchar_t* ws);
#define wcsncat __imported_name(wcsncat)
extern wchar_t* wcsncat (wchar_t* wsAddTo, const wchar_t* wsAdd, size_t sizeMaxAdd);
#define wcsncmp __imported_name(wcsncmp)
extern int	wcsncmp(const wchar_t* ws1, const wchar_t* ws2, size_t sizeMaxCompare);
#define wcsncpy __imported_name(wcsncpy)
extern wchar_t* wcsncpy(wchar_t* wsCopyTo, const wchar_t* wsSource,
                 size_t sizeMaxCopy);
#define wcspbrk __imported_name(wcspbrk)
extern wchar_t* wcspbrk(const wchar_t* wsSearch, const wchar_t* wsAnyOf);
#define wcsrchr __imported_name(wcsrchr)
extern wchar_t* wcsrchr(const wchar_t* wsSearch, wchar_t wcFor);
#define wcsspn __imported_name(wcsspn)
extern size_t	wcsspn(const wchar_t* wsGetPrefix, const wchar_t* wsIncluding);
#define wcsstr __imported_name(wcsstr)
extern wchar_t* wcsstr(const wchar_t* wsSearch, const wchar_t* wsFor);
#define wcstok __imported_name(wcstok)
extern wchar_t* wcstok(wchar_t* wsTokenize, const wchar_t* wsDelimiters);
#define wcsxfrm __imported_name(wcsxfrm)
extern size_t	wcsxfrm(wchar_t* wsTransformed, const wchar_t *wsSource,
	        size_t sizeTransform);


#ifndef	__STRICT_ANSI__
/*
 * Unicode versions of non-ANSI functions provided by CRTDLL.
 */

/* NOTE: _wcscmpi not provided by CRTDLL, this define is for portability */
#define		_wcscmpi	_wcsicmp

#define _wcsdup __imported_name(_wcsdup)
extern wchar_t* _wcsdup (wchar_t* wsToDuplicate);
#define _wcsicmp __imported_name(_wcsicmp)
extern int	_wcsicmp (const wchar_t* ws1, const wchar_t* ws2);
#define _wcsicoll __imported_name(_wcsicoll)
extern int	_wcsicoll (const wchar_t* ws1, const wchar_t* ws2);
#define _wcslwr __imported_name(_wcslwr)
extern wchar_t* _wcslwr (wchar_t* wsToConvert);
#define _wcsnicmp __imported_name(_wcsnicmp)
extern int	_wcsnicmp (const wchar_t* ws1, const wchar_t* ws2,
	           size_t sizeMaxCompare);
#define _wcsnset __imported_name(_wcsnset)
extern wchar_t* _wcsnset (wchar_t* wsToFill, wchar_t wcFill, size_t sizeMaxFill);
#define _wcsrev __imported_name(_wcsrev)
extern wchar_t* _wcsrev (wchar_t* wsToReverse);
#define _wcsset __imported_name(_wcsset)
extern wchar_t* _wcsset (wchar_t* wsToFill, wchar_t wcToFill);
#define _wcsupr __imported_name(_wcsupr)
extern wchar_t* _wcsupr (wchar_t* wsToConvert);

#endif	/* Not __STRICT_ANSI__ */


#ifndef	__STRICT_ANSI__
#ifndef	_NO_OLDNAMES

/*
 * Non-underscored versions of non-ANSI functions. 
 * They provide a little extra portability. Also a few extra UNIX-isms like
 * strcasecmp.
 */

#define memccpy _memccpy
#define memicmp _memicmp
#define strdup _strdup
#define strcmpi _strcmpi
#define stricmp _stricmp
#define strcasecmp _stricmp
#define stricoll _stricoll
#define strlwr _strlwr
#define strnicmp _strnicmp
#define strncasecmp _strnicmp
#define strnset _strnset
#define strrev _strrev
#define strset _strset
#define strupr _strupr
#define swab _swab

/* NOTE: There is no _wcscmpi, but this is for compatibility. */
#define wcscmpi _wcsicmp
#define wcsdup _wcsdup
#define wcsicmp _wcsicmp
#define wcsicoll _wcsicoll
#define wcslwr _wcslwr
#define wcsnicmp _wcsnicmp
#define wcsnset _wcsnset
#define wcsrev _wcsrev
#define wcsset _wcsset
#define wcsupr _wcsupr

#endif	/* Not _NO_OLDNAMES */
#endif	/* Not strict ANSI */


#ifdef __cplusplus
}
#endif

#endif	/* Not RC_INVOKED */

#endif	/* Not _STRING_H_ */

