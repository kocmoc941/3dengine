/* 
 * io.h
 *
 * System level I/O functions and types.
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
 * $Date: 1998/05/12 22:24:04 $
 *
 */

#ifndef	__STRICT_ANSI__

#ifndef	_IO_H_
#define	_IO_H_

/* We need the definition of FILE anyway... */
#include <stdio.h>
#include <sys/config.h>

/* MSVC's io.h contains the stuff from dir.h, so I will too.
 * NOTE: This also defines off_t, the file offset type, through
 *       an inclusion of sys/types.h */
#include <dir.h>

/* TODO: Maximum number of open handles has not been tested, I just set
 * it the same as FOPEN_MAX. */
#define	HANDLE_MAX	FOPEN_MAX


/* Some defines for _access nAccessMode (MS doesn't define them, but
 * it doesn't seem to hurt to add them). */
#define	F_OK	0	/* Check for file existence */
#define	W_OK	2	/* Check for write permission */
#define	R_OK	4	/* Check for read permission */
/* TODO: Is this safe? X_OK not supported directly... */
#define X_OK	R_OK	/* Check for execute permission */

#ifndef RC_INVOKED

#ifdef	__cplusplus
extern "C" {
#endif

#define _access __imported_name(_access)
extern int		_access (const char* szFileName, int nAccessMode);
#define _chsize __imported_name(_chsize)
extern int		_chsize (int nHandle, long lnNewSize);
#define _close __imported_name(_close)
extern int		_close (int nHandle);

/* NOTE: The only significant bit in unPermissions appears to be bit 7 (0x80),
 *       the "owner write permission" bit (on FAT). */
#define _creat __imported_name(_creat)
extern int		_creat (const char* szFileName, unsigned unPermissions);

#define _dup __imported_name(_dup)
extern int		_dup (int nHandle);
#define _dup2 __imported_name(_dup2)
extern int		_dup2 (int nOldHandle, int nNewHandle);
#define _filelength __imported_name(_filelength)
extern long		_filelength (int nHandle);
#define _fileno __imported_name(_fileno)
extern int		_fileno (FILE* fileGetHandle);
#define _get_osfhandle __imported_name(_get_osfhandle)
extern long		_get_osfhandle (int nHandle);
#define _isatty __imported_name(_isatty)
extern int		_isatty (int nHandle);

/* In a very odd turn of events this function is excluded from those
 * files which define _STREAM_COMPAT. This is required in order to
 * build GNU libio because of a conflict with _eof in streambuf.h
 * line 107. Actually I might just be able to change the name of
 * the enum member in streambuf.h... we'll see. TODO */
#ifndef	_STREAM_COMPAT
#define _eof __imported_name(_eof)
extern int		_eof (int nHandle);
#endif

/* LK_... locking commands defined in sys/locking.h. */
#define _locking __imported_name(_locking)
extern int		_locking (int nHandle, int nCmd, long lnLockRegionLength);

#define _lseek __imported_name(_lseek)
extern long		_lseek (int nHandle, long lnOffset, int nOrigin);

/* Optional third argument is unsigned unPermissions. */
#define _open __imported_name(_open)
extern int		_open (const char* szFileName, int nFlags, ...);

#define _open_osfhandle __imported_name(_open_osfhandle)
extern int		_open_osfhandle (long lnOSHandle, int nFlags);
#define _pipe __imported_name(_pipe)
extern int		_pipe (int *naHandles, unsigned int unSize, int nMode);
#define _read __imported_name(_read)
extern int		_read (int nHandle, void* caBuffer, unsigned int nToRead);

/* SH_... flags for nShFlags defined in share.h
 * Optional fourth argument is unsigned unPermissions */
#define _sopen __imported_name(_sopen)
extern int		_sopen (char* szFileName, int nFlags, int nShFlags, ...);

#define _tell __imported_name(_tell)
extern long		_tell (int nHandle);
/* Should umask be in sys/stat.h and/or sys/types.h instead? */
#define _umask __imported_name(_umask)
extern int		_umask (int nMode);
#define _unlink __imported_name(_unlink)
extern int		_unlink (const char* szFileName);
#define _write __imported_name(_write)
extern int		_write (int nHandle, const void* caBuffer,
		        unsigned int unToWrite);


#ifndef	_NO_OLDNAMES
/*
 * Non-underscored versions of non-ANSI functions to improve portability.
 */

#define access _access
#define chsize _chsize
#define close _close
#define creat _creat
#define dup _dup
#define dup2 _dup2
#define eof _eof
#define filelength _filelength
#define fileno _fileno
#define isatty _isatty
#define lseek _lseek
#define open _open
#define read _read
#define sopen _sopen
#define tell _tell
#define umask _umask
#define unlink _unlink
#define write _write

#endif	/* Not _NO_OLDNAMES */

#ifdef	__cplusplus
}
#endif

#endif	/* Not RC_INVOKED */

#endif	/* _IO_H_ not defined */

#endif	/* Not strict ANSI */

