/*
 * conio.h
 *
 * Low level console I/O functions. Pretty please try to use the ANSI
 * standard ones if you are writing new code.
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

#ifndef	__STRICT_ANSI__

#ifndef	_CONIO_H_
#define	_CONIO_H_

#include <sys/config.h>

#ifndef RC_INVOKED

#ifdef	__cplusplus
extern "C" {
#endif


#define _cgets __imported_name(_cgets)
extern char*	_cgets (char* szBuffer);
#define _cprintf __imported_name(_cprintf)
extern int	_cprintf (const char* szFormat, ...);
#define _cputs __imported_name(_cputs)
extern int	_cputs (const char* szString);
#define _cscanf __imported_name(_cscanf)
extern int	_cscanf (char* szFormat, ...);

#define _getch __imported_name(_getch)
extern int	_getch ();
#define _getche __imported_name(_getche)
extern int	_getche ();
#define _kbhit __imported_name(_kbhit)
extern int	_kbhit ();
#define _putch __imported_name(_putch)
extern int	_putch (int cPut);
#define _ungetch __imported_name(_ungetch)
extern int	_ungetch (int cUnget);


#ifndef	_NO_OLDNAMES

#define getch _getch
#define getche _getche
#define kbhit _kbhit
#define putch _putch
#define ungetch _ungetch

#endif	/* Not _NO_OLDNAMES */


#ifdef	__cplusplus
}
#endif

#endif	/* Not RC_INVOKED */

#endif	/* Not _CONIO_H_ */

#endif	/* Not __STRICT_ANSI__ */
