/* 
 * setjmp.h
 *
 * Declarations supporting setjmp and longjump, a method for avoiding
 * the normal function call return sequence. (Bleah!)
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
 * $Date: 1998/05/18 18:44:39 $
 *
 */

#ifndef _SETJMP_H_
#define _SETJMP_H_

#include <sys/config.h>

#ifndef RC_INVOKED

#ifdef __cplusplus
extern "C" {
#endif

/*
 * The buffer used by setjmp to store the information used by longjmp
 * to perform it's evil goto-like work. The size of this buffer was
 * determined through experimentation; it's contents are a mystery.
 * NOTE: This was determined on an i386 (actually a Pentium). The
 *       contents could be different on an Alpha or something else.
 */
typedef char	jmp_buf[32];

/*
 * The function provided by CRTDLL which appears to do the actual work
 * of setjmp.
 */
#define _setjmp __imported_name(_setjmp)
extern int	_setjmp (char* jbuf);

#define	setjmp(jbuf) _setjmp(jbuf)

/*
 * Return to the last setjmp call and act as if setjmp had returned
 * nVal (which had better be non-zero!).
 */
#define longjmp __imported_name(longjmp)
extern void	longjmp (char* jbuf, int nVal);

#ifdef __cplusplus
}
#endif

#endif	/* Not RC_INVOKED */

#endif	/* Not _SETJMP_H_ */

