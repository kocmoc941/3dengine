/* 
   CommonFunctions.h

   Declarations for all the Windows32 API Functions that do not have
   separate ANSI and UNICODE versions.

   Copyright (C) 1996 Free Software Foundation, Inc.

   Author: Colin Peters <colin@fu.is.saga-u.ac.jp>

   Most of this file was extracted from Functions.h, by Scott Christley

   This file is part of the Windows32 API Library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; see the file COPYING.LIB.
   If not, write to the Free Software Foundation, 
   59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/ 

#ifndef _GNU_H_WINDOWS32_COMMONFUNCTIONS
#define _GNU_H_WINDOWS32_COMMONFUNCTIONS

#include <sys/config.h>

/* Skip if invoked by resource compiler */
#ifndef RC_INVOKED

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define AbnormalTermination __imported_name(AbnormalTermination)
extern WINBOOL  __imported_stdcall(AbnormalTermination)(VOID);
#define AbortDoc __imported_name(AbortDoc)
extern int  __imported_stdcall(AbortDoc)(HDC);
#define AbortPath __imported_name(AbortPath)
extern WINBOOL  __imported_stdcall(AbortPath)(HDC);
#define AbortPrinter __imported_name(AbortPrinter)
extern WINBOOL  __imported_stdcall(AbortPrinter)(HANDLE);
#define AbortProc __imported_name(AbortProc)
extern WINBOOL  __imported_stdcall(AbortProc)(HDC, int);
#define AccessCheck __imported_name(AccessCheck)
extern WINBOOL  __imported_stdcall(AccessCheck)(
		    PSECURITY_DESCRIPTOR  pSecurityDescriptor,
		    HANDLE  ClientToken,
		    DWORD  DesiredAccess,
		    PGENERIC_MAPPING  GenericMapping,
		    PPRIVILEGE_SET  PrivilegeSet,
		    LPDWORD  PrivilegeSetLength,
		    LPDWORD  GrantedAccess,
		    LPBOOL  AccessStatus
		    );

#define InterlockedIncrement __imported_name(InterlockedIncrement)
extern LONG
 __imported_stdcall(InterlockedIncrement)(
		     LPLONG lpAddend
		     );

#define InterlockedDecrement __imported_name(InterlockedDecrement)
extern LONG
 __imported_stdcall(InterlockedDecrement)(
		     LPLONG lpAddend
		     );

#define InterlockedExchange __imported_name(InterlockedExchange)
extern LONG
 __imported_stdcall(InterlockedExchange)(
		    LPLONG Target,
		    LONG Value
		    );

#define FreeResource __imported_name(FreeResource)
extern WINBOOL
 __imported_stdcall(FreeResource)(
	     HGLOBAL hResData
	     );

#define LockResource __imported_name(LockResource)
extern LPVOID
 __imported_stdcall(LockResource)(
	     HGLOBAL hResData
	     );

extern int
 __imported_stdcall(WinMain)(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nShowCmd
	);

#define FreeLibrary __imported_name(FreeLibrary)
extern WINBOOL
 __imported_stdcall(FreeLibrary)(
	    HINSTANCE hLibModule
	    );


#define FreeLibraryAndExitThread __imported_name(FreeLibraryAndExitThread)
extern VOID
 __imported_stdcall(FreeLibraryAndExitThread)(
			 HMODULE hLibModule,
			 DWORD dwExitCode
			 );

#define DisableThreadLibraryCalls __imported_name(DisableThreadLibraryCalls)
extern WINBOOL
 __imported_stdcall(DisableThreadLibraryCalls)(
			  HMODULE hLibModule
			  );

#define GetProcAddress __imported_name(GetProcAddress)
extern FARPROC
 __imported_stdcall(GetProcAddress)(
	       HINSTANCE hModule,
	       LPCSTR lpProcName
	       );

#define GetVersion __imported_name(GetVersion)
extern DWORD
 __imported_stdcall(GetVersion)( VOID );

#define GlobalAlloc __imported_name(GlobalAlloc)
extern HGLOBAL
 __imported_stdcall(GlobalAlloc)(
	    UINT uFlags,
	    DWORD dwBytes
	    );

#define GlobalDiscard __imported_name(GlobalDiscard)
extern HGLOBAL
GlobalDiscard(
	      HGLOBAL hglbMem
	      );

#define GlobalReAlloc __imported_name(GlobalReAlloc)
extern HGLOBAL
 __imported_stdcall(GlobalReAlloc)(
	      HGLOBAL hMem,
	      DWORD dwBytes,
	      UINT uFlags
	      );

#define GlobalSize __imported_name(GlobalSize)
extern DWORD
 __imported_stdcall(GlobalSize)(
	   HGLOBAL hMem
	   );

#define GlobalFlags __imported_name(GlobalFlags)
extern UINT
 __imported_stdcall(GlobalFlags)(
	    HGLOBAL hMem
	    );


#define GlobalLock __imported_name(GlobalLock)
extern LPVOID
 __imported_stdcall(GlobalLock)(
	   HGLOBAL hMem
	   );

#define GlobalHandle __imported_name(GlobalHandle)
extern HGLOBAL
 __imported_stdcall(GlobalHandle)(
	     LPCVOID pMem
	     );


#define GlobalUnlock __imported_name(GlobalUnlock)
extern WINBOOL
 __imported_stdcall(GlobalUnlock)(
	     HGLOBAL hMem
	     );


#define GlobalFree __imported_name(GlobalFree)
extern HGLOBAL
 __imported_stdcall(GlobalFree)(
	   HGLOBAL hMem
	   );

#define GlobalCompact __imported_name(GlobalCompact)
extern UINT
 __imported_stdcall(GlobalCompact)(
	      DWORD dwMinFree
	      );


#define GlobalFix __imported_name(GlobalFix)
extern VOID
 __imported_stdcall(GlobalFix)(
	  HGLOBAL hMem
	  );


#define GlobalUnfix __imported_name(GlobalUnfix)
extern VOID
 __imported_stdcall(GlobalUnfix)(
	    HGLOBAL hMem
	    );


#define GlobalWire __imported_name(GlobalWire)
extern LPVOID
 __imported_stdcall(GlobalWire)(
	   HGLOBAL hMem
	   );


#define GlobalUnWire __imported_name(GlobalUnWire)
extern WINBOOL
 __imported_stdcall(GlobalUnWire)(
	     HGLOBAL hMem
	     );


#define GlobalMemoryStatus __imported_name(GlobalMemoryStatus)
extern VOID
 __imported_stdcall(GlobalMemoryStatus)(
		   LPMEMORYSTATUS lpBuffer
		   );


#define LocalAlloc __imported_name(LocalAlloc)
extern HLOCAL
 __imported_stdcall(LocalAlloc)(
	   UINT uFlags,
	   UINT uBytes
	   );

#define LocalDiscard __imported_name(LocalDiscard)
extern HLOCAL
LocalDiscard(
	     HLOCAL hlocMem
	     );

#define LocalReAlloc __imported_name(LocalReAlloc)
extern HLOCAL
 __imported_stdcall(LocalReAlloc)(
	     HLOCAL hMem,
	     UINT uBytes,
	     UINT uFlags
	     );


#define LocalLock __imported_name(LocalLock)
extern LPVOID
 __imported_stdcall(LocalLock)(
	  HLOCAL hMem
	  );


#define LocalHandle __imported_name(LocalHandle)
extern HLOCAL
 __imported_stdcall(LocalHandle)(
	    LPCVOID pMem
	    );


#define LocalUnlock __imported_name(LocalUnlock)
extern WINBOOL
 __imported_stdcall(LocalUnlock)(
	    HLOCAL hMem
	    );


#define LocalSize __imported_name(LocalSize)
extern UINT
 __imported_stdcall(LocalSize)(
	  HLOCAL hMem
	  );


#define LocalFlags __imported_name(LocalFlags)
extern UINT
 __imported_stdcall(LocalFlags)(
	   HLOCAL hMem
	   );


#define LocalFree __imported_name(LocalFree)
extern HLOCAL
 __imported_stdcall(LocalFree)(
	  HLOCAL hMem
	  );


#define LocalShrink __imported_name(LocalShrink)
extern UINT
 __imported_stdcall(LocalShrink)(
	    HLOCAL hMem,
	    UINT cbNewSize
	    );


#define LocalCompact __imported_name(LocalCompact)
extern UINT
 __imported_stdcall(LocalCompact)(
	     UINT uMinFree
	     );


#define FlushInstructionCache __imported_name(FlushInstructionCache)
extern WINBOOL
 __imported_stdcall(FlushInstructionCache)(
		      HANDLE hProcess,
		      LPCVOID lpBaseAddress,
		      DWORD dwSize
		      );


#define VirtualAlloc __imported_name(VirtualAlloc)
extern LPVOID
 __imported_stdcall(VirtualAlloc)(
	     LPVOID lpAddress,
	     DWORD dwSize,
	     DWORD flAllocationType,
	     DWORD flProtect
	     );


#define VirtualFree __imported_name(VirtualFree)
extern WINBOOL
 __imported_stdcall(VirtualFree)(
	    LPVOID lpAddress,
	    DWORD dwSize,
	    DWORD dwFreeType
	    );


#define VirtualProtect __imported_name(VirtualProtect)
extern WINBOOL
 __imported_stdcall(VirtualProtect)(
	       LPVOID lpAddress,
	       DWORD dwSize,
	       DWORD flNewProtect,
	       PDWORD lpflOldProtect
	       );


#define VirtualQuery __imported_name(VirtualQuery)
extern DWORD
 __imported_stdcall(VirtualQuery)(
	     LPCVOID lpAddress,
	     PMEMORY_BASIC_INFORMATION lpBuffer,
	     DWORD dwLength
	     );


#define VirtualProtectEx __imported_name(VirtualProtectEx)
extern WINBOOL
 __imported_stdcall(VirtualProtectEx)(
		 HANDLE hProcess,
		 LPVOID lpAddress,
		 DWORD dwSize,
		 DWORD flNewProtect,
		 PDWORD lpflOldProtect
		 );


#define VirtualQueryEx __imported_name(VirtualQueryEx)
extern DWORD
 __imported_stdcall(VirtualQueryEx)(
	       HANDLE hProcess,
	       LPCVOID lpAddress,
	       PMEMORY_BASIC_INFORMATION lpBuffer,
	       DWORD dwLength
	       );


#define HeapCreate __imported_name(HeapCreate)
extern HANDLE
 __imported_stdcall(HeapCreate)(
	   DWORD flOptions,
	   DWORD dwInitialSize,
	   DWORD dwMaximumSize
	   );

#define HeapDestroy __imported_name(HeapDestroy)
extern WINBOOL
 __imported_stdcall(HeapDestroy)(
	    HANDLE hHeap
	    );

#define HeapAlloc __imported_name(HeapAlloc)
extern LPVOID
 __imported_stdcall(HeapAlloc)(
	  HANDLE hHeap,
	  DWORD dwFlags,
	  DWORD dwBytes
	  );

#define HeapReAlloc __imported_name(HeapReAlloc)
extern LPVOID
 __imported_stdcall(HeapReAlloc)(
	    HANDLE hHeap,
	    DWORD dwFlags,
	    LPVOID lpMem,
	    DWORD dwBytes
	    );

#define HeapFree __imported_name(HeapFree)
extern WINBOOL
 __imported_stdcall(HeapFree)(
	 HANDLE hHeap,
	 DWORD dwFlags,
	 LPVOID lpMem
	 );

#define HeapSize __imported_name(HeapSize)
extern DWORD
 __imported_stdcall(HeapSize)(
	 HANDLE hHeap,
	 DWORD dwFlags,
	 LPCVOID lpMem
	 );

#define HeapValidate __imported_name(HeapValidate)
extern WINBOOL
 __imported_stdcall(HeapValidate)(
	     HANDLE hHeap,
	     DWORD dwFlags,
	     LPCVOID lpMem
	     );

#define HeapCompact __imported_name(HeapCompact)
extern UINT
 __imported_stdcall(HeapCompact)(
	    HANDLE hHeap,
	    DWORD dwFlags
	    );

#define GetProcessHeap __imported_name(GetProcessHeap)
extern HANDLE
 __imported_stdcall(GetProcessHeap)( VOID );

#define GetProcessHeaps __imported_name(GetProcessHeaps)
extern DWORD
 __imported_stdcall(GetProcessHeaps)(
		DWORD NumberOfHeaps,
		PHANDLE ProcessHeaps
		);

#define HeapLock __imported_name(HeapLock)
extern WINBOOL
 __imported_stdcall(HeapLock)(
	 HANDLE hHeap
	 );

#define HeapUnlock __imported_name(HeapUnlock)
extern WINBOOL
 __imported_stdcall(HeapUnlock)(
	   HANDLE hHeap
	   );

#define HeapWalk __imported_name(HeapWalk)
extern WINBOOL
 __imported_stdcall(HeapWalk)(
	 HANDLE hHeap,
	 LPPROCESS_HEAP_ENTRY lpEntry
	 );

#define GetProcessAffinityMask __imported_name(GetProcessAffinityMask)
extern WINBOOL
 __imported_stdcall(GetProcessAffinityMask)(
		       HANDLE hProcess,
		       LPDWORD lpProcessAffinityMask,
		       LPDWORD lpSystemAffinityMask
		       );

#define GetProcessTimes __imported_name(GetProcessTimes)
extern WINBOOL
 __imported_stdcall(GetProcessTimes)(
		HANDLE hProcess,
		LPFILETIME lpCreationTime,
		LPFILETIME lpExitTime,
		LPFILETIME lpKernelTime,
		LPFILETIME lpUserTime
		);

#define GetProcessWorkingSetSize __imported_name(GetProcessWorkingSetSize)
extern WINBOOL
 __imported_stdcall(GetProcessWorkingSetSize)(
			 HANDLE hProcess,
			 LPDWORD lpMinimumWorkingSetSize,
			 LPDWORD lpMaximumWorkingSetSize
			 );

#define SetProcessWorkingSetSize __imported_name(SetProcessWorkingSetSize)
extern WINBOOL
 __imported_stdcall(SetProcessWorkingSetSize)(
			 HANDLE hProcess,
			 DWORD dwMinimumWorkingSetSize,
			 DWORD dwMaximumWorkingSetSize
			 );

#define OpenProcess __imported_name(OpenProcess)
extern HANDLE
 __imported_stdcall(OpenProcess)(
	    DWORD dwDesiredAccess,
	    WINBOOL bInheritHandle,
	    DWORD dwProcessId
	    );

#define GetCurrentProcess __imported_name(GetCurrentProcess)
extern HANDLE
 __imported_stdcall(GetCurrentProcess)(
		  VOID
		  );

#define GetCurrentProcessId __imported_name(GetCurrentProcessId)
extern DWORD
 __imported_stdcall(GetCurrentProcessId)(
		    VOID
		    );

#define ExitProcess __imported_name(ExitProcess)
extern VOID
 __imported_stdcall(ExitProcess)(
	    UINT uExitCode
	    );

#define TerminateProcess __imported_name(TerminateProcess)
extern WINBOOL
 __imported_stdcall(TerminateProcess)(
		 HANDLE hProcess,
		 UINT uExitCode
		 );

#define GetExitCodeProcess __imported_name(GetExitCodeProcess)
extern WINBOOL
 __imported_stdcall(GetExitCodeProcess)(
		   HANDLE hProcess,
		   LPDWORD lpExitCode
		   );

#define FatalExit __imported_name(FatalExit)
extern VOID
 __imported_stdcall(FatalExit)(
	  int ExitCode
	  );

#define RaiseException __imported_name(RaiseException)
extern VOID
 __imported_stdcall(RaiseException)(
	       DWORD dwExceptionCode,
	       DWORD dwExceptionFlags,
	       DWORD nNumberOfArguments,
	       CONST DWORD *lpArguments
	       );

#define UnhandledExceptionFilter __imported_name(UnhandledExceptionFilter)
extern LONG
 __imported_stdcall(UnhandledExceptionFilter)(
			 struct _EXCEPTION_POINTERS *ExceptionInfo
			 );

/* TODO: Should this go somewhere else? Colin Peters 1997/10/20 */
typedef LONG (*LPTOP_LEVEL_EXCEPTION_FILTER) (struct _EXCEPTION_POINTERS *);

#define SetUnhandledExceptionFilter __imported_name(SetUnhandledExceptionFilter)
extern LPTOP_LEVEL_EXCEPTION_FILTER
 __imported_stdcall(SetUnhandledExceptionFilter)(
    LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter
    );


#define CreateThread __imported_name(CreateThread)
extern HANDLE
 __imported_stdcall(CreateThread)(
	     LPSECURITY_ATTRIBUTES lpThreadAttributes,
	     DWORD dwStackSize,
	     LPTHREAD_START_ROUTINE lpStartAddress,
	     LPVOID lpParameter,
	     DWORD dwCreationFlags,
	     LPDWORD lpThreadId
	     );


#define CreateRemoteThread __imported_name(CreateRemoteThread)
extern HANDLE
 __imported_stdcall(CreateRemoteThread)(
		   HANDLE hProcess,
		   LPSECURITY_ATTRIBUTES lpThreadAttributes,
		   DWORD dwStackSize,
		   LPTHREAD_START_ROUTINE lpStartAddress,
		   LPVOID lpParameter,
		   DWORD dwCreationFlags,
		   LPDWORD lpThreadId
		   );


#define GetCurrentThread __imported_name(GetCurrentThread)
extern HANDLE
 __imported_stdcall(GetCurrentThread)(
		 VOID
		 );


#define GetCurrentThreadId __imported_name(GetCurrentThreadId)
extern DWORD
 __imported_stdcall(GetCurrentThreadId)(
		   VOID
		   );


#define SetThreadAffinityMask __imported_name(SetThreadAffinityMask)
extern DWORD
 __imported_stdcall(SetThreadAffinityMask)(
		      HANDLE hThread,
		      DWORD dwThreadAffinityMask
		      );


#define SetThreadPriority __imported_name(SetThreadPriority)
extern WINBOOL
 __imported_stdcall(SetThreadPriority)(
		  HANDLE hThread,
		  int nPriority
		  );


#define GetThreadPriority __imported_name(GetThreadPriority)
extern int
 __imported_stdcall(GetThreadPriority)(
		  HANDLE hThread
		  );


#define GetThreadTimes __imported_name(GetThreadTimes)
extern WINBOOL
 __imported_stdcall(GetThreadTimes)(
	       HANDLE hThread,
	       LPFILETIME lpCreationTime,
	       LPFILETIME lpExitTime,
	       LPFILETIME lpKernelTime,
	       LPFILETIME lpUserTime
	       );


#define ExitThread __imported_name(ExitThread)
extern VOID
 __imported_stdcall(ExitThread)(
	   DWORD dwExitCode
	   );


#define TerminateThread __imported_name(TerminateThread)
extern WINBOOL
 __imported_stdcall(TerminateThread)(
		HANDLE hThread,
		DWORD dwExitCode
		);


#define GetExitCodeThread __imported_name(GetExitCodeThread)
extern WINBOOL
 __imported_stdcall(GetExitCodeThread)(
		  HANDLE hThread,
		  LPDWORD lpExitCode
		  );

#define GetThreadSelectorEntry __imported_name(GetThreadSelectorEntry)
extern WINBOOL
 __imported_stdcall(GetThreadSelectorEntry)(
		       HANDLE hThread,
		       DWORD dwSelector,
		       LPLDT_ENTRY lpSelectorEntry
		       );


#define GetLastError __imported_name(GetLastError)
extern DWORD
 __imported_stdcall(GetLastError)(
	     VOID
	     );


#define SetLastError __imported_name(SetLastError)
extern VOID
 __imported_stdcall(SetLastError)(
	     DWORD dwErrCode
	     );


#define GetOverlappedResult __imported_name(GetOverlappedResult)
extern WINBOOL
 __imported_stdcall(GetOverlappedResult)(
		    HANDLE hFile,
		    LPOVERLAPPED lpOverlapped,
		    LPDWORD lpNumberOfBytesTransferred,
		    WINBOOL bWait
		    );


#define CreateIoCompletionPort __imported_name(CreateIoCompletionPort)
extern HANDLE
 __imported_stdcall(CreateIoCompletionPort)(
		       HANDLE FileHandle,
		       HANDLE ExistingCompletionPort,
		       DWORD CompletionKey,
		       DWORD NumberOfConcurrentThreads
		       );


#define GetQueuedCompletionStatus __imported_name(GetQueuedCompletionStatus)
extern WINBOOL
 __imported_stdcall(GetQueuedCompletionStatus)(
			  HANDLE CompletionPort,
			  LPDWORD lpNumberOfBytesTransferred,
			  LPDWORD lpCompletionKey,
			  LPOVERLAPPED *lpOverlapped,
			  DWORD dwMilliseconds
			  );

#define SetErrorMode __imported_name(SetErrorMode)
extern UINT
 __imported_stdcall(SetErrorMode)(
	     UINT uMode
	     );


#define ReadProcessMemory __imported_name(ReadProcessMemory)
extern WINBOOL
 __imported_stdcall(ReadProcessMemory)(
		  HANDLE hProcess,
		  LPCVOID lpBaseAddress,
		  LPVOID lpBuffer,
		  DWORD nSize,
		  LPDWORD lpNumberOfBytesRead
		  );


#define WriteProcessMemory __imported_name(WriteProcessMemory)
extern WINBOOL
 __imported_stdcall(WriteProcessMemory)(
		   HANDLE hProcess,
		   LPVOID lpBaseAddress,
		   LPVOID lpBuffer,
		   DWORD nSize,
		   LPDWORD lpNumberOfBytesWritten
		   );


#define GetThreadContext __imported_name(GetThreadContext)
extern WINBOOL
 __imported_stdcall(GetThreadContext)(
		 HANDLE hThread,
		 LPCONTEXT lpContext
		 );


#define SetThreadContext __imported_name(SetThreadContext)
extern WINBOOL
 __imported_stdcall(SetThreadContext)(
		 HANDLE hThread,
		 CONST CONTEXT *lpContext
		 );


#define SuspendThread __imported_name(SuspendThread)
extern DWORD
 __imported_stdcall(SuspendThread)(
	      HANDLE hThread
	      );


#define ResumeThread __imported_name(ResumeThread)
extern DWORD
 __imported_stdcall(ResumeThread)(
	     HANDLE hThread
	     );


#define DebugBreak __imported_name(DebugBreak)
extern VOID
 __imported_stdcall(DebugBreak)(
	   VOID
	   );


#define WaitForDebugEvent __imported_name(WaitForDebugEvent)
extern WINBOOL
 __imported_stdcall(WaitForDebugEvent)(
		  LPDEBUG_EVENT lpDebugEvent,
		  DWORD dwMilliseconds
		  );


#define ContinueDebugEvent __imported_name(ContinueDebugEvent)
extern WINBOOL
 __imported_stdcall(ContinueDebugEvent)(
		   DWORD dwProcessId,
		   DWORD dwThreadId,
		   DWORD dwContinueStatus
		   );


#define DebugActiveProcess __imported_name(DebugActiveProcess)
extern WINBOOL
 __imported_stdcall(DebugActiveProcess)(
		   DWORD dwProcessId
		   );


#define InitializeCriticalSection __imported_name(InitializeCriticalSection)
extern VOID
 __imported_stdcall(InitializeCriticalSection)(
			  LPCRITICAL_SECTION lpCriticalSection
			  );


#define EnterCriticalSection __imported_name(EnterCriticalSection)
extern VOID
 __imported_stdcall(EnterCriticalSection)(
		     LPCRITICAL_SECTION lpCriticalSection
		     );


#define LeaveCriticalSection __imported_name(LeaveCriticalSection)
extern VOID
 __imported_stdcall(LeaveCriticalSection)(
		     LPCRITICAL_SECTION lpCriticalSection
		     );


#define DeleteCriticalSection __imported_name(DeleteCriticalSection)
extern VOID
 __imported_stdcall(DeleteCriticalSection)(
		      LPCRITICAL_SECTION lpCriticalSection
		      );


#define SetEvent __imported_name(SetEvent)
extern WINBOOL
 __imported_stdcall(SetEvent)(
	 HANDLE hEvent
	 );


#define ResetEvent __imported_name(ResetEvent)
extern WINBOOL
 __imported_stdcall(ResetEvent)(
	   HANDLE hEvent
	   );


#define PulseEvent __imported_name(PulseEvent)
extern WINBOOL
 __imported_stdcall(PulseEvent)(
	   HANDLE hEvent
	   );


#define ReleaseSemaphore __imported_name(ReleaseSemaphore)
extern WINBOOL
 __imported_stdcall(ReleaseSemaphore)(
		 HANDLE hSemaphore,
		 LONG lReleaseCount,
		 LPLONG lpPreviousCount
		 );


#define ReleaseMutex __imported_name(ReleaseMutex)
extern WINBOOL
 __imported_stdcall(ReleaseMutex)(
	     HANDLE hMutex
	     );


#define WaitForSingleObject __imported_name(WaitForSingleObject)
extern DWORD
 __imported_stdcall(WaitForSingleObject)(
		    HANDLE hHandle,
		    DWORD dwMilliseconds
		    );


#define WaitForMultipleObjects __imported_name(WaitForMultipleObjects)
extern DWORD
 __imported_stdcall(WaitForMultipleObjects)(
		       DWORD nCount,
		       CONST HANDLE *lpHandles,
		       WINBOOL bWaitAll,
		       DWORD dwMilliseconds
		       );


#define Sleep __imported_name(Sleep)
extern VOID
 __imported_stdcall(Sleep)(
      DWORD dwMilliseconds
      );


#define LoadResource __imported_name(LoadResource)
extern HGLOBAL
 __imported_stdcall(LoadResource)(
	     HINSTANCE hModule,
	     HRSRC hResInfo
	     );


#define SizeofResource __imported_name(SizeofResource)
extern DWORD
 __imported_stdcall(SizeofResource)(
	       HINSTANCE hModule,
	       HRSRC hResInfo
	       );



#define GlobalDeleteAtom __imported_name(GlobalDeleteAtom)
extern ATOM
 __imported_stdcall(GlobalDeleteAtom)(
		 ATOM nAtom
		 );


#define InitAtomTable __imported_name(InitAtomTable)
extern WINBOOL
 __imported_stdcall(InitAtomTable)(
	      DWORD nSize
	      );


#define DeleteAtom __imported_name(DeleteAtom)
extern ATOM
 __imported_stdcall(DeleteAtom)(
	   ATOM nAtom
	   );


#define SetHandleCount __imported_name(SetHandleCount)
extern UINT
 __imported_stdcall(SetHandleCount)(
	       UINT uNumber
	       );


#define GetLogicalDrives __imported_name(GetLogicalDrives)
extern DWORD
 __imported_stdcall(GetLogicalDrives)(
		 VOID
		 );


#define LockFile __imported_name(LockFile)
extern WINBOOL
 __imported_stdcall(LockFile)(
	 HANDLE hFile,
	 DWORD dwFileOffsetLow,
	 DWORD dwFileOffsetHigh,
	 DWORD nNumberOfBytesToLockLow,
	 DWORD nNumberOfBytesToLockHigh
	 );


#define UnlockFile __imported_name(UnlockFile)
extern WINBOOL
 __imported_stdcall(UnlockFile)(
	   HANDLE hFile,
	   DWORD dwFileOffsetLow,
	   DWORD dwFileOffsetHigh,
	   DWORD nNumberOfBytesToUnlockLow,
	   DWORD nNumberOfBytesToUnlockHigh
	   );


#define LockFileEx __imported_name(LockFileEx)
extern WINBOOL
 __imported_stdcall(LockFileEx)(
	   HANDLE hFile,
	   DWORD dwFlags,
	   DWORD dwReserved,
	   DWORD nNumberOfBytesToLockLow,
	   DWORD nNumberOfBytesToLockHigh,
	   LPOVERLAPPED lpOverlapped
	   );

#define UnlockFileEx __imported_name(UnlockFileEx)
extern WINBOOL
 __imported_stdcall(UnlockFileEx)(
	     HANDLE hFile,
	     DWORD dwReserved,
	     DWORD nNumberOfBytesToUnlockLow,
	     DWORD nNumberOfBytesToUnlockHigh,
	     LPOVERLAPPED lpOverlapped
	     );

#define GetFileInformationByHandle __imported_name(GetFileInformationByHandle)
extern WINBOOL
 __imported_stdcall(GetFileInformationByHandle)(
			   HANDLE hFile,
			   LPBY_HANDLE_FILE_INFORMATION lpFileInformation
			   );


