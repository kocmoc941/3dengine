/*
 * malloc.h
 *
 * Support for programs which want to use malloc.h to get memory management
 * functions. Unless you absolutely need some of these functions and they are
 * not in the ANSI headers you should use the ANSI standard header files
 * instead.
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

#ifndef	__STRICT_ANSI__

#ifndef _MALLOC_H_
#define _MALLOC_H_

#include <alloc.h>
#include <sys/config.h>

#ifndef RC_INVOKED

#ifdef	__cplusplus
extern "C" {
#endif

#define _heapchk __imported_name(_heapchk)
extern int	_heapchk ();	/* Verify heap integrety. */
#define _heapmin __imported_name(_heapmin)
extern int	_heapmin ();	/* Return unused heap to the OS. */
#define _heapset __imported_name(_heapset)
extern int	_heapset (unsigned int unFill);
#define _msize __imported_name(_msize)
extern size_t	_msize (void* pBlock);

#ifdef __cplusplus
}
#endif

#endif	RC_INVOKED

#endif /* Not _MALLOC_H_ */

#endif /* Not __STRICT_ANSI__ */

