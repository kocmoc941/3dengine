/* 
 * ctype.h
 *
 * Functions for testing character types and converting characters.
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
 * $Date: 1998/01/26 04:45:56 $
 *
 */

#ifndef _CTYPE_H_
#define _CTYPE_H_

#define	__need_wchar_t
#define	__need_wint_t
#include <stddef.h>
#include <sys/config.h>


/*
 * The following flags are used to tell iswctype and _isctype what character
 * types you are looking for.
 */
#define	_UPPER		0x0001
#define	_LOWER		0x0002
#define	_DIGIT		0x0004
#define	_SPACE		0x0008
#define	_PUNCT		0x0010
#define	_CONTROL	0x0020
#define	_BLANK		0x0040
#define	_HEX		0x0080
#define	_LEADBYTE	0x8000

#define	_ALPHA		0x0103

#ifndef RC_INVOKED

#ifdef __cplusplus
extern "C" {
#endif

#define isalnum __imported_name(isalnum)
extern int	isalnum(int c);
#define isalpha __imported_name(isalpha)
extern int	isalpha(int c);
#define iscntrl __imported_name(iscntrl)
extern int	iscntrl(int c);
#define isdigit __imported_name(isdigit)
extern int	isdigit(int c);
#define isgraph __imported_name(isgraph)
extern int	isgraph(int c);
#define islower __imported_name(islower)
extern int	islower(int c);
#define isprint __imported_name(isprint)
extern int	isprint(int c);
#define ispunct __imported_name(ispunct)
extern int	ispunct(int c);
#define isspace __imported_name(isspace)
extern int	isspace(int c);
#define isupper __imported_name(isupper)
extern int	isupper(int c);
#define isxdigit __imported_name(isxdigit)
extern int	isxdigit(int c);

#ifndef	__STRICT_ANSI__
#define _isctype __imported_name(_isctype)
extern int	_isctype (int c, int ctypeFlags);
#endif

#define tolower __imported_name(tolower)
extern int	tolower(int c);
#define toupper __imported_name(toupper)
extern int	toupper(int c);

/*
 * NOTE: The above are not old name type wrappers, but functions exported
 * explicitly by CRTDLL. However, underscored versions are also exported.
 */
#ifndef	__STRICT_ANSI__
#define _tolower __imported_name(_tolower)
extern int	_tolower(int c);
#define _toupper __imported_name(_toupper)
extern int	_toupper(int c);
#endif

#ifndef WEOF
#define	WEOF	(wchar_t)(0xFFFF)
#endif

/*
 * TODO: MB_CUR_MAX should be defined here (if not already defined, since
 *       it should also be defined in stdlib.h). It is supposed to be the
 *       maximum number of bytes in a multi-byte character in the current
 *       locale. Perhaps accessible through the __mb_curr_max_dll entry point,
 *       but I think (again) that that is a variable pointer, which leads to
 *       problems under the current Cygwin compiler distribution.
 */

typedef int	wctype_t;

/* Wide character equivalents */
#define iswalnum __imported_name(iswalnum)
extern int	iswalnum(wint_t wc);
#define iswalpha __imported_name(iswalpha)
extern int	iswalpha(wint_t wc);
#define iswascii __imported_name(iswascii)
extern int	iswascii(wint_t wc);
#define iswcntrl __imported_name(iswcntrl)
extern int	iswcntrl(wint_t wc);
#define iswctype __imported_name(iswctype)
extern int	iswctype(wint_t wc, wctype_t wctypeFlags);
#define is_wctype __imported_name(is_wctype)
extern int	is_wctype(wint_t wc, wctype_t wctypeFlags);	/* Obsolete! */
#define iswdigit __imported_name(iswdigit)
extern int	iswdigit(wint_t wc);
#define iswgraph __imported_name(iswgraph)
extern int	iswgraph(wint_t wc);
#define iswlower __imported_name(iswlower)
extern int	iswlower(wint_t wc);
#define iswprint __imported_name(iswprint)
extern int	iswprint(wint_t wc);
#define iswpunct __imported_name(iswpunct)
extern int	iswpunct(wint_t wc);
#define iswspace __imported_name(iswspace)
extern int	iswspace(wint_t wc);
#define iswupper __imported_name(iswupper)
extern int	iswupper(wint_t wc);
#define iswxdigit __imported_name(iswxdigit)
extern int	iswxdigit(wint_t wc);

#define towlower __imported_name(towlower)
extern wchar_t	towlower(wchar_t c);
#define towupper __imported_name(towupper)
extern wchar_t	towupper(wchar_t c);

#define isleadbyte __imported_name(isleadbyte)
extern int	isleadbyte (int c);

#ifndef	__STRICT_ANSI__
#define __isascii __imported_name(__isascii)
extern int	__isascii (int c);
#define __toascii __imported_name(__toascii)
extern int	__toascii (int c);
#define __iscsymf __imported_name(__iscsymf)
extern int	__iscsymf (int c);	/* Valid first character in C symbol */
#define __iscsym __imported_name(__iscsym)
extern int	__iscsym (int c);	/* Valid character in C symbol (after first) */

#ifndef	_NO_OLDNAMES
#define isascii __isascii
#define toascii __toascii
#define iscsymf __iscsymf
#define iscsym __iscsym
#endif	/* Not _NO_OLDNAMES */

#endif	/* Not __STRICT_ANSI__ */

#ifdef __cplusplus
}
#endif

#endif	/* Not RC_INVOKED */

#endif	/* Not _CTYPE_H_ */