#define GetFileType __imported_name(GetFileType)
extern DWORD
 __imported_stdcall(GetFileType)(
	    HANDLE hFile
	    );


#define GetFileSize __imported_name(GetFileSize)
extern DWORD
 __imported_stdcall(GetFileSize)(
	    HANDLE hFile,
	    LPDWORD lpFileSizeHigh
	    );


#define GetStdHandle __imported_name(GetStdHandle)
extern HANDLE
 __imported_stdcall(GetStdHandle)(
	     DWORD nStdHandle
	     );


#define SetStdHandle __imported_name(SetStdHandle)
extern WINBOOL
 __imported_stdcall(SetStdHandle)(
	     DWORD nStdHandle,
	     HANDLE hHandle
	     );


#define WriteFile __imported_name(WriteFile)
extern WINBOOL
 __imported_stdcall(WriteFile)(
	  HANDLE hFile,
	  LPCVOID lpBuffer,
	  DWORD nNumberOfBytesToWrite,
	  LPDWORD lpNumberOfBytesWritten,
	  LPOVERLAPPED lpOverlapped
	  );


#define ReadFile __imported_name(ReadFile)
extern WINBOOL
 __imported_stdcall(ReadFile)(
	 HANDLE hFile,
	 LPVOID lpBuffer,
	 DWORD nNumberOfBytesToRead,
	 LPDWORD lpNumberOfBytesRead,
	 LPOVERLAPPED lpOverlapped
	 );


#define FlushFileBuffers __imported_name(FlushFileBuffers)
extern WINBOOL
 __imported_stdcall(FlushFileBuffers)(
		 HANDLE hFile
		 );


#define DeviceIoControl __imported_name(DeviceIoControl)
extern WINBOOL
 __imported_stdcall(DeviceIoControl)(
		HANDLE hDevice,
		DWORD dwIoControlCode,
		LPVOID lpInBuffer,
		DWORD nInBufferSize,
		LPVOID lpOutBuffer,
		DWORD nOutBufferSize,
		LPDWORD lpBytesReturned,
		LPOVERLAPPED lpOverlapped
		);


#define SetEndOfFile __imported_name(SetEndOfFile)
extern WINBOOL
 __imported_stdcall(SetEndOfFile)(
	     HANDLE hFile
	     );


#define SetFilePointer __imported_name(SetFilePointer)
extern DWORD
 __imported_stdcall(SetFilePointer)(
	       HANDLE hFile,
	       LONG lDistanceToMove,
	       PLONG lpDistanceToMoveHigh,
	       DWORD dwMoveMethod
	       );


#define FindClose __imported_name(FindClose)
extern WINBOOL
 __imported_stdcall(FindClose)(
	  HANDLE hFindFile
	  );


#define GetFileTime __imported_name(GetFileTime)
extern WINBOOL
 __imported_stdcall(GetFileTime)(
	    HANDLE hFile,
	    LPFILETIME lpCreationTime,
	    LPFILETIME lpLastAccessTime,
	    LPFILETIME lpLastWriteTime
	    );


#define SetFileTime __imported_name(SetFileTime)
extern WINBOOL
 __imported_stdcall(SetFileTime)(
	    HANDLE hFile,
	    CONST FILETIME *lpCreationTime,
	    CONST FILETIME *lpLastAccessTime,
	    CONST FILETIME *lpLastWriteTime
	    );


#define CloseHandle __imported_name(CloseHandle)
extern WINBOOL
 __imported_stdcall(CloseHandle)(
	    HANDLE hObject
	    );


#define DuplicateHandle __imported_name(DuplicateHandle)
extern WINBOOL
 __imported_stdcall(DuplicateHandle)(
		HANDLE hSourceProcessHandle,
		HANDLE hSourceHandle,
		HANDLE hTargetProcessHandle,
		LPHANDLE lpTargetHandle,
		DWORD dwDesiredAccess,
		WINBOOL bInheritHandle,
		DWORD dwOptions
		);


#define GetHandleInformation __imported_name(GetHandleInformation)
extern WINBOOL
 __imported_stdcall(GetHandleInformation)(
		     HANDLE hObject,
		     LPDWORD lpdwFlags
		     );


#define SetHandleInformation __imported_name(SetHandleInformation)
extern WINBOOL
 __imported_stdcall(SetHandleInformation)(
		     HANDLE hObject,
		     DWORD dwMask,
		     DWORD dwFlags
		     );

#define LoadModule __imported_name(LoadModule)
extern DWORD
 __imported_stdcall(LoadModule)(
	   LPCSTR lpModuleName,
	   LPVOID lpParameterBlock
	   );


#define WinExec __imported_name(WinExec)
extern UINT
 __imported_stdcall(WinExec)(
	LPCSTR lpCmdLine,
	UINT uCmdShow
	);


#define ClearCommBreak __imported_name(ClearCommBreak)
extern WINBOOL
 __imported_stdcall(ClearCommBreak)(
	       HANDLE hFile
	       );


#define ClearCommError __imported_name(ClearCommError)
extern WINBOOL
 __imported_stdcall(ClearCommError)(
	       HANDLE hFile,
	       LPDWORD lpErrors,
	       LPCOMSTAT lpStat
	       );


#define SetupComm __imported_name(SetupComm)
extern WINBOOL
 __imported_stdcall(SetupComm)(
	  HANDLE hFile,
	  DWORD dwInQueue,
	  DWORD dwOutQueue
	  );


#define EscapeCommFunction __imported_name(EscapeCommFunction)
extern WINBOOL
 __imported_stdcall(EscapeCommFunction)(
		   HANDLE hFile,
		   DWORD dwFunc
		   );


#define GetCommConfig __imported_name(GetCommConfig)
extern WINBOOL
 __imported_stdcall(GetCommConfig)(
	      HANDLE hCommDev,
	      LPCOMMCONFIG lpCC,
	      LPDWORD lpdwSize
	      );


#define GetCommMask __imported_name(GetCommMask)
extern WINBOOL
 __imported_stdcall(GetCommMask)(
	    HANDLE hFile,
	    LPDWORD lpEvtMask
	    );


#define GetCommProperties __imported_name(GetCommProperties)
extern WINBOOL
 __imported_stdcall(GetCommProperties)(
		  HANDLE hFile,
		  LPCOMMPROP lpCommProp
		  );


#define GetCommModemStatus __imported_name(GetCommModemStatus)
extern WINBOOL
 __imported_stdcall(GetCommModemStatus)(
		   HANDLE hFile,
		   LPDWORD lpModemStat
		   );


#define GetCommState __imported_name(GetCommState)
extern WINBOOL
 __imported_stdcall(GetCommState)(
	     HANDLE hFile,
	     LPDCB lpDCB
	     );


#define GetCommTimeouts __imported_name(GetCommTimeouts)
extern WINBOOL
 __imported_stdcall(GetCommTimeouts)(
		HANDLE hFile,
		LPCOMMTIMEOUTS lpCommTimeouts
		);


#define PurgeComm __imported_name(PurgeComm)
extern WINBOOL
 __imported_stdcall(PurgeComm)(
	  HANDLE hFile,
	  DWORD dwFlags
	  );


#define SetCommBreak __imported_name(SetCommBreak)
extern WINBOOL
 __imported_stdcall(SetCommBreak)(
	     HANDLE hFile
	     );


#define SetCommConfig __imported_name(SetCommConfig)
extern WINBOOL
 __imported_stdcall(SetCommConfig)(
	      HANDLE hCommDev,
	      LPCOMMCONFIG lpCC,
	      DWORD dwSize
	      );


#define SetCommMask __imported_name(SetCommMask)
extern WINBOOL
 __imported_stdcall(SetCommMask)(
	    HANDLE hFile,
	    DWORD dwEvtMask
	    );


#define SetCommState __imported_name(SetCommState)
extern WINBOOL
 __imported_stdcall(SetCommState)(
	     HANDLE hFile,
	     LPDCB lpDCB
	     );


#define SetCommTimeouts __imported_name(SetCommTimeouts)
extern WINBOOL
 __imported_stdcall(SetCommTimeouts)(
		HANDLE hFile,
		LPCOMMTIMEOUTS lpCommTimeouts
		);


#define TransmitCommChar __imported_name(TransmitCommChar)
extern WINBOOL
 __imported_stdcall(TransmitCommChar)(
		 HANDLE hFile,
		 char cChar
		 );


#define WaitCommEvent __imported_name(WaitCommEvent)
extern WINBOOL
 __imported_stdcall(WaitCommEvent)(
	      HANDLE hFile,
	      LPDWORD lpEvtMask,
	      LPOVERLAPPED lpOverlapped
	      );



#define SetTapePosition __imported_name(SetTapePosition)
extern DWORD
 __imported_stdcall(SetTapePosition)(
		HANDLE hDevice,
		DWORD dwPositionMethod,
		DWORD dwPartition,
		DWORD dwOffsetLow,
		DWORD dwOffsetHigh,
		WINBOOL bImmediate
		);


#define GetTapePosition __imported_name(GetTapePosition)
extern DWORD
 __imported_stdcall(GetTapePosition)(
		HANDLE hDevice,
		DWORD dwPositionType,
		LPDWORD lpdwPartition,
		LPDWORD lpdwOffsetLow,
		LPDWORD lpdwOffsetHigh
		);


#define PrepareTape __imported_name(PrepareTape)
extern DWORD
 __imported_stdcall(PrepareTape)(
	    HANDLE hDevice,
	    DWORD dwOperation,
	    WINBOOL bImmediate
	    );


#define EraseTape __imported_name(EraseTape)
extern DWORD
 __imported_stdcall(EraseTape)(
	  HANDLE hDevice,
	  DWORD dwEraseType,
	  WINBOOL bImmediate
	  );


#define CreateTapePartition __imported_name(CreateTapePartition)
extern DWORD
 __imported_stdcall(CreateTapePartition)(
		    HANDLE hDevice,
		    DWORD dwPartitionMethod,
		    DWORD dwCount,
		    DWORD dwSize
		    );


#define WriteTapemark __imported_name(WriteTapemark)
extern DWORD
 __imported_stdcall(WriteTapemark)(
	      HANDLE hDevice,
	      DWORD dwTapemarkType,
	      DWORD dwTapemarkCount,
	      WINBOOL bImmediate
	      );


#define GetTapeStatus __imported_name(GetTapeStatus)
extern DWORD
 __imported_stdcall(GetTapeStatus)(
	      HANDLE hDevice
	      );


#define GetTapeParameters __imported_name(GetTapeParameters)
extern DWORD
 __imported_stdcall(GetTapeParameters)(
		  HANDLE hDevice,
		  DWORD dwOperation,
		  LPDWORD lpdwSize,
		  LPVOID lpTapeInformation
		  );

#define SetTapeParameters __imported_name(SetTapeParameters)
extern DWORD
 __imported_stdcall(SetTapeParameters)(
		  HANDLE hDevice,
		  DWORD dwOperation,
		  LPVOID lpTapeInformation
		  );

#define Beep __imported_name(Beep)
extern WINBOOL
 __imported_stdcall(Beep)(
     DWORD dwFreq,
     DWORD dwDuration
     );


#define OpenSound __imported_name(OpenSound)
extern VOID
 __imported_stdcall(OpenSound)(
	  VOID
	  );


#define CloseSound __imported_name(CloseSound)
extern VOID
 __imported_stdcall(CloseSound)(
	   VOID
	   );


#define StartSound __imported_name(StartSound)
extern VOID
 __imported_stdcall(StartSound)(
	   VOID
	   );


#define StopSound __imported_name(StopSound)
extern VOID
 __imported_stdcall(StopSound)(
	  VOID
	  );


#define WaitSoundState __imported_name(WaitSoundState)
extern DWORD
 __imported_stdcall(WaitSoundState)(
	       DWORD nState
	       );


#define SyncAllVoices __imported_name(SyncAllVoices)
extern DWORD
 __imported_stdcall(SyncAllVoices)(
	      VOID
	      );


#define CountVoiceNotes __imported_name(CountVoiceNotes)
extern DWORD
 __imported_stdcall(CountVoiceNotes)(
		DWORD nVoice
		);


#define GetThresholdEvent __imported_name(GetThresholdEvent)
extern LPDWORD
 __imported_stdcall(GetThresholdEvent)(
		  VOID
		  );


#define GetThresholdStatus __imported_name(GetThresholdStatus)
extern DWORD
 __imported_stdcall(GetThresholdStatus)(
		   VOID
		   );


#define SetSoundNoise __imported_name(SetSoundNoise)
extern DWORD
 __imported_stdcall(SetSoundNoise)(
	      DWORD nSource,
	      DWORD nDuration
	      );


#define SetVoiceAccent __imported_name(SetVoiceAccent)
extern DWORD
 __imported_stdcall(SetVoiceAccent)(
	       DWORD nVoice,
	       DWORD nTempo,
	       DWORD nVolume,
	       DWORD nMode,
	       DWORD nPitch
	       );


#define SetVoiceEnvelope __imported_name(SetVoiceEnvelope)
extern DWORD
 __imported_stdcall(SetVoiceEnvelope)(
		 DWORD nVoice,
		 DWORD nShape,
		 DWORD nRepeat
		 );


#define SetVoiceNote __imported_name(SetVoiceNote)
extern DWORD
 __imported_stdcall(SetVoiceNote)(
	     DWORD nVoice,
	     DWORD nValue,
	     DWORD nLength,
	     DWORD nCdots
	     );


#define SetVoiceQueueSize __imported_name(SetVoiceQueueSize)
extern DWORD
 __imported_stdcall(SetVoiceQueueSize)(
		  DWORD nVoice,
		  DWORD nBytes
		  );


#define SetVoiceSound __imported_name(SetVoiceSound)
extern DWORD
 __imported_stdcall(SetVoiceSound)(
	      DWORD nVoice,
	      DWORD Frequency,
	      DWORD nDuration
	      );


#define SetVoiceThreshold __imported_name(SetVoiceThreshold)
extern DWORD
 __imported_stdcall(SetVoiceThreshold)(
		  DWORD nVoice,
		  DWORD nNotes
		  );


#define MulDiv __imported_name(MulDiv)
extern int
 __imported_stdcall(MulDiv)(
       int nNumber,
       int nNumerator,
       int nDenominator
       );


#define GetSystemTime __imported_name(GetSystemTime)
extern VOID
 __imported_stdcall(GetSystemTime)(
	      LPSYSTEMTIME lpSystemTime
	      );


#define SetSystemTime __imported_name(SetSystemTime)
extern WINBOOL
 __imported_stdcall(SetSystemTime)(
	      CONST SYSTEMTIME *lpSystemTime
	      );


#define GetLocalTime __imported_name(GetLocalTime)
extern VOID
 __imported_stdcall(GetLocalTime)(
	     LPSYSTEMTIME lpSystemTime
	     );


#define SetLocalTime __imported_name(SetLocalTime)
extern WINBOOL
 __imported_stdcall(SetLocalTime)(
	     CONST SYSTEMTIME *lpSystemTime
	     );


#define GetSystemInfo __imported_name(GetSystemInfo)
extern VOID
 __imported_stdcall(GetSystemInfo)(
	      LPSYSTEM_INFO lpSystemInfo
	      );

#define SystemTimeToTzSpecificLocalTime __imported_name(SystemTimeToTzSpecificLocalTime)
extern WINBOOL
 __imported_stdcall(SystemTimeToTzSpecificLocalTime)(
				LPTIME_ZONE_INFORMATION lpTimeZoneInformation,
				LPSYSTEMTIME lpUniversalTime,
				LPSYSTEMTIME lpLocalTime
				);


#define GetTimeZoneInformation __imported_name(GetTimeZoneInformation)
extern DWORD
 __imported_stdcall(GetTimeZoneInformation)(
		       LPTIME_ZONE_INFORMATION lpTimeZoneInformation
		       );


#define SetTimeZoneInformation __imported_name(SetTimeZoneInformation)
extern WINBOOL
 __imported_stdcall(SetTimeZoneInformation)(
		       CONST TIME_ZONE_INFORMATION *lpTimeZoneInformation
		       );

#define SystemTimeToFileTime __imported_name(SystemTimeToFileTime)
extern WINBOOL
 __imported_stdcall(SystemTimeToFileTime)(
		     CONST SYSTEMTIME *lpSystemTime,
		     LPFILETIME lpFileTime
		     );


#define FileTimeToLocalFileTime __imported_name(FileTimeToLocalFileTime)
extern WINBOOL
 __imported_stdcall(FileTimeToLocalFileTime)(
			CONST FILETIME *lpFileTime,
			LPFILETIME lpLocalFileTime
			);


#define LocalFileTimeToFileTime __imported_name(LocalFileTimeToFileTime)
extern WINBOOL
 __imported_stdcall(LocalFileTimeToFileTime)(
			CONST FILETIME *lpLocalFileTime,
			LPFILETIME lpFileTime
			);


#define FileTimeToSystemTime __imported_name(FileTimeToSystemTime)
extern WINBOOL
 __imported_stdcall(FileTimeToSystemTime)(
		     CONST FILETIME *lpFileTime,
		     LPSYSTEMTIME lpSystemTime
		     );


#define CompareFileTime __imported_name(CompareFileTime)
extern LONG
 __imported_stdcall(CompareFileTime)(
		CONST FILETIME *lpFileTime1,
		CONST FILETIME *lpFileTime2
		);


#define FileTimeToDosDateTime __imported_name(FileTimeToDosDateTime)
extern WINBOOL
 __imported_stdcall(FileTimeToDosDateTime)(
		      CONST FILETIME *lpFileTime,
		      LPWORD lpFatDate,
		      LPWORD lpFatTime
		      );


#define DosDateTimeToFileTime __imported_name(DosDateTimeToFileTime)
extern WINBOOL
 __imported_stdcall(DosDateTimeToFileTime)(
		      WORD wFatDate,
		      WORD wFatTime,
		      LPFILETIME lpFileTime
		      );


#define GetTickCount __imported_name(GetTickCount)
extern DWORD
 __imported_stdcall(GetTickCount)(
	     VOID
	     );


#define SetSystemTimeAdjustment __imported_name(SetSystemTimeAdjustment)
extern WINBOOL
 __imported_stdcall(SetSystemTimeAdjustment)(
			DWORD dwTimeAdjustment,
			WINBOOL  bTimeAdjustmentDisabled
			);


#define GetSystemTimeAdjustment __imported_name(GetSystemTimeAdjustment)
extern WINBOOL
 __imported_stdcall(GetSystemTimeAdjustment)(
			PDWORD lpTimeAdjustment,
			PDWORD lpTimeIncrement,
			PWINBOOL  lpTimeAdjustmentDisabled
			);


#define CreatePipe __imported_name(CreatePipe)
extern WINBOOL
 __imported_stdcall(CreatePipe)(
	   PHANDLE hReadPipe,
	   PHANDLE hWritePipe,
	   LPSECURITY_ATTRIBUTES lpPipeAttributes,
	   DWORD nSize
	   );


#define ConnectNamedPipe __imported_name(ConnectNamedPipe)
extern WINBOOL
 __imported_stdcall(ConnectNamedPipe)(
		 HANDLE hNamedPipe,
		 LPOVERLAPPED lpOverlapped
		 );


#define DisconnectNamedPipe __imported_name(DisconnectNamedPipe)
extern WINBOOL
 __imported_stdcall(DisconnectNamedPipe)(
		    HANDLE hNamedPipe
		    );


#define SetNamedPipeHandleState __imported_name(SetNamedPipeHandleState)
extern WINBOOL
 __imported_stdcall(SetNamedPipeHandleState)(
			HANDLE hNamedPipe,
			LPDWORD lpMode,
			LPDWORD lpMaxCollectionCount,
			LPDWORD lpCollectDataTimeout
			);


#define GetNamedPipeInfo __imported_name(GetNamedPipeInfo)
extern WINBOOL
 __imported_stdcall(GetNamedPipeInfo)(
		 HANDLE hNamedPipe,
		 LPDWORD lpFlags,
		 LPDWORD lpOutBufferSize,
		 LPDWORD lpInBufferSize,
		 LPDWORD lpMaxInstances
		 );


#define PeekNamedPipe __imported_name(PeekNamedPipe)
extern WINBOOL
 __imported_stdcall(PeekNamedPipe)(
	      HANDLE hNamedPipe,
	      LPVOID lpBuffer,
	      DWORD nBufferSize,
	      LPDWORD lpBytesRead,
	      LPDWORD lpTotalBytesAvail,
	      LPDWORD lpBytesLeftThisMessage
	      );


#define TransactNamedPipe __imported_name(TransactNamedPipe)
extern WINBOOL
 __imported_stdcall(TransactNamedPipe)(
		  HANDLE hNamedPipe,
		  LPVOID lpInBuffer,
		  DWORD nInBufferSize,
		  LPVOID lpOutBuffer,
		  DWORD nOutBufferSize,
		  LPDWORD lpBytesRead,
		  LPOVERLAPPED lpOverlapped
		  );



#define GetMailslotInfo __imported_name(GetMailslotInfo)
extern WINBOOL
 __imported_stdcall(GetMailslotInfo)(
		HANDLE hMailslot,
		LPDWORD lpMaxMessageSize,
		LPDWORD lpNextSize,
		LPDWORD lpMessageCount,
		LPDWORD lpReadTimeout
		);


#define SetMailslotInfo __imported_name(SetMailslotInfo)
extern WINBOOL
 __imported_stdcall(SetMailslotInfo)(
		HANDLE hMailslot,
		DWORD lReadTimeout
		);


#define MapViewOfFile __imported_name(MapViewOfFile)
extern LPVOID
 __imported_stdcall(MapViewOfFile)(
	      HANDLE hFileMappingObject,
	      DWORD dwDesiredAccess,
	      DWORD dwFileOffsetHigh,
	      DWORD dwFileOffsetLow,
	      DWORD dwNumberOfBytesToMap
	      );


#define FlushViewOfFile __imported_name(FlushViewOfFile)
extern WINBOOL
 __imported_stdcall(FlushViewOfFile)(
		LPCVOID lpBaseAddress,
		DWORD dwNumberOfBytesToFlush
		);


#define UnmapViewOfFile __imported_name(UnmapViewOfFile)
extern WINBOOL
 __imported_stdcall(UnmapViewOfFile)(
		LPVOID lpBaseAddress
		);

#define OpenFile __imported_name(OpenFile)
extern HFILE
 __imported_stdcall(OpenFile)(
	 LPCSTR lpFileName,
	 LPOFSTRUCT lpReOpenBuff,
	 UINT uStyle
	 );


#define _lopen __imported_name(_lopen)
extern HFILE
 __imported_stdcall(_lopen)(
       LPCSTR lpPathName,
       int iReadWrite
       );


#define _lcreat __imported_name(_lcreat)
extern HFILE
 __imported_stdcall(_lcreat)(
	LPCSTR lpPathName,
	int  iAttribute
	);


#define _lread __imported_name(_lread)
extern UINT
 __imported_stdcall(_lread)(
       HFILE hFile,
       LPVOID lpBuffer,
       UINT uBytes
       );


#define _lwrite __imported_name(_lwrite)
extern UINT
 __imported_stdcall(_lwrite)(
	HFILE hFile,
	LPCSTR lpBuffer,
	UINT uBytes
	);


#define _hread __imported_name(_hread)
extern long
 __imported_stdcall(_hread)(
       HFILE hFile,
       LPVOID lpBuffer,
       long lBytes
       );


#define _hwrite __imported_name(_hwrite)
extern long
 __imported_stdcall(_hwrite)(
	HFILE hFile,
	LPCSTR lpBuffer,
	long lBytes
	);


#define _lclose __imported_name(_lclose)
extern HFILE
 __imported_stdcall(_lclose)(
	HFILE hFile
	);


#define _llseek __imported_name(_llseek)
extern LONG
 __imported_stdcall(_llseek)(
	HFILE hFile,
	LONG lOffset,
	int iOrigin
	);


#define IsTextUnicode __imported_name(IsTextUnicode)
extern WINBOOL
 __imported_stdcall(IsTextUnicode)(
	      CONST LPVOID lpBuffer,
	      int cb,
	      LPINT lpi
	      );


#define TlsAlloc __imported_name(TlsAlloc)
extern DWORD
 __imported_stdcall(TlsAlloc)(
	 VOID
	 );

#define TlsGetValue __imported_name(TlsGetValue)
extern LPVOID
 __imported_stdcall(TlsGetValue)(
	    DWORD dwTlsIndex
	    );


#define TlsSetValue __imported_name(TlsSetValue)
extern WINBOOL
 __imported_stdcall(TlsSetValue)(
	    DWORD dwTlsIndex,
	    LPVOID lpTlsValue
	    );


#define TlsFree __imported_name(TlsFree)
extern WINBOOL
 __imported_stdcall(TlsFree)(
	DWORD dwTlsIndex
	);

#define SleepEx __imported_name(SleepEx)
extern DWORD
 __imported_stdcall(SleepEx)(
	DWORD dwMilliseconds,
	WINBOOL bAlertable
	);


#define WaitForSingleObjectEx __imported_name(WaitForSingleObjectEx)
extern DWORD
 __imported_stdcall(WaitForSingleObjectEx)(
		      HANDLE hHandle,
		      DWORD dwMilliseconds,
		      WINBOOL bAlertable
		      );


#define WaitForMultipleObjectsEx __imported_name(WaitForMultipleObjectsEx)
extern DWORD
 __imported_stdcall(WaitForMultipleObjectsEx)(
			 DWORD nCount,
			 CONST HANDLE *lpHandles,
			 WINBOOL bWaitAll,
			 DWORD dwMilliseconds,
			 WINBOOL bAlertable
			 );


#define ReadFileEx __imported_name(ReadFileEx)
extern WINBOOL
 __imported_stdcall(ReadFileEx)(
	   HANDLE hFile,
	   LPVOID lpBuffer,
	   DWORD nNumberOfBytesToRead,
	   LPOVERLAPPED lpOverlapped,
	   LPOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
	   );


#define WriteFileEx __imported_name(WriteFileEx)
extern WINBOOL
 __imported_stdcall(WriteFileEx)(
	    HANDLE hFile,
	    LPCVOID lpBuffer,
	    DWORD nNumberOfBytesToWrite,
	    LPOVERLAPPED lpOverlapped,
	    LPOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
	    );


#define BackupRead __imported_name(BackupRead)
extern WINBOOL
 __imported_stdcall(BackupRead)(
	   HANDLE hFile,
	   LPBYTE lpBuffer,
	   DWORD nNumberOfBytesToRead,
	   LPDWORD lpNumberOfBytesRead,
	   WINBOOL bAbort,
	   WINBOOL bProcessSecurity,
	   LPVOID *lpContext
	   );


#define BackupSeek __imported_name(BackupSeek)
extern WINBOOL
 __imported_stdcall(BackupSeek)(
	   HANDLE hFile,
	   DWORD  dwLowBytesToSeek,
	   DWORD  dwHighBytesToSeek,
	   LPDWORD lpdwLowByteSeeked,
	   LPDWORD lpdwHighByteSeeked,
	   LPVOID *lpContext
	   );


#define BackupWrite __imported_name(BackupWrite)
extern WINBOOL
 __imported_stdcall(BackupWrite)(
	    HANDLE hFile,
	    LPBYTE lpBuffer,
	    DWORD nNumberOfBytesToWrite,
	    LPDWORD lpNumberOfBytesWritten,
	    WINBOOL bAbort,
	    WINBOOL bProcessSecurity,
	    LPVOID *lpContext
	    );

#define SetProcessShutdownParameters __imported_name(SetProcessShutdownParameters)
extern WINBOOL
 __imported_stdcall(SetProcessShutdownParameters)(
			     DWORD dwLevel,
			     DWORD dwFlags
			     );


#define GetProcessShutdownParameters __imported_name(GetProcessShutdownParameters)
extern WINBOOL
 __imported_stdcall(GetProcessShutdownParameters)(
			     LPDWORD lpdwLevel,
			     LPDWORD lpdwFlags
			     );


#define SetFileApisToOEM __imported_name(SetFileApisToOEM)
extern VOID
 __imported_stdcall(SetFileApisToOEM)( VOID );


#define SetFileApisToANSI __imported_name(SetFileApisToANSI)
extern VOID
 __imported_stdcall(SetFileApisToANSI)( VOID );


#define AreFileApisANSI __imported_name(AreFileApisANSI)
extern WINBOOL
 __imported_stdcall(AreFileApisANSI)( VOID );

#define CloseEventLog __imported_name(CloseEventLog)
extern WINBOOL
 __imported_stdcall(CloseEventLog)(
	       HANDLE hEventLog
		);


