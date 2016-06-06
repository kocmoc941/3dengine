/* 
 * dos.h
 *
 * DOS-specific functions and structures.
 *
 * This file is part of the Mingw32 package.
 *
 * Contributors:
 *  Created by J.J. van der Heijden <J.J.vanderHeijden@student.utwente.nl>
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
 * $Revision: 1.2 $
 * $Author: colin $
 * $Date: 1998/01/26 04:45:56 $
 *
 */

#ifndef	__STRICT_ANSI__

#ifndef	_DOS_H_
#define	_DOS_H_

#define __need_wchar_t
#include <stddef.h>
#include <sys/config.h>

/* For DOS file attributes */
#include <dir.h>

#ifndef RC_INVOKED

#ifdef __cplusplus
extern "C" {
#endif

extern char* __imported_name(_pgmptr_dll);
#define _pgmptr __imported_name(_pgmptr_dll)

/* Wide character equivalent */
extern wchar_t* __imported_name(_wpgmptr_dll);
#define _wpgmptr __imported_name(_wpgmptr_dll)

extern unsigned int __imported_name(_basemajor__dll);
extern unsigned int __imported_name(_baseminor__dll);
extern unsigned int __imported_name(_baseversion__dll);
extern unsigned int __imported_name(_osmajor_dll);
extern unsigned int __imported_name(_osminor_dll);
extern unsigned int __imported_name(_osmode_dll);

#define _basemajor __imported_name(_basemajor_dll)
#define _baseminor __imported_name(_baseminor_dll)
#define _baseversion __imported_name(_baseversion_dll)
#define _osmajor __imported_name(_osmajor_dll)
#define _osminor __imported_name(_osminor_dll)
#define _osmode __imported_name(_osmode_dll)

#ifdef __cplusplus
}
#endif

#endif	/* Not RC_INVOKED */

#endif	/* Not _DOS_H_ */

#endif	/* Not __STRICT_ANSI__ */

