/* 
 * process.h
 *
 * Function calls for spawning child processes.
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
 * $Date: 1998/04/17 02:59:22 $
 *
 */

#ifndef	__STRICT_ANSI__

#ifndef	_PROCESS_H_
#define	_PROCESS_H_

/* Includes a definition of _pid_t and pid_t */
#include <sys/types.h>
#include <sys/config.h>

/*
 * Constants for cwait actions.
 * Obsolete for Win32.
 */
#define	_WAIT_CHILD		0
#define	_WAIT_GRANDCHILD	1

#ifndef	_NO_OLDNAMES
#define	WAIT_CHILD		_WAIT_CHILD
#define	WAIT_GRANDCHILD		_WAIT_GRANDCHILD
#endif	/* Not _NO_OLDNAMES */

/*
 * Mode constants for spawn functions.
 */
#define	_P_WAIT		0
#define	_P_NOWAIT	1
#define	_P_OVERLAY	2
#define	_OLD_P_OVERLAY	_P_OVERLAY
#define	_P_NOWAITO	3
#define	_P_DETACH	4

#ifndef	_NO_OLDNAMES
#define	P_WAIT		_P_WAIT
#define	P_NOWAIT	_P_NOWAIT
#define	P_OVERLAY	_P_OVERLAY
#define	OLD_P_OVERLAY	_OLD_P_OVERLAY
#define	P_NOWAITO	_P_NOWAITO
#define	P_DETACH	_P_DETACH
#endif	/* Not _NO_OLDNAMES */


#ifndef RC_INVOKED

#ifdef	__cplusplus
extern "C" {
#endif

#define _cexit __imported_name(_cexit)
extern void	_cexit();
#define _c_exit __imported_name(_c_exit)
extern void	_c_exit();

#define _cwait __imported_name(_cwait)
extern int	_cwait (int* pnStatus, _pid_t pid, int nAction);

#define _getpid __imported_name(_get_pid)
extern _pid_t	_getpid();

#define _execl __imported_name(_execl)
extern int	_execl		(const char* szPath, const char* szArgv0, ...);
#define _execle __imported_name(_execle)
extern int	_execle		(const char* szPath, const char* szArgv0, ...);
#define _execlp __imported_name(_execlp)
extern int	_execlp		(const char* szPath, const char* szArgv0, ...);
#define _execlpe __imported_name(_execlpe)
extern int	_execlpe	(const char* szPath, const char* szArgv0, ...);
#define _execv __imported_name(_execv)
extern int	_execv		(const char* szPath, char* const* szaArgv);
#define _execve __imported_name(_execve)
extern int	_execve		(const char* szPath, char* const* szaArgv,
			 char* const* szaEnv);
#define _execvp __imported_name(_execvp)
extern int	_execvp		(const char* szPath, char* const* szaArgv);
#define _execvpe __imported_name(_execvpe)
extern int	_execvpe	(const char* szPath, char* const* szaArgv,
			 char* const* szaEnv);

#define _spawnl __imported_name(_spawnl)
extern int	_spawnl		(int nMode, const char* szPath, const char* szArgv0,
			 ...);
#define _spawnle __imported_name(_spawnle)
extern int	_spawnle	(int nMode, const char* szPath, const char* szArgv0,
			 ...);
#define _spawnlp __imported_name(_spawnlp)
extern int	_spawnlp	(int nMode, const char* szPath, const char* szArgv0,
			 ...);
#define _spawnlpe __imported_name(_spawnlpe)
extern int	_spawnlpe	(int nMode, const char* szPath, const char* szArgv0,
			 ...);
#define _spawnv __imported_name(_spawnv)
extern int	_spawnv		(int nMode, const char* szPath, char* const* szaArgv);
#define _spawnve __imported_name(_spawnve)
extern int	_spawnve	(int nMode, const char* szPath, char* const* szaArgv,
			 char* const* szaEnv);
#define _spawnvp __imported_name(_spawnvp)
extern int	_spawnvp	(int nMode, const char* szPath, char* const* szaArgv);
#define _spawnvpe __imported_name(_spawnvpe)
extern int	_spawnvpe	(int nMode, const char* szPath, char* const* szaArgv,
			 char* const* szaEnv);

/*
 * The functions _beginthreadex and _endthreadex are not provided by CRTDLL.
 * They are provided by MSVCRT.
 *
 * NOTE: Apparently _endthread calls CloseHandle on the handle of the thread,
 * making for race conditions if you are not careful. Basically you have to
 * make sure that no-one is going to do *anything* with the thread handle
 * after the thread calls _endthread or returns from the thread function.
 *
 * NOTE: No old names for these functions. Use the underscore.
 */
#define _beginthread __imported_name(_beginthread)
extern unsigned long
	_beginthread	(void (*pfuncStart)(void *),
			 unsigned unStackSize, void* pArgList);
#define _endthread __imported_name(_endthread)
extern void	_endthread	();

#ifdef	__MSVCRT__
#define _beginthreadex __imported_name(_beginthreadex)
extern unsigned long
	_beginthreadex	(void *pSecurity, unsigned unStackSize,
			 unsigned (*pfuncStart)(void*), void* pArgList,
			 unsigned unInitFlags, unsigned* pThreadAddr);
#define _endthreadex __imported_name(_endthreadex)
extern void	_endthreadex	(unsigned unExitCode);
#endif


#ifndef	_NO_OLDNAMES
/*
 * Functions without the leading underscore, for portability.
 */
#define cwait _cwait
#define getpid _getpid
#define execl _execl
#define execle _execle
#define execlp _execlp
#define execlpe _execlpe
#define execv _execv
#define execve _execve
#define execvpe _execvpe
#define spawnl _spawnl
#define spawnle _spawnle
#define spawnlp _spawnlp
#define spawnlpe _spawnlpe
#define spawnv _spawnv
#define spawnve _spawnve
#define spawnvp _spawnvp
#define spawnvpe _spawnvpe
#endif	/* Not _NO_OLDNAMES */

#ifdef	__cplusplus
}
#endif

#endif	/* Not RC_INVOKED */

#endif	/* _PROCESS_H_ not defined */

#endif	/* Not __STRICT_ANSI__ */