#define DeregisterEventSource __imported_name(DeregisterEventSource)
extern WINBOOL
 __imported_stdcall(DeregisterEventSource)(
		       HANDLE hEventLog
			);


#define NotifyChangeEventLog __imported_name(NotifyChangeEventLog)
extern WINBOOL
 __imported_stdcall(NotifyChangeEventLog)(
		      HANDLE hEventLog,
		      HANDLE hEvent
		       );


#define GetNumberOfEventLogRecords __imported_name(GetNumberOfEventLogRecords)
extern WINBOOL
 __imported_stdcall(GetNumberOfEventLogRecords)(
			    HANDLE hEventLog,
			    PDWORD NumberOfRecords
			     );


#define GetOldestEventLogRecord __imported_name(GetOldestEventLogRecord)
extern WINBOOL
 __imported_stdcall(GetOldestEventLogRecord)(
			 HANDLE hEventLog,
			 PDWORD OldestRecord
			  );

#define DuplicateToken __imported_name(DuplicateToken)
extern WINBOOL
 __imported_stdcall(DuplicateToken)(
	       HANDLE ExistingTokenHandle,
	       SECURITY_IMPERSONATION_LEVEL ImpersonationLevel,
	       PHANDLE DuplicateTokenHandle
	       );


#define GetKernelObjectSecurity __imported_name(GetKernelObjectSecurity)
extern WINBOOL
 __imported_stdcall(GetKernelObjectSecurity)(
			 HANDLE Handle,
			 SECURITY_INFORMATION RequestedInformation,
			 PSECURITY_DESCRIPTOR pSecurityDescriptor,
			 DWORD nLength,
			 LPDWORD lpnLengthNeeded
			  );


#define ImpersonateNamedPipeClient __imported_name(ImpersonateNamedPipeClient)
extern WINBOOL
 __imported_stdcall(ImpersonateNamedPipeClient)(
			   HANDLE hNamedPipe
			   );


#define ImpersonateSelf __imported_name(ImpersonateSelf)
extern WINBOOL
 __imported_stdcall(ImpersonateSelf)(
		SECURITY_IMPERSONATION_LEVEL ImpersonationLevel
		);



#define RevertToSelf __imported_name(RevertToSelf)
extern WINBOOL
 __imported_stdcall(RevertToSelf)(
	      VOID
	       );


#define SetThreadToken __imported_name(SetThreadToken)
extern WINBOOL
 __imported_stdcall(SetThreadToken)(
		PHANDLE Thread,
		HANDLE Token
		 );


#define AccessCheck __imported_name(AccessCheck)
extern WINBOOL
 __imported_stdcall(AccessCheck)(
	     PSECURITY_DESCRIPTOR pSecurityDescriptor,
	     HANDLE ClientToken,
	     DWORD DesiredAccess,
	     PGENERIC_MAPPING GenericMapping,
	     PPRIVILEGE_SET PrivilegeSet,
	     LPDWORD PrivilegeSetLength,
	     LPDWORD GrantedAccess,
	     LPBOOL AccessStatus
	      );



#define OpenProcessToken __imported_name(OpenProcessToken)
extern WINBOOL
 __imported_stdcall(OpenProcessToken)(
		  HANDLE ProcessHandle,
		  DWORD DesiredAccess,
		  PHANDLE TokenHandle
		   );



#define OpenThreadToken __imported_name(OpenThreadToken)
extern WINBOOL
 __imported_stdcall(OpenThreadToken)(
		 HANDLE ThreadHandle,
		 DWORD DesiredAccess,
		 WINBOOL OpenAsSelf,
		 PHANDLE TokenHandle
		  );



#define GetTokenInformation __imported_name(GetTokenInformation)
extern WINBOOL
 __imported_stdcall(GetTokenInformation)(
		     HANDLE TokenHandle,
		     TOKEN_INFORMATION_CLASS TokenInformationClass,
		     LPVOID TokenInformation,
		     DWORD TokenInformationLength,
		     PDWORD ReturnLength
		      );



#define SetTokenInformation __imported_name(SetTokenInformation)
extern WINBOOL
 __imported_stdcall(SetTokenInformation)(
		     HANDLE TokenHandle,
		     TOKEN_INFORMATION_CLASS TokenInformationClass,
		     LPVOID TokenInformation,
		     DWORD TokenInformationLength
		      );



#define AdjustTokenPrivileges __imported_name(AdjustTokenPrivileges)
extern WINBOOL
 __imported_stdcall(AdjustTokenPrivileges)(
		       HANDLE TokenHandle,
		       WINBOOL DisableAllPrivileges,
		       PTOKEN_PRIVILEGES NewState,
		       DWORD BufferLength,
		       PTOKEN_PRIVILEGES PreviousState,
		       PDWORD ReturnLength
			);



#define AdjustTokenGroups __imported_name(AdjustTokenGroups)
extern WINBOOL
 __imported_stdcall(AdjustTokenGroups)(
		   HANDLE TokenHandle,
		   WINBOOL ResetToDefault,
		   PTOKEN_GROUPS NewState,
		   DWORD BufferLength,
		   PTOKEN_GROUPS PreviousState,
		   PDWORD ReturnLength
		    );



#define PrivilegeCheck __imported_name(PrivilegeCheck)
extern WINBOOL
 __imported_stdcall(PrivilegeCheck)(
		HANDLE ClientToken,
		PPRIVILEGE_SET RequiredPrivileges,
		LPBOOL pfResult
		 );



#define IsValidSid __imported_name(IsValidSid)
extern WINBOOL
 __imported_stdcall(IsValidSid)(
	    PSID pSid
	     );



#define EqualSid __imported_name(EqualSid)
extern WINBOOL
 __imported_stdcall(EqualSid)(
	  PSID pSid1,
	  PSID pSid2
	   );



#define EqualPrefixSid __imported_name(EqualPrefixSid)
extern WINBOOL
 __imported_stdcall(EqualPrefixSid)(
		PSID pSid1,
		PSID pSid2
		 );



#define GetSidLengthRequired __imported_name(GetSidLengthRequired)
extern DWORD
 __imported_stdcall(GetSidLengthRequired)(
		      UCHAR nSubAuthorityCount
		       );



#define AllocateAndInitializeSid __imported_name(AllocateAndInitializeSid)
extern WINBOOL
 __imported_stdcall(AllocateAndInitializeSid)(
			  PSID_IDENTIFIER_AUTHORITY pIdentifierAuthority,
			  BYTE nSubAuthorityCount,
			  DWORD nSubAuthority0,
			  DWORD nSubAuthority1,
			  DWORD nSubAuthority2,
			  DWORD nSubAuthority3,
			  DWORD nSubAuthority4,
			  DWORD nSubAuthority5,
			  DWORD nSubAuthority6,
			  DWORD nSubAuthority7,
			  PSID *pSid
			   );


#define FreeSid __imported_name(FreeSid)
extern PVOID
 __imported_stdcall(FreeSid)(
	PSID pSid
	);


#define InitializeSid __imported_name(InitializeSid)
extern WINBOOL
 __imported_stdcall(InitializeSid)(
	       PSID Sid,
	       PSID_IDENTIFIER_AUTHORITY pIdentifierAuthority,
	       BYTE nSubAuthorityCount
		);



#define GetSidIdentifierAuthority __imported_name(GetSidIdentifierAuthority)
extern PSID_IDENTIFIER_AUTHORITY
 __imported_stdcall(GetSidIdentifierAuthority)(
			   PSID pSid
			    );



#define GetSidSubAuthority __imported_name(GetSidSubAuthority)
extern PDWORD
 __imported_stdcall(GetSidSubAuthority)(
		    PSID pSid,
		    DWORD nSubAuthority
		     );



#define GetSidSubAuthorityCount __imported_name(GetSidSubAuthorityCount)
extern PUCHAR
 __imported_stdcall(GetSidSubAuthorityCount)(
			 PSID pSid
			  );



#define GetLengthSid __imported_name(GetLengthSid)
extern DWORD
 __imported_stdcall(GetLengthSid)(
	      PSID pSid
	       );



#define CopySid __imported_name(CopySid)
extern WINBOOL
 __imported_stdcall(CopySid)(
	 DWORD nDestinationSidLength,
	 PSID pDestinationSid,
	 PSID pSourceSid
	  );



#define AreAllAccessesGranted __imported_name(AreAllAccessesGranted)
extern WINBOOL
 __imported_stdcall(AreAllAccessesGranted)(
		       DWORD GrantedAccess,
		       DWORD DesiredAccess
			);



#define AreAnyAccessesGranted __imported_name(AreAnyAccessesGranted)
extern WINBOOL
 __imported_stdcall(AreAnyAccessesGranted)(
		       DWORD GrantedAccess,
		       DWORD DesiredAccess
			);



#define MapGenericMask __imported_name(MapGenericMask)
extern VOID
 __imported_stdcall(MapGenericMask)(
		PDWORD AccessMask,
		PGENERIC_MAPPING GenericMapping
		 );



#define IsValidAcl __imported_name(IsValidAcl)
extern WINBOOL
 __imported_stdcall(IsValidAcl)(
	    PACL pAcl
	     );



#define InitializeAcl __imported_name(InitializeAcl)
extern WINBOOL
 __imported_stdcall(InitializeAcl)(
	       PACL pAcl,
	       DWORD nAclLength,
	       DWORD dwAclRevision
		);



#define GetAclInformation __imported_name(GetAclInformation)
extern WINBOOL
 __imported_stdcall(GetAclInformation)(
		   PACL pAcl,
		   LPVOID pAclInformation,
		   DWORD nAclInformationLength,
		   ACL_INFORMATION_CLASS dwAclInformationClass
		    );



#define SetAclInformation __imported_name(SetAclInformation)
extern WINBOOL
 __imported_stdcall(SetAclInformation)(
		   PACL pAcl,
		   LPVOID pAclInformation,
		   DWORD nAclInformationLength,
		   ACL_INFORMATION_CLASS dwAclInformationClass
		    );



#define AddAce __imported_name(AddAce)
extern WINBOOL
 __imported_stdcall(AddAce)(
	PACL pAcl,
	DWORD dwAceRevision,
	DWORD dwStartingAceIndex,
	LPVOID pAceList,
	DWORD nAceListLength
	 );



#define DeleteAce __imported_name(DeleteAce)
extern WINBOOL
 __imported_stdcall(DeleteAce)(
	   PACL pAcl,
	   DWORD dwAceIndex
	    );



#define GetAce __imported_name(GetAce)
extern WINBOOL
 __imported_stdcall(GetAce)(
	PACL pAcl,
	DWORD dwAceIndex,
	LPVOID *pAce
	 );



#define AddAccessAllowedAce __imported_name(AddAccessAllowedAce)
extern WINBOOL
 __imported_stdcall(AddAccessAllowedAce)(
		     PACL pAcl,
		     DWORD dwAceRevision,
		     DWORD AccessMask,
		     PSID pSid
		      );



#define AddAccessDeniedAce __imported_name(AddAccessDeniedAce)
extern WINBOOL
 __imported_stdcall(AddAccessDeniedAce)(
		    PACL pAcl,
		    DWORD dwAceRevision,
		    DWORD AccessMask,
		    PSID pSid
		     );



#define AddAuditAccessAce __imported_name(AddAuditAccessAce)
extern WINBOOL
 __imported_stdcall(AddAuditAccessAce)(
		  PACL pAcl,
		  DWORD dwAceRevision,
		  DWORD dwAccessMask,
		  PSID pSid,
		  WINBOOL bAuditSuccess,
		  WINBOOL bAuditFailure
		  );



#define FindFirstFreeAce __imported_name(FindFirstFreeAce)
extern WINBOOL
 __imported_stdcall(FindFirstFreeAce)(
		  PACL pAcl,
		  LPVOID *pAce
		   );



#define InitializeSecurityDescriptor __imported_name(InitializeSecurityDescriptor)
extern WINBOOL
 __imported_stdcall(InitializeSecurityDescriptor)(
			      PSECURITY_DESCRIPTOR pSecurityDescriptor,
			      DWORD dwRevision
			       );



#define IsValidSecurityDescriptor __imported_name(IsValidSecurityDescriptor)
extern WINBOOL
 __imported_stdcall(IsValidSecurityDescriptor)(
			   PSECURITY_DESCRIPTOR pSecurityDescriptor
			    );



#define GetSecurityDescriptorLength __imported_name(GetSecurityDescriptorLength)
extern DWORD
 __imported_stdcall(GetSecurityDescriptorLength)(
			     PSECURITY_DESCRIPTOR pSecurityDescriptor
			      );



#define GetSecurityDescriptorControl __imported_name(GetSecurityDescriptorControl)
extern WINBOOL
 __imported_stdcall(GetSecurityDescriptorControl)(
			      PSECURITY_DESCRIPTOR pSecurityDescriptor,
			      PSECURITY_DESCRIPTOR_CONTROL pControl,
			      LPDWORD lpdwRevision
			       );



#define SetSecurityDescriptorDacl __imported_name(SetSecurityDescriptorDacl)
extern WINBOOL
 __imported_stdcall(SetSecurityDescriptorDacl)(
			   PSECURITY_DESCRIPTOR pSecurityDescriptor,
			   WINBOOL bDaclPresent,
			   PACL pDacl,
			   WINBOOL bDaclDefaulted
			    );



#define GetSecurityDescriptorDacl __imported_name(GetSecurityDescriptorDacl)
extern WINBOOL
 __imported_stdcall(GetSecurityDescriptorDacl)(
			   PSECURITY_DESCRIPTOR pSecurityDescriptor,
			   LPBOOL lpbDaclPresent,
			   PACL *pDacl,
			   LPBOOL lpbDaclDefaulted
			    );



#define SetSecurityDescriptorSacl __imported_name(SetSecurityDescriptorSacl)
extern WINBOOL
 __imported_stdcall(SetSecurityDescriptorSacl)(
			   PSECURITY_DESCRIPTOR pSecurityDescriptor,
			   WINBOOL bSaclPresent,
			   PACL pSacl,
			   WINBOOL bSaclDefaulted
			    );



#define GetSecurityDescriptorSacl __imported_name(GetSecurityDescriptorSacl)
extern WINBOOL
 __imported_stdcall(GetSecurityDescriptorSacl)(
			   PSECURITY_DESCRIPTOR pSecurityDescriptor,
			   LPBOOL lpbSaclPresent,
			   PACL *pSacl,
			   LPBOOL lpbSaclDefaulted
			    );



#define SetSecurityDescriptorOwner __imported_name(SetSecurityDescriptorOwner)
extern WINBOOL
 __imported_stdcall(SetSecurityDescriptorOwner)(
			    PSECURITY_DESCRIPTOR pSecurityDescriptor,
			    PSID pOwner,
			    WINBOOL bOwnerDefaulted
			     );



#define GetSecurityDescriptorOwner __imported_name(GetSecurityDescriptorOwner)
extern WINBOOL
 __imported_stdcall(GetSecurityDescriptorOwner)(
			    PSECURITY_DESCRIPTOR pSecurityDescriptor,
			    PSID *pOwner,
			    LPBOOL lpbOwnerDefaulted
			     );



#define SetSecurityDescriptorGroup __imported_name(SetSecurityDescriptorGroup)
extern WINBOOL
 __imported_stdcall(SetSecurityDescriptorGroup)(
			    PSECURITY_DESCRIPTOR pSecurityDescriptor,
			    PSID pGroup,
			    WINBOOL bGroupDefaulted
			     );



#define GetSecurityDescriptorGroup __imported_name(GetSecurityDescriptorGroup)
extern WINBOOL
 __imported_stdcall(GetSecurityDescriptorGroup)(
			    PSECURITY_DESCRIPTOR pSecurityDescriptor,
			    PSID *pGroup,
			    LPBOOL lpbGroupDefaulted
			     );



#define CreatePrivateObjectSecurity __imported_name(CreatePrivateObjectSecurity)
extern WINBOOL
 __imported_stdcall(CreatePrivateObjectSecurity)(
			     PSECURITY_DESCRIPTOR ParentDescriptor,
			     PSECURITY_DESCRIPTOR CreatorDescriptor,
			     PSECURITY_DESCRIPTOR * NewDescriptor,
			     WINBOOL IsDirectoryObject,
			     HANDLE Token,
			     PGENERIC_MAPPING GenericMapping
			      );



#define SetPrivateObjectSecurity __imported_name(SetPrivateObjectSecurity)
extern WINBOOL
 __imported_stdcall(SetPrivateObjectSecurity)(
			  SECURITY_INFORMATION SecurityInformation,
			  PSECURITY_DESCRIPTOR ModificationDescriptor,
			  PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
			  PGENERIC_MAPPING GenericMapping,
			  HANDLE Token
			   );



#define GetPrivateObjectSecurity __imported_name(GetPrivateObjectSecurity)
extern WINBOOL
 __imported_stdcall(GetPrivateObjectSecurity)(
			  PSECURITY_DESCRIPTOR ObjectDescriptor,
			  SECURITY_INFORMATION SecurityInformation,
			  PSECURITY_DESCRIPTOR ResultantDescriptor,
			  DWORD DescriptorLength,
			  PDWORD ReturnLength
			   );



#define DestroyPrivateObjectSecurity __imported_name(DestroyPrivateObjectSecurity)
extern WINBOOL
 __imported_stdcall(DestroyPrivateObjectSecurity)(
			      PSECURITY_DESCRIPTOR * ObjectDescriptor
			       );



#define MakeSelfRelativeSD __imported_name(MakeSelfRelativeSD)
extern WINBOOL
 __imported_stdcall(MakeSelfRelativeSD)(
		    PSECURITY_DESCRIPTOR pAbsoluteSecurityDescriptor,
		    PSECURITY_DESCRIPTOR pSelfRelativeSecurityDescriptor,
		    LPDWORD lpdwBufferLength
		     );



#define MakeAbsoluteSD __imported_name(MakeAbsoluteSD)
extern WINBOOL
 __imported_stdcall(MakeAbsoluteSD)(
		PSECURITY_DESCRIPTOR pSelfRelativeSecurityDescriptor,
		PSECURITY_DESCRIPTOR pAbsoluteSecurityDescriptor,
		LPDWORD lpdwAbsoluteSecurityDescriptorSize,
		PACL pDacl,
		LPDWORD lpdwDaclSize,
		PACL pSacl,
		LPDWORD lpdwSaclSize,
		PSID pOwner,
		LPDWORD lpdwOwnerSize,
		PSID pPrimaryGroup,
		LPDWORD lpdwPrimaryGroupSize
		 );



#define SetKernelObjectSecurity __imported_name(SetKernelObjectSecurity)
extern WINBOOL
 __imported_stdcall(SetKernelObjectSecurity)(
			 HANDLE Handle,
			 SECURITY_INFORMATION SecurityInformation,
			 PSECURITY_DESCRIPTOR SecurityDescriptor
			  );


#define FindNextChangeNotification __imported_name(FindNextChangeNotification)
extern WINBOOL
 __imported_stdcall(FindNextChangeNotification)(
			   HANDLE hChangeHandle
			   );


#define FindCloseChangeNotification __imported_name(FindCloseChangeNotification)
extern WINBOOL
 __imported_stdcall(FindCloseChangeNotification)(
			    HANDLE hChangeHandle
			    );


#define VirtualLock __imported_name(VirtualLock)
extern WINBOOL
 __imported_stdcall(VirtualLock)(
	    LPVOID lpAddress,
	    DWORD dwSize
	    );


#define VirtualUnlock __imported_name(VirtualUnlock)
extern WINBOOL
 __imported_stdcall(VirtualUnlock)(
	      LPVOID lpAddress,
	      DWORD dwSize
	      );


#define MapViewOfFileEx __imported_name(MapViewOfFileEx)
extern LPVOID
 __imported_stdcall(MapViewOfFileEx)(
		HANDLE hFileMappingObject,
		DWORD dwDesiredAccess,
		DWORD dwFileOffsetHigh,
		DWORD dwFileOffsetLow,
		DWORD dwNumberOfBytesToMap,
		LPVOID lpBaseAddress
		);


#define SetPriorityClass __imported_name(SetPriorityClass)
extern WINBOOL
 __imported_stdcall(SetPriorityClass)(
		 HANDLE hProcess,
		 DWORD dwPriorityClass
		 );


#define GetPriorityClass __imported_name(GetPriorityClass)
extern DWORD
 __imported_stdcall(GetPriorityClass)(
		 HANDLE hProcess
		 );


#define IsBadReadPtr __imported_name(IsBadReadPtr)
extern WINBOOL
 __imported_stdcall(IsBadReadPtr)(
	     CONST VOID *lp,
	     UINT ucb
	     );


#define IsBadWritePtr __imported_name(IsBadWritePtr)
extern WINBOOL
 __imported_stdcall(IsBadWritePtr)(
	      LPVOID lp,
	      UINT ucb
	      );


#define IsBadHugeReadPtr __imported_name(IsBadHugeReadPtr)
extern WINBOOL
 __imported_stdcall(IsBadHugeReadPtr)(
		 CONST VOID *lp,
		 UINT ucb
		 );


#define IsBadHugeWritePtr __imported_name(IsBadHugeWritePtr)
extern WINBOOL
 __imported_stdcall(IsBadHugeWritePtr)(
		  LPVOID lp,
		  UINT ucb
		  );


#define IsBadCodePtr __imported_name(IsBadCodePtr)
extern WINBOOL
 __imported_stdcall(IsBadCodePtr)(
	     FARPROC lpfn
	     );

#define AllocateLocallyUniqueId __imported_name(AllocateLocallyUniqueId)
extern WINBOOL
 __imported_stdcall(AllocateLocallyUniqueId)(
			PLUID Luid
			);


#define QueryPerformanceCounter __imported_name(QueryPerformanceCounter)
extern WINBOOL
 __imported_stdcall(QueryPerformanceCounter)(
			LARGE_INTEGER *lpPerformanceCount
			);


#define QueryPerformanceFrequency __imported_name(QueryPerformanceFrequency)
extern WINBOOL
 __imported_stdcall(QueryPerformanceFrequency)(
			  LARGE_INTEGER *lpFrequency
			  );

#define MoveMemory __imported_name(MoveMemory)
extern VOID
 __imported_stdcall(MoveMemory)(
	    PVOID Destination,
	    CONST VOID *Source,
	    DWORD Length
	     );

#define FillMemory __imported_name(FillMemory)
extern VOID
 __imported_stdcall(FillMemory)(
	    PVOID Destination,
	    DWORD Length,
	    BYTE  Fill
	     );

#define ZeroMemory __imported_name(ZeroMemory)
extern VOID
 __imported_stdcall(ZeroMemory)(
	    PVOID Destination,
	    DWORD Length
	     );

#ifdef WIN95
#define ActivateKeyboardLayout __imported_name(ActivateKeyboardLayout)
extern HKL
 __imported_stdcall(ActivateKeyboardLayout)(
		       HKL hkl,
		       UINT Flags);
#else
#define ActivateKeyboardLayout __imported_name(ActivateKeyboardLayout)
extern WINBOOL
 __imported_stdcall(ActivateKeyboardLayout)(
		       HKL hkl,
		       UINT Flags);
#endif /* WIN95 */

 
#define ToUnicodeEx __imported_name(ToUnicodeEx)
extern int
 __imported_stdcall(ToUnicodeEx)(
	    UINT wVirtKey,
	    UINT wScanCode,
	    PBYTE lpKeyState,
	    LPWSTR pwszBuff,
	    int cchBuff,
	    UINT wFlags,
	    HKL dwhkl);

 
#define UnloadKeyboardLayout __imported_name(UnloadKeyboardLayout)
extern WINBOOL
 __imported_stdcall(UnloadKeyboardLayout)(
		     HKL hkl);

 
#define GetKeyboardLayoutList __imported_name(GetKeyboardLayoutList)
extern int
 __imported_stdcall(GetKeyboardLayoutList)(
		      int nBuff,
		      HKL *lpList);

 
#define GetKeyboardLayout __imported_name(GetKeyboardLayout)
extern HKL
 __imported_stdcall(GetKeyboardLayout)(
		  DWORD dwLayout
		  );

 
#define OpenInputDesktop __imported_name(OpenInputDesktop)
extern HDESK
 __imported_stdcall(OpenInputDesktop)(
		 DWORD dwFlags,
		 WINBOOL fInherit,
		 DWORD dwDesiredAccess);

#define EnumDesktopWindows __imported_name(EnumDesktopWindows)
extern WINBOOL
 __imported_stdcall(EnumDesktopWindows)(
		   HDESK hDesktop,
		   ENUMWINDOWSPROC lpfn,
		   LPARAM lParam);

 
#define SwitchDesktop __imported_name(SwitchDesktop)
extern WINBOOL
 __imported_stdcall(SwitchDesktop)(
	      HDESK hDesktop);

 
#define SetThreadDesktop __imported_name(SetThreadDesktop)
extern WINBOOL
 __imported_stdcall(SetThreadDesktop)(
		 HDESK hDesktop);

 
#define CloseDesktop __imported_name(CloseDesktop)
extern WINBOOL
 __imported_stdcall(CloseDesktop)(
	     HDESK hDesktop);

 
#define GetThreadDesktop __imported_name(GetThreadDesktop)
extern HDESK
 __imported_stdcall(GetThreadDesktop)(
		 DWORD dwThreadId);

 
#define CloseWindowStation __imported_name(CloseWindowStation)
extern WINBOOL
 __imported_stdcall(CloseWindowStation)(
		   HWINSTA hWinSta);

 
#define SetProcessWindowStation __imported_name(SetProcessWindowStation)
extern WINBOOL
 __imported_stdcall(SetProcessWindowStation)(
			HWINSTA hWinSta);

 
#define GetProcessWindowStation __imported_name(GetProcessWindowStation)
extern HWINSTA
 __imported_stdcall(GetProcessWindowStation)(
			VOID);

 
#define SetUserObjectSecurity __imported_name(SetUserObjectSecurity)
extern WINBOOL
 __imported_stdcall(SetUserObjectSecurity)(
		      HANDLE hObj,
		      PSECURITY_INFORMATION pSIRequested,
		      PSECURITY_DESCRIPTOR pSID);

 
#define GetUserObjectSecurity __imported_name(GetUserObjectSecurity)
extern WINBOOL
 __imported_stdcall(GetUserObjectSecurity)(
		      HANDLE hObj,
		      PSECURITY_INFORMATION pSIRequested,
		      PSECURITY_DESCRIPTOR pSID,
		      DWORD nLength,
		      LPDWORD lpnLengthNeeded);

 
#define TranslateMessage __imported_name(TranslateMessage)
extern WINBOOL
 __imported_stdcall(TranslateMessage)(
		 CONST MSG *lpMsg);

#define SetMessageQueue __imported_name(SetMessageQueue)
extern WINBOOL
 __imported_stdcall(SetMessageQueue)(
		int cMessagesMax);

#define RegisterHotKey __imported_name(RegisterHotKey)
extern WINBOOL
 __imported_stdcall(RegisterHotKey)(
	       HWND hWnd ,
	       int anID,
	       UINT fsModifiers,
	       UINT vk);

 
#define UnregisterHotKey __imported_name(UnregisterHotKey)
extern WINBOOL
 __imported_stdcall(UnregisterHotKey)(
		 HWND hWnd,
		 int anID);

 
#define ExitWindowsEx __imported_name(ExitWindowsEx)
extern WINBOOL
 __imported_stdcall(ExitWindowsEx)(
	      UINT uFlags,
	      DWORD dwReserved);

 
#define SwapMouseButton __imported_name(SwapMouseButton)
extern WINBOOL
 __imported_stdcall(SwapMouseButton)(
		WINBOOL fSwap);

 
#define GetMessagePos __imported_name(GetMessagePos)
extern DWORD
 __imported_stdcall(GetMessagePos)(
	      VOID);

 
#define GetMessageTime __imported_name(GetMessageTime)
extern LONG
 __imported_stdcall(GetMessageTime)(
	       VOID);

 
#define GetMessageExtraInfo __imported_name(GetMessageExtraInfo)
extern LONG
 __imported_stdcall(GetMessageExtraInfo)(
		    VOID);

 
#define SetMessageExtraInfo __imported_name(SetMessageExtraInfo)
extern LPARAM
 __imported_stdcall(SetMessageExtraInfo)(
		    LPARAM lParam);

 
#define BroadcastSystemMessage __imported_name(BroadcastSystemMessage)
extern long  
   __imported_stdcall(BroadcastSystemMessage)(
		       DWORD, 
		       LPDWORD, 
		       UINT, 
		       WPARAM, 
		       LPARAM);

