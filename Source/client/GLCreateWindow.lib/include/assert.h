/* 
 * assert.h
 *
 * Define the assert macro for debug output.
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

#ifndef _ASSERT_H_
#define	_ASSERT_H_

#include <sys/config.h>

#ifndef RC_INVOKED

#ifdef	__cplusplus
extern "C" {
#endif

#ifdef NDEBUG

/*
 * If not debugging, assert does nothing.
 */
#define assert(x)	((void)0);

#else /* debugging enabled */

/*
 * CRTDLL nicely supplies a function which does the actual output and
 * call to abort.
 */
#define _assert __imported_name(_assert)
extern void	_assert (const char* szExpression, const char* szFileName, int nLine)
#ifdef	__GNUC__
	__attribute__ ((noreturn))
#endif
	;

/*
 * Definition of the assert macro.
 */
#define assert(x)	if(!(x)) _assert( #x , __FILE__, __LINE__);
#endif	/* NDEBUG */

#ifdef	__cplusplus
}
#endif

#endif /* Not RC_INVOKED */

#endif /* Not _ASSERT_H_ */