#define AttachThreadInput __imported_name(AttachThreadInput)
extern WINBOOL
 __imported_stdcall(AttachThreadInput)(
		  DWORD idAttach,
		  DWORD idAttachTo,
		  WINBOOL fAttach);

 
#define ReplyMessage __imported_name(ReplyMessage)
extern WINBOOL
 __imported_stdcall(ReplyMessage)(
	     LRESULT lResult);

 
#define WaitMessage __imported_name(WaitMessage)
extern WINBOOL
 __imported_stdcall(WaitMessage)(
	    VOID);

 
#define WaitForInputIdle __imported_name(WaitForInputIdle)
extern DWORD
 __imported_stdcall(WaitForInputIdle)(
		 HANDLE hProcess,
		 DWORD dwMilliseconds);

 
#define PostQuitMessage __imported_name(PostQuitMessage)
extern VOID
 __imported_stdcall(PostQuitMessage)(
		int nExitCode);

#define InSendMessage __imported_name(InSendMessage)
extern WINBOOL
 __imported_stdcall(InSendMessage)(
	      VOID);

 
#define GetDoubleClickTime __imported_name(GetDoubleClickTime)
extern UINT
 __imported_stdcall(GetDoubleClickTime)(
		   VOID);

 
#define SetDoubleClickTime __imported_name(SetDoubleClickTime)
extern WINBOOL
 __imported_stdcall(SetDoubleClickTime)(
		   UINT);

 
#define IsWindow __imported_name(IsWindow)
extern WINBOOL
 __imported_stdcall(IsWindow)(
	 HWND hWnd);

 
#define IsMenu __imported_name(IsMenu)
extern WINBOOL
 __imported_stdcall(IsMenu)(
       HMENU hMenu);

 
#define IsChild __imported_name(IsChild)
extern WINBOOL
 __imported_stdcall(IsChild)(
	HWND hWndParent,
	HWND hWnd);

 
#define DestroyWindow __imported_name(DestroyWindow)
extern WINBOOL
 __imported_stdcall(DestroyWindow)(
	      HWND hWnd);

 
#define ShowWindow __imported_name(ShowWindow)
extern WINBOOL
 __imported_stdcall(ShowWindow)(
	   HWND hWnd,
	   int nCmdShow);

 
#define ShowWindowAsync __imported_name(ShowWindowAsync)
extern WINBOOL
 __imported_stdcall(ShowWindowAsync)(
		HWND hWnd,
		int nCmdShow);

 
#define FlashWindow __imported_name(FlashWindow)
extern WINBOOL
 __imported_stdcall(FlashWindow)(
	    HWND hWnd,
	    WINBOOL bInvert);

 
#define ShowOwnedPopups __imported_name(ShowOwnedPopups)
extern WINBOOL
 __imported_stdcall(ShowOwnedPopups)(
		HWND hWnd,
		WINBOOL fShow);

 
#define OpenIcon __imported_name(OpenIcon)
extern WINBOOL
 __imported_stdcall(OpenIcon)(
	 HWND hWnd);

 
#define CloseWindow __imported_name(CloseWindow)
extern WINBOOL
 __imported_stdcall(CloseWindow)(
	    HWND hWnd);

 
#define MoveWindow __imported_name(MoveWindow)
extern WINBOOL
 __imported_stdcall(MoveWindow)(
	   HWND hWnd,
	   int X,
	   int Y,
	   int nWidth,
	   int nHeight,
	   WINBOOL bRepaint);

 
#define SetWindowPos __imported_name(SetWindowPos)
extern WINBOOL
 __imported_stdcall(SetWindowPos)(
	     HWND hWnd,
	     HWND hWndInsertAfter ,
	     int X,
	     int Y,
	     int cx,
	     int cy,
	     UINT uFlags);

 
#define GetWindowPlacement __imported_name(GetWindowPlacement)
extern WINBOOL
 __imported_stdcall(GetWindowPlacement)(
		   HWND hWnd,
		   WINDOWPLACEMENT *lpwndpl);

 
#define SetWindowPlacement __imported_name(SetWindowPlacement)
extern WINBOOL
 __imported_stdcall(SetWindowPlacement)(
		   HWND hWnd,
		   CONST WINDOWPLACEMENT *lpwndpl);

 
#define BeginDeferWindowPos __imported_name(BeginDeferWindowPos)
extern HDWP
 __imported_stdcall(BeginDeferWindowPos)(
		    int nNumWindows);

 
#define DeferWindowPos __imported_name(DeferWindowPos)
extern HDWP
 __imported_stdcall(DeferWindowPos)(
	       HDWP hWinPosInfo,
	       HWND hWnd,
	       HWND hWndInsertAfter,
	       int x,
	       int y,
	       int cx,
	       int cy,
	       UINT uFlags);

 
#define EndDeferWindowPos __imported_name(EndDeferWindowPos)
extern WINBOOL
 __imported_stdcall(EndDeferWindowPos)(
		  HDWP hWinPosInfo);

 
#define IsWindowVisible __imported_name(IsWindowVisible)
extern WINBOOL
 __imported_stdcall(IsWindowVisible)(
		HWND hWnd);

 
#define IsIconic __imported_name(IsIconic)
extern WINBOOL
 __imported_stdcall(IsIconic)(
	 HWND hWnd);

 
#define AnyPopup __imported_name(AnyPopup)
extern WINBOOL
 __imported_stdcall(AnyPopup)(
	 VOID);

 
#define BringWindowToTop __imported_name(BringWindowToTop)
extern WINBOOL
 __imported_stdcall(BringWindowToTop)(
		 HWND hWnd);

 
#define IsZoomed __imported_name(IsZoomed)
extern WINBOOL
 __imported_stdcall(IsZoomed)(
	 HWND hWnd);

 
#define EndDialog __imported_name(EndDialog)
extern WINBOOL
 __imported_stdcall(EndDialog)(
	  HWND hDlg,
	  int nResult);

 
#define GetDlgItem __imported_name(GetDlgItem)
extern HWND
 __imported_stdcall(GetDlgItem)(
	   HWND hDlg,
	   int nIDDlgItem);

 
#define SetDlgItemInt __imported_name(SetDlgItemInt)
extern WINBOOL
 __imported_stdcall(SetDlgItemInt)(
	      HWND hDlg,
	      int nIDDlgItem,
	      UINT uValue,
	      WINBOOL bSigned);

 
#define GetDlgItemInt __imported_name(GetDlgItemInt)
extern UINT
 __imported_stdcall(GetDlgItemInt)(
	      HWND hDlg,
	      int nIDDlgItem,
	      WINBOOL *lpTranslated,
	      WINBOOL bSigned);

 
#define CheckDlgButton __imported_name(CheckDlgButton)
extern WINBOOL
 __imported_stdcall(CheckDlgButton)(
	       HWND hDlg,
	       int nIDButton,
	       UINT uCheck);

 
#define CheckRadioButton __imported_name(CheckRadioButton)
extern WINBOOL
 __imported_stdcall(CheckRadioButton)(
		 HWND hDlg,
		 int nIDFirstButton,
		 int nIDLastButton,
		 int nIDCheckButton);

 
#define IsDlgButtonChecked __imported_name(IsDlgButtonChecked)
extern UINT
 __imported_stdcall(IsDlgButtonChecked)(
		   HWND hDlg,
		   int nIDButton);

 
#define GetNextDlgGroupItem __imported_name(GetNextDlgGroupItem)
extern HWND
 __imported_stdcall(GetNextDlgGroupItem)(
		    HWND hDlg,
		    HWND hCtl,
		    WINBOOL bPrevious);

 
#define GetNextDlgTabItem __imported_name(GetNextDlgTabItem)
extern HWND
 __imported_stdcall(GetNextDlgTabItem)(
		  HWND hDlg,
		  HWND hCtl,
		  WINBOOL bPrevious);

 
#define GetDlgCtrlID __imported_name(GetDlgCtrlID)
extern int
 __imported_stdcall(GetDlgCtrlID)(
	     HWND hWnd);

 
#define GetDialogBaseUnits __imported_name(GetDialogBaseUnits)
extern long
 __imported_stdcall(GetDialogBaseUnits)(VOID);

#define OpenClipboard __imported_name(OpenClipboard)
extern WINBOOL
 __imported_stdcall(OpenClipboard)(
	      HWND hWndNewOwner);

 
#define CloseClipboard __imported_name(CloseClipboard)
extern WINBOOL
 __imported_stdcall(CloseClipboard)(
	       VOID);

 
#define GetClipboardOwner __imported_name(GetClipboardOwner)
extern HWND
 __imported_stdcall(GetClipboardOwner)(
		  VOID);

 
#define SetClipboardViewer __imported_name(SetClipboardViewer)
extern HWND
 __imported_stdcall(SetClipboardViewer)(
		   HWND hWndNewViewer);

 
#define GetClipboardViewer __imported_name(GetClipboardViewer)
extern HWND
 __imported_stdcall(GetClipboardViewer)(
		   VOID);

 
#define ChangeClipboardChain __imported_name(ChangeClipboardChain)
extern WINBOOL
 __imported_stdcall(ChangeClipboardChain)(
		     HWND hWndRemove,
		     HWND hWndNewNext);

 
#define SetClipboardData __imported_name(SetClipboardData)
extern HANDLE
 __imported_stdcall(SetClipboardData)(
		 UINT uFormat,
		 HANDLE hMem);

 
#define GetClipboardData __imported_name(GetClipboardData)
extern HANDLE
 __imported_stdcall(GetClipboardData)(
		 UINT uFormat);

 
 
#define CountClipboardFormats __imported_name(CountClipboardFormats)
extern int
 __imported_stdcall(CountClipboardFormats)(
		      VOID);

 
#define EnumClipboardFormats __imported_name(EnumClipboardFormats)
extern UINT
 __imported_stdcall(EnumClipboardFormats)(
		     UINT format);

 
#define EmptyClipboard __imported_name(EmptyClipboard)
extern WINBOOL
 __imported_stdcall(EmptyClipboard)(
	       VOID);

 
#define IsClipboardFormatAvailable __imported_name(IsClipboardFormatAvailable)
extern WINBOOL
 __imported_stdcall(IsClipboardFormatAvailable)(
			   UINT format);

 
#define GetPriorityClipboardFormat __imported_name(GetPriorityClipboardFormat)
extern int
 __imported_stdcall(GetPriorityClipboardFormat)(
			   UINT *paFormatPriorityList,
			   int cFormats);

 
#define GetOpenClipboardWindow __imported_name(GetOpenClipboardWindow)
extern HWND
 __imported_stdcall(GetOpenClipboardWindow)(
		       VOID);

 
/* Despite the A these are ASCII functions! */
#define CharNextExA __imported_name(CharNextExA)
extern LPSTR
 __imported_stdcall(CharNextExA)(
	    WORD CodePage,
	    LPCSTR lpCurrentChar,
	    DWORD dwFlags);

 
#define CharPrevExA __imported_name(CharPrevExA)
extern LPSTR
 __imported_stdcall(CharPrevExA)(
	    WORD CodePage,
	    LPCSTR lpStart,
	    LPCSTR lpCurrentChar,
	    DWORD dwFlags);

 
#define SetFocus __imported_name(SetFocus)
extern HWND
 __imported_stdcall(SetFocus)(
	 HWND hWnd);

 
#define GetActiveWindow __imported_name(GetActiveWindow)
extern HWND
 __imported_stdcall(GetActiveWindow)(
		VOID);

 
#define GetFocus __imported_name(GetFocus)
extern HWND
 __imported_stdcall(GetFocus)(
	 VOID);

 
#define GetKBCodePage __imported_name(GetKBCodePage)
extern UINT
 __imported_stdcall(GetKBCodePage)(
	      VOID);

 
#define GetKeyState __imported_name(GetKeyState)
extern SHORT
 __imported_stdcall(GetKeyState)(
	    int nVirtKey);

 
#define GetAsyncKeyState __imported_name(GetAsyncKeyState)
extern SHORT
 __imported_stdcall(GetAsyncKeyState)(
		 int vKey);

 
#define GetKeyboardState __imported_name(GetKeyboardState)
extern WINBOOL
 __imported_stdcall(GetKeyboardState)(
		 PBYTE lpKeyState);

 
#define SetKeyboardState __imported_name(SetKeyboardState)
extern WINBOOL
 __imported_stdcall(SetKeyboardState)(
		 LPBYTE lpKeyState);

 
#define GetKeyboardType __imported_name(GetKeyboardType)
extern int
 __imported_stdcall(GetKeyboardType)(
		int nTypeFlag);

 
#define ToAscii __imported_name(ToAscii)
extern int
 __imported_stdcall(ToAscii)(
	UINT uVirtKey,
	UINT uScanCode,
	PBYTE lpKeyState,
	LPWORD lpChar,
	UINT uFlags);

 
#define ToAsciiEx __imported_name(ToAsciiEx)
extern int
 __imported_stdcall(ToAsciiEx)(
	  UINT uVirtKey,
	  UINT uScanCode,
	  PBYTE lpKeyState,
	  LPWORD lpChar,
	  UINT uFlags,
	  HKL dwhkl);

 
#define ToUnicode __imported_name(ToUnicode)
extern int
 __imported_stdcall(ToUnicode)(
	  UINT wVirtKey,
	  UINT wScanCode,
	  PBYTE lpKeyState,
	  LPWSTR pwszBuff,
	  int cchBuff,
	  UINT wFlags);

 
#define OemKeyScan __imported_name(OemKeyScan)
extern DWORD
 __imported_stdcall(OemKeyScan)(
	   WORD wOemChar);

 
#define keybd_event __imported_name(keybd_event)
extern VOID
 __imported_stdcall(keybd_event)(
	    BYTE bVk,
	    BYTE bScan,
	    DWORD dwFlags,
	    DWORD dwExtraInfo);

 
#define mouse_event __imported_name(mouse_event)
extern VOID
 __imported_stdcall(mouse_event)(
	    DWORD dwFlags,
	    DWORD dx,
	    DWORD dy,
	    DWORD cButtons,
	    DWORD dwExtraInfo);

#define GetInputState __imported_name(GetInputState)
extern WINBOOL
 __imported_stdcall(GetInputState)(
	      VOID);

 
#define GetQueueStatus __imported_name(GetQueueStatus)
extern DWORD
 __imported_stdcall(GetQueueStatus)(
	       UINT flags);

 
#define GetCapture __imported_name(GetCapture)
extern HWND
 __imported_stdcall(GetCapture)(
	   VOID);

 
#define SetCapture __imported_name(SetCapture)
extern HWND
 __imported_stdcall(SetCapture)(
	   HWND hWnd);

 
#define ReleaseCapture __imported_name(ReleaseCapture)
extern WINBOOL
 __imported_stdcall(ReleaseCapture)(
	       VOID);

 
#define MsgWaitForMultipleObjects __imported_name(MsgWaitForMultipleObjects)
extern DWORD
 __imported_stdcall(MsgWaitForMultipleObjects)(
			  DWORD nCount,
			  LPHANDLE pHandles,
			  WINBOOL fWaitAll,
			  DWORD dwMilliseconds,
			  DWORD dwWakeMask);

 
#define SetTimer __imported_name(SetTimer)
extern UINT
 __imported_stdcall(SetTimer)(
	 HWND hWnd ,
	 UINT nIDEvent,
	 UINT uElapse,
	 TIMERPROC lpTimerFunc);

 
#define KillTimer __imported_name(KillTimer)
extern WINBOOL
 __imported_stdcall(KillTimer)(
	  HWND hWnd,
	  UINT uIDEvent);

 
#define IsWindowUnicode __imported_name(IsWindowUnicode)
extern WINBOOL
 __imported_stdcall(IsWindowUnicode)(
		HWND hWnd);

 
#define EnableWindow __imported_name(EnableWindow)
extern WINBOOL
 __imported_stdcall(EnableWindow)(
	     HWND hWnd,
	     WINBOOL bEnable);

 
#define IsWindowEnabled __imported_name(IsWindowEnabled)
extern WINBOOL
 __imported_stdcall(IsWindowEnabled)(
		HWND hWnd);

 
#define DestroyAcceleratorTable __imported_name(DestroyAcceleratorTable)
extern WINBOOL
 __imported_stdcall(DestroyAcceleratorTable)(
			HACCEL hAccel);

#define GetSystemMetrics __imported_name(GetSystemMetrics)
extern int
 __imported_stdcall(GetSystemMetrics)(
		 int nIndex);

#define GetMenu __imported_name(GetMenu)
extern HMENU
 __imported_stdcall(GetMenu)(
	HWND hWnd);

 
#define SetMenu __imported_name(SetMenu)
extern WINBOOL
 __imported_stdcall(SetMenu)(
	HWND hWnd,
	HMENU hMenu);

 
#define HiliteMenuItem __imported_name(HiliteMenuItem)
extern WINBOOL
 __imported_stdcall(HiliteMenuItem)(
	       HWND hWnd,
	       HMENU hMenu,
	       UINT uIDHiliteItem,
	       UINT uHilite);

 
#define GetMenuState __imported_name(GetMenuState)
extern UINT
 __imported_stdcall(GetMenuState)(
	     HMENU hMenu,
	     UINT uId,
	     UINT uFlags);

 
#define DrawMenuBar __imported_name(DrawMenuBar)
extern WINBOOL
 __imported_stdcall(DrawMenuBar)(
	    HWND hWnd);

 
#define GetSystemMenu __imported_name(GetSystemMenu)
extern HMENU
 __imported_stdcall(GetSystemMenu)(
	      HWND hWnd,
	      WINBOOL bRevert);

 
#define CreateMenu __imported_name(CreateMenu)
extern HMENU
 __imported_stdcall(CreateMenu)(
	   VOID);

 
#define CreatePopupMenu __imported_name(CreatePopupMenu)
extern HMENU
 __imported_stdcall(CreatePopupMenu)(
		VOID);

 
#define DestroyMenu __imported_name(DestroyMenu)
extern WINBOOL
 __imported_stdcall(DestroyMenu)(
	    HMENU hMenu);

 
#define CheckMenuItem __imported_name(CheckMenuItem)
extern DWORD
 __imported_stdcall(CheckMenuItem)(
	      HMENU hMenu,
	      UINT uIDCheckItem,
	      UINT uCheck);

 
#define EnableMenuItem __imported_name(EnableMenuItem)
extern WINBOOL
 __imported_stdcall(EnableMenuItem)(
	       HMENU hMenu,
	       UINT uIDEnableItem,
	       UINT uEnable);

 
#define GetSubMenu __imported_name(GetSubMenu)
extern HMENU
 __imported_stdcall(GetSubMenu)(
	   HMENU hMenu,
	   int nPos);

 
#define GetMenuItemID __imported_name(GetMenuItemID)
extern UINT
 __imported_stdcall(GetMenuItemID)(
	      HMENU hMenu,
	      int nPos);

 
#define GetMenuItemCount __imported_name(GetMenuItemCount)
extern int
 __imported_stdcall(GetMenuItemCount)(
		 HMENU hMenu);

#define RemoveMenu __imported_name(RemoveMenu)
extern WINBOOL
 __imported_stdcall(RemoveMenu)(
		   HMENU hMenu,
		   UINT uPosition,
		   UINT uFlags);

 
#define DeleteMenu __imported_name(DeleteMenu)
extern WINBOOL
 __imported_stdcall(DeleteMenu)(
	   HMENU hMenu,
	   UINT uPosition,
	   UINT uFlags);

 
#define SetMenuItemBitmaps __imported_name(SetMenuItemBitmaps)
extern WINBOOL
 __imported_stdcall(SetMenuItemBitmaps)(
		   HMENU hMenu,
		   UINT uPosition,
		   UINT uFlags,
		   HBITMAP hBitmapUnchecked,
		   HBITMAP hBitmapChecked);

 
#define GetMenuCheckMarkDimensions __imported_name(GetMenuCheckMarkDimensions)
extern LONG
 __imported_stdcall(GetMenuCheckMarkDimensions)(
			   VOID);

 
#define TrackPopupMenu __imported_name(TrackPopupMenu)
extern WINBOOL
 __imported_stdcall(TrackPopupMenu)(
	       HMENU hMenu,
	       UINT uFlags,
	       int x,
	       int y,
	       int nReserved,
	       HWND hWnd,
	       CONST RECT *prcRect);

#define GetMenuDefaultItem __imported_name(GetMenuDefaultItem)
extern UINT
 __imported_stdcall(GetMenuDefaultItem)(
		   HMENU hMenu, 
		   UINT fByPos, 
		   UINT gmdiFlags);

#define SetMenuDefaultItem __imported_name(SetMenuDefaultItem)
extern WINBOOL
 __imported_stdcall(SetMenuDefaultItem)(
		   HMENU hMenu, 
		   UINT uItem, 
		   UINT fByPos);

#define GetMenuItemRect __imported_name(GetMenuItemRect)
extern WINBOOL
 __imported_stdcall(GetMenuItemRect)(HWND hWnd, 
		HMENU hMenu, 
		UINT uItem, 
		LPRECT lprcItem);

#define MenuItemFromPoint __imported_name(MenuItemFromPoint)
extern int
 __imported_stdcall(MenuItemFromPoint)(HWND hWnd, 
		  HMENU hMenu, 
		  POINT ptScreen);

 
#define DragObject __imported_name(DragObject)
extern DWORD
 __imported_stdcall(DragObject)(HWND, HWND, UINT, DWORD, HCURSOR);

 
#define DragDetect __imported_name(DragDetect)
extern WINBOOL
 __imported_stdcall(DragDetect)(HWND hwnd, 
	   POINT pt);

 
#define DrawIcon __imported_name(DrawIcon)
extern WINBOOL
 __imported_stdcall(DrawIcon)(
	 HDC hDC,
	 int X,
	 int Y,
	 HICON hIcon);

#define UpdateWindow __imported_name(UpdateWindow)
extern WINBOOL
 __imported_stdcall(UpdateWindow)(
	     HWND hWnd);

 
#define SetActiveWindow __imported_name(SetActiveWindow)
extern HWND
 __imported_stdcall(SetActiveWindow)(
		HWND hWnd);

 
#define GetForegroundWindow __imported_name(GetForegroundWindow)
extern HWND
 __imported_stdcall(GetForegroundWindow)(
		    VOID);

#define PaintDesktop __imported_name(PaintDesktop)
extern WINBOOL
 __imported_stdcall(PaintDesktop)(HDC hdc);

 
#define SetForegroundWindow __imported_name(SetForegroundWindow)
extern WINBOOL
 __imported_stdcall(SetForegroundWindow)(
		    HWND hWnd);

 
#define WindowFromDC __imported_name(WindowFromDC)
extern HWND
 __imported_stdcall(WindowFromDC)(
	     HDC hDC);

 
#define GetDC __imported_name(GetDC)
extern HDC
 __imported_stdcall(GetDC)(
      HWND hWnd);

 
#define GetDCEx __imported_name(GetDCEx)
extern HDC
 __imported_stdcall(GetDCEx)(
	HWND hWnd ,
	HRGN hrgnClip,
	DWORD flags);

 
#define GetWindowDC __imported_name(GetWindowDC)
extern HDC
 __imported_stdcall(GetWindowDC)(
	    HWND hWnd);

 
#define ReleaseDC __imported_name(ReleaseDC)
extern int
 __imported_stdcall(ReleaseDC)(
	  HWND hWnd,
	  HDC hDC);

 
#define BeginPaint __imported_name(BeginPaint)
extern HDC
 __imported_stdcall(BeginPaint)(
	   HWND hWnd,
	   LPPAINTSTRUCT lpPaint);

 
#define EndPaint __imported_name(EndPaint)
extern WINBOOL
 __imported_stdcall(EndPaint)(
	 HWND hWnd,
	 CONST PAINTSTRUCT *lpPaint);

 
#define GetUpdateRect __imported_name(GetUpdateRect)
extern WINBOOL
 __imported_stdcall(GetUpdateRect)(
	      HWND hWnd,
	      LPRECT lpRect,
	      WINBOOL bErase);

 
#define GetUpdateRgn __imported_name(GetUpdateRgn)
extern int
 __imported_stdcall(GetUpdateRgn)(
	     HWND hWnd,
	     HRGN hRgn,
	     WINBOOL bErase);

 
#define SetWindowRgn __imported_name(SetWindowRgn)
extern int
 __imported_stdcall(SetWindowRgn)(
	     HWND hWnd,
	     HRGN hRgn,
	     WINBOOL bRedraw);

 
#define GetWindowRgn __imported_name(GetWindowRgn)
extern int
 __imported_stdcall(GetWindowRgn)(
	     HWND hWnd,
	     HRGN hRgn);

 
#define ExcludeUpdateRgn __imported_name(ExcludeUpdateRgn)
extern int
 __imported_stdcall(ExcludeUpdateRgn)(
		 HDC hDC,
		 HWND hWnd);

 
#define InvalidateRect __imported_name(InvalidateRect)
extern WINBOOL
 __imported_stdcall(InvalidateRect)(
	       HWND hWnd ,
	       CONST RECT *lpRect,
	       WINBOOL bErase);

 
#define ValidateRect __imported_name(ValidateRect)
extern WINBOOL
 __imported_stdcall(ValidateRect)(
	     HWND hWnd ,
	     CONST RECT *lpRect);

 
#define InvalidateRgn __imported_name(InvalidateRgn)
extern WINBOOL
 __imported_stdcall(InvalidateRgn)(
	      HWND hWnd,
	      HRGN hRgn,
	      WINBOOL bErase);

 
#define ValidateRgn __imported_name(ValidateRgn)
extern WINBOOL
 __imported_stdcall(ValidateRgn)(
	    HWND hWnd,
	    HRGN hRgn);

 
#define RedrawWindow __imported_name(RedrawWindow)
extern WINBOOL
 __imported_stdcall(RedrawWindow)(
	     HWND hWnd,
	     CONST RECT *lprcUpdate,
	     HRGN hrgnUpdate,
	     UINT flags);

 
#define LockWindowUpdate __imported_name(LockWindowUpdate)
extern WINBOOL
 __imported_stdcall(LockWindowUpdate)(
		 HWND hWndLock);

 
#define ScrollWindow __imported_name(ScrollWindow)
extern WINBOOL
 __imported_stdcall(ScrollWindow)(
	     HWND hWnd,
	     int XAmount,
	     int YAmount,
	     CONST RECT *lpRect,
	     CONST RECT *lpClipRect);

 
#define ScrollDC __imported_name(ScrollDC)
extern WINBOOL
 __imported_stdcall(ScrollDC)(
	 HDC hDC,
	 int dx,
	 int dy,
	 CONST RECT *lprcScroll,
	 CONST RECT *lprcClip ,
	 HRGN hrgnUpdate,
	 LPRECT lprcUpdate);

 
#define ScrollWindowEx __imported_name(ScrollWindowEx)
extern int
 __imported_stdcall(ScrollWindowEx)(
	       HWND hWnd,
	       int dx,
	       int dy,
	       CONST RECT *prcScroll,
	       CONST RECT *prcClip ,
	       HRGN hrgnUpdate,
	       LPRECT prcUpdate,
	       UINT flags);

 
#define SetScrollPos __imported_name(SetScrollPos)
extern int
 __imported_stdcall(SetScrollPos)(
	     HWND hWnd,
	     int nBar,
	     int nPos,
	     WINBOOL bRedraw);

 
#define GetScrollPos __imported_name(GetScrollPos)
extern int
 __imported_stdcall(GetScrollPos)(
	     HWND hWnd,
	     int nBar);

 
#define SetScrollRange __imported_name(SetScrollRange)
extern WINBOOL
 __imported_stdcall(SetScrollRange)(
	       HWND hWnd,
	       int nBar,
	       int nMinPos,
	       int nMaxPos,
	       WINBOOL bRedraw);

 
#define GetScrollRange __imported_name(GetScrollRange)
extern WINBOOL
 __imported_stdcall(GetScrollRange)(
	       HWND hWnd,
	       int nBar,
	       LPINT lpMinPos,
	       LPINT lpMaxPos);

 
#define ShowScrollBar __imported_name(ShowScrollBar)
extern WINBOOL
 __imported_stdcall(ShowScrollBar)(
	      HWND hWnd,
	      int wBar,
	      WINBOOL bShow);

 
#define EnableScrollBar __imported_name(EnableScrollBar)
extern WINBOOL
 __imported_stdcall(EnableScrollBar)(
		HWND hWnd,
		UINT wSBflags,
		UINT wArrows);

 
#define GetClientRect __imported_name(GetClientRect)
extern WINBOOL
 __imported_stdcall(GetClientRect)(
	      HWND hWnd,
	      LPRECT lpRect);

 
#define GetWindowRect __imported_name(GetWindowRect)
extern WINBOOL
 __imported_stdcall(GetWindowRect)(
	      HWND hWnd,
	      LPRECT lpRect);

 
#define AdjustWindowRect __imported_name(AdjustWindowRect)
extern WINBOOL
 __imported_stdcall(AdjustWindowRect)(
		 LPRECT lpRect,
		 DWORD dwStyle,
		 WINBOOL bMenu);

 
#define AdjustWindowRectEx __imported_name(AdjustWindowRectEx)
extern WINBOOL
 __imported_stdcall(AdjustWindowRectEx)(
		   LPRECT lpRect,
		   DWORD dwStyle,
		   WINBOOL bMenu,
		   DWORD dwExStyle);

#define SetWindowContextHelpId __imported_name(SetWindowContextHelpId)
extern WINBOOL
 __imported_stdcall(SetWindowContextHelpId)(HWND, DWORD);

#define GetWindowContextHelpId __imported_name(GetWindowContextHelpId)
extern DWORD
 __imported_stdcall(GetWindowContextHelpId)(HWND);

#define SetMenuContextHelpId __imported_name(SetMenuContextHelpId)
extern WINBOOL
 __imported_stdcall(SetMenuContextHelpId)(HMENU, DWORD);

#define GetMenuContextHelpId __imported_name(GetMenuContextHelpId)
extern DWORD
 __imported_stdcall(GetMenuContextHelpId)(HMENU);

 
#define MessageBeep __imported_name(MessageBeep)
extern WINBOOL
 __imported_stdcall(MessageBeep)(
	    UINT uType);

 
#define ShowCursor __imported_name(ShowCursor)
extern int
 __imported_stdcall(ShowCursor)(
	   WINBOOL bShow);

 
#define SetCursorPos __imported_name(SetCursorPos)
extern WINBOOL
 __imported_stdcall(SetCursorPos)(
	     int X,
	     int Y);

 
#define SetCursor __imported_name(SetCursor)
extern HCURSOR
 __imported_stdcall(SetCursor)(
	  HCURSOR hCursor);

 
#define GetCursorPos __imported_name(GetCursorPos)
extern WINBOOL
 __imported_stdcall(GetCursorPos)(
	     LPPOINT lpPoint);

 
#define ClipCursor __imported_name(ClipCursor)
extern WINBOOL
 __imported_stdcall(ClipCursor)(
	   CONST RECT *lpRect);

 
#define GetClipCursor __imported_name(GetClipCursor)
extern WINBOOL
 __imported_stdcall(GetClipCursor)(
	      LPRECT lpRect);

 
#define GetCursor __imported_name(GetCursor)
extern HCURSOR
 __imported_stdcall(GetCursor)(
	  VOID);

 
#define CreateCaret __imported_name(CreateCaret)
extern WINBOOL
 __imported_stdcall(CreateCaret)(
	    HWND hWnd,
	    HBITMAP hBitmap ,
	    int nWidth,
	    int nHeight);

 
#define GetCaretBlinkTime __imported_name(GetCaretBlinkTime)
extern UINT
 __imported_stdcall(GetCaretBlinkTime)(
		  VOID);

 
#define SetCaretBlinkTime __imported_name(SetCaretBlinkTime)
extern WINBOOL
 __imported_stdcall(SetCaretBlinkTime)(
		  UINT uMSeconds);

 
#define DestroyCaret __imported_name(DestroyCaret)
extern WINBOOL
 __imported_stdcall(DestroyCaret)(
	     VOID);

 
#define HideCaret __imported_name(HideCaret)
extern WINBOOL
 __imported_stdcall(HideCaret)(
	  HWND hWnd);

 
#define ShowCaret __imported_name(ShowCaret)
extern WINBOOL
 __imported_stdcall(ShowCaret)(
	  HWND hWnd);

 
#define SetCaretPos __imported_name(SetCaretPos)
extern WINBOOL
 __imported_stdcall(SetCaretPos)(
	    int X,
	    int Y);

 
#define GetCaretPos __imported_name(GetCaretPos)
extern WINBOOL
 __imported_stdcall(GetCaretPos)(
	    LPPOINT lpPoint);

 
#define ClientToScreen __imported_name(ClientToScreen)
extern WINBOOL
 __imported_stdcall(ClientToScreen)(
	       HWND hWnd,
	       LPPOINT lpPoint);

 
#define ScreenToClient __imported_name(ScreenToClient)
extern WINBOOL
 __imported_stdcall(ScreenToClient)(
	       HWND hWnd,
	       LPPOINT lpPoint);

 
#define MapWindowPoints __imported_name(MapWindowPoints)
extern int
 __imported_stdcall(MapWindowPoints)(
		HWND hWndFrom,
		HWND hWndTo,
		LPPOINT lpPoints,
		UINT cPoints);

 
#define WindowFromPoint __imported_name(WindowFromPoint)
extern HWND
 __imported_stdcall(WindowFromPoint)(
		POINT Point);

 
#define ChildWindowFromPoint __imported_name(ChildWindowFromPoint)
extern HWND
 __imported_stdcall(ChildWindowFromPoint)(
		     HWND hWndParent,
		     POINT Point);

 
#define GetSysColor __imported_name(GetSysColor)
extern DWORD
 __imported_stdcall(GetSysColor)(
	    int nIndex);

 
#define GetSysColorBrush __imported_name(GetSysColorBrush)
extern HBRUSH
 __imported_stdcall(GetSysColorBrush)(
		 int nIndex);

 
#define SetSysColors __imported_name(SetSysColors)
extern WINBOOL
 __imported_stdcall(SetSysColors)(
	     int cElements,
	     CONST INT * lpaElements,
	     CONST COLORREF * lpaRgbValues);

 
#define DrawFocusRect __imported_name(DrawFocusRect)
extern WINBOOL
 __imported_stdcall(DrawFocusRect)(
	      HDC hDC,
	      CONST RECT * lprc);

 
#define FillRect __imported_name(FillRect)
extern int
 __imported_stdcall(FillRect)(
	 HDC hDC,
	 CONST RECT *lprc,
	 HBRUSH hbr);

 
#define FrameRect __imported_name(FrameRect)
extern int
 __imported_stdcall(FrameRect)(
	  HDC hDC,
	  CONST RECT *lprc,
	  HBRUSH hbr);

 
#define InvertRect __imported_name(InvertRect)
extern WINBOOL
 __imported_stdcall(InvertRect)(
	   HDC hDC,
	   CONST RECT *lprc);

 
#define SetRect __imported_name(SetRect)
extern WINBOOL
 __imported_stdcall(SetRect)(
	LPRECT lprc,
	int xLeft,
	int yTop,
	int xRight,
	int yBottom);

 
#define SetRectEmpty __imported_name(SetRectEmpty)
extern WINBOOL
 __imported_stdcall(SetRectEmpty)(
	     LPRECT lprc);

 
#define CopyRect __imported_name(CopyRect)
extern WINBOOL
 __imported_stdcall(CopyRect)(
	 LPRECT lprcDst,
	 CONST RECT *lprcSrc);

 
#define InflateRect __imported_name(InflateRect)
extern WINBOOL
 __imported_stdcall(InflateRect)(
	    LPRECT lprc,
	    int dx,
	    int dy);

 
#define IntersectRect __imported_name(IntersectRect)
extern WINBOOL
 __imported_stdcall(IntersectRect)(
	      LPRECT lprcDst,
	      CONST RECT *lprcSrc1,
	      CONST RECT *lprcSrc2);

 
#define UnionRect __imported_name(UnionRect)
extern WINBOOL
 __imported_stdcall(UnionRect)(
	  LPRECT lprcDst,
	  CONST RECT *lprcSrc1,
	  CONST RECT *lprcSrc2);

 
#define SubtractRect __imported_name(SubtractRect)
extern WINBOOL
 __imported_stdcall(SubtractRect)(
	     LPRECT lprcDst,
	     CONST RECT *lprcSrc1,
	     CONST RECT *lprcSrc2);

 
#define OffsetRect __imported_name(OffsetRect)
extern WINBOOL
 __imported_stdcall(OffsetRect)(
	   LPRECT lprc,
	   int dx,
	   int dy);

 
#define IsRectEmpty __imported_name(IsRectEmpty)
extern WINBOOL
 __imported_stdcall(IsRectEmpty)(
	    CONST RECT *lprc);

 
#define EqualRect __imported_name(EqualRect)
extern WINBOOL
 __imported_stdcall(EqualRect)(
	  CONST RECT *lprc1,
	  CONST RECT *lprc2);

 
#define PtInRect __imported_name(PtInRect)
extern WINBOOL
 __imported_stdcall(PtInRect)(
	 CONST RECT *lprc,
	 POINT pt);

 
#define GetWindowWord __imported_name(GetWindowWord)
extern WORD
 __imported_stdcall(GetWindowWord)(
	      HWND hWnd,
	      int nIndex);

 
#define SetWindowWord __imported_name(SetWindowWord)
extern WORD
 __imported_stdcall(SetWindowWord)(
	      HWND hWnd,
	      int nIndex,
	      WORD wNewWord);

 
#define GetClassWord __imported_name(GetClassWord)
extern WORD
 __imported_stdcall(GetClassWord)(
	     HWND hWnd,
	     int nIndex);

 
#define SetClassWord __imported_name(SetClassWord)
extern WORD
 __imported_stdcall(SetClassWord)(
	     HWND hWnd,
	     int nIndex,
	     WORD wNewWord);

#define GetDesktopWindow __imported_name(GetDesktopWindow)
extern HWND
 __imported_stdcall(GetDesktopWindow)(
		 VOID);

 
#define GetParent __imported_name(GetParent)
extern HWND
 __imported_stdcall(GetParent)(
	  HWND hWnd);

 
#define SetParent __imported_name(SetParent)
extern HWND
 __imported_stdcall(SetParent)(
	  HWND hWndChild,
	  HWND hWndNewParent);

 
#define EnumChildWindows __imported_name(EnumChildWindows)
extern WINBOOL
 __imported_stdcall(EnumChildWindows)(
		 HWND hWndParent,
		 ENUMWINDOWSPROC lpEnumFunc,
		 LPARAM lParam);

 
#define EnumWindows __imported_name(EnumWindows)
extern WINBOOL
 __imported_stdcall(EnumWindows)(
	    ENUMWINDOWSPROC lpEnumFunc,
	    LPARAM lParam);

 
#define EnumThreadWindows __imported_name(EnumThreadWindows)
extern WINBOOL
 __imported_stdcall(EnumThreadWindows)(
		  DWORD dwThreadId,
		  ENUMWINDOWSPROC lpfn,
		  LPARAM lParam);

#define GetTopWindow __imported_name(GetTopWindow)
extern HWND
 __imported_stdcall(GetTopWindow)(
	     HWND hWnd);

 
#define GetWindowThreadProcessId __imported_name(GetWindowThreadProcessId)
extern DWORD
 __imported_stdcall(GetWindowThreadProcessId)(
			 HWND hWnd,
			 LPDWORD lpdwProcessId);

#define GetWindowTask(hWnd) \
	((HANDLE)GetWindowThreadProcessId(hWnd, NULL))
 
#define GetLastActivePopup __imported_name(GetLastActivePopup)
extern HWND
 __imported_stdcall(GetLastActivePopup)(
		   HWND hWnd);

 
#define GetWindow __imported_name(GetWindow)
extern HWND
 __imported_stdcall(GetWindow)(
	  HWND hWnd,
	  UINT uCmd);

#define UnhookWindowsHook __imported_name(UnhookWindowsHook)
extern WINBOOL
 __imported_stdcall(UnhookWindowsHook)(
		  int nCode,
		  HOOKPROC pfnFilterProc);

#define UnhookWindowsHookEx __imported_name(UnhookWindowsHookEx)
extern WINBOOL
 __imported_stdcall(UnhookWindowsHookEx)(
		    HHOOK hhk);

 
#define CallNextHookEx __imported_name(CallNextHookEx)
extern LRESULT
 __imported_stdcall(CallNextHookEx)(
	       HHOOK hhk,
	       int nCode,
	       WPARAM wParam,
	       LPARAM lParam);

 
#define CheckMenuRadioItem __imported_name(CheckMenuRadioItem)
extern WINBOOL
 __imported_stdcall(CheckMenuRadioItem)(HMENU, UINT, UINT, UINT, UINT);

#define CreateCursor __imported_name(CreateCursor)
extern HCURSOR
 __imported_stdcall(CreateCursor)(
	     HINSTANCE hInst,
	     int xHotSpot,
	     int yHotSpot,
	     int nWidth,
	     int nHeight,
	     CONST VOID *pvANDPlane,
	     CONST VOID *pvXORPlane);

 
#define DestroyCursor __imported_name(DestroyCursor)
extern WINBOOL
 __imported_stdcall(DestroyCursor)(
	      HCURSOR hCursor);

 
#define SetSystemCursor __imported_name(SetSystemCursor)
extern WINBOOL
 __imported_stdcall(SetSystemCursor)(
		HCURSOR hcur,
		DWORD   anID);

 
#define CreateIcon __imported_name(CreateIcon)
extern HICON
 __imported_stdcall(CreateIcon)(
	   HINSTANCE hInstance,
	   int nWidth,
	   int nHeight,
	   BYTE cPlanes,
	   BYTE cBitsPixel,
	   CONST BYTE *lpbANDbits,
	   CONST BYTE *lpbXORbits);

 
#define DestroyIcon __imported_name(DestroyIcon)
extern WINBOOL
 __imported_stdcall(DestroyIcon)(
	    HICON hIcon);

 
#define LookupIconIdFromDirectory __imported_name(LookupIconIdFromDirectory)
extern int
 __imported_stdcall(LookupIconIdFromDirectory)(
			  PBYTE presbits,
			  WINBOOL fIcon);

 
#define LookupIconIdFromDirectoryEx __imported_name(LookupIconIdFromDirectoryEx)
extern int
 __imported_stdcall(LookupIconIdFromDirectoryEx)(
			    PBYTE presbits,
			    WINBOOL  fIcon,
			    int   cxDesired,
			    int   cyDesired,
			    UINT  Flags);

 
#define CreateIconFromResource __imported_name(CreateIconFromResource)
extern HICON
 __imported_stdcall(CreateIconFromResource)(
		       PBYTE presbits,
		       DWORD dwResSize,
		       WINBOOL fIcon,
		       DWORD dwVer);

 
#define CreateIconFromResourceEx __imported_name(CreateIconFromResourceEx)
extern HICON
 __imported_stdcall(CreateIconFromResourceEx)(
			 PBYTE presbits,
			 DWORD dwResSize,
			 WINBOOL  fIcon,
			 DWORD dwVer,
			 int   cxDesired,
			 int   cyDesired,
			 UINT  Flags);

 
#define CopyImage __imported_name(CopyImage)
extern HICON
 __imported_stdcall(CopyImage)(
	  HANDLE,
	  UINT,
	  int,
	  int,
	  UINT);

 
#define CreateIconIndirect __imported_name(CreateIconIndirect)
extern HICON
 __imported_stdcall(CreateIconIndirect)(
		   PICONINFO piconinfo);

 
#define CopyIcon __imported_name(CopyIcon)
extern HICON
 __imported_stdcall(CopyIcon)(
	 HICON hIcon);

 
#define GetIconInfo __imported_name(GetIconInfo)
extern WINBOOL
 __imported_stdcall(GetIconInfo)(
	    HICON hIcon,
	    PICONINFO piconinfo);

 
#define MapDialogRect __imported_name(MapDialogRect)
extern WINBOOL
 __imported_stdcall(MapDialogRect)(
	      HWND hDlg,
	      LPRECT lpRect);

#define SetScrollInfo __imported_name(SetScrollInfo)
extern int
 __imported_stdcall(SetScrollInfo)(HWND, int, LPCSCROLLINFO, WINBOOL);

#define GetScrollInfo __imported_name(GetScrollInfo)
extern WINBOOL
 __imported_stdcall(GetScrollInfo)(HWND, int, LPSCROLLINFO);

#define TranslateMDISysAccel __imported_name(TranslateMDISysAccel)
extern WINBOOL
 __imported_stdcall(TranslateMDISysAccel)(
		     HWND hWndClient,
		     LPMSG lpMsg);

 
#define ArrangeIconicWindows __imported_name(ArrangeIconicWindows)
extern UINT
 __imported_stdcall(ArrangeIconicWindows)(
		     HWND hWnd);

#define TileWindows __imported_name(TileWindows)
extern WORD
 __imported_stdcall(TileWindows)(HWND hwndParent, UINT wHow, CONST RECT * lpRect, UINT cKids, const HWND *lpKids);

#define CascadeWindows __imported_name(CascadeWindows)
extern WORD
 __imported_stdcall(CascadeWindows)(HWND hwndParent, UINT wHow, CONST RECT * lpRect, UINT cKids,  const HWND *lpKids);

 
#define SetLastErrorEx __imported_name(SetLastErrorEx)
extern VOID
 __imported_stdcall(SetLastErrorEx)(
	       DWORD dwErrCode,
	       DWORD dwType
	       );

 
#define SetDebugErrorLevel __imported_name(SetDebugErrorLevel)
extern VOID
 __imported_stdcall(SetDebugErrorLevel)(
		   DWORD dwLevel
		   );

#define DrawEdge __imported_name(DrawEdge)
extern WINBOOL
 __imported_stdcall(DrawEdge)(HDC hdc, LPRECT qrc, UINT edge, UINT grfFlags);

#define DrawFrameControl __imported_name(DrawFrameControl)
extern WINBOOL
 __imported_stdcall(DrawFrameControl)(HDC, LPRECT, UINT, UINT);

#define DrawCaption __imported_name(DrawCaption)
extern WINBOOL
 __imported_stdcall(DrawCaption)(HWND, HDC, CONST RECT *, UINT);

#define DrawAnimatedRects __imported_name(DrawAnimatedRects)
extern WINBOOL
 __imported_stdcall(DrawAnimatedRects)(HWND hwnd, int idAni, CONST RECT * lprcFrom, CONST RECT * lprcTo);

#define TrackPopupMenuEx __imported_name(TrackPopupMenuEx)
extern WINBOOL
 __imported_stdcall(TrackPopupMenuEx)(HMENU, UINT, int, int, HWND, LPTPMPARAMS);

#define ChildWindowFromPointEx __imported_name(ChildWindowFromPointEx)
extern HWND
 __imported_stdcall(ChildWindowFromPointEx)(HWND, POINT, UINT);

#define DrawIconEx __imported_name(DrawIconEx)
extern WINBOOL
 __imported_stdcall(DrawIconEx)(HDC hdc, int xLeft, int yTop,
	   HICON hIcon, int cxWidth, int cyWidth,
	   UINT istepIfAniCur, HBRUSH hbrFlickerFreeDraw, UINT diFlags);

#define AnimatePalette __imported_name(AnimatePalette)
extern WINBOOL
 __imported_stdcall(AnimatePalette)(HPALETTE, UINT, UINT, CONST PALETTEENTRY *);

#define Arc __imported_name(Arc)
extern WINBOOL
 __imported_stdcall(Arc)(HDC, int, int, int, int, int, int, int, int);

#define BitBlt __imported_name(BitBlt)
extern WINBOOL
 __imported_stdcall(BitBlt)(HDC, int, int, int, int, HDC, int, int, DWORD);

#define CancelDC __imported_name(CancelDC)
extern WINBOOL
 __imported_stdcall(CancelDC)(HDC);

#define Chord __imported_name(Chord)
extern WINBOOL
 __imported_stdcall(Chord)(HDC, int, int, int, int, int, int, int, int);

#define CloseMetaFile __imported_name(CloseMetaFile)
extern HMETAFILE
 __imported_stdcall(CloseMetaFile)(HDC);

#define CombineRgn __imported_name(CombineRgn)
extern int
 __imported_stdcall(CombineRgn)(HRGN, HRGN, HRGN, int);

#define CreateBitmap __imported_name(CreateBitmap)
extern HBITMAP
 __imported_stdcall(CreateBitmap)(int, int, UINT, UINT, CONST VOID *);

#define CreateBitmapIndirect __imported_name(CreateBitmapIndirect)
extern HBITMAP
 __imported_stdcall(CreateBitmapIndirect)(CONST BITMAP *);

#define CreateBrushIndirect __imported_name(CreateBrushIndirect)
extern HBRUSH
 __imported_stdcall(CreateBrushIndirect)(CONST LOGBRUSH *);

#define CreateCompatibleBitmap __imported_name(CreateCompatibleBitmap)
extern HBITMAP
 __imported_stdcall(CreateCompatibleBitmap)(HDC, int, int);

#define CreateDiscardableBitmap __imported_name(CreateDiscardableBitmap)
extern HBITMAP
 __imported_stdcall(CreateDiscardableBitmap)(HDC, int, int);

#define CreateCompatibleDC __imported_name(CreateCompatibleDC)
extern HDC
 __imported_stdcall(CreateCompatibleDC)(HDC);

#define CreateDIBitmap __imported_name(CreateDIBitmap)
extern HBITMAP
 __imported_stdcall(CreateDIBitmap)(HDC, CONST BITMAPINFOHEADER *, DWORD, CONST VOID *, CONST BITMAPINFO *, UINT);

#define CreateDIBPatternBrush __imported_name(CreateDIBPatternBrush)
extern HBRUSH
 __imported_stdcall(CreateDIBPatternBrush)(HGLOBAL, UINT);

#define CreateDIBPatternBrushPt __imported_name(CreateDIBPatternBrushPt)
extern HBRUSH
 __imported_stdcall(CreateDIBPatternBrushPt)(CONST VOID *, UINT);

#define CreateEllipticRgn __imported_name(CreateEllipticRgn)
extern HRGN
 __imported_stdcall(CreateEllipticRgn)(int, int, int, int);

#define CreateEllipticRgnIndirect __imported_name(CreateEllipticRgnIndirect)
extern HRGN
 __imported_stdcall(CreateEllipticRgnIndirect)(CONST RECT *);

#define CreateHatchBrush __imported_name(CreateHatchBrush)
extern HBRUSH
 __imported_stdcall(CreateHatchBrush)(int, COLORREF);

#define CreatePalette __imported_name(CreatePalette)
extern HPALETTE
 __imported_stdcall(CreatePalette)(CONST LOGPALETTE *);

#define CreatePen __imported_name(CreatePen)
extern HPEN
 __imported_stdcall(CreatePen)(int, int, COLORREF);

#define CreatePenIndirect __imported_name(CreatePenIndirect)
extern HPEN
 __imported_stdcall(CreatePenIndirect)(CONST LOGPEN *);

#define CreatePolyPolygonRgn __imported_name(CreatePolyPolygonRgn)
extern HRGN
 __imported_stdcall(CreatePolyPolygonRgn)(CONST POINT *, CONST INT *, int, int);

#define CreatePatternBrush __imported_name(CreatePatternBrush)
extern HBRUSH
 __imported_stdcall(CreatePatternBrush)(HBITMAP);

#define CreateRectRgn __imported_name(CreateRectRgn)
extern HRGN
 __imported_stdcall(CreateRectRgn)(int, int, int, int);

#define CreateRectRgnIndirect __imported_name(CreateRectRgnIndirect)
extern HRGN
 __imported_stdcall(CreateRectRgnIndirect)(CONST RECT *);

#define CreateRoundRectRgn __imported_name(CreateRoundRectRgn)
extern HRGN
 __imported_stdcall(CreateRoundRectRgn)(int, int, int, int, int, int);

#define CreateSolidBrush __imported_name(CreateSolidBrush)
extern HBRUSH
 __imported_stdcall(CreateSolidBrush)(COLORREF);

#define DeleteDC __imported_name(DeleteDC)
extern WINBOOL
 __imported_stdcall(DeleteDC)(HDC);

#define DeleteMetaFile __imported_name(DeleteMetaFile)
extern WINBOOL
 __imported_stdcall(DeleteMetaFile)(HMETAFILE);

#define DeleteObject __imported_name(DeleteObject)
extern WINBOOL
 __imported_stdcall(DeleteObject)(HGDIOBJ);

#define DrawEscape __imported_name(DrawEscape)
extern int
 __imported_stdcall(DrawEscape)(HDC, int, int, LPCSTR);

#define Ellipse __imported_name(Ellipse)
extern WINBOOL
 __imported_stdcall(Ellipse)(HDC, int, int, int, int);

#define EnumObjects __imported_name(EnumObjects)
extern int
 __imported_stdcall(EnumObjects)(HDC, int, ENUMOBJECTSPROC, LPARAM);

#define EqualRgn __imported_name(EqualRgn)
extern WINBOOL
 __imported_stdcall(EqualRgn)(HRGN, HRGN);

#define Escape __imported_name(Escape)
extern int
 __imported_stdcall(Escape)(HDC, int, int, LPCSTR, LPVOID);

#define ExtEscape __imported_name(ExtEscape)
extern int
 __imported_stdcall(ExtEscape)(HDC, int, int, LPCSTR, int, LPSTR);

#define ExcludeClipRect __imported_name(ExcludeClipRect)
extern int
 __imported_stdcall(ExcludeClipRect)(HDC, int, int, int, int);

#define ExtCreateRegion __imported_name(ExtCreateRegion)
extern HRGN
 __imported_stdcall(ExtCreateRegion)(CONST XFORM *, DWORD, CONST RGNDATA *);

#define ExtFloodFill __imported_name(ExtFloodFill)
extern WINBOOL
 __imported_stdcall(ExtFloodFill)(HDC, int, int, COLORREF, UINT);

#define FillRgn __imported_name(FillRgn)
extern WINBOOL
 __imported_stdcall(FillRgn)(HDC, HRGN, HBRUSH);

#define FloodFill __imported_name(FloodFill)
extern WINBOOL
 __imported_stdcall(FloodFill)(HDC, int, int, COLORREF);

#define FrameRgn __imported_name(FrameRgn)
extern WINBOOL
 __imported_stdcall(FrameRgn)(HDC, HRGN, HBRUSH, int, int);

#define GetROP2 __imported_name(GetROP2)
extern int
 __imported_stdcall(GetROP2)(HDC);

#define GetAspectRatioFilterEx __imported_name(GetAspectRatioFilterEx)
extern WINBOOL
 __imported_stdcall(GetAspectRatioFilterEx)(HDC, LPSIZE);

#define GetBkColor __imported_name(GetBkColor)
extern COLORREF
 __imported_stdcall(GetBkColor)(HDC);

#define GetBkMode __imported_name(GetBkMode)
extern int
 __imported_stdcall(GetBkMode)(HDC);

#define GetBitmapBits __imported_name(GetBitmapBits)
extern LONG
 __imported_stdcall(GetBitmapBits)(HBITMAP, LONG, LPVOID);

#define GetBitmapDimensionEx __imported_name(GetBitmapDimensionEx)
extern WINBOOL
 __imported_stdcall(GetBitmapDimensionEx)(HBITMAP, LPSIZE);

#define GetBoundsRect __imported_name(GetBoundsRect)
extern UINT
 __imported_stdcall(GetBoundsRect)(HDC, LPRECT, UINT);

#define GetBrushOrgEx __imported_name(GetBrushOrgEx)
extern WINBOOL
 __imported_stdcall(GetBrushOrgEx)(HDC, LPPOINT);

#define GetClipBox __imported_name(GetClipBox)
extern int
 __imported_stdcall(GetClipBox)(HDC, LPRECT);

#define GetClipRgn __imported_name(GetClipRgn)
extern int
 __imported_stdcall(GetClipRgn)(HDC, HRGN);

#define GetMetaRgn __imported_name(GetMetaRgn)
extern int
 __imported_stdcall(GetMetaRgn)(HDC, HRGN);

#define GetCurrentObject __imported_name(GetCurrentObject)
extern HGDIOBJ
 __imported_stdcall(GetCurrentObject)(HDC, UINT);

#define GetCurrentPositionEx __imported_name(GetCurrentPositionEx)
extern WINBOOL
 __imported_stdcall(GetCurrentPositionEx)(HDC, LPPOINT);

#define GetDeviceCaps __imported_name(GetDeviceCaps)
extern int
 __imported_stdcall(GetDeviceCaps)(HDC, int);

#define GetDIBits __imported_name(GetDIBits)
extern int
 __imported_stdcall(GetDIBits)(HDC, HBITMAP, UINT, UINT, LPVOID, LPBITMAPINFO, UINT);

#define GetFontData __imported_name(GetFontData)
extern DWORD
 __imported_stdcall(GetFontData)(HDC, DWORD, DWORD, LPVOID, DWORD);

#define GetGraphicsMode __imported_name(GetGraphicsMode)
extern int
 __imported_stdcall(GetGraphicsMode)(HDC);

#define GetMapMode __imported_name(GetMapMode)
extern int
 __imported_stdcall(GetMapMode)(HDC);

#define GetMetaFileBitsEx __imported_name(GetMetaFileBitsEx)
extern UINT
 __imported_stdcall(GetMetaFileBitsEx)(HMETAFILE, UINT, LPVOID);

#define GetNearestColor __imported_name(GetNearestColor)
extern COLORREF
 __imported_stdcall(GetNearestColor)(HDC, COLORREF);

#define GetNearestPaletteIndex __imported_name(GetNearestPaletteIndex)
extern UINT
 __imported_stdcall(GetNearestPaletteIndex)(HPALETTE, COLORREF);

#define GetObjectType __imported_name(GetObjectType)
extern DWORD
 __imported_stdcall(GetObjectType)(HGDIOBJ h);

#define GetPaletteEntries __imported_name(GetPaletteEntries)
extern UINT
 __imported_stdcall(GetPaletteEntries)(HPALETTE, UINT, UINT, LPPALETTEENTRY);

#define GetPixel __imported_name(GetPixel)
extern COLORREF
 __imported_stdcall(GetPixel)(HDC, int, int);

#define GetPixelFormat __imported_name(GetPixelFormat)
extern int
 __imported_stdcall(GetPixelFormat)(HDC);

#define GetPolyFillMode __imported_name(GetPolyFillMode)
extern int
 __imported_stdcall(GetPolyFillMode)(HDC);

#define GetRasterizerCaps __imported_name(GetRasterizerCaps)
extern WINBOOL
 __imported_stdcall(GetRasterizerCaps)(LPRASTERIZER_STATUS, UINT);

#define GetRegionData __imported_name(GetRegionData)
extern DWORD
 __imported_stdcall(GetRegionData)(HRGN, DWORD, LPRGNDATA);

#define GetRgnBox __imported_name(GetRgnBox)
extern int
 __imported_stdcall(GetRgnBox)(HRGN, LPRECT);

#define GetStockObject __imported_name(GetStockObject)
extern HGDIOBJ
 __imported_stdcall(GetStockObject)(int);

#define GetStretchBltMode __imported_name(GetStretchBltMode)
extern int
 __imported_stdcall(GetStretchBltMode)(HDC);

#define GetSystemPaletteEntries __imported_name(GetSystemPaletteEntries)
extern UINT
 __imported_stdcall(GetSystemPaletteEntries)(HDC, UINT, UINT, LPPALETTEENTRY);

#define GetSystemPaletteUse __imported_name(GetSystemPaletteUse)
extern UINT
 __imported_stdcall(GetSystemPaletteUse)(HDC);

#define GetTextCharacterExtra __imported_name(GetTextCharacterExtra)
extern int
 __imported_stdcall(GetTextCharacterExtra)(HDC);

#define GetTextAlign __imported_name(GetTextAlign)
extern UINT
 __imported_stdcall(GetTextAlign)(HDC);

#define GetTextColor __imported_name(GetTextColor)
extern COLORREF
 __imported_stdcall(GetTextColor)(HDC);

#define GetTextCharset __imported_name(GetTextCharset)
extern int
 __imported_stdcall(GetTextCharset)(HDC hdc);

#define GetTextCharsetInfo __imported_name(GetTextCharsetInfo)
extern int
 __imported_stdcall(GetTextCharsetInfo)(HDC hdc, LPFONTSIGNATURE lpSig, DWORD dwFlags);

#define TranslateCharsetInfo __imported_name(TranslateCharsetInfo)
extern WINBOOL
 __imported_stdcall(TranslateCharsetInfo)( DWORD *lpSrc, LPCHARSETINFO lpCs, DWORD dwFlags);

#define GetFontLanguageInfo __imported_name(GetFontLanguageInfo)
extern DWORD
 __imported_stdcall(GetFontLanguageInfo)( HDC );

#define GetViewportExtEx __imported_name(GetViewportExtEx)
extern WINBOOL
 __imported_stdcall(GetViewportExtEx)(HDC, LPSIZE);

#define GetViewportOrgEx __imported_name(GetViewportOrgEx)
extern WINBOOL
 __imported_stdcall(GetViewportOrgEx)(HDC, LPPOINT);

#define GetWindowExtEx __imported_name(GetWindowExtEx)
extern WINBOOL
 __imported_stdcall(GetWindowExtEx)(HDC, LPSIZE);

#define GetWindowOrgEx __imported_name(GetWindowOrgEx)
extern WINBOOL
 __imported_stdcall(GetWindowOrgEx)(HDC, LPPOINT);

#define IntersectClipRect __imported_name(IntersectClipRect)
extern int
 __imported_stdcall(IntersectClipRect)(HDC, int, int, int, int);

#define InvertRgn __imported_name(InvertRgn)
extern WINBOOL
 __imported_stdcall(InvertRgn)(HDC, HRGN);

#define LineDDA __imported_name(LineDDA)
extern WINBOOL
 __imported_stdcall(LineDDA)(int, int, int, int, LINEDDAPROC, LPARAM);

#define LineTo __imported_name(LineTo)
extern WINBOOL
 __imported_stdcall(LineTo)(HDC, int, int);

#define MaskBlt __imported_name(MaskBlt)
extern WINBOOL
 __imported_stdcall(MaskBlt)(HDC, int, int, int, int,
	HDC, int, int, HBITMAP, int, int, DWORD);

#define PlgBlt __imported_name(PlgBlt)
extern WINBOOL
 __imported_stdcall(PlgBlt)(HDC, CONST POINT *, HDC, int, int, int,
       int, HBITMAP, int, int);

#define OffsetClipRgn __imported_name(OffsetClipRgn)
extern int
 __imported_stdcall(OffsetClipRgn)(HDC, int, int);

#define OffsetRgn __imported_name(OffsetRgn)
extern int
 __imported_stdcall(OffsetRgn)(HRGN, int, int);

#define PatBlt __imported_name(PatBlt)
extern WINBOOL
  __imported_stdcall(PatBlt)(HDC, int, int, int, int, DWORD);

#define Pie __imported_name(Pie)
extern WINBOOL
 __imported_stdcall(Pie)(HDC, int, int, int, int, int, int, int, int);

#define PlayMetaFile __imported_name(PlayMetaFile)
extern WINBOOL
 __imported_stdcall(PlayMetaFile)(HDC, HMETAFILE);

#define PaintRgn __imported_name(PaintRgn)
extern WINBOOL
 __imported_stdcall(PaintRgn)(HDC, HRGN);

#define PolyPolygon __imported_name(PolyPolygon)
extern WINBOOL
 __imported_stdcall(PolyPolygon)(HDC, CONST POINT *, CONST INT *, int);

#define PtInRegion __imported_name(PtInRegion)
extern WINBOOL
 __imported_stdcall(PtInRegion)(HRGN, int, int);

#define PtVisible __imported_name(PtVisible)
extern WINBOOL
 __imported_stdcall(PtVisible)(HDC, int, int);

#define RectInRegion __imported_name(RectInRegion)
extern WINBOOL
 __imported_stdcall(RectInRegion)(HRGN, CONST RECT *);

#define RectVisible __imported_name(RectVisible)
extern WINBOOL
 __imported_stdcall(RectVisible)(HDC, CONST RECT *);

#define Rectangle __imported_name(Rectangle)
extern WINBOOL
 __imported_stdcall(Rectangle)(HDC, int, int, int, int);

#define RestoreDC __imported_name(RestoreDC)
extern WINBOOL
 __imported_stdcall(RestoreDC)(HDC, int);

#define RealizePalette __imported_name(RealizePalette)
extern UINT
 __imported_stdcall(RealizePalette)(HDC);

#define RoundRect __imported_name(RoundRect)
extern WINBOOL
 __imported_stdcall(RoundRect)(HDC, int, int, int, int, int, int);

#define ResizePalette __imported_name(ResizePalette)
extern WINBOOL
 __imported_stdcall(ResizePalette)(HPALETTE, UINT);

#define SaveDC __imported_name(SaveDC)
extern int
 __imported_stdcall(SaveDC)(HDC);

#define SelectClipRgn __imported_name(SelectClipRgn)
extern int
 __imported_stdcall(SelectClipRgn)(HDC, HRGN);

#define ExtSelectClipRgn __imported_name(ExtSelectClipRgn)
extern int
 __imported_stdcall(ExtSelectClipRgn)(HDC, HRGN, int);

#define SetMetaRgn __imported_name(SetMetaRgn)
extern int
 __imported_stdcall(SetMetaRgn)(HDC);

#define SelectObject __imported_name(SelectObject)
extern HGDIOBJ
 __imported_stdcall(SelectObject)(HDC, HGDIOBJ);

#define SelectPalette __imported_name(SelectPalette)
extern HPALETTE
 __imported_stdcall(SelectPalette)(HDC, HPALETTE, WINBOOL);

#define SetBkColor __imported_name(SetBkColor)
extern COLORREF
 __imported_stdcall(SetBkColor)(HDC, COLORREF);

#define SetBkMode __imported_name(SetBkMode)
extern int
 __imported_stdcall(SetBkMode)(HDC, int);

#define SetBitmapBits __imported_name(SetBitmapBits)
extern LONG
 __imported_stdcall(SetBitmapBits)(HBITMAP, DWORD, CONST VOID *);

#define SetBoundsRect __imported_name(SetBoundsRect)
extern UINT
 __imported_stdcall(SetBoundsRect)(HDC, CONST RECT *, UINT);

#define SetDIBits __imported_name(SetDIBits)
extern int
 __imported_stdcall(SetDIBits)(HDC, HBITMAP, UINT, UINT, CONST VOID *, CONST BITMAPINFO *, UINT);

#define SetDIBitsToDevice __imported_name(SetDIBitsToDevice)
extern int
 __imported_stdcall(SetDIBitsToDevice)(HDC, int, int, DWORD, DWORD, int,
		  int, UINT, UINT, CONST VOID *, CONST BITMAPINFO *, UINT);

#define SetMapperFlags __imported_name(SetMapperFlags)
extern DWORD
 __imported_stdcall(SetMapperFlags)(HDC, DWORD);

#define SetGraphicsMode __imported_name(SetGraphicsMode)
extern int
 __imported_stdcall(SetGraphicsMode)(HDC hdc, int iMode);

#define SetMapMode __imported_name(SetMapMode)
extern int
 __imported_stdcall(SetMapMode)(HDC, int);

#define SetMetaFileBitsEx __imported_name(SetMetaFileBitsEx)
extern HMETAFILE
 __imported_stdcall(SetMetaFileBitsEx)(UINT, CONST BYTE *);

#define SetPaletteEntries __imported_name(SetPaletteEntries)
extern UINT
 __imported_stdcall(SetPaletteEntries)(HPALETTE, UINT, UINT, CONST PALETTEENTRY *);

#define SetPixel __imported_name(SetPixel)
extern COLORREF
 __imported_stdcall(SetPixel)(HDC, int, int, COLORREF);

#define SetPixelV __imported_name(SetPixelV)
extern WINBOOL
 __imported_stdcall(SetPixelV)(HDC, int, int, COLORREF);

#define SetPolyFillMode __imported_name(SetPolyFillMode)
extern int
 __imported_stdcall(SetPolyFillMode)(HDC, int);

#define StretchBlt __imported_name(StretchBlt)
extern WINBOOL
 __imported_stdcall(StretchBlt)(HDC, int, int, int, int, HDC, int, int, int, int, DWORD);

#define SetRectRgn __imported_name(SetRectRgn)
extern WINBOOL
 __imported_stdcall(SetRectRgn)(HRGN, int, int, int, int);
#define StretchDIBits __imported_name(StretchDIBits)
extern int
 __imported_stdcall(StretchDIBits)(HDC, int, int, int, int, int, int, int, int, CONST
	      VOID *, CONST BITMAPINFO *, UINT, DWORD);

#define SetROP2 __imported_name(SetROP2)
extern int
 __imported_stdcall(SetROP2)(HDC, int);

#define SetStretchBltMode __imported_name(SetStretchBltMode)
extern int
 __imported_stdcall(SetStretchBltMode)(HDC, int);

#define SetSystemPaletteUse __imported_name(SetSystemPaletteUse)
extern UINT
 __imported_stdcall(SetSystemPaletteUse)(HDC, UINT);

#define SetTextCharacterExtra __imported_name(SetTextCharacterExtra)
extern int
 __imported_stdcall(SetTextCharacterExtra)(HDC, int);

#define SetTextColor __imported_name(SetTextColor)
extern COLORREF
 __imported_stdcall(SetTextColor)(HDC, COLORREF);

#define SetTextAlign __imported_name(SetTextAlign)
extern UINT
 __imported_stdcall(SetTextAlign)(HDC, UINT);

#define SetTextJustification __imported_name(SetTextJustification)
extern WINBOOL
 __imported_stdcall(SetTextJustification)(HDC, int, int);

#define UpdateColors __imported_name(UpdateColors)
extern WINBOOL
 __imported_stdcall(UpdateColors)(HDC);

#define PlayMetaFileRecord __imported_name(PlayMetaFileRecord)
extern WINBOOL
 __imported_stdcall(PlayMetaFileRecord)(HDC, LPHANDLETABLE, LPMETARECORD, UINT);

#define EnumMetaFile __imported_name(EnumMetaFile)
extern WINBOOL
 __imported_stdcall(EnumMetaFile)(HDC, HMETAFILE, ENUMMETAFILEPROC, LPARAM);

#define CloseEnhMetaFile __imported_name(CloseEnhMetaFile)
extern HENHMETAFILE
 __imported_stdcall(CloseEnhMetaFile)(HDC);

#define DeleteEnhMetaFile __imported_name(DeleteEnhMetaFile)
extern WINBOOL
 __imported_stdcall(DeleteEnhMetaFile)(HENHMETAFILE);

#define EnumEnhMetaFile __imported_name(EnumEnhMetaFile)
extern WINBOOL
 __imported_stdcall(EnumEnhMetaFile)(HDC, HENHMETAFILE, ENHMETAFILEPROC,
		LPVOID, CONST RECT *);

#define GetEnhMetaFileHeader __imported_name(GetEnhMetaFileHeader)
extern UINT
 __imported_stdcall(GetEnhMetaFileHeader)(HENHMETAFILE, UINT, LPENHMETAHEADER );

#define GetEnhMetaFilePaletteEntries __imported_name(GetEnhMetaFilePaletteEntries)
extern UINT
 __imported_stdcall(GetEnhMetaFilePaletteEntries)(HENHMETAFILE, UINT, LPPALETTEENTRY );

#define GetWinMetaFileBits __imported_name(GetWinMetaFileBits)
extern UINT
 __imported_stdcall(GetWinMetaFileBits)(HENHMETAFILE, UINT, LPBYTE, INT, HDC);

#define PlayEnhMetaFile __imported_name(PlayEnhMetaFile)
extern WINBOOL
 __imported_stdcall(PlayEnhMetaFile)(HDC, HENHMETAFILE, CONST RECT *);

#define PlayEnhMetaFileRecord __imported_name(PlayEnhMetaFileRecord)
extern WINBOOL
 __imported_stdcall(PlayEnhMetaFileRecord)(HDC, LPHANDLETABLE, CONST ENHMETARECORD *, UINT);

#define SetEnhMetaFileBits __imported_name(SetEnhMetaFileBits)
extern HENHMETAFILE
 __imported_stdcall(SetEnhMetaFileBits)(UINT, CONST BYTE *);

#define SetWinMetaFileBits __imported_name(SetWinMetaFileBits)
extern HENHMETAFILE
 __imported_stdcall(SetWinMetaFileBits)(UINT, CONST BYTE *, HDC, CONST METAFILEPICT *);

#define GdiComment __imported_name(GdiComment)
extern WINBOOL
 __imported_stdcall(GdiComment)(HDC, UINT, CONST BYTE *);

#define AngleArc __imported_name(AngleArc)
extern WINBOOL
 __imported_stdcall(AngleArc)(HDC, int, int, DWORD, FLOAT, FLOAT);

#define PolyPolyline __imported_name(PolyPolyline)
extern WINBOOL
 __imported_stdcall(PolyPolyline)(HDC, CONST POINT *, CONST DWORD *, DWORD);

#define GetWorldTransform __imported_name(GetWorldTransform)
extern WINBOOL
 __imported_stdcall(GetWorldTransform)(HDC, LPXFORM);

#define SetWorldTransform __imported_name(SetWorldTransform)
extern WINBOOL
 __imported_stdcall(SetWorldTransform)(HDC, CONST XFORM *);

#define ModifyWorldTransform __imported_name(ModifyWorldTransform)
extern WINBOOL
 __imported_stdcall(ModifyWorldTransform)(HDC, CONST XFORM *, DWORD);

#define CombineTransform __imported_name(CombineTransform)
extern WINBOOL
 __imported_stdcall(CombineTransform)(LPXFORM, CONST XFORM *, CONST XFORM *);

#define CreateDIBSection __imported_name(CreateDIBSection)
extern HBITMAP
 __imported_stdcall(CreateDIBSection)(HDC, CONST BITMAPINFO *, UINT, VOID **, HANDLE, DWORD);

#define GetDIBColorTable __imported_name(GetDIBColorTable)
extern UINT
 __imported_stdcall(GetDIBColorTable)(HDC, UINT, UINT, RGBQUAD *);

#define SetDIBColorTable __imported_name(SetDIBColorTable)
extern UINT
 __imported_stdcall(SetDIBColorTable)(HDC, UINT, UINT, CONST RGBQUAD *);

#define SetColorAdjustment __imported_name(SetColorAdjustment)
extern WINBOOL
 __imported_stdcall(SetColorAdjustment)(HDC, CONST COLORADJUSTMENT *);

#define GetColorAdjustment __imported_name(GetColorAdjustment)
extern WINBOOL
 __imported_stdcall(GetColorAdjustment)(HDC, LPCOLORADJUSTMENT);

#define CreateHalftonePalette __imported_name(CreateHalftonePalette)
extern HPALETTE
  __imported_stdcall(CreateHalftonePalette)(HDC);

#define EndDoc __imported_name(EndDoc)
extern int
 __imported_stdcall(EndDoc)(HDC);

#define StartPage __imported_name(StartPage)
extern int
 __imported_stdcall(StartPage)(HDC);

#define EndPage __imported_name(EndPage)
extern int
 __imported_stdcall(EndPage)(HDC);

#define AbortDoc __imported_name(AbortDoc)
extern int
 __imported_stdcall(AbortDoc)(HDC);

#define SetAbortProc __imported_name(SetAbortProc)
extern int
 __imported_stdcall(SetAbortProc)(HDC, ABORTPROC);

#define AbortPath __imported_name(AbortPath)
extern WINBOOL
 __imported_stdcall(AbortPath)(HDC);

#define ArcTo __imported_name(ArcTo)
extern WINBOOL
 __imported_stdcall(ArcTo)(HDC, int, int, int, int, int, int,int, int);

#define BeginPath __imported_name(BeginPath)
extern WINBOOL
 __imported_stdcall(BeginPath)(HDC);

#define CloseFigure __imported_name(CloseFigure)
extern WINBOOL
 __imported_stdcall(CloseFigure)(HDC);

#define EndPath __imported_name(EndPath)
extern WINBOOL
 __imported_stdcall(EndPath)(HDC);

#define FillPath __imported_name(FillPath)
extern WINBOOL
 __imported_stdcall(FillPath)(HDC);

#define FlattenPath __imported_name(FlattenPath)
extern WINBOOL
 __imported_stdcall(FlattenPath)(HDC);

#define GetPath __imported_name(GetPath)
extern int
 __imported_stdcall(GetPath)(HDC, LPPOINT, LPBYTE, int);

#define PathToRegion __imported_name(PathToRegion)
extern HRGN
 __imported_stdcall(PathToRegion)(HDC);

#define PolyDraw __imported_name(PolyDraw)
extern WINBOOL
 __imported_stdcall(PolyDraw)(HDC, CONST POINT *, CONST BYTE *, int);

#define SelectClipPath __imported_name(SelectClipPath)
extern WINBOOL
 __imported_stdcall(SelectClipPath)(HDC, int);

#define SetArcDirection __imported_name(SetArcDirection)
extern int
 __imported_stdcall(SetArcDirection)(HDC, int);

#define SetMiterLimit __imported_name(SetMiterLimit)
extern WINBOOL
 __imported_stdcall(SetMiterLimit)(HDC, FLOAT, PFLOAT);

#define StrokeAndFillPath __imported_name(StrokeAndFillPath)
extern WINBOOL
 __imported_stdcall(StrokeAndFillPath)(HDC);

#define StrokePath __imported_name(StrokePath)
extern WINBOOL
 __imported_stdcall(StrokePath)(HDC);

#define WidenPath __imported_name(WidenPath)
extern WINBOOL
 __imported_stdcall(WidenPath)(HDC);

#define ExtCreatePen __imported_name(ExtCreatePen)
extern HPEN
 __imported_stdcall(ExtCreatePen)(DWORD, DWORD, CONST LOGBRUSH *, DWORD, CONST DWORD *);

#define GetMiterLimit __imported_name(GetMiterLimit)
extern WINBOOL
 __imported_stdcall(GetMiterLimit)(HDC, PFLOAT);

#define GetArcDirection __imported_name(GetArcDirection)
extern int
 __imported_stdcall(GetArcDirection)(HDC);

#define MoveToEx __imported_name(MoveToEx)
extern WINBOOL
 __imported_stdcall(MoveToEx)(HDC, int, int, LPPOINT);

#define CreatePolygonRgn __imported_name(CreatePolygonRgn)
extern HRGN
 __imported_stdcall(CreatePolygonRgn)(CONST POINT *, int, int);

#define DPtoLP __imported_name(DPtoLP)
extern WINBOOL
 __imported_stdcall(DPtoLP)(HDC, LPPOINT, int);

#define LPtoDP __imported_name(LPtoDP)
extern WINBOOL
 __imported_stdcall(LPtoDP)(HDC, LPPOINT, int);
 
#define Polygon __imported_name(Polygon)
extern WINBOOL
 __imported_stdcall(Polygon)(HDC, CONST POINT *, int);

#define Polyline __imported_name(Polyline)
extern WINBOOL
 __imported_stdcall(Polyline)(HDC, CONST POINT *, int);

#define PolyBezier __imported_name(PolyBezier)
extern WINBOOL
 __imported_stdcall(PolyBezier)(HDC, CONST POINT *, DWORD);

#define PolyBezierTo __imported_name(PolyBezierTo)
extern WINBOOL
 __imported_stdcall(PolyBezierTo)(HDC, CONST POINT *, DWORD);

#define PolylineTo __imported_name(PolylineTo)
extern WINBOOL
 __imported_stdcall(PolylineTo)(HDC, CONST POINT *, DWORD);

#define SetViewportExtEx __imported_name(SetViewportExtEx)
extern WINBOOL
 __imported_stdcall(SetViewportExtEx)(HDC, int, int, LPSIZE);

#define SetViewportOrgEx __imported_name(SetViewportOrgEx)
extern WINBOOL
 __imported_stdcall(SetViewportOrgEx)(HDC, int, int, LPPOINT);

#define SetWindowExtEx __imported_name(SetWindowExtEx)
extern WINBOOL
 __imported_stdcall(SetWindowExtEx)(HDC, int, int, LPSIZE);

#define SetWindowOrgEx __imported_name(SetWindowOrgEx)
extern WINBOOL
 __imported_stdcall(SetWindowOrgEx)(HDC, int, int, LPPOINT);

#define OffsetViewportOrgEx __imported_name(OffsetViewportOrgEx)
extern WINBOOL
 __imported_stdcall(OffsetViewportOrgEx)(HDC, int, int, LPPOINT);

#define OffsetWindowOrgEx __imported_name(OffsetWindowOrgEx)
extern WINBOOL
 __imported_stdcall(OffsetWindowOrgEx)(HDC, int, int, LPPOINT);

#define ScaleViewportExtEx __imported_name(ScaleViewportExtEx)
extern WINBOOL
 __imported_stdcall(ScaleViewportExtEx)(HDC, int, int, int, int, LPSIZE);

#define ScaleWindowExtEx __imported_name(ScaleWindowExtEx)
extern WINBOOL
 __imported_stdcall(ScaleWindowExtEx)(HDC, int, int, int, int, LPSIZE);

#define SetBitmapDimensionEx __imported_name(SetBitmapDimensionEx)
extern WINBOOL
 __imported_stdcall(SetBitmapDimensionEx)(HBITMAP, int, int, LPSIZE);

#define SetBrushOrgEx __imported_name(SetBrushOrgEx)
extern WINBOOL
 __imported_stdcall(SetBrushOrgEx)(HDC, int, int, LPPOINT);

#define GetDCOrgEx __imported_name(GetDCOrgEx)
extern WINBOOL
 __imported_stdcall(GetDCOrgEx)(HDC,LPPOINT);

#define FixBrushOrgEx __imported_name(FixBrushOrgEx)
extern WINBOOL
 __imported_stdcall(FixBrushOrgEx)(HDC,int,int,LPPOINT);

#define UnrealizeObject __imported_name(UnrealizeObject)
extern WINBOOL
 __imported_stdcall(UnrealizeObject)(HGDIOBJ);

#define GdiFlush __imported_name(GdiFlush)
extern WINBOOL
 __imported_stdcall(GdiFlush)();

#define GdiSetBatchLimit __imported_name(GdiSetBatchLimit)
extern DWORD
 __imported_stdcall(GdiSetBatchLimit)(DWORD);

#define GdiGetBatchLimit __imported_name(GdiGetBatchLimit)
extern DWORD
 __imported_stdcall(GdiGetBatchLimit)();

#define SetICMMode __imported_name(SetICMMode)
extern int
 __imported_stdcall(SetICMMode)(HDC, int);

#define CheckColorsInGamut __imported_name(CheckColorsInGamut)
extern WINBOOL
 __imported_stdcall(CheckColorsInGamut)(HDC,LPVOID,LPVOID,DWORD);

#define GetColorSpace __imported_name(GetColorSpace)
extern HANDLE
 __imported_stdcall(GetColorSpace)(HDC);

#define SetColorSpace __imported_name(SetColorSpace)
extern WINBOOL
 __imported_stdcall(SetColorSpace)(HDC,HCOLORSPACE);

#define DeleteColorSpace __imported_name(DeleteColorSpace)
extern WINBOOL
 __imported_stdcall(DeleteColorSpace)(HCOLORSPACE);

#define GetDeviceGammaRamp __imported_name(GetDeviceGammaRamp)
extern WINBOOL
 __imported_stdcall(GetDeviceGammaRamp)(HDC,LPVOID);

#define SetDeviceGammaRamp __imported_name(SetDeviceGammaRamp)
extern WINBOOL
 __imported_stdcall(SetDeviceGammaRamp)(HDC,LPVOID);

#define ColorMatchToTarget __imported_name(ColorMatchToTarget)
extern WINBOOL
 __imported_stdcall(ColorMatchToTarget)(HDC,HDC,DWORD);

#define CreatePropertySheetPageA __imported_name(CreatePropertySheetPageA)
extern HPROPSHEETPAGE
 __imported_stdcall(CreatePropertySheetPageA)(LPCPROPSHEETPAGE lppsp);

#define DestroyPropertySheetPage __imported_name(DestroyPropertySheetPage)
extern WINBOOL
 __imported_stdcall(DestroyPropertySheetPage)(HPROPSHEETPAGE hPSPage);

#define InitCommonControls __imported_name(InitCommonControls)
extern void
 __imported_stdcall(InitCommonControls)();

#define  ImageList_AddIcon(himl, hicon) ImageList_ReplaceIcon(himl, -1, hicon)

#define ImageList_Create __imported_name(ImageList_Create)
extern HIMAGELIST
 __imported_stdcall(ImageList_Create)(int cx, int cy, UINT flags, 
		 int cInitial, int cGrow);

#define ImageList_Destroy __imported_name(ImageList_Destroy)
extern WINBOOL
 __imported_stdcall(ImageList_Destroy)(HIMAGELIST himl);

#define ImageList_GetImageCount __imported_name(ImageList_GetImageCount)
extern int
 __imported_stdcall(ImageList_GetImageCount)(HIMAGELIST himl);

#define ImageList_Add __imported_name(ImageList_Add)
extern int
 __imported_stdcall(ImageList_Add)(HIMAGELIST himl, HBITMAP hbmImage, 
	      HBITMAP hbmMask);

#define ImageList_ReplaceIcon __imported_name(ImageList_ReplaceIcon)
extern int
 __imported_stdcall(ImageList_ReplaceIcon)(HIMAGELIST himl, int i, HICON hicon);

#define ImageList_SetBkColor __imported_name(ImageList_SetBkColor)
extern COLORREF
 __imported_stdcall(ImageList_SetBkColor)(HIMAGELIST himl, COLORREF clrBk);

#define ImageList_GetBkColor __imported_name(ImageList_GetBkColor)
extern COLORREF
 __imported_stdcall(ImageList_GetBkColor)(HIMAGELIST himl);

#define ImageList_SetOverlayImage __imported_name(ImageList_SetOverlayImage)
extern WINBOOL
 __imported_stdcall(ImageList_SetOverlayImage)(HIMAGELIST himl, int iImage, 
			  int iOverlay);

#define ImageList_Draw __imported_name(ImageList_Draw)
extern WINBOOL
 __imported_stdcall(ImageList_Draw)(HIMAGELIST himl, int i, HDC hdcDst, int x, int y, UINT fStyle);

#define ImageList_Replace __imported_name(ImageList_Replace)
extern WINBOOL
 __imported_stdcall(ImageList_Replace)(HIMAGELIST himl, int i, HBITMAP hbmImage, HBITMAP hbmMask);

#define ImageList_AddMasked __imported_name(ImageList_AddMasked)
extern int
 __imported_stdcall(ImageList_AddMasked)(HIMAGELIST himl, HBITMAP hbmImage, COLORREF crMask);

#define ImageList_DrawEx __imported_name(ImageList_DrawEx)
extern WINBOOL
 __imported_stdcall(ImageList_DrawEx)(HIMAGELIST himl, int i, HDC hdcDst, int x, int y, int dx, int dy, COLORREF rgbBk, COLORREF rgbFg, UINT fStyle);

#define ImageList_Remove __imported_name(ImageList_Remove)
extern WINBOOL
 __imported_stdcall(ImageList_Remove)(HIMAGELIST himl, int i);

#define ImageList_GetIcon __imported_name(ImageList_GetIcon)
extern HICON
 __imported_stdcall(ImageList_GetIcon)(HIMAGELIST himl, int i, UINT flags);

#define ImageList_BeginDrag __imported_name(ImageList_BeginDrag)
extern WINBOOL
 __imported_stdcall(ImageList_BeginDrag)(HIMAGELIST himlTrack, int iTrack, int dxHotspot, int dyHotspot);

#define ImageList_EndDrag __imported_name(ImageList_EndDrag)
extern void
 __imported_stdcall(ImageList_EndDrag)();

#define ImageList_DragEnter __imported_name(ImageList_DragEnter)
extern WINBOOL
 __imported_stdcall(ImageList_DragEnter)(HWND hwndLock, int x, int y);

#define ImageList_DragLeave __imported_name(ImageList_DragLeave)
extern WINBOOL
 __imported_stdcall(ImageList_DragLeave)(HWND hwndLock);

#define ImageList_DragMove __imported_name(ImageList_DragMove)
extern WINBOOL
 __imported_stdcall(ImageList_DragMove)(int x, int y);

#define ImageList_SetDragCursorImage __imported_name(ImageList_SetDragCursorImage)
extern WINBOOL
 __imported_stdcall(ImageList_SetDragCursorImage)(HIMAGELIST himlDrag, int iDrag, int dxHotspot, int dyHotspot);

#define ImageList_DragShowNolock __imported_name(ImageList_DragShowNolock)
extern WINBOOL
 __imported_stdcall(ImageList_DragShowNolock)(WINBOOL fShow);

#define ImageList_GetDragImage __imported_name(ImageList_GetDragImage)
extern HIMAGELIST
 __imported_stdcall(ImageList_GetDragImage)(POINT * ppt,POINT * pptHotspot);

#define ImageList_GetIconSize __imported_name(ImageList_GetIconSize)
extern WINBOOL
 __imported_stdcall(ImageList_GetIconSize)(HIMAGELIST himl, int *cx, int *cy);

#define ImageList_SetIconSize __imported_name(ImageList_SetIconSize)
extern WINBOOL
 __imported_stdcall(ImageList_SetIconSize)(HIMAGELIST himl, int cx, int cy);

#define ImageList_GetImageInfo __imported_name(ImageList_GetImageInfo)
extern WINBOOL
 __imported_stdcall(ImageList_GetImageInfo)(HIMAGELIST himl, int i, IMAGEINFO * pImageInfo);

#define ImageList_Merge __imported_name(ImageList_Merge)
extern HIMAGELIST
 __imported_stdcall(ImageList_Merge)(HIMAGELIST himl1, int i1, HIMAGELIST himl2, int i2, int dx, int dy);

#define CreateToolbarEx __imported_name(CreateToolbarEx)
extern HWND
 __imported_stdcall(CreateToolbarEx)(HWND hwnd, DWORD ws, UINT wID, int nBitmaps,
		HINSTANCE hBMInst, UINT wBMID, LPCTBBUTTON lpButtons,
		int iNumButtons, int dxButton, int dyButton,
		int dxBitmap, int dyBitmap, UINT uStructSize);

#define CreateMappedBitmap __imported_name(CreateMappedBitmap)
extern HBITMAP
 __imported_stdcall(CreateMappedBitmap)(HINSTANCE hInstance, int idBitmap,
		   UINT wFlags, LPCOLORMAP lpColorMap,
		   int iNumMaps);


#define MenuHelp __imported_name(MenuHelp)
extern void
 __imported_stdcall(MenuHelp)(UINT uMsg, WPARAM wParam, LPARAM lParam, HMENU hMainMenu, HINSTANCE hInst, HWND hwndStatus, UINT *lpwIDs);

#define ShowHideMenuCtl __imported_name(ShowHideMenuCtl)
extern WINBOOL
 __imported_stdcall(ShowHideMenuCtl)(HWND hWnd, UINT uFlags, LPINT lpInfo);

#define GetEffectiveClientRect __imported_name(GetEffectiveClientRect)
extern void
 __imported_stdcall(GetEffectiveClientRect)(HWND hWnd, LPRECT lprc, LPINT lpInfo);

#define MakeDragList __imported_name(MakeDragList)
extern WINBOOL
 __imported_stdcall(MakeDragList)(HWND hLB);

#define DrawInsert __imported_name(DrawInsert)
extern void
 __imported_stdcall(DrawInsert)(HWND handParent, HWND hLB, int nItem);

#define LBItemFromPt __imported_name(LBItemFromPt)
extern int
 __imported_stdcall(LBItemFromPt)(HWND hLB, POINT pt, WINBOOL bAutoScroll);

#define CreateUpDownControl __imported_name(CreateUpDownControl)
extern HWND
 __imported_stdcall(CreateUpDownControl)(DWORD dwStyle, int x, int y, int cx, int cy,
		    HWND hParent, int nID, HINSTANCE hInst,
		    HWND hBuddy,
		    int nUpper, int nLower, int nPos);

#define CommDlgExtendedError __imported_name(CommDlgExtendedError)
extern DWORD
 __imported_stdcall(CommDlgExtendedError)(VOID);

/* Animation controls */

#define Animate_Create(hwndP, id, dwStyle, hInstance)   \
CreateWindow(ANIMATE_CLASS, NULL, dwStyle, 0, 0, 0, 0, hwndP, \
             (HMENU)(id), hInstance, NULL)

#define Animate_Open(hwnd, szName) \
SendMessage(hwnd, ACM_OPEN, 0, (LPARAM)(LPTSTR)(szName))

#define Animate_Play(hwnd, from, to, rep) \
SendMessage(hwnd, ACM_PLAY, (WPARAM)(UINT)(rep), (LPARAM)MAKELONG(from, to))

#define Animate_Stop(hwnd) \
SendMessage(hwnd, ACM_STOP, 0, 0)

#define Animate_Close(hwnd) \
Animate_Open(hwnd, NULL)

#define Animate_Seek(hwnd, frame) \
Animate_Play(hwnd, frame, frame, 1)

/* Property sheet macros */

#define PropSheet_AddPage(hPropSheetDlg, hpage) \
SendMessage(hPropSheetDlg, PSM_ADDPAGE, 0, (LPARAM)(HPROPSHEETPAGE)hpage)

#define PropSheet_Apply(hPropSheetDlg) \
SendMessage(hPropSheetDlg, PSM_APPLY, 0, 0)

#define PropSheet_CancelToClose(hPropSheetDlg) \
SendMessage(hPropSheetDlg, PSM_CANCELTOCLOSE, 0, 0)

#define PropSheet_Changed(hPropSheetDlg, hwndPage) \
SendMessage(hPropSheetDlg, PSM_CHANGED, (WPARAM)(HWND)hwndPage, 0)

#define PropSheet_GetCurrentPageHwnd(hDlg) \
SendMessage(hDlg, PSM_GETCURRENTPAGEHWND, 0, 0)

#define PropSheet_GetTabControl(hPropSheetDlg) \
SendMessage(hPropSheetDlg, PSM_GETTABCONTROL, 0, 0)

#define PropSheet_IsDialogMessage(hDlg, pMsg) \
SendMessage(hDlg, PSM_ISDIALOGMESSAGE, 0, (LPARAM)pMsg)

#define PropSheet_PressButton(hPropSheetDlg, iButton) \
SendMessage(hPropSheetDlg, PSM_PRESSBUTTON, (WPARAM)(int)iButton, 0)

#define PropSheet_QuerySiblings(hPropSheetDlg, param1, param2) \
SendMessage(hPropSheetDlg, PSM_QUERYSIBLINGS, (WPARAM)param1, (LPARAM)param2)

#define PropSheet_RebootSystem(hPropSheetDlg) \
SendMessage(hPropSheetDlg, PSM_REBOOTSYSTEM, 0, 0)

#define PropSheet_RemovePage(hPropSheetDlg, index, hpage) \
SendMessage(hPropSheetDlg, PSM_REMOVEPAGE, (WPARAM)(int)index, \
	    (LPARAM)(HPROPSHEETPAGE)hpage)

#define PropSheet_RestartWindows(hPropSheetDlg) \
SendMessage(hPropSheetDlg, PSM_RESTARTWINDOWS, 0, 0)

#define PropSheet_SetCurSel(hPropSheetDlg, hpage, index) \
SendMessage(hPropSheetDlg, PSM_SETCURSEL, (WPARAM)(int)index, \
	    (LPARAM)(HPROPSHEETPAGE)hpage)

#define PropSheet_SetCurSelByID(hPropSheetDlg, id) \
SendMessage(hPropSheetDlg, PSM_SETCURSELID, 0, (LPARAM)(int)id)

#define PropSheet_SetFinishText(hPropSheetDlg, lpszText) \
SendMessage(hPropSheetDlg, PSM_SETFINISHTEXT, 0, (LPARAM)(LPTSTR)lpszText)

#define PropSheet_SetTitle(hPropSheetDlg, dwStyle, lpszText) \
SendMessage(hPropSheetDlg, PSM_SETTITLE, (WPARAM)(DWORD)dwStyle, \
	    (LPARAM)(LPCTSTR)lpszText)

#define PropSheet_SetWizButtons(hPropSheetDlg, dwFlags) \
SendMessage(hPropSheetDlg, PSM_SETWIZBUTTONS, 0, (LPARAM)(DWORD)dwFlags)

#define PropSheet_UnChanged(hPropSheetDlg, hwndPage) \
SendMessage(hPropSheetDlg, PSM_UNCHANGED, (WPARAM)(HWND)hwndPage, 0)

/* Header control */
#define Header_DeleteItem(hwndHD, index)     \
      (BOOL)SendMessage((hwndHD), HDM_DELETEITEM, (WPARAM)(int)(index), 0L)  

#define Header_GetItem(hwndHD, index, phdi)      \
    (BOOL)SendMessage((hwndHD), HDM_GETITEM,   \
    (WPARAM)(int)(index), (LPARAM)(HD_ITEM FAR*)(phdi))
 
#define Header_GetItemCount(hwndHD)   \
       (int)SendMessage((hwndHD), HDM_GETITEMCOUNT, 0, 0L)

#define Header_InsertItem(hwndHD, index, phdi) \
    (int)SendMessage((hwndHD), HDM_INSERTITEM, (WPARAM)(int)(index), \
    (LPARAM)(const HD_ITEM FAR*)(phdi))
  
#define Header_Layout(hwndHD, playout) \
    (BOOL)SendMessage((hwndHD), HDM_LAYOUT, 0, \
    (LPARAM)(HD_LAYOUT FAR*)(playout))
  
#define Header_SetItem(hwndHD, index, phdi) \
    (BOOL)SendMessage((hwndHD), HDM_SETITEM,  \
    (WPARAM)(int)(index), (LPARAM)(const HD_ITEM FAR*)(phdi))

/* List View */
#define ListView_Arrange(hwndLV, code) \
SendMessage((hwndLV), LVM_ARRANGE, (WPARAM)(UINT)(code), 0)

#define ListView_CreateDragImage(hwnd, i, lpptUpLeft) \
SendMessage((hwnd), LVM_CREATEDRAGIMAGE, (WPARAM)(int)(i), \
	    (LPARAM)(LPPOINT)(lpptUpLeft))

#define ListView_DeleteAllItems(hwnd) \
SendMessage(hwnd, LVM_DELETEALLITEMS, 0, 0)

#define ListView_DeleteColumn(hwnd, iCol) \
SendMessage((hwnd), LVM_DELETECOLUMN, (WPARAM)(int)(iCol), 0)

#define ListView_DeleteItem(hwnd, iItem) \
SendMessage(hwnd, LVM_DELETEITEM, (WPARAM)(int)iItem, 0)

#define ListView_EditLabel(hwndLV, i) \
SendMessage((hwndLV), LVM_EDITLABEL, (WPARAM)(int)i, 0)

#define ListView_EnsureVisible(hwndLV, i, fPartialOK) \
SendMessage(hwndLV, LVM_ENSUREVISIBLE, (WPARAM)(int)i, \
	    MAKELPARAM((fPartialOK), 0))

#define ListView_FindItem(hwnd, iStart, plvfi) \
SendMessage(hwnd, LVM_FINDITEM, (WPARAM)(int)iStart, \
	    (LPARAM)(const LV_FINDINFO *)plvfi)

#define ListView_GetBkColor(hwnd) \
SendMessage((HWND)hwnd, LVM_GETBKCOLOR, 0, 0)

#define ListView_GetCallbackMask(hwnd) \
SendMessage(hwnd, LVM_GETCALLBACKMASK, 0, 0)

#define ListView_GetColumn(hwnd, iCol, pcol) \
SendMessage((hwnd), LVM_GETCOLUMN, (WPARAM)(int)(iCol), \
	    (LPARAM)(LV_COLUMN *)(pcol))

#define ListView_GetColumnWidth(hwnd, iCol) \
SendMessage((hwnd), LVM_GETCOLUMNWIDTH, (WPARAM)(int)(iCol), 0)

#define ListView_GetCountPerPage(hwndLV) \
SendMessage((hwndLV), LVM_GETCOUNTPERPAGE, 0, 0)

#define ListView_GetEditControl(hwndLV) \
SendMessage((hwndLV), LVM_GETEDITCONTROL, 0, 0)

#define ListView_GetImageList(hwnd, iImageList) \
SendMessage(hwnd, LVM_GETIMAGELIST, (WPARAM)(INT)iImageList, 0)

#define ListView_GetISearchString(hwndLV, lpsz) \
SendMessage((hwndLV), LVM_GETISEARCHSTRING, 0, (LPARAM)(LPTSTR)lpsz)

#define ListView_GetItem(hwnd, pitem) \
SendMessage(hwnd, LVM_GETITEM, 0, (LPARAM)(LV_ITEM *)(pitem))

#define ListView_GetItemCount(hwnd) \
SendMessage(hwnd, LVM_GETITEMCOUNT, 0, 0)

#define ListView_GetItemPosition(hwndLV, i, ppt) \
SendMessage(hwndLV, LVM_GETITEMPOSITION, (WPARAM)(int)i, \
	    (LPARAM)(POINT *)ppt)

#define ListView_GetItemRect(hwnd, i, prc, code) \
SendMessage(hwnd, LVM_GETITEMRECT, (WPARAM)(int)i, \
           ((prc) ? (((RECT *)(prc))->left = (code), \
		     (LPARAM)(RECT *)(prc)) : (LPARAM)(RECT *)NULL))

#define ListView_GetItemSpacing(hwndLV, fSmall) \
SendMessage((hwndLV), LVM_GETITEMSPACING, fSmall, 0)

#define ListView_GetItemState(hwndLV, i, mask) \
SendMessage((hwndLV), LVM_GETITEMSTATE, (WPARAM)i, (LPARAM)mask)

#define ListView_GetItemText(hwndLV, i, iSubItem_, pszText_, cchTextMax_) \
{ LV_ITEM _gnu_lvi;\
  _gnu_lvi.iSubItem = iSubItem_;\
  _gnu_lvi.cchTextMax = cchTextMax_;\
  _gnu_lvi.pszText = pszText_;\
  SendMessage((hwndLV), LVM_GETITEMTEXT, (WPARAM)i, \
	      (LPARAM)(LV_ITEM *)&_gnu_lvi);\
}

#define ListView_GetNextItem(hwnd, iStart, flags) \
SendMessage(hwnd, LVM_GETNEXTITEM, (WPARAM)(int)iStart, (LPARAM)flags)

#define ListView_GetOrigin(hwndLV, ppt) \
SendMessage((hwndLV), LVM_GETORIGIN, (WPARAM)0, (LPARAM)(POINT *)(ppt))

#define ListView_GetSelectedCount(hwndLV) \
SendMessage((hwndLV), LVM_GETSELECTEDCOUNT, 0, 0)

#define ListView_GetStringWidth(hwndLV, psz) \
SendMessage(hwndLV, LVM_GETSTRINGWIDTH, 0, (LPARAM)(LPCTSTR)psz)

#define ListView_GetTextBkColor(hwnd)  \
SendMessage((hwnd), LVM_GETTEXTBKCOLOR, 0, 0)

#define ListView_GetTextColor(hwnd)  \
SendMessage((hwnd), LVM_GETTEXTCOLOR, 0, 0)

#define ListView_GetTopIndex(hwndLV) \
SendMessage((hwndLV), LVM_GETTOPINDEX, 0, 0)

#define ListView_GetViewRect(hwnd, prc) \
SendMessage((hwnd), LVM_GETVIEWRECT, 0, (LPARAM)(RECT *)(prc))

#define ListView_HitTest(hwndLV, pinfo) \
SendMessage(hwndLV, LVM_HITTEST, 0, (LPARAM)(LV_HITTESTINFO *)pinfo)

#define ListView_InsertColumn(hwnd, iCol, pcol) \
SendMessage((hwnd), LVM_INSERTCOLUMN, (WPARAM)(int)(iCol), \
	    (LPARAM)(const LV_COLUMN *)(pcol))

#define ListView_InsertItem(hwnd, pitem) \
SendMessage(hwnd, LVM_INSERTITEM, 0, (LPARAM)(const LV_ITEM *)pitem)

#define ListView_RedrawItems(hwndLV, iFirst, iLast) \
SendMessage((hwndLV), LVM_REDRAWITEMS, (WPARAM)(int)iFirst, (LPARAM)(int)iLast)

#define ListView_Scroll(hwndLV, dx, dy) \
SendMessage((hwndLV), LVM_SCROLL, (WPARAM)(int)dx, (LPARAM)(int)dy)

#define ListView_SetBkColor(hwnd, clrBk) \
SendMessage(hwnd, LVM_SETBKCOLOR, 0, (LPARAM)(COLORREF)clrBk)

#define ListView_SetCallbackMask(hwnd, mask) \
SendMessage(hwnd, LVM_SETCALLBACKMASK, (WPARAM)(UINT)(mask), 0)

#define ListView_SetColumn(hwnd, iCol, pcol) \
SendMessage((hwnd), LVM_SETCOLUMN, (WPARAM)(int)(iCol), \
	    (LPARAM)(const LV_COLUMN *)(pcol))

#define ListView_SetColumnWidth(hwnd, iCol, cx) \
SendMessage((hwnd), LVM_SETCOLUMNWIDTH, (WPARAM)(int)(iCol), \
	    MAKELPARAM((cx), 0))


#define ListView_SetImageList(hwnd, himl, iImageList) \
SendMessage(hwnd, LVM_SETIMAGELIST, (WPARAM)(iImageList), \
	    (LPARAM)(UINT)(HIMAGELIST)(himl))

#define ListView_SetItem(hwnd, pitem) \
SendMessage(hwnd, LVM_SETITEM, 0, (LPARAM)(const LV_ITEM *)pitem)

#define ListView_SetItemCount(hwndLV, cItems) \
SendMessage((hwndLV), LVM_SETITEMCOUNT, (WPARAM)cItems, 0)

#define ListView_SetItemPosition(hwndLV, i, x, y) \
SendMessage(hwndLV, LVM_SETITEMPOSITION, (WPARAM)(int)(i), \
	    MAKELPARAM((x), (y)))

#define ListView_SetItemPosition32(hwndLV, i, x, y) \
{ POINT ptNewPos = {x,y}; \
    SendMessage((hwndLV), LVM_SETITEMPOSITION32, (WPARAM)(int)(i), \
		(LPARAM)&ptNewPos); \
}

#define ListView_SetItemState(hwndLV, i, data, mask) \
{ LV_ITEM _gnu_lvi;\
  _gnu_lvi.stateMask = mask;\
  _gnu_lvi.state = data;\
  SendMessage((hwndLV), LVM_SETITEMSTATE, (WPARAM)i, \
	      (LPARAM)(LV_ITEM *)&_gnu_lvi);\
}

#define ListView_SetItemText(hwndLV, i, iSubItem_, pszText_) \
{ LV_ITEM _gnu_lvi;\
  _gnu_lvi.iSubItem = iSubItem_;\
  _gnu_lvi.pszText = pszText_;\
  SendMessage((hwndLV), LVM_SETITEMTEXT, (WPARAM)i, \
	      (LPARAM)(LV_ITEM *)&_gnu_lvi);\
}

#define ListView_SetTextBkColor(hwnd, clrTextBk) \
SendMessage((hwnd), LVM_SETTEXTBKCOLOR, 0, (LPARAM)(COLORREF)(clrTextBk))

#define ListView_SetTextColor(hwnd, clrText) \
SendMessage((hwnd), LVM_SETTEXTCOLOR, 0, (LPARAM)(COLORREF)(clrText))

#define ListView_SortItems(hwndLV, _pfnCompare, _lPrm) \
SendMessage((hwndLV), LVM_SORTITEMS, (WPARAM)(LPARAM)_lPrm, \
	    (LPARAM)(PFNLVCOMPARE)_pfnCompare)

#define ListView_Update(hwndLV, i) \
SendMessage((hwndLV), LVM_UPDATE, (WPARAM)i, 0)

/* Tree View */
#define TreeView_InsertItem(hwnd, lpis) \
SendMessage((hwnd), TVM_INSERTITEM, 0, (LPARAM)(LPTV_INSERTSTRUCT)(lpis))

#define TreeView_DeleteItem(hwnd, hitem) \
SendMessage((hwnd), TVM_DELETEITEM, 0, (LPARAM)(HTREEITEM)(hitem))

#define TreeView_DeleteAllItems(hwnd) \
SendMessage((hwnd), TVM_DELETEITEM, 0, (LPARAM)TVI_ROOT)

#define TreeView_Expand(hwnd, hitem, code) \
SendMessage((hwnd), TVM_EXPAND, (WPARAM)code, (LPARAM)(HTREEITEM)(hitem))

#define TreeView_GetItemRect(hwnd, hitem, prc, code) \
SendMessage((hwnd), TVM_GETITEMRECT, (WPARAM)(code), (LPARAM)(RECT *)(prc)))

#define TreeView_GetCount(hwnd) \
SendMessage((hwnd), TVM_GETCOUNT, 0, 0)

#define TreeView_GetIndent(hwnd) \
SendMessage((hwnd), TVM_GETINDENT, 0, 0)

#define TreeView_SetIndent(hwnd, indent) \
SendMessage((hwnd), TVM_SETINDENT, (WPARAM)indent, 0)

#define TreeView_GetImageList(hwnd, iImage) \
SendMessage((hwnd), TVM_GETIMAGELIST, iImage, 0)

#define TreeView_SetImageList(hwnd, himl, iImage) \
SendMessage((hwnd), TVM_SETIMAGELIST, iImage, (LPARAM)(UINT)(HIMAGELIST)(himl))

#define TreeView_GetNextItem(hwnd, hitem, code) \
SendMessage((hwnd), TVM_GETNEXTITEM, (WPARAM)code, (LPARAM)(HTREEITEM)(hitem))

#define TreeView_GetChild(hwnd, hitem) \
TreeView_GetNextItem(hwnd, hitem, TVGN_CHILD)

#define TreeView_GetNextSibling(hwnd, hitem) \
TreeView_GetNextItem(hwnd, hitem, TVGN_NEXT)

#define TreeView_GetPrevSibling(hwnd, hitem) \
TreeView_GetNextItem(hwnd, hitem, TVGN_PREVIOUS)

#define TreeView_GetParent(hwnd, hitem) \
TreeView_GetNextItem(hwnd, hitem, TVGN_PARENT)

#define TreeView_GetFirstVisible(hwnd) \
TreeView_GetNextItem(hwnd, NULL,  TVGN_FIRSTVISIBLE)

#define TreeView_GetNextVisible(hwnd, hitem) \
TreeView_GetNextItem(hwnd, hitem, TVGN_NEXTVISIBLE)

#define TreeView_GetPrevVisible(hwnd, hitem) \
TreeView_GetNextItem(hwnd, hitem, TVGN_PREVIOUSVISIBLE)

#define TreeView_GetSelection(hwnd) \
TreeView_GetNextItem(hwnd, NULL,  TVGN_CARET)

#define TreeView_GetDropHilight(hwnd) \
TreeView_GetNextItem(hwnd, NULL,  TVGN_DROPHILITE)

#define TreeView_GetRoot(hwnd) \
TreeView_GetNextItem(hwnd, NULL,  TVGN_ROOT)

#define TreeView_Select(hwnd, hitem, code) \
SendMessage((hwnd), TVM_SELECTITEM, (WPARAM)code, (LPARAM)(HTREEITEM)(hitem))


#define TreeView_SelectItem(hwnd, hitem) \
TreeView_Select(hwnd, hitem, TVGN_CARET)

#define TreeView_SelectDropTarget(hwnd, hitem) \
TreeView_Select(hwnd, hitem, TVGN_DROPHILITE)

#define TreeView_SelectSetFirstVisible(hwnd, hitem) \
TreeView_Select(hwnd, hitem, TVGN_FIRSTVISIBLE)

#define TreeView_GetItem(hwnd, pitem) \
SendMessage((hwnd), TVM_GETITEM, 0, (LPARAM)(TV_ITEM *)(pitem))

#define TreeView_SetItem(hwnd, pitem) \
SendMessage((hwnd), TVM_SETITEM, 0, (LPARAM)(const TV_ITEM *)(pitem))

#define TreeView_EditLabel(hwnd, hitem) \
SendMessage((hwnd), TVM_EDITLABEL, 0, (LPARAM)(HTREEITEM)(hitem))

#define TreeView_GetEditControl(hwnd) \
SendMessage((hwnd), TVM_GETEDITCONTROL, 0, 0)

#define TreeView_GetVisibleCount(hwnd) \
SendMessage((hwnd), TVM_GETVISIBLECOUNT, 0, 0)

#define TreeView_HitTest(hwnd, lpht) \
SendMessage((hwnd), TVM_HITTEST, 0, (LPARAM)(LPTV_HITTESTINFO)(lpht))

#define TreeView_CreateDragImage(hwnd, hitem) \
SendMessage((hwnd), TVM_CREATEDRAGIMAGE, 0, (LPARAM)(HTREEITEM)(hitem))

#define TreeView_SortChildren(hwnd, hitem, recurse) \
SendMessage((hwnd), TVM_SORTCHILDREN, (WPARAM)recurse, \
            (LPARAM)(HTREEITEM)(hitem))

#define TreeView_EnsureVisible(hwnd, hitem) \
SendMessage((hwnd), TVM_ENSUREVISIBLE, 0, (LPARAM)(HTREEITEM)(hitem))

#define TreeView_SortChildrenCB(hwnd, psort, recurse) \
SendMessage((hwnd), TVM_SORTCHILDRENCB, (WPARAM)recurse, \
            (LPARAM)(LPTV_SORTCB)(psort))

#define TreeView_EndEditLabelNow(hwnd, fCancel) \
SendMessage((hwnd), TVM_ENDEDITLABELNOW, (WPARAM)fCancel, 0)

#define TreeView_GetISearchString(hwndTV, lpsz) \
SendMessage((hwndTV), TVM_GETISEARCHSTRING, 0, (LPARAM)(LPTSTR)lpsz)


/* Tab control */
#define TabCtrl_GetImageList(hwnd) \
SendMessage((hwnd), TCM_GETIMAGELIST, 0, 0)

#define TabCtrl_SetImageList(hwnd, himl) \
SendMessage((hwnd), TCM_SETIMAGELIST, 0, (LPARAM)(UINT)(HIMAGELIST)(himl))

#define TabCtrl_GetItemCount(hwnd) \
SendMessage((hwnd), TCM_GETITEMCOUNT, 0, 0)

#define TabCtrl_GetItem(hwnd, iItem, pitem) \
SendMessage((hwnd), TCM_GETITEM, (WPARAM)(int)iItem, \
            (LPARAM)(TC_ITEM *)(pitem))

#define TabCtrl_SetItem(hwnd, iItem, pitem) \
SendMessage((hwnd), TCM_SETITEM, (WPARAM)(int)iItem, \
            (LPARAM)(TC_ITEM *)(pitem))

#define TabCtrl_InsertItem(hwnd, iItem, pitem)   \
SendMessage((hwnd), TCM_INSERTITEM, (WPARAM)(int)iItem, \
            (LPARAM)(const TC_ITEM *)(pitem))

#define TabCtrl_DeleteItem(hwnd, i) \
SendMessage((hwnd), TCM_DELETEITEM, (WPARAM)(int)(i), 0)

#define TabCtrl_DeleteAllItems(hwnd) \
SendMessage((hwnd), TCM_DELETEALLITEMS, 0, 0)

#define TabCtrl_GetItemRect(hwnd, i, prc) \
SendMessage((hwnd), TCM_GETITEMRECT, (WPARAM)(int)(i), (LPARAM)(RECT *)(prc))

#define TabCtrl_GetCurSel(hwnd) \
SendMessage((hwnd), TCM_GETCURSEL, 0, 0)

#define TabCtrl_SetCurSel(hwnd, i) \
SendMessage((hwnd), TCM_SETCURSEL, (WPARAM)i, 0)

#define TabCtrl_HitTest(hwndTC, pinfo) \
SendMessage((hwndTC), TCM_HITTEST, 0, (LPARAM)(TC_HITTESTINFO *)(pinfo))

#define TabCtrl_SetItemExtra(hwndTC, cb) \
SendMessage((hwndTC), TCM_SETITEMEXTRA, (WPARAM)(cb), 0)

#define TabCtrl_AdjustRect(hwnd, bLarger, prc) \
SendMessage(hwnd, TCM_ADJUSTRECT, (WPARAM)(WINBOOL)bLarger, \
            (LPARAM)(RECT *)prc)

#define TabCtrl_SetItemSize(hwnd, x, y) \
SendMessage((hwnd), TCM_SETITEMSIZE, 0, MAKELPARAM(x,y))

#define TabCtrl_RemoveImage(hwnd, i) \
SendMessage((hwnd), TCM_REMOVEIMAGE, i, 0)

#define TabCtrl_SetPadding(hwnd,  cx, cy) \
SendMessage((hwnd), TCM_SETPADDING, 0, MAKELPARAM(cx, cy))

#define TabCtrl_GetRowCount(hwnd) \
SendMessage((hwnd), TCM_GETROWCOUNT, 0, 0)

#define TabCtrl_GetToolTips(hwnd) \
SendMessage((hwnd), TCM_GETTOOLTIPS, 0, 0)

#define TabCtrl_SetToolTips(hwnd, hwndTT) \
SendMessage((hwnd), TCM_SETTOOLTIPS, (WPARAM)hwndTT, 0)

#define TabCtrl_GetCurFocus(hwnd) \
SendMessage((hwnd), TCM_GETCURFOCUS, 0, 0)

#define TabCtrl_SetCurFocus(hwnd, i) \
SendMessage((hwnd),TCM_SETCURFOCUS, i, 0)

#define CommDlg_OpenSave_GetSpecA(_hdlg, _psz, _cbmax) \
SNDMSG(_hdlg, CDM_GETSPEC, (WPARAM)_cbmax, (LPARAM)(LPSTR)_psz)

#define CommDlg_OpenSave_GetSpecW(_hdlg, _psz, _cbmax) \
SNDMSG(_hdlg, CDM_GETSPEC, (WPARAM)_cbmax, (LPARAM)(LPWSTR)_psz)

#ifdef UNICODE
#define CommDlg_OpenSave_GetSpec  CommDlg_OpenSave_GetSpecW
#else
#define CommDlg_OpenSave_GetSpec  CommDlg_OpenSave_GetSpecA
#endif /* !UNICODE */

#define CommDlg_OpenSave_GetFilePathA(_hdlg, _psz, _cbmax) \
SNDMSG(_hdlg, CDM_GETFILEPATH, (WPARAM)_cbmax, (LPARAM)(LPSTR)_psz)

#define CommDlg_OpenSave_GetFilePathW(_hdlg, _psz, _cbmax) \
SNDMSG(_hdlg, CDM_GETFILEPATH, (WPARAM)_cbmax, (LPARAM)(LPWSTR)_psz)

#ifdef UNICODE
#define CommDlg_OpenSave_GetFilePath  CommDlg_OpenSave_GetFilePathW
#else
#define CommDlg_OpenSave_GetFilePath  CommDlg_OpenSave_GetFilePathA
#endif /* !UNICODE */

#define CommDlg_OpenSave_GetFolderPathA(_hdlg, _psz, _cbmax) \
SNDMSG(_hdlg, CDM_GETFOLDERPATH, (WPARAM)_cbmax, (LPARAM)(LPSTR)_psz)

#define CommDlg_OpenSave_GetFolderPathW(_hdlg, _psz, _cbmax) \
SNDMSG(_hdlg, CDM_GETFOLDERPATH, (WPARAM)_cbmax, (LPARAM)(LPWSTR)_psz)

#ifdef UNICODE
#define CommDlg_OpenSave_GetFolderPath  CommDlg_OpenSave_GetFolderPathW
#else
#define CommDlg_OpenSave_GetFolderPath  CommDlg_OpenSave_GetFolderPathA
#endif /* !UNICODE */

#define CommDlg_OpenSave_GetFolderIDList(_hdlg, _pidl, _cbmax) \
SNDMSG(_hdlg, CDM_GETFOLDERIDLIST, (WPARAM)_cbmax, (LPARAM)(LPVOID)_pidl)

#define CommDlg_OpenSave_SetControlText(_hdlg, _id, _text) \
SNDMSG(_hdlg, CDM_SETCONTROLTEXT, (WPARAM)_id, (LPARAM)(LPSTR)_text)

#define CommDlg_OpenSave_HideControl(_hdlg, _id) \
SNDMSG(_hdlg, CDM_HIDECONTROL, (WPARAM)_id, 0)

#define CommDlg_OpenSave_SetDefExt(_hdlg, _pszext) \
SNDMSG(_hdlg, CDM_SETDEFEXT, 0, (LPARAM)(LPSTR)_pszext)

#define RegCloseKey __imported_name(RegCloseKey)
extern LONG
 __imported_stdcall(RegCloseKey)(
    HKEY hKey
    );

#define RegSetKeySecurity __imported_name(RegSetKeySecurity)
extern LONG
 __imported_stdcall(RegSetKeySecurity)(
    HKEY hKey,
    SECURITY_INFORMATION SecurityInformation,
    PSECURITY_DESCRIPTOR pSecurityDescriptor
    );

#define RegFlushKey __imported_name(RegFlushKey)
extern LONG
 __imported_stdcall(RegFlushKey)(
    HKEY hKey
    );

#define RegGetKeySecurity __imported_name(RegGetKeySecurity)
extern LONG
 __imported_stdcall(RegGetKeySecurity)(
    HKEY hKey,
    SECURITY_INFORMATION SecurityInformation,
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    LPDWORD lpcbSecurityDescriptor
    );

#define RegNotifyChangeKeyValue __imported_name(RegNotifyChangeKeyValue)
extern LONG
 __imported_stdcall(RegNotifyChangeKeyValue)(
    HKEY hKey,
    WINBOOL bWatchSubtree,
    DWORD dwNotifyFilter,
    HANDLE hEvent,
    WINBOOL fAsynchronus
    );

#define IsValidCodePage __imported_name(IsValidCodePage)
extern WINBOOL
 __imported_stdcall(IsValidCodePage)(
    UINT  CodePage);


#define GetACP __imported_name(GetACP)
extern UINT
 __imported_stdcall(GetACP)(void);


#define GetOEMCP __imported_name(GetOEMCP)
extern UINT
 __imported_stdcall(GetOEMCP)(void);


#define GetCPInfo __imported_name(GetCPInfo)
extern WINBOOL
 __imported_stdcall(GetCPInfo)(UINT, LPCPINFO);


#define IsDBCSLeadByte __imported_name(IsDBCSLeadByte)
extern WINBOOL
 __imported_stdcall(IsDBCSLeadByte)(
    BYTE  TestChar);


#define IsDBCSLeadByteEx __imported_name(IsDBCSLeadByteEx)
extern WINBOOL
 __imported_stdcall(IsDBCSLeadByteEx)(
    UINT  CodePage,
    BYTE  TestChar);


#define MultiByteToWideChar __imported_name(MultiByteToWideChar)
extern int
 __imported_stdcall(MultiByteToWideChar)(
    UINT     CodePage,
    DWORD    dwFlags,
    LPCSTR   lpMultiByteStr,
    int      cchMultiByte,
    LPWSTR   lpWideCharStr,
    int      cchWideChar);


#define WideCharToMultiByte __imported_name(WideCharToMultiByte)
extern int
 __imported_stdcall(WideCharToMultiByte)(
    UINT     CodePage,
    DWORD    dwFlags,
    LPCWSTR  lpWideCharStr,
    int      cchWideChar,
    LPSTR    lpMultiByteStr,
    int      cchMultiByte,
    LPCSTR   lpDefaultChar,
    LPBOOL   lpUsedDefaultChar);

#define IsValidLocale __imported_name(IsValidLocale)
extern WINBOOL
 __imported_stdcall(IsValidLocale)(
    LCID   Locale,
    DWORD  dwFlags);


#define ConvertDefaultLocale __imported_name(ConvertDefaultLocale)
extern LCID
 __imported_stdcall(ConvertDefaultLocale)(
    LCID   Locale);


#define GetThreadLocale __imported_name(GetThreadLocale)
extern LCID
 __imported_stdcall(GetThreadLocale)(void);


#define SetThreadLocale __imported_name(SetThreadLocale)
extern WINBOOL
 __imported_stdcall(SetThreadLocale)(
    LCID  Locale
    );


#define GetSystemDefaultLangID __imported_name(GetSystemDefaultLangID)
extern LANGID
 __imported_stdcall(GetSystemDefaultLangID)(void);


#define GetUserDefaultLangID __imported_name(GetUserDefaultLangID)
extern LANGID
 __imported_stdcall(GetUserDefaultLangID)(void);


#define GetSystemDefaultLCID __imported_name(GetSystemDefaultLCID)
extern LCID
 __imported_stdcall(GetSystemDefaultLCID)(void);


#define GetUserDefaultLCID __imported_name(GetUserDefaultLCID)
extern LCID
 __imported_stdcall(GetUserDefaultLCID)(void);


#define ReadConsoleOutputAttribute __imported_name(ReadConsoleOutputAttribute)
extern WINBOOL
 __imported_stdcall(ReadConsoleOutputAttribute)(
    HANDLE hConsoleOutput,
    LPWORD lpAttribute,
    DWORD nLength,
    COORD dwReadCoord,
    LPDWORD lpNumberOfAttrsRead
    );


#define WriteConsoleOutputAttribute __imported_name(WriteConsoleOutputAttribute)
extern WINBOOL
 __imported_stdcall(WriteConsoleOutputAttribute)(
    HANDLE hConsoleOutput,
    CONST WORD *lpAttribute,
    DWORD nLength,
    COORD dwWriteCoord,
    LPDWORD lpNumberOfAttrsWritten
    );


#define FillConsoleOutputAttribute __imported_name(FillConsoleOutputAttribute)
extern WINBOOL
 __imported_stdcall(FillConsoleOutputAttribute)(
    HANDLE hConsoleOutput,
    WORD   wAttribute,
    DWORD  nLength,
    COORD  dwWriteCoord,
    LPDWORD lpNumberOfAttrsWritten
    );


#define GetConsoleMode __imported_name(GetConsoleMode)
extern WINBOOL
 __imported_stdcall(GetConsoleMode)(
    HANDLE hConsoleHandle,
    LPDWORD lpMode
    );


#define GetNumberOfConsoleInputEvents __imported_name(GetNumberOfConsoleInputEvents)
extern WINBOOL
 __imported_stdcall(GetNumberOfConsoleInputEvents)(
    HANDLE hConsoleInput,
    LPDWORD lpNumberOfEvents
    );


#define GetConsoleScreenBufferInfo __imported_name(GetConsoleScreenBufferInfo)
extern WINBOOL
 __imported_stdcall(GetConsoleScreenBufferInfo)(
    HANDLE hConsoleOutput,
    PCONSOLE_SCREEN_BUFFER_INFO lpConsoleScreenBufferInfo
    );


#define GetLargestConsoleWindowSize __imported_name(GetLargestConsoleWindowSize)
extern COORD
 __imported_stdcall(GetLargestConsoleWindowSize)(
    HANDLE hConsoleOutput
    );


#define GetConsoleCursorInfo __imported_name(GetConsoleCursorInfo)
extern WINBOOL
 __imported_stdcall(GetConsoleCursorInfo)(
    HANDLE hConsoleOutput,
    PCONSOLE_CURSOR_INFO lpConsoleCursorInfo
    );


#define GetNumberOfConsoleMouseButtons __imported_name(GetNumberOfConsoleMouseButtons)
extern WINBOOL
 __imported_stdcall(GetNumberOfConsoleMouseButtons)(
    LPDWORD lpNumberOfMouseButtons
    );


#define SetConsoleMode __imported_name(SetConsoleMode)
extern WINBOOL
 __imported_stdcall(SetConsoleMode)(
    HANDLE hConsoleHandle,
    DWORD dwMode
    );


#define SetConsoleActiveScreenBuffer __imported_name(SetConsoleActiveScreenBuffer)
extern WINBOOL
 __imported_stdcall(SetConsoleActiveScreenBuffer)(
    HANDLE hConsoleOutput
    );


#define FlushConsoleInputBuffer __imported_name(FlushConsoleInputBuffer)
extern WINBOOL
 __imported_stdcall(FlushConsoleInputBuffer)(
    HANDLE hConsoleInput
    );


#define SetConsoleScreenBufferSize __imported_name(SetConsoleScreenBufferSize)
extern WINBOOL
 __imported_stdcall(SetConsoleScreenBufferSize)(
    HANDLE hConsoleOutput,
    COORD dwSize
    );


#define SetConsoleCursorPosition __imported_name(SetConsoleCursorPosition)
extern WINBOOL
 __imported_stdcall(SetConsoleCursorPosition)(
    HANDLE hConsoleOutput,
    COORD dwCursorPosition
    );


#define SetConsoleCursorInfo __imported_name(SetConsoleCursorInfo)
extern WINBOOL
 __imported_stdcall(SetConsoleCursorInfo)(
    HANDLE hConsoleOutput,
    CONST CONSOLE_CURSOR_INFO *lpConsoleCursorInfo
    );

#define SetConsoleWindowInfo __imported_name(SetConsoleWindowInfo)
extern WINBOOL
 __imported_stdcall(SetConsoleWindowInfo)(
    HANDLE hConsoleOutput,
    WINBOOL bAbsolute,
    CONST SMALL_RECT *lpConsoleWindow
    );


#define SetConsoleTextAttribute __imported_name(SetConsoleTextAttribute)
extern WINBOOL
 __imported_stdcall(SetConsoleTextAttribute)(
    HANDLE hConsoleOutput,
    WORD wAttributes
    );


#define SetConsoleCtrlHandler __imported_name(SetConsoleCtrlHandler)
extern WINBOOL
 __imported_stdcall(SetConsoleCtrlHandler)(
    PHANDLER_ROUTINE HandlerRoutine,
    WINBOOL Add
    );


#define GenerateConsoleCtrlEvent __imported_name(GenerateConsoleCtrlEvent)
extern WINBOOL
 __imported_stdcall(GenerateConsoleCtrlEvent)(
    DWORD dwCtrlEvent,
    DWORD dwProcessGroupId
    );


#define AllocConsole __imported_name(AllocConsole)
extern WINBOOL
 __imported_stdcall(AllocConsole)( VOID );


#define FreeConsole __imported_name(FreeConsole)
extern WINBOOL
 __imported_stdcall(FreeConsole)( VOID );



#define CreateConsoleScreenBuffer __imported_name(CreateConsoleScreenBuffer)
extern HANDLE
 __imported_stdcall(CreateConsoleScreenBuffer)(
    DWORD dwDesiredAccess,
    DWORD dwShareMode,
    CONST SECURITY_ATTRIBUTES *lpSecurityAttributes,
    DWORD dwFlags,
    LPVOID lpScreenBufferData
    );


#define GetConsoleCP __imported_name(GetConsoleCP)
extern UINT
 __imported_stdcall(GetConsoleCP)( VOID );


#define SetConsoleCP __imported_name(SetConsoleCP)
extern WINBOOL
 __imported_stdcall(SetConsoleCP)(
    UINT wCodePageID
    );


#define GetConsoleOutputCP __imported_name(GetConsoleOutputCP)
extern UINT
 __imported_stdcall(GetConsoleOutputCP)( VOID );


#define SetConsoleOutputCP __imported_name(SetConsoleOutputCP)
extern WINBOOL
 __imported_stdcall(SetConsoleOutputCP)(
    UINT wCodePageID
    );

#define WNetConnectionDialog __imported_name(WNetConnectionDialog)
extern DWORD  __imported_stdcall(WNetConnectionDialog)(
    HWND  hwnd,
    DWORD dwType
    );

#define WNetDisconnectDialog __imported_name(WNetDisconnectDialog)
extern DWORD  __imported_stdcall(WNetDisconnectDialog)(
    HWND  hwnd,
    DWORD dwType
    );

#define WNetCloseEnum __imported_name(WNetCloseEnum)
extern DWORD  __imported_stdcall(WNetCloseEnum)(
    HANDLE   hEnum
    );

#define CloseServiceHandle __imported_name(CloseServiceHandle)
extern WINBOOL
 __imported_stdcall(CloseServiceHandle)(
    SC_HANDLE   hSCObject
    );


#define ControlService __imported_name(ControlService)
extern WINBOOL
 __imported_stdcall(ControlService)(
    SC_HANDLE           hService,
    DWORD               dwControl,
    LPSERVICE_STATUS    lpServiceStatus
    );

#define DeleteService __imported_name(DeleteService)
extern WINBOOL
 __imported_stdcall(DeleteService)(
    SC_HANDLE   hService
    );

#define LockServiceDatabase __imported_name(LockServiceDatabase)
extern SC_LOCK
 __imported_stdcall(LockServiceDatabase)(
    SC_HANDLE   hSCManager
    );


#define NotifyBootConfigStatus __imported_name(NotifyBootConfigStatus)
extern WINBOOL
 __imported_stdcall(NotifyBootConfigStatus)(
    WINBOOL     BootAcceptable
    );

#define QueryServiceObjectSecurity __imported_name(QueryServiceObjectSecurity)
extern WINBOOL
 __imported_stdcall(QueryServiceObjectSecurity)(
    SC_HANDLE               hService,
    SECURITY_INFORMATION    dwSecurityInformation,
    PSECURITY_DESCRIPTOR    lpSecurityDescriptor,
    DWORD                   cbBufSize,
    LPDWORD                 pcbBytesNeeded
    );


#define QueryServiceStatus __imported_name(QueryServiceStatus)
extern WINBOOL
 __imported_stdcall(QueryServiceStatus)(
    SC_HANDLE           hService,
    LPSERVICE_STATUS    lpServiceStatus
    );

#define SetServiceObjectSecurity __imported_name(SetServiceObjectSecurity)
extern WINBOOL
 __imported_stdcall(SetServiceObjectSecurity)(
    SC_HANDLE               hService,
    SECURITY_INFORMATION    dwSecurityInformation,
    PSECURITY_DESCRIPTOR    lpSecurityDescriptor
    );


#define SetServiceStatus __imported_name(SetServiceStatus)
extern WINBOOL
 __imported_stdcall(SetServiceStatus)(
    SERVICE_STATUS_HANDLE   hServiceStatus,
    LPSERVICE_STATUS        lpServiceStatus
    );

#define UnlockServiceDatabase __imported_name(UnlockServiceDatabase)
extern WINBOOL
 __imported_stdcall(UnlockServiceDatabase)(
    SC_LOCK     ScLock
    );


/* shellapi.h */

#define DragAcceptFiles __imported_name(DragAcceptFiles)
extern void
 __imported_stdcall(DragAcceptFiles)(
	HWND,
	WINBOOL
	);


#define DragFinish __imported_name(DragFinish)
extern void
 __imported_stdcall(DragFinish)(
	HDROP
	);


#define DragQueryPoint __imported_name(DragQueryPoint)
extern WINBOOL
 __imported_stdcall(DragQueryPoint)(
	HDROP,
	LPPOINT
	);


#define DuplicateIcon __imported_name(DuplicateIcon)
extern HICON
 __imported_stdcall(DuplicateIcon)(
	HINSTANCE,
	HICON
	);


/* ddeml.h */

#define DdeConnect __imported_name(DdeConnect)
extern HCONV  __imported_stdcall(DdeConnect)(DWORD, HSZ, HSZ, CONVCONTEXT *);
#define DdeDisconnect __imported_name(DdeDisconnect)
extern WINBOOL  __imported_stdcall(DdeDisconnect)(HCONV);
#define DdeFreeDataHandle __imported_name(DdeFreeDataHandle)
extern WINBOOL  __imported_stdcall(DdeFreeDataHandle)(HDDEDATA);
#define DdeGetData __imported_name(DdeGetData)
extern DWORD  __imported_stdcall(DdeGetData)(HDDEDATA, BYTE *, DWORD, DWORD);
#define DdeGetLastError __imported_name(DdeGetLastError)
extern UINT  __imported_stdcall(DdeGetLastError)(DWORD);
#define DdeNameService __imported_name(DdeNameService)
extern HDDEDATA  __imported_stdcall(DdeNameService)(DWORD, HSZ, HSZ, UINT);
#define DdePostAdvise __imported_name(DdePostAdvise)
extern WINBOOL  __imported_stdcall(DdePostAdvise)(DWORD, HSZ, HSZ);
#define DdeReconnect __imported_name(DdeReconnect)
extern HCONV  __imported_stdcall(DdeReconnect)(HCONV);
#define DdeUninitialize __imported_name(DdeUninitialize)
extern WINBOOL  __imported_stdcall(DdeUninitialize)(DWORD);

#define NetUserEnum __imported_name(NetUserEnum)
extern DWORD  __imported_stdcall(NetUserEnum)(LPWSTR, DWORD, DWORD, LPBYTE*, DWORD, LPDWORD,
				LPDWORD, LPDWORD);
#define NetApiBufferFree __imported_name(NetApiBufferFree)
extern DWORD  __imported_stdcall(NetApiBufferFree)(LPVOID);
#define NetUserGetInfo __imported_name(NetUserGetInfo)
extern DWORD  __imported_stdcall(NetUserGetInfo)(LPWSTR, LPWSTR, DWORD, LPBYTE);
#define NetGetDCName __imported_name(NetGetDCName)
extern DWORD  __imported_stdcall(NetGetDCName)(LPWSTR, LPWSTR, LPBYTE*);
#define NetGroupEnum __imported_name(NetGroupEnum)
extern DWORD  __imported_stdcall(NetGroupEnum)(LPWSTR, DWORD, LPBYTE*, DWORD, LPDWORD,
				LPDWORD, LPDWORD);
#define NetLocalGroupEnum __imported_name(NetLocalGroupEnum)
extern DWORD  __imported_stdcall(NetLocalGroupEnum)(LPWSTR, DWORD, LPBYTE*, DWORD, LPDWORD,
				LPDWORD, LPDWORD);


/* Extensions to OpenGL */

#define ChoosePixelFormat __imported_name(ChoosePixelFormat)
extern int  __imported_stdcall(ChoosePixelFormat)(HDC, CONST PIXELFORMATDESCRIPTOR *);	

#define DescribePixelFormat __imported_name(DescribePixelFormat)
extern int  __imported_stdcall(DescribePixelFormat)(HDC, int, UINT, LPPIXELFORMATDESCRIPTOR);

#define GetEnhMetaFilePixelFormat __imported_name(GetEnhMetaFilePixelFormat)
extern UINT  __imported_stdcall(GetEnhMetaFilePixelFormat)(HENHMETAFILE, DWORD,
			  CONST PIXELFORMATDESCRIPTOR *);

#define GetPixelFormat __imported_name(GetPixelFormat)
extern int  __imported_stdcall(GetPixelFormat)(HDC);

#define SetPixelFormat __imported_name(SetPixelFormat)
extern WINBOOL  __imported_stdcall(SetPixelFormat)(HDC, int, CONST PIXELFORMATDESCRIPTOR *);

#define SwapBuffers __imported_name(SwapBuffers)
extern WINBOOL  __imported_stdcall(SwapBuffers)(HDC);

#define wglCreateContext __imported_name(wglCreateContext)
extern HGLRC  __imported_stdcall(wglCreateContext)(HDC);

#define wglCreateLayerContext __imported_name(wglCreateLayerContext)
extern HGLRC  __imported_stdcall(wglCreateLayerContext)(HDC, int);

#define wglCopyContext __imported_name(wglCopyContext)
extern WINBOOL  __imported_stdcall(wglCopyContext)(HGLRC, HGLRC, UINT);

#define wglDeleteContext __imported_name(wglDeleteContext)
extern WINBOOL  __imported_stdcall(wglDeleteContext)(HGLRC);

#define wglDescribeLayerPlane __imported_name(wglDescribeLayerPlane)
extern WINBOOL  __imported_stdcall(wglDescribeLayerPlane)(HDC, int, int, UINT, LPLAYERPLANEDESCRIPTOR);

#define wglGetCurrentContext __imported_name(wglGetCurrentContext)
extern HGLRC  __imported_stdcall(wglGetCurrentContext)(VOID);

#define wglGetCurrentDC __imported_name(wglGetCurrentDC)
extern HDC  __imported_stdcall(wglGetCurrentDC)(VOID);

#define wglGetLayerPaletteEntries __imported_name(wglGetLayerPaletteEntries)
extern int  __imported_stdcall(wglGetLayerPaletteEntries)(HDC, int, int, int, CONST COLORREF *);

#define wglGetProcAddress __imported_name(wglGetProcAddress)
extern PROC  __imported_stdcall(wglGetProcAddress)(LPCSTR);

#define wglMakeCurrent __imported_name(wglMakeCurrent)
extern WINBOOL  __imported_stdcall(wglMakeCurrent)(HDC, HGLRC);

#define wglRealizeLayerPalette __imported_name(wglRealizeLayerPalette)
extern WINBOOL  __imported_stdcall(wglRealizeLayerPalette)(HDC, int, WINBOOL);

#define wglSetLayerPaletteEntries __imported_name(wglSetLayerPaletteEntries)
extern int  __imported_stdcall(wglSetLayerPaletteEntries)(HDC, int, int, int, CONST COLORREF *);

#define wglShareLists __imported_name(wglShareLists)
extern WINBOOL  __imported_stdcall(wglShareLists)(HGLRC, HGLRC);

#define wglSwapLayerBuffers __imported_name(wglSwapLayerBuffers)
extern WINBOOL  __imported_stdcall(wglSwapLayerBuffers)(HDC, UINT);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif	/* RC_INVOKED */

#endif /* _GNU_H_WINDOWS32_COMMONFUNCTIONS */
