/* 
   ASCIIFunctions.h

   Declarations for all the Win32 ASCII Functions

   Copyright (C) 1996 Free Software Foundation, Inc.

   Author:  Scott Christley <scottc@net-community.com>

   This file is part of the Windows32 API Library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   If you are interested in a warranty or support for this source code,
   contact Scott Christley <scottc@net-community.com> for more information.
   
   You should have received a copy of the GNU Library General Public
   License along with this library; see the file COPYING.LIB.
   If not, write to the Free Software Foundation, 
   59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/ 

#ifndef _GNU_H_WINDOWS32_ASCIIFUNCTIONS
#define _GNU_H_WINDOWS32_ASCIIFUNCTIONS

#include <sys/config.h>

/* This keeps all this stuff from bugging the resource compiler. */
#ifndef	RC_INVOKED

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define GetBinaryTypeA __imported_name(GetBinaryTypeA)
extern WINBOOL
 __imported_stdcall(GetBinaryTypeA)(
	       LPCSTR lpApplicationName,
	       LPDWORD lpBinaryType
	       );

#define GetShortPathNameA __imported_name(GetShortPathNameA)
extern DWORD
 __imported_stdcall(GetShortPathNameA)(
		  LPCSTR lpszLongPath,
		  LPSTR  lpszShortPath,
		  DWORD    cchBuffer
		  );

#define GetEnvironmentStringsA __imported_name(GetEnvironmentStringsA)
extern LPSTR
 __imported_stdcall(GetEnvironmentStringsA)(
		       VOID
		       );

#define FreeEnvironmentStringsA __imported_name(FreeEnvironmentStringsA)
extern WINBOOL
 __imported_stdcall(FreeEnvironmentStringsA)(
			LPSTR
			);

#define FormatMessageA __imported_name(FormatMessageA)
extern DWORD
 __imported_stdcall(FormatMessageA)(
	       DWORD dwFlags,
	       LPCVOID lpSource,
	       DWORD dwMessageId,
	       DWORD dwLanguageId,
	       LPSTR lpBuffer,
	       DWORD nSize,
	       va_list *Arguments
	       );

#define CreateMailslotA __imported_name(CreateMailslotA)
extern HANDLE
 __imported_stdcall(CreateMailslotA)(
		LPCSTR lpName,
		DWORD nMaxMessageSize,
		DWORD lReadTimeout,
		LPSECURITY_ATTRIBUTES lpSecurityAttributes
		);

#define lstrcmpA __imported_name(lstrcmpA)
extern int
 __imported_stdcall(lstrcmpA)(
	 LPCSTR lpString1,
	 LPCSTR lpString2
	 );

#define lstrcmpiA __imported_name(lstrcmpiA)
extern int
 __imported_stdcall(lstrcmpiA)(
	  LPCSTR lpString1,
	  LPCSTR lpString2
	  );

#define lstrcpynA __imported_name(lstrcpynA)
extern LPSTR
 __imported_stdcall(lstrcpynA)(
	  LPSTR lpString1,
	  LPCSTR lpString2,
	  int iMaxLength
	  );

#define lstrcpyA __imported_name(lstrcpyA)
extern LPSTR
 __imported_stdcall(lstrcpyA)(
	 LPSTR lpString1,
	 LPCSTR lpString2
	 );

#define lstrcatA __imported_name(lstrcatA)
extern LPSTR
 __imported_stdcall(lstrcatA)(
	 LPSTR lpString1,
	 LPCSTR lpString2
	 );

#define lstrlenA __imported_name(lstrlenA)
extern int
 __imported_stdcall(lstrlenA)(
	 LPCSTR lpString
	 );

#define CreateMutexA __imported_name(CreateMutexA)
extern HANDLE
 __imported_stdcall(CreateMutexA)(
	     LPSECURITY_ATTRIBUTES lpMutexAttributes,
	     WINBOOL bInitialOwner,
	     LPCSTR lpName
	     );

#define OpenMutexA __imported_name(OpenMutexA)
extern HANDLE
 __imported_stdcall(OpenMutexA)(
	   DWORD dwDesiredAccess,
	   WINBOOL bInheritHandle,
	   LPCSTR lpName
	   );

#define CreateEventA __imported_name(CreateEventA)
extern HANDLE
 __imported_stdcall(CreateEventA)(
	     LPSECURITY_ATTRIBUTES lpEventAttributes,
	     WINBOOL bManualReset,
	     WINBOOL bInitialState,
	     LPCSTR lpName
	     );

#define OpenEventA __imported_name(OpenEventA)
extern HANDLE
 __imported_stdcall(OpenEventA)(
	   DWORD dwDesiredAccess,
	   WINBOOL bInheritHandle,
	   LPCSTR lpName
	   );

#define CreateSemaphoreA __imported_name(CreateSemaphoreA)
extern HANDLE
 __imported_stdcall(CreateSemaphoreA)(
		 LPSECURITY_ATTRIBUTES lpSemaphoreAttributes,
		 LONG lInitialCount,
		 LONG lMaximumCount,
		 LPCSTR lpName
		 );

#define OpenSemaphoreA __imported_name(OpenSemaphoreA)
extern HANDLE
 __imported_stdcall(OpenSemaphoreA)(
	       DWORD dwDesiredAccess,
	       WINBOOL bInheritHandle,
	       LPCSTR lpName
	       );

#define CreateFileMappingA __imported_name(CreateFileMappingA)
extern HANDLE
 __imported_stdcall(CreateFileMappingA)(
		   HANDLE hFile,
		   LPSECURITY_ATTRIBUTES lpFileMappingAttributes,
		   DWORD flProtect,
		   DWORD dwMaximumSizeHigh,
		   DWORD dwMaximumSizeLow,
		   LPCSTR lpName
		   );

#define OpenFileMappingA __imported_name(OpenFileMappingA)
extern HANDLE
 __imported_stdcall(OpenFileMappingA)(
		 DWORD dwDesiredAccess,
		 WINBOOL bInheritHandle,
		 LPCSTR lpName
		 );

#define GetLogicalDriveStringsA __imported_name(GetLogicalDriveStringsA)
extern DWORD
 __imported_stdcall(GetLogicalDriveStringsA)(
			DWORD nBufferLength,
			LPSTR lpBuffer
			);

#define LoadLibraryA __imported_name(LoadLibraryA)
extern HINSTANCE
 __imported_stdcall(LoadLibraryA)(
	     LPCSTR lpLibFileName
	     );

#define LoadLibraryExA __imported_name(LoadLibraryExA)
extern HINSTANCE
 __imported_stdcall(LoadLibraryExA)(
	       LPCSTR lpLibFileName,
	       HANDLE hFile,
	       DWORD dwFlags
	       );

#define GetModuleFileNameA __imported_name(GetModuleFileNameA)
extern DWORD
 __imported_stdcall(GetModuleFileNameA)(
		   HINSTANCE hModule,
		   LPSTR lpFilename,
		   DWORD nSize
		   );

#define GetModuleHandleA __imported_name(GetModuleHandleA)
extern HMODULE
 __imported_stdcall(GetModuleHandleA)(
		 LPCSTR lpModuleName
		 );

#define FatalAppExitA __imported_name(FatalAppExitA)
extern VOID
 __imported_stdcall(FatalAppExitA)(
	      UINT uAction,
	      LPCSTR lpMessageText
	      );

#define GetCommandLineA __imported_name(GetCommandLineA)
extern LPSTR
 __imported_stdcall(GetCommandLineA)(
		VOID
		);

#define GetEnvironmentVariableA __imported_name(GetEnvironmentVariableA)
extern DWORD
 __imported_stdcall(GetEnvironmentVariableA)(
			LPCSTR lpName,
			LPSTR lpBuffer,
			DWORD nSize
			);

#define SetEnvironmentVariableA __imported_name(SetEnvironmentVariableA)
extern WINBOOL
 __imported_stdcall(SetEnvironmentVariableA)(
			LPCSTR lpName,
			LPCSTR lpValue
			);

#define ExpandEnvironmentStringsA __imported_name(ExpandEnvironmentStringsA)
extern DWORD
 __imported_stdcall(ExpandEnvironmentStringsA)(
			  LPCSTR lpSrc,
			  LPSTR lpDst,
			  DWORD nSize
			  );

#define OutputDebugStringA __imported_name(OutputDebugStringA)
extern VOID
 __imported_stdcall(OutputDebugStringA)(
		   LPCSTR lpOutputString
		   );

#define FindResourceA __imported_name(FindResourceA)
extern HRSRC
 __imported_stdcall(FindResourceA)(
	      HINSTANCE hModule,
	      LPCSTR lpName,
	      LPCSTR lpType
	      );

#define FindResourceExA __imported_name(FindResourceExA)
extern HRSRC
 __imported_stdcall(FindResourceExA)(
		HINSTANCE hModule,
		LPCSTR lpType,
		LPCSTR lpName,
		WORD    wLanguage
		);

#define EnumResourceTypesA __imported_name(EnumResourceTypesA)
extern WINBOOL
 __imported_stdcall(EnumResourceTypesA)(
		   HINSTANCE hModule,
		   ENUMRESTYPEPROC lpEnumFunc,
		   LONG lParam
		   );

#define EnumResourceNamesA __imported_name(EnumResourceNamesA)
extern WINBOOL
 __imported_stdcall(EnumResourceNamesA)(
		   HINSTANCE hModule,
		   LPCSTR lpType,
		   ENUMRESNAMEPROC lpEnumFunc,
		   LONG lParam
		   );

#define EnumResourceLanguagesA __imported_name(EnumResourceLanguagesA)
extern WINBOOL
 __imported_stdcall(EnumResourceLanguagesA)(
		       HINSTANCE hModule,
		       LPCSTR lpType,
		       LPCSTR lpName,
		       ENUMRESLANGPROC lpEnumFunc,
		       LONG lParam
		       );

#define BeginUpdateResourceA __imported_name(BeginUpdateResourceA)
extern HANDLE
 __imported_stdcall(BeginUpdateResourceA)(
		     LPCSTR pFileName,
		     WINBOOL bDeleteExistingResources
		     );

#define UpdateResourceA __imported_name(UpdateResourceA)
extern WINBOOL
 __imported_stdcall(UpdateResourceA)(
		HANDLE      hUpdate,
		LPCSTR     lpType,
		LPCSTR     lpName,
		WORD        wLanguage,
		LPVOID      lpData,
		DWORD       cbData
		);

#define EndUpdateResourceA __imported_name(EndUpdateResourceA)
extern WINBOOL
 __imported_stdcall(EndUpdateResourceA)(
		   HANDLE      hUpdate,
		   WINBOOL        fDiscard
		   );

#define GlobalAddAtomA __imported_name(GlobalAddAtomA)
extern ATOM
 __imported_stdcall(GlobalAddAtomA)(
	       LPCSTR lpString
	       );

#define GlobalFindAtomA __imported_name(GlobalFindAtomA)
extern ATOM
 __imported_stdcall(GlobalFindAtomA)(
		LPCSTR lpString
		);

#define GlobalGetAtomNameA __imported_name(GlobalGetAtomNameA)
extern UINT
 __imported_stdcall(GlobalGetAtomNameA)(
		   ATOM nAtom,
		   LPSTR lpBuffer,
		   int nSize
		   );

#define AddAtomA __imported_name(AddAtomA)
extern ATOM
 __imported_stdcall(AddAtomA)(
	 LPCSTR lpString
	 );

#define FindAtomA __imported_name(FindAtomA)
extern ATOM
 __imported_stdcall(FindAtomA)(
	  LPCSTR lpString
	  );

#define GetAtomNameA __imported_name(GetAtomNameA)
extern UINT
 __imported_stdcall(GetAtomNameA)(
	     ATOM nAtom,
	     LPSTR lpBuffer,
	     int nSize
	     );

#define GetProfileIntA __imported_name(GetProfileIntA)
extern UINT
 __imported_stdcall(GetProfileIntA)(
	       LPCSTR lpAppName,
	       LPCSTR lpKeyName,
	       INT nDefault
	       );

#define GetProfileStringA __imported_name(GetProfileStringA)
extern DWORD
 __imported_stdcall(GetProfileStringA)(
		  LPCSTR lpAppName,
		  LPCSTR lpKeyName,
		  LPCSTR lpDefault,
		  LPSTR lpReturnedString,
		  DWORD nSize
		  );

#define WriteProfileStringA __imported_name(WriteProfileStringA)
extern WINBOOL
 __imported_stdcall(WriteProfileStringA)(
    LPCSTR lpAppName,
    LPCSTR lpKeyName,
    LPCSTR lpString
    );

#define GetProfileSectionA __imported_name(GetProfileSectionA)
extern DWORD
 __imported_stdcall(GetProfileSectionA)(
    LPCSTR lpAppName,
    LPSTR lpReturnedString,
    DWORD nSize
    );

#define WriteProfileSectionA __imported_name(WriteProfileSectionA)
extern WINBOOL
 __imported_stdcall(WriteProfileSectionA)(
    LPCSTR lpAppName,
    LPCSTR lpString
    );

#define GetPrivateProfileIntA __imported_name(GetPrivateProfileIntA)
extern UINT
 __imported_stdcall(GetPrivateProfileIntA)(
    LPCSTR lpAppName,
    LPCSTR lpKeyName,
    INT nDefault,
    LPCSTR lpFileName
    );

#define GetPrivateProfileStringA __imported_name(GetPrivateProfileStringA)
extern DWORD
 __imported_stdcall(GetPrivateProfileStringA)(
    LPCSTR lpAppName,
    LPCSTR lpKeyName,
    LPCSTR lpDefault,
    LPSTR lpReturnedString,
    DWORD nSize,
    LPCSTR lpFileName
    );

#define WritePrivateProfileStringA __imported_name(WritePrivateProfileStringA)
extern WINBOOL
 __imported_stdcall(WritePrivateProfileStringA)(
    LPCSTR lpAppName,
    LPCSTR lpKeyName,
    LPCSTR lpString,
    LPCSTR lpFileName
    );

#define GetPrivateProfileSectionA __imported_name(GetPrivateProfileSectionA)
extern DWORD
 __imported_stdcall(GetPrivateProfileSectionA)(
    LPCSTR lpAppName,
    LPSTR lpReturnedString,
    DWORD nSize,
    LPCSTR lpFileName
    );

#define WritePrivateProfileSectionA __imported_name(WritePrivateProfileSectionA)
extern WINBOOL
 __imported_stdcall(WritePrivateProfileSectionA)(
    LPCSTR lpAppName,
    LPCSTR lpString,
    LPCSTR lpFileName
    );

#define GetDriveTypeA __imported_name(GetDriveTypeA)
extern UINT
 __imported_stdcall(GetDriveTypeA)(
    LPCSTR lpRootPathName
    );

#define GetSystemDirectoryA __imported_name(GetSystemDirectoryA)
extern UINT
 __imported_stdcall(GetSystemDirectoryA)(
    LPSTR lpBuffer,
    UINT uSize
    );

#define GetTempPathA __imported_name(GetTempPathA)
extern DWORD
 __imported_stdcall(GetTempPathA)(
    DWORD nBufferLength,
    LPSTR lpBuffer
    );

#define GetTempFileNameA __imported_name(GetTempFileNameA)
extern UINT
 __imported_stdcall(GetTempFileNameA)(
    LPCSTR lpPathName,
    LPCSTR lpPrefixString,
    UINT uUnique,
    LPSTR lpTempFileName
    );

#define GetWindowsDirectoryA __imported_name(GetWindowsDirectoryA)
extern UINT
 __imported_stdcall(GetWindowsDirectoryA)(
    LPSTR lpBuffer,
    UINT uSize
    );

#define SetCurrentDirectoryA __imported_name(SetCurrentDirectoryA)
extern WINBOOL
 __imported_stdcall(SetCurrentDirectoryA)(
    LPCSTR lpPathName
    );

#define GetCurrentDirectoryA __imported_name(GetCurrentDirectoryA)
extern DWORD
 __imported_stdcall(GetCurrentDirectoryA)(
    DWORD nBufferLength,
    LPSTR lpBuffer
    );

#define GetDiskFreeSpaceA __imported_name(GetDiskFreeSpaceA)
extern WINBOOL
 __imported_stdcall(GetDiskFreeSpaceA)(
    LPCSTR lpRootPathName,
    LPDWORD lpSectorsPerCluster,
    LPDWORD lpBytesPerSector,
    LPDWORD lpNumberOfFreeClusters,
    LPDWORD lpTotalNumberOfClusters
    );

#define CreateDirectoryA __imported_name(CreateDirectoryA)
extern WINBOOL
 __imported_stdcall(CreateDirectoryA)(
    LPCSTR lpPathName,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );

#define CreateDirectoryExA __imported_name(CreateDirectoryExA)
extern WINBOOL
 __imported_stdcall(CreateDirectoryExA)(
    LPCSTR lpTemplateDirectory,
    LPCSTR lpNewDirectory,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );

#define RemoveDirectoryA __imported_name(RemoveDirectoryA)
extern WINBOOL
 __imported_stdcall(RemoveDirectoryA)(
    LPCSTR lpPathName
    );

#define GetFullPathNameA __imported_name(GetFullPathNameA)
extern DWORD
 __imported_stdcall(GetFullPathNameA)(
    LPCSTR lpFileName,
    DWORD nBufferLength,
    LPSTR lpBuffer,
    LPSTR *lpFilePart
    );

#define DefineDosDeviceA __imported_name(DefineDosDeviceA)
extern WINBOOL
 __imported_stdcall(DefineDosDeviceA)(
    DWORD dwFlags,
    LPCSTR lpDeviceName,
    LPCSTR lpTargetPath
    );

#define QueryDosDeviceA __imported_name(QueryDosDeviceA)
extern DWORD
 __imported_stdcall(QueryDosDeviceA)(
    LPCSTR lpDeviceName,
    LPSTR lpTargetPath,
    DWORD ucchMax
    );

#define CreateFileA __imported_name(CreateFileA)
extern HANDLE
 __imported_stdcall(CreateFileA)(
    LPCSTR lpFileName,
    DWORD dwDesiredAccess,
    DWORD dwShareMode,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    DWORD dwCreationDisposition,
    DWORD dwFlagsAndAttributes,
    HANDLE hTemplateFile
    );

#define SetFileAttributesA __imported_name(SetFileAttributesA)
extern WINBOOL
 __imported_stdcall(SetFileAttributesA)(
    LPCSTR lpFileName,
    DWORD dwFileAttributes
    );

#define GetFileAttributesA __imported_name(GetFileAttributesA)
extern DWORD
 __imported_stdcall(GetFileAttributesA)(
    LPCSTR lpFileName
    );

#define GetCompressedFileSizeA __imported_name(GetCompressedFileSizeA)
extern DWORD
 __imported_stdcall(GetCompressedFileSizeA)(
    LPCSTR lpFileName,
    LPDWORD lpFileSizeHigh
    );

#define DeleteFileA __imported_name(DeleteFileA)
extern WINBOOL
 __imported_stdcall(DeleteFileA)(
    LPCSTR lpFileName
    );

#define SearchPathA __imported_name(SearchPathA)
extern DWORD
 __imported_stdcall(SearchPathA)(
	    LPCSTR lpPath,
    LPCSTR lpFileName,
    LPCSTR lpExtension,
    DWORD nBufferLength,
    LPSTR lpBuffer,
    LPSTR *lpFilePart
    );

#define CopyFileA __imported_name(CopyFileA)
extern WINBOOL
 __imported_stdcall(CopyFileA)(
    LPCSTR lpExistingFileName,
    LPCSTR lpNewFileName,
    WINBOOL bFailIfExists
    );

#define MoveFileA __imported_name(MoveFileA)
extern WINBOOL
 __imported_stdcall(MoveFileA)(
    LPCSTR lpExistingFileName,
    LPCSTR lpNewFileName
    );

#define MoveFileExA __imported_name(MoveFileExA)
extern WINBOOL
 __imported_stdcall(MoveFileExA)(
    LPCSTR lpExistingFileName,
    LPCSTR lpNewFileName,
    DWORD dwFlags
    );

#define CreateNamedPipeA __imported_name(CreateNamedPipeA)
extern HANDLE
 __imported_stdcall(CreateNamedPipeA)(
    LPCSTR lpName,
    DWORD dwOpenMode,
    DWORD dwPipeMode,
    DWORD nMaxInstances,
    DWORD nOutBufferSize,
    DWORD nInBufferSize,
    DWORD nDefaultTimeOut,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );

#define GetNamedPipeHandleStateA __imported_name(GetNamedPipeHandleStateA)
extern WINBOOL
 __imported_stdcall(GetNamedPipeHandleStateA)(
    HANDLE hNamedPipe,
    LPDWORD lpState,
    LPDWORD lpCurInstances,
    LPDWORD lpMaxCollectionCount,
    LPDWORD lpCollectDataTimeout,
    LPSTR lpUserName,
    DWORD nMaxUserNameSize
    );

#define CallNamedPipeA __imported_name(CallNamedPipeA)
extern WINBOOL
 __imported_stdcall(CallNamedPipeA)(
    LPCSTR lpNamedPipeName,
    LPVOID lpInBuffer,
    DWORD nInBufferSize,
    LPVOID lpOutBuffer,
    DWORD nOutBufferSize,
    LPDWORD lpBytesRead,
    DWORD nTimeOut
    );

#define WaitNamedPipeA __imported_name(WaitNamedPipeA)
extern WINBOOL
 __imported_stdcall(WaitNamedPipeA)(
    LPCSTR lpNamedPipeName,
    DWORD nTimeOut
    );

#define SetVolumeLabelA __imported_name(SetVolumeLabelA)
extern WINBOOL
 __imported_stdcall(SetVolumeLabelA)(
    LPCSTR lpRootPathName,
    LPCSTR lpVolumeName
    );

#define GetVolumeInformationA __imported_name(GetVolumeInformationA)
extern WINBOOL
 __imported_stdcall(GetVolumeInformationA)(
    LPCSTR lpRootPathName,
    LPSTR lpVolumeNameBuffer,
    DWORD nVolumeNameSize,
    LPDWORD lpVolumeSerialNumber,
    LPDWORD lpMaximumComponentLength,
    LPDWORD lpFileSystemFlags,
    LPSTR lpFileSystemNameBuffer,
    DWORD nFileSystemNameSize
    );

#define ClearEventLogA __imported_name(ClearEventLogA)
extern WINBOOL
 __imported_stdcall(ClearEventLogA)(
    HANDLE hEventLog,
    LPCSTR lpBackupFileName
    );

#define BackupEventLogA __imported_name(BackupEventLogA)
extern WINBOOL
 __imported_stdcall(BackupEventLogA)(
    HANDLE hEventLog,
    LPCSTR lpBackupFileName
    );

#define OpenEventLogA __imported_name(OpenEventLogA)
extern HANDLE
 __imported_stdcall(OpenEventLogA)(
    LPCSTR lpUNCServerName,
    LPCSTR lpSourceName
    );

#define RegisterEventSourceA __imported_name(RegisterEventSourceA)
extern HANDLE
 __imported_stdcall(RegisterEventSourceA)(
    LPCSTR lpUNCServerName,
    LPCSTR lpSourceName
    );

#define OpenBackupEventLogA __imported_name(OpenBackupEventLogA)
extern HANDLE
 __imported_stdcall(OpenBackupEventLogA)(
    LPCSTR lpUNCServerName,
    LPCSTR lpFileName
    );

#define ReadEventLogA __imported_name(ReadEventLogA)
extern WINBOOL
 __imported_stdcall(ReadEventLogA)(
     HANDLE     hEventLog,
     DWORD      dwReadFlags,
     DWORD      dwRecordOffset,
     LPVOID     lpBuffer,
     DWORD      nNumberOfBytesToRead,
     DWORD      *pnBytesRead,
     DWORD      *pnMinNumberOfBytesNeeded
    );

#define ReportEventA __imported_name(ReportEventA)
extern WINBOOL
 __imported_stdcall(ReportEventA)(
     HANDLE     hEventLog,
     WORD       wType,
     WORD       wCategory,
     DWORD      dwEventID,
     PSID       lpUserSid,
     WORD       wNumStrings,
     DWORD      dwDataSize,
     LPCSTR   *lpStrings,
     LPVOID     lpRawData
    );

#define AccessCheckAndAuditAlarmA __imported_name(AccessCheckAndAuditAlarmA)
extern WINBOOL
 __imported_stdcall(AccessCheckAndAuditAlarmA)(
    LPCSTR SubsystemName,
    LPVOID HandleId,
    LPSTR ObjectTypeName,
    LPSTR ObjectName,
    PSECURITY_DESCRIPTOR SecurityDescriptor,
    DWORD DesiredAccess,
    PGENERIC_MAPPING GenericMapping,
    WINBOOL ObjectCreation,
    LPDWORD GrantedAccess,
    LPBOOL AccessStatus,
    LPBOOL pfGenerateOnClose
    );

#define ObjectOpenAuditAlarmA __imported_name(ObjectOpenAuditAlarmA)
extern WINBOOL
 __imported_stdcall(ObjectOpenAuditAlarmA)(
    LPCSTR SubsystemName,
    LPVOID HandleId,
    LPSTR ObjectTypeName,
    LPSTR ObjectName,
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    HANDLE ClientToken,
    DWORD DesiredAccess,
    DWORD GrantedAccess,
    PPRIVILEGE_SET Privileges,
    WINBOOL ObjectCreation,
    WINBOOL AccessGranted,
    LPBOOL GenerateOnClose
    );

#define ObjectPrivilegeAuditAlarmA __imported_name(ObjectPrivilegeAuditAlarmA)
extern WINBOOL
 __imported_stdcall(ObjectPrivilegeAuditAlarmA)(
    LPCSTR SubsystemName,
    LPVOID HandleId,
    HANDLE ClientToken,
    DWORD DesiredAccess,
    PPRIVILEGE_SET Privileges,
    WINBOOL AccessGranted
    );

#define ObjectCloseAuditAlarmA __imported_name(ObjectCloseAuditAlarmA)
extern WINBOOL
 __imported_stdcall(ObjectCloseAuditAlarmA)(
    LPCSTR SubsystemName,
    LPVOID HandleId,
    WINBOOL GenerateOnClose
    );

#define PrivilegedServiceAuditAlarmA __imported_name(PrivilegedServiceAuditAlarmA)
extern WINBOOL
 __imported_stdcall(PrivilegedServiceAuditAlarmA)(
    LPCSTR SubsystemName,
    LPCSTR ServiceName,
    HANDLE ClientToken,
    PPRIVILEGE_SET Privileges,
    WINBOOL AccessGranted
    );

#define SetFileSecurityA __imported_name(SetFileSecurityA)
extern WINBOOL
 __imported_stdcall(SetFileSecurityA)(
    LPCSTR lpFileName,
    SECURITY_INFORMATION SecurityInformation,
    PSECURITY_DESCRIPTOR pSecurityDescriptor
    );

#define GetFileSecurityA __imported_name(GetFileSecurityA)
extern WINBOOL
 __imported_stdcall(GetFileSecurityA)(
    LPCSTR lpFileName,
    SECURITY_INFORMATION RequestedInformation,
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    DWORD nLength,
    LPDWORD lpnLengthNeeded
    );

#define FindFirstChangeNotificationA __imported_name(FindFirstChangeNotificationA)
extern HANDLE
 __imported_stdcall(FindFirstChangeNotificationA)(
    LPCSTR lpPathName,
    WINBOOL bWatchSubtree,
    DWORD dwNotifyFilter
    );

#define IsBadStringPtrA __imported_name(IsBadStringPtrA)
extern WINBOOL
 __imported_stdcall(IsBadStringPtrA)(
    LPCSTR lpsz,
    UINT ucchMax
    );

#define LookupAccountSidA __imported_name(LookupAccountSidA)
extern WINBOOL
 __imported_stdcall(LookupAccountSidA)(
    LPCSTR lpSystemName,
    PSID Sid,
    LPSTR Name,
    LPDWORD cbName,
    LPSTR ReferencedDomainName,
    LPDWORD cbReferencedDomainName,
    PSID_NAME_USE peUse
    );

#define LookupAccountNameA __imported_name(LookupAccountNameA)
extern WINBOOL
 __imported_stdcall(LookupAccountNameA)(
    LPCSTR lpSystemName,
    LPCSTR lpAccountName,
    PSID Sid,
    LPDWORD cbSid,
    LPSTR ReferencedDomainName,
    LPDWORD cbReferencedDomainName,
    PSID_NAME_USE peUse
    );

#define LookupPrivilegeValueA __imported_name(LookupPrivilegeValueA)
extern WINBOOL
 __imported_stdcall(LookupPrivilegeValueA)(
    LPCSTR lpSystemName,
    LPCSTR lpName,
    PLUID   lpLuid
    );

#define LookupPrivilegeNameA __imported_name(LookupPrivilegeNameA)
extern WINBOOL
 __imported_stdcall(LookupPrivilegeNameA)(
    LPCSTR lpSystemName,
    PLUID   lpLuid,
    LPSTR lpName,
    LPDWORD cbName
    );

#define LookupPrivilegeDisplayNameA __imported_name(LookupPrivilegeDisplayNameA)
extern WINBOOL
 __imported_stdcall(LookupPrivilegeDisplayNameA)(
    LPCSTR lpSystemName,
    LPCSTR lpName,
    LPSTR lpDisplayName,
    LPDWORD cbDisplayName,
    LPDWORD lpLanguageId
    );

#define BuildCommDCBA __imported_name(BuildCommDCBA)
extern WINBOOL
 __imported_stdcall(BuildCommDCBA)(
    LPCSTR lpDef,
    LPDCB lpDCB
    );

#define BuildCommDCBAndTimeoutsA __imported_name(BuildCommDCBAndTimeoutsA)
extern WINBOOL
 __imported_stdcall(BuildCommDCBAndTimeoutsA)(
    LPCSTR lpDef,
    LPDCB lpDCB,
    LPCOMMTIMEOUTS lpCommTimeouts
    );

#define CommConfigDialogA __imported_name(CommConfigDialogA)
extern WINBOOL
 __imported_stdcall(CommConfigDialogA)(
    LPCSTR lpszName,
    HWND hWnd,
    LPCOMMCONFIG lpCC
    );

#define GetDefaultCommConfigA __imported_name(GetDefaultCommConfigA)
extern WINBOOL
 __imported_stdcall(GetDefaultCommConfigA)(
    LPCSTR lpszName,
    LPCOMMCONFIG lpCC,
    LPDWORD lpdwSize
    );

#define SetDefaultCommConfigA __imported_name(SetDefaultCommConfigA)
extern WINBOOL
 __imported_stdcall(SetDefaultCommConfigA)(
    LPCSTR lpszName,
    LPCOMMCONFIG lpCC,
    DWORD dwSize
    );

#define GetComputerNameA __imported_name(GetComputerNameA)
extern WINBOOL
 __imported_stdcall(GetComputerNameA)(
    LPSTR lpBuffer,
    LPDWORD nSize
    );

#define SetComputerNameA __imported_name(SetComputerNameA)
extern WINBOOL
 __imported_stdcall(SetComputerNameA)(
    LPCSTR lpComputerName
    );

#define GetUserNameA __imported_name(GetUserNameA)
extern WINBOOL
 __imported_stdcall(GetUserNameA)(
    LPSTR lpBuffer,
    LPDWORD nSize
    );

#define wvsprintfA __imported_name(wvsprintfA)
extern int
 __imported_stdcall(wvsprintfA)(
    LPSTR,
    LPCSTR,
    va_list arglist);
 
#define wsprintfA __imported_name(wsprintfA)
extern int
wsprintfA(LPSTR, LPCSTR, ...);

#define LoadKeyboardLayoutA __imported_name(LoadKeyboardLayoutA)
extern HKL
 __imported_stdcall(LoadKeyboardLayoutA)(
    LPCSTR pwszKLID,
    UINT Flags);
 
#define GetKeyboardLayoutNameA __imported_name(GetKeyboardLayoutNameA)
extern WINBOOL
 __imported_stdcall(GetKeyboardLayoutNameA)(
    LPSTR pwszKLID);
 
#define CreateDesktopA __imported_name(CreateDesktopA)
extern HDESK
 __imported_stdcall(CreateDesktopA)(
    LPSTR lpszDesktop,
    LPSTR lpszDevice,
    LPDEVMODE pDevmode,
    DWORD dwFlags,
    DWORD dwDesiredAccess,
    LPSECURITY_ATTRIBUTES lpsa);
 
#define OpenDesktopA __imported_name(OpenDesktopA)
extern HDESK
 __imported_stdcall(OpenDesktopA)(
    LPSTR lpszDesktop,
    DWORD dwFlags,
    WINBOOL fInherit,
    DWORD dwDesiredAccess);
 
#define EnumDesktopsA __imported_name(EnumDesktopsA)
extern WINBOOL
 __imported_stdcall(EnumDesktopsA)(
    HWINSTA hwinsta,
    DESKTOPENUMPROC lpEnumFunc,
    LPARAM lParam);
 
#define CreateWindowStationA __imported_name(CreateWindowStationA)
extern HWINSTA
 __imported_stdcall(CreateWindowStationA)(
    LPSTR lpwinsta,
    DWORD dwReserved,
    DWORD dwDesiredAccess,
    LPSECURITY_ATTRIBUTES lpsa);
 
#define OpenWindowStationA __imported_name(OpenWindowStationA)
extern HWINSTA
 __imported_stdcall(OpenWindowStationA)(
    LPSTR lpszWinSta,
    WINBOOL fInherit,
    DWORD dwDesiredAccess);
 
#define EnumWindowStationsA __imported_name(EnumWindowStationsA)
extern WINBOOL
 __imported_stdcall(EnumWindowStationsA)(
    ENUMWINDOWSTATIONPROC lpEnumFunc,
    LPARAM lParam);
 
#define GetUserObjectInformationA __imported_name(GetUserObjectInformationA)
extern WINBOOL
 __imported_stdcall(GetUserObjectInformationA)(
    HANDLE hObj,
    int nIndex,
    PVOID pvInfo,
    DWORD nLength,
    LPDWORD lpnLengthNeeded);
 
#define SetUserObjectInformationA __imported_name(SetUserObjectInformationA)
extern WINBOOL
 __imported_stdcall(SetUserObjectInformationA)(
    HANDLE hObj,
    int nIndex,
    PVOID pvInfo,
    DWORD nLength);
 
#define RegisterWindowMessageA __imported_name(RegisterWindowMessageA)
extern UINT
 __imported_stdcall(RegisterWindowMessageA)(
    LPCSTR lpString);
 
#define GetMessageA __imported_name(GetMessageA)
extern WINBOOL
 __imported_stdcall(GetMessageA)(
    LPMSG lpMsg,
    HWND hWnd ,
    UINT wMsgFilterMin,
    UINT wMsgFilterMax);
 
#define DispatchMessageA __imported_name(DispatchMessageA)
extern LONG
 __imported_stdcall(DispatchMessageA)(
    CONST MSG *lpMsg);
 
#define PeekMessageA __imported_name(PeekMessageA)
extern WINBOOL
 __imported_stdcall(PeekMessageA)(
    LPMSG lpMsg,
    HWND hWnd ,
    UINT wMsgFilterMin,
    UINT wMsgFilterMax,
    UINT wRemoveMsg);
 
#define SendMessageA __imported_name(SendMessageA)
extern LRESULT
 __imported_stdcall(SendMessageA)(
    HWND hWnd,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam);
 
#define SendMessageTimeoutA __imported_name(SendMessageTimeoutA)
extern LRESULT
 __imported_stdcall(SendMessageTimeoutA)(
    HWND hWnd,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam,
    UINT fuFlags,
    UINT uTimeout,
    LPDWORD lpdwResult);
 
#define SendNotifyMessageA __imported_name(SendNotifyMessageA)
extern WINBOOL
 __imported_stdcall(SendNotifyMessageA)(
    HWND hWnd,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam);
 
#define SendMessageCallbackA __imported_name(SendMessageCallbackA)
extern WINBOOL
 __imported_stdcall(SendMessageCallbackA)(
    HWND hWnd,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam,
    SENDASYNCPROC lpResultCallBack,
    DWORD dwData);
 
#define PostMessageA __imported_name(PostMessageA)
extern WINBOOL
 __imported_stdcall(PostMessageA)(
    HWND hWnd,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam);
 
#define PostThreadMessageA __imported_name(PostThreadMessageA)
extern WINBOOL
 __imported_stdcall(PostThreadMessageA)(
    DWORD idThread,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam);
 
#define DefWindowProcA __imported_name(DefWindowProcA)
extern LRESULT
 __imported_stdcall(DefWindowProcA)(
    HWND hWnd,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam);
 
#define CallWindowProcA __imported_name(CallWindowProcA)
extern LRESULT
 __imported_stdcall(CallWindowProcA)(
    WNDPROC lpPrevWndFunc,
    HWND hWnd,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam);
 
#define RegisterClassA __imported_name(RegisterClassA)
extern ATOM
 __imported_stdcall(RegisterClassA)(
    CONST WNDCLASS *lpWndClass);
 
#define UnregisterClassA __imported_name(UnregisterClassA)
extern WINBOOL
 __imported_stdcall(UnregisterClassA)(
    LPCSTR lpClassName,
    HINSTANCE hInstance);
 
#define GetClassInfoA __imported_name(GetClassInfoA)
extern WINBOOL
 __imported_stdcall(GetClassInfoA)(
    HINSTANCE hInstance ,
    LPCSTR lpClassName,
    LPWNDCLASS lpWndClass);
 
#define RegisterClassExA __imported_name(RegisterClassExA)
extern ATOM
 __imported_stdcall(RegisterClassExA)(CONST WNDCLASSEX *);
 
#define GetClassInfoExA __imported_name(GetClassInfoExA)
extern WINBOOL
 __imported_stdcall(GetClassInfoExA)(HINSTANCE, LPCSTR, LPWNDCLASSEX);
 
#define CreateWindowExA __imported_name(CreateWindowExA)
extern HWND
 __imported_stdcall(CreateWindowExA)(
    DWORD dwExStyle,
    LPCSTR lpClassName,
    LPCSTR lpWindowName,
    DWORD dwStyle,
    int X,
    int Y,
    int nWidth,
    int nHeight,
    HWND hWndParent ,
    HMENU hMenu,
    HINSTANCE hInstance,
    LPVOID lpParam);
 
#define CreateDialogParamA __imported_name(CreateDialogParamA)
extern HWND
 __imported_stdcall(CreateDialogParamA)(
    HINSTANCE hInstance,
    LPCSTR lpTemplateName,
    HWND hWndParent ,
    DLGPROC lpDialogFunc,
    LPARAM dwInitParam);
 
#define CreateDialogIndirectParamA __imported_name(CreateDialogIndirectParamA)
extern HWND
 __imported_stdcall(CreateDialogIndirectParamA)(
    HINSTANCE hInstance,
    LPCDLGTEMPLATE lpTemplate,
    HWND hWndParent,
    DLGPROC lpDialogFunc,
    LPARAM dwInitParam);
 
#define DialogBoxParamA __imported_name(DialogBoxParamA)
extern int
 __imported_stdcall(DialogBoxParamA)(
    HINSTANCE hInstance,
    LPCSTR lpTemplateName,
    HWND hWndParent ,
    DLGPROC lpDialogFunc,
    LPARAM dwInitParam);
 
#define DialogBoxIndirectParamA __imported_name(DialogBoxIndirectParamA)
extern int
 __imported_stdcall(DialogBoxIndirectParamA)(
    HINSTANCE hInstance,
    LPCDLGTEMPLATE hDialogTemplate,
    HWND hWndParent ,
    DLGPROC lpDialogFunc,
    LPARAM dwInitParam);
 
#define SetDlgItemTextA __imported_name(SetDlgItemTextA)
extern WINBOOL
 __imported_stdcall(SetDlgItemTextA)(
    HWND hDlg,
    int nIDDlgItem,
    LPCSTR lpString);
 
#define GetDlgItemTextA __imported_name(GetDlgItemTextA)
extern UINT
 __imported_stdcall(GetDlgItemTextA)(
    HWND hDlg,
    int nIDDlgItem,
    LPSTR lpString,
    int nMaxCount);
 
#define SendDlgItemMessageA __imported_name(SendDlgItemMessageA)
extern LONG
 __imported_stdcall(SendDlgItemMessageA)(
    HWND hDlg,
    int nIDDlgItem,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam);
 
#define DefDlgProcA __imported_name(DefDlgProcA)
extern LRESULT
 __imported_stdcall(DefDlgProcA)(
    HWND hDlg,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam);
 
#define CallMsgFilterA __imported_name(CallMsgFilterA)
extern WINBOOL
 __imported_stdcall(CallMsgFilterA)(
    LPMSG lpMsg,
    int nCode);
 
#define RegisterClipboardFormatA __imported_name(RegisterClipboardFormatA)
extern UINT
 __imported_stdcall(RegisterClipboardFormatA)(
    LPCSTR lpszFormat);
 
#define GetClipboardFormatNameA __imported_name(GetClipboardFormatNameA)
extern int
 __imported_stdcall(GetClipboardFormatNameA)(
    UINT format,
    LPSTR lpszFormatName,
    int cchMaxCount);
 
#define CharToOemA __imported_name(CharToOemA)
extern WINBOOL
 __imported_stdcall(CharToOemA)(
    LPCSTR lpszSrc,
    LPSTR lpszDst);
 
#define OemToCharA __imported_name(OemToCharA)
extern WINBOOL
 __imported_stdcall(OemToCharA)(
    LPCSTR lpszSrc,
    LPSTR lpszDst);
 
#define CharToOemBuffA __imported_name(CharToOemBuffA)
extern WINBOOL
 __imported_stdcall(CharToOemBuffA)(
    LPCSTR lpszSrc,
    LPSTR lpszDst,
    DWORD cchDstLength);
 
#define OemToCharBuffA __imported_name(OemToCharBuffA)
extern WINBOOL
 __imported_stdcall(OemToCharBuffA)(
    LPCSTR lpszSrc,
    LPSTR lpszDst,
    DWORD cchDstLength);
 
#define CharUpperA __imported_name(CharUpperA)
extern LPSTR
 __imported_stdcall(CharUpperA)(
    LPSTR lpsz);
 
#define CharUpperBuffA __imported_name(CharUpperBuffA)
extern DWORD
 __imported_stdcall(CharUpperBuffA)(
    LPSTR lpsz,
    DWORD cchLength);
 
#define CharLowerA __imported_name(CharLowerA)
extern LPSTR
 __imported_stdcall(CharLowerA)(
    LPSTR lpsz);
 
#define CharLowerBuffA __imported_name(CharLowerBuffA)
extern DWORD
 __imported_stdcall(CharLowerBuffA)(
    LPSTR lpsz,
    DWORD cchLength);
 
#define CharNextA __imported_name(CharNextA)
extern LPSTR
 __imported_stdcall(CharNextA)(
    LPCSTR lpsz);
 
#define CharPrevA __imported_name(CharPrevA)
extern LPSTR
 __imported_stdcall(CharPrevA)(
    LPCSTR lpszStart,
    LPCSTR lpszCurrent);
 
#define IsCharAlphaA __imported_name(IsCharAlphaA)
extern WINBOOL
 __imported_stdcall(IsCharAlphaA)(
    CHAR ch);
 
#define IsCharAlphaNumericA __imported_name(IsCharAlphaNumericA)
extern WINBOOL
 __imported_stdcall(IsCharAlphaNumericA)(
    CHAR ch);
 
#define IsCharUpperA __imported_name(IsCharUpperA)
extern WINBOOL
 __imported_stdcall(IsCharUpperA)(
    CHAR ch);
 
#define IsCharLowerA __imported_name(IsCharLowerA)
extern WINBOOL
 __imported_stdcall(IsCharLowerA)(
    CHAR ch);
 
#define GetKeyNameTextA __imported_name(GetKeyNameTextA)
extern int
 __imported_stdcall(GetKeyNameTextA)(
    LONG lParam,
    LPSTR lpString,
    int nSize
    );
 
#define VkKeyScanA __imported_name(VkKeyScanA)
extern SHORT
 __imported_stdcall(VkKeyScanA)(
    CHAR ch);
 
#define VkKeyScanExA __imported_name(VkKeyScanExA)
extern SHORT
 __imported_stdcall(VkKeyScanExA)(
    CHAR  ch,
    HKL   dwhkl);
 
#define MapVirtualKeyA __imported_name(MapVirtualKeyA)
extern UINT
 __imported_stdcall(MapVirtualKeyA)(
    UINT uCode,
    UINT uMapType);
 
#define MapVirtualKeyExA __imported_name(MapVirtualKeyExA)
extern UINT
 __imported_stdcall(MapVirtualKeyExA)(
    UINT uCode,
    UINT uMapType,
    HKL dwhkl);
 
#define LoadAcceleratorsA __imported_name(LoadAcceleratorsA)
extern HACCEL
 __imported_stdcall(LoadAcceleratorsA)(
    HINSTANCE hInstance,
    LPCSTR lpTableName);
 
#define CreateAcceleratorTableA __imported_name(CreateAcceleratorTableA)
extern HACCEL
 __imported_stdcall(CreateAcceleratorTableA)(
    LPACCEL, int);
 
#define CopyAcceleratorTableA __imported_name(CopyAcceleratorTableA)
extern int
 __imported_stdcall(CopyAcceleratorTableA)(
    HACCEL hAccelSrc,
    LPACCEL lpAccelDst,
    int cAccelEntries);
 
#define TranslateAcceleratorA __imported_name(TranslateAcceleratorA)
extern int
 __imported_stdcall(TranslateAcceleratorA)(
    HWND hWnd,
    HACCEL hAccTable,
    LPMSG lpMsg);
 
#define LoadMenuA __imported_name(LoadMenuA)
extern HMENU
 __imported_stdcall(LoadMenuA)(
    HINSTANCE hInstance,
    LPCSTR lpMenuName);
 
#define LoadMenuIndirectA __imported_name(LoadMenuIndirectA)
extern HMENU
 __imported_stdcall(LoadMenuIndirectA)(
    CONST MENUTEMPLATE *lpMenuTemplate);
 
#define ChangeMenuA __imported_name(ChangeMenuA)
extern WINBOOL
 __imported_stdcall(ChangeMenuA)(
    HMENU hMenu,
    UINT cmd,
    LPCSTR lpszNewItem,
    UINT cmdInsert,
    UINT flags);
 
#define GetMenuStringA __imported_name(GetMenuStringA)
extern int
 __imported_stdcall(GetMenuStringA)(
    HMENU hMenu,
    UINT uIDItem,
    LPSTR lpString,
    int nMaxCount,
    UINT uFlag);
 
#define InsertMenuA __imported_name(InsertMenuA)
extern WINBOOL
 __imported_stdcall(InsertMenuA)(
    HMENU hMenu,
    UINT uPosition,
    UINT uFlags,
    UINT uIDNewItem,
    LPCSTR lpNewItem
    );
 
#define AppendMenuA __imported_name(AppendMenuA)
extern WINBOOL
 __imported_stdcall(AppendMenuA)(
    HMENU hMenu,
    UINT uFlags,
    UINT uIDNewItem,
    LPCSTR lpNewItem
    );
 
#define ModifyMenuA __imported_name(ModifyMenuA)
extern WINBOOL
 __imported_stdcall(ModifyMenuA)(
    HMENU hMnu,
    UINT uPosition,
    UINT uFlags,
    UINT uIDNewItem,
    LPCSTR lpNewItem
    );
 
#define InsertMenuItemA __imported_name(InsertMenuItemA)
extern WINBOOL
 __imported_stdcall(InsertMenuItemA)(
    HMENU,
    UINT,
    WINBOOL,
    LPCMENUITEMINFO
    );
 
#define GetMenuItemInfoA __imported_name(GetMenuItemInfoA)
extern WINBOOL
 __imported_stdcall(GetMenuItemInfoA)(
    HMENU,
    UINT,
    WINBOOL,
    LPMENUITEMINFO
    );
 
#define SetMenuItemInfoA __imported_name(SetMenuItemInfoA)
extern WINBOOL
 __imported_stdcall(SetMenuItemInfoA)(
    HMENU,
    UINT,
    WINBOOL,
    LPCMENUITEMINFO
    );
 
#define DrawTextA __imported_name(DrawTextA)
extern int
 __imported_stdcall(DrawTextA)(
    HDC hDC,
    LPCSTR lpString,
    int nCount,
    LPRECT lpRect,
    UINT uFormat);
 
#define DrawTextExA __imported_name(DrawTextExA)
extern int
 __imported_stdcall(DrawTextExA)(HDC, LPSTR, int, LPRECT, UINT, LPDRAWTEXTPARAMS);
 
#define GrayStringA __imported_name(GrayStringA)
extern WINBOOL
 __imported_stdcall(GrayStringA)(
    HDC hDC,
    HBRUSH hBrush,
    GRAYSTRINGPROC lpOutputFunc,
    LPARAM lpData,
    int nCount,
    int X,
    int Y,
    int nWidth,
    int nHeight);
 
#define DrawStateA __imported_name(DrawStateA)
extern WINBOOL
 __imported_stdcall(DrawStateA)(HDC, HBRUSH, DRAWSTATEPROC, LPARAM, WPARAM, int, int, int, int, UINT);

#define TabbedTextOutA __imported_name(TabbedTextOutA)
extern LONG
 __imported_stdcall(TabbedTextOutA)(
    HDC hDC,
    int X,
    int Y,
    LPCSTR lpString,
    int nCount,
    int nTabPositions,
    LPINT lpnTabStopPositions,
    int nTabOrigin);
 
#define GetTabbedTextExtentA __imported_name(GetTabbedTextExtentA)
extern DWORD
 __imported_stdcall(GetTabbedTextExtentA)(
    HDC hDC,
    LPCSTR lpString,
    int nCount,
    int nTabPositions,
    LPINT lpnTabStopPositions);
 
#define SetPropA __imported_name(SetPropA)
extern WINBOOL
 __imported_stdcall(SetPropA)(
    HWND hWnd,
    LPCSTR lpString,
    HANDLE hData);
 
#define GetPropA __imported_name(GetPropA)
extern HANDLE
 __imported_stdcall(GetPropA)(
    HWND hWnd,
    LPCSTR lpString);
 
#define RemovePropA __imported_name(RemovePropA)
extern HANDLE
 __imported_stdcall(RemovePropA)(
    HWND hWnd,
    LPCSTR lpString);
 
#define EnumPropsExA __imported_name(EnumPropsExA)
extern int
 __imported_stdcall(EnumPropsExA)(
    HWND hWnd,
    PROPENUMPROCEX lpEnumFunc,
    LPARAM lParam);
 
#define EnumPropsA __imported_name(EnumPropsA)
extern int
 __imported_stdcall(EnumPropsA)(
    HWND hWnd,
    PROPENUMPROC lpEnumFunc);
 
#define SetWindowTextA __imported_name(SetWindowTextA)
extern WINBOOL
 __imported_stdcall(SetWindowTextA)(
    HWND hWnd,
    LPCSTR lpString);
 
#define GetWindowTextA __imported_name(GetWindowTextA)
extern int
 __imported_stdcall(GetWindowTextA)(
    HWND hWnd,
    LPSTR lpString,
    int nMaxCount);
 
#define GetWindowTextLengthA __imported_name(GetWindowTextLengthA)
extern int
 __imported_stdcall(GetWindowTextLengthA)(
    HWND hWnd);
 
#define MessageBoxA __imported_name(MessageBoxA)
extern int
__imported_stdcall(MessageBoxA)(
    HWND hWnd ,
    LPCSTR lpText,
    LPCSTR lpCaption,
    UINT uType);
 
#define MessageBoxExA __imported_name(MessageBoxExA)
extern int
 __imported_stdcall(MessageBoxExA)(
    HWND hWnd ,
    LPCSTR lpText,
    LPCSTR lpCaption,
    UINT uType,
    WORD wLanguageId);
 
#define MessageBoxIndirectA __imported_name(MessageBoxIndirectA)
extern int
 __imported_stdcall(MessageBoxIndirectA)(LPMSGBOXPARAMS);

#define GetWindowLongA __imported_name(GetWindowLongA)
extern LONG
 __imported_stdcall(GetWindowLongA)(
    HWND hWnd,
    int nIndex);
 
#define SetWindowLongA __imported_name(SetWindowLongA)
extern LONG
 __imported_stdcall(SetWindowLongA)(
    HWND hWnd,
    int nIndex,
    LONG dwNewLong);
 
#define GetClassLongA __imported_name(GetClassLongA)
extern DWORD
 __imported_stdcall(GetClassLongA)(
    HWND hWnd,
    int nIndex);
 
#define SetClassLongA __imported_name(SetClassLongA)
extern DWORD
 __imported_stdcall(SetClassLongA)(
    HWND hWnd,
    int nIndex,
    LONG dwNewLong);
 
#define FindWindowA __imported_name(FindWindowA)
extern HWND
 __imported_stdcall(FindWindowA)(
    LPCSTR lpClassName ,
    LPCSTR lpWindowName);
 
#define FindWindowExA __imported_name(FindWindowExA)
extern HWND
 __imported_stdcall(FindWindowExA)(HWND, HWND, LPCSTR, LPCSTR);

#define GetClassNameA __imported_name(GetClassNameA)
extern int
 __imported_stdcall(GetClassNameA)(
    HWND hWnd,
    LPSTR lpClassName,
    int nMaxCount);
 
#define SetWindowsHookExA __imported_name(SetWindowsHookExA)
extern HHOOK
 __imported_stdcall(SetWindowsHookExA)(
    int idHook,
    HOOKPROC lpfn,
    HINSTANCE hmod,
    DWORD dwThreadId);
 
#define LoadBitmapA __imported_name(LoadBitmapA)
extern HBITMAP
 __imported_stdcall(LoadBitmapA)(
    HINSTANCE hInstance,
    LPCSTR lpBitmapName);
 
#define LoadCursorA __imported_name(LoadCursorA)
extern HCURSOR
 __imported_stdcall(LoadCursorA)(
    HINSTANCE hInstance,
    LPCSTR lpCursorName);
 
#define LoadCursorFromFileA __imported_name(LoadCursorFromFileA)
extern HCURSOR
 __imported_stdcall(LoadCursorFromFileA)(
    LPCSTR    lpFileName);
 
#define LoadIconA __imported_name(LoadIconA)
extern HICON
 __imported_stdcall(LoadIconA)(
    HINSTANCE hInstance,
    LPCSTR lpIconName);
 
#define LoadImageA __imported_name(LoadImageA)
extern HANDLE
 __imported_stdcall(LoadImageA)(
    HINSTANCE,
    LPCSTR,
    UINT,
    int,
    int,
    UINT);
 
#define LoadStringA __imported_name(LoadStringA)
extern int
 __imported_stdcall(LoadStringA)(
    HINSTANCE hInstance,
    UINT uID,
    LPSTR lpBuffer,
    int nBufferMax);
 
#define IsDialogMessageA __imported_name(IsDialogMessageA)
extern WINBOOL
 __imported_stdcall(IsDialogMessageA)(
    HWND hDlg,
    LPMSG lpMsg);
 
#define DlgDirListA __imported_name(DlgDirListA)
extern int
 __imported_stdcall(DlgDirListA)(
    HWND hDlg,
    LPSTR lpPathSpec,
    int nIDListBox,
    int nIDStaticPath,
    UINT uFileType);
 
#define DlgDirSelectExA __imported_name(DlgDirSelectExA)
extern WINBOOL
 __imported_stdcall(DlgDirSelectExA)(
    HWND hDlg,
    LPSTR lpString,
    int nCount,
    int nIDListBox);
 
#define DlgDirListComboBoxA __imported_name(DlgDirListComboBoxA)
extern int
 __imported_stdcall(DlgDirListComboBoxA)(
    HWND hDlg,
    LPSTR lpPathSpec,
    int nIDComboBox,
    int nIDStaticPath,
    UINT uFiletype);
 
#define DlgDirSelectComboBoxExA __imported_name(DlgDirSelectComboBoxExA)
extern WINBOOL
 __imported_stdcall(DlgDirSelectComboBoxExA)(
    HWND hDlg,
    LPSTR lpString,
    int nCount,
    int nIDComboBox);
 
#define DefFrameProcA __imported_name(DefFrameProcA)
extern LRESULT
 __imported_stdcall(DefFrameProcA)(
    HWND hWnd,
    HWND hWndMDIClient ,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
 
#define DefMDIChildProcA __imported_name(DefMDIChildProcA)
extern LRESULT
 __imported_stdcall(DefMDIChildProcA)(
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
 
#define CreateMDIWindowA __imported_name(CreateMDIWindowA)
extern HWND
 __imported_stdcall(CreateMDIWindowA)(
    LPSTR lpClassName,
    LPSTR lpWindowName,
    DWORD dwStyle,
    int X,
    int Y,
    int nWidth,
    int nHeight,
    HWND hWndParent,
    HINSTANCE hInstance,
    LPARAM lParam
    );
 
#define WinHelpA __imported_name(WinHelpA)
extern WINBOOL
 __imported_stdcall(WinHelpA)(
    HWND hWndMain,
    LPCSTR lpszHelp,
    UINT uCommand,
    DWORD dwData
    );
 
#define ChangeDisplaySettingsA __imported_name(ChangeDisplaySettingsA)
extern LONG
 __imported_stdcall(ChangeDisplaySettingsA)(
    LPDEVMODE lpDevMode,
    DWORD dwFlags);
 
#define EnumDisplaySettingsA __imported_name(EnumDisplaySettingsA)
extern WINBOOL
 __imported_stdcall(EnumDisplaySettingsA)(
    LPCSTR lpszDeviceName,
    DWORD iModeNum,
    LPDEVMODE lpDevMode);
 
#define SystemParametersInfoA __imported_name(SystemParametersInfoA)
extern WINBOOL
 __imported_stdcall(SystemParametersInfoA)(
    UINT uiAction,
    UINT uiParam,
    PVOID pvParam,
    UINT fWinIni);
 
#define AddFontResourceA __imported_name(AddFontResourceA)
extern int
 __imported_stdcall(AddFontResourceA)(LPCSTR);

#define CopyMetaFileA __imported_name(CopyMetaFileA)
extern HMETAFILE
 __imported_stdcall(CopyMetaFileA)(HMETAFILE, LPCSTR);

#define CreateFontIndirectA __imported_name(CreateFontIndirectA)
extern HFONT
 __imported_stdcall(CreateFontIndirectA)(CONST LOGFONT *);

#define CreateICA __imported_name(CreateICA)
extern HDC
 __imported_stdcall(CreateICA)(LPCSTR, LPCSTR , LPCSTR , CONST DEVMODE *);

#define CreateMetaFileA __imported_name(CreateMetaFileA)
extern HDC
 __imported_stdcall(CreateMetaFileA)(LPCSTR);

#define CreateScalableFontResourceA __imported_name(CreateScalableFontResourceA)
extern WINBOOL
 __imported_stdcall(CreateScalableFontResourceA)(DWORD, LPCSTR, LPCSTR, LPCSTR);

#define DeviceCapabilitiesA __imported_name(DeviceCapabilitiesA)
extern int
 __imported_stdcall(DeviceCapabilitiesA)(LPCSTR, LPCSTR, WORD,
                                LPSTR, CONST DEVMODE *);

#define EnumFontFamiliesExA __imported_name(EnumFontFamiliesExA)
extern int
 __imported_stdcall(EnumFontFamiliesExA)(HDC, LPLOGFONT, FONTENUMEXPROC, LPARAM,DWORD);

#define EnumFontFamiliesA __imported_name(EnumFontFamiliesA)
extern int
 __imported_stdcall(EnumFontFamiliesA)(HDC, LPCSTR, FONTENUMPROC, LPARAM);

#define EnumFontsA __imported_name(EnumFontsA)
extern int
 __imported_stdcall(EnumFontsA)(HDC, LPCSTR,  ENUMFONTSPROC, LPARAM);

#define GetCharWidthA __imported_name(GetCharWidthA)
extern WINBOOL
 __imported_stdcall(GetCharWidthA)(HDC, UINT, UINT, LPINT);

#define GetCharWidth32A __imported_name(GetCharWidth32A)
extern WINBOOL
 __imported_stdcall(GetCharWidth32A)(HDC, UINT, UINT, LPINT);

#define GetCharWidthFloatA __imported_name(GetCharWidthFloatA)
extern WINBOOL
 __imported_stdcall(GetCharWidthFloatA)(HDC, UINT, UINT, PFLOAT);

#define GetCharABCWidthsA __imported_name(GetCharABCWidthsA)
extern WINBOOL
 __imported_stdcall(GetCharABCWidthsA)(HDC, UINT, UINT, LPABC);

#define GetCharABCWidthsFloatA __imported_name(GetCharABCWidthsFloatA)
extern WINBOOL
 __imported_stdcall(GetCharABCWidthsFloatA)(HDC, UINT, UINT, LPABCFLOAT);
#define GetGlyphOutlineA __imported_name(GetGlyphOutlineA)
extern DWORD
 __imported_stdcall(GetGlyphOutlineA)(HDC, UINT, UINT, LPGLYPHMETRICS, DWORD, LPVOID, CONST MAT2 *);

#define GetMetaFileA __imported_name(GetMetaFileA)
extern HMETAFILE
 __imported_stdcall(GetMetaFileA)(LPCSTR);

#define GetOutlineTextMetricsA __imported_name(GetOutlineTextMetricsA)
extern UINT
 __imported_stdcall(GetOutlineTextMetricsA)(HDC, UINT, LPOUTLINETEXTMETRIC);

#define GetTextExtentPointA __imported_name(GetTextExtentPointA)
extern WINBOOL
 __imported_stdcall(GetTextExtentPointA)(
                    HDC,
                    LPCSTR,
                    int,
                    LPSIZE
                    );

#define GetTextExtentPoint32A __imported_name(GetTextExtentPoint32A)
extern WINBOOL
 __imported_stdcall(GetTextExtentPoint32A)(
                    HDC,
                    LPCSTR,
                    int,
                    LPSIZE
                    );

#define GetTextExtentExPointA __imported_name(GetTextExtentExPointA)
extern WINBOOL
 __imported_stdcall(GetTextExtentExPointA)(
                    HDC,
                    LPCSTR,
                    int,
                    int,
                    LPINT,
                    LPINT,
                    LPSIZE
                    );

#define GetCharacterPlacementA __imported_name(GetCharacterPlacementA)
extern DWORD
 __imported_stdcall(GetCharacterPlacementA)(HDC, LPCSTR, int, int, LPGCP_RESULTS, DWORD);

#define ResetDCA __imported_name(ResetDCA)
extern HDC
 __imported_stdcall(ResetDCA)(HDC, CONST DEVMODE *);

#define RemoveFontResourceA __imported_name(RemoveFontResourceA)
extern WINBOOL
 __imported_stdcall(RemoveFontResourceA)(LPCSTR);

#define CopyEnhMetaFileA __imported_name(CopyEnhMetaFileA)
extern HENHMETAFILE
 __imported_stdcall(CopyEnhMetaFileA)(HENHMETAFILE, LPCSTR);

#define CreateEnhMetaFileA __imported_name(CreateEnhMetaFileA)
extern HDC
 __imported_stdcall(CreateEnhMetaFileA)(HDC, LPCSTR, CONST RECT *, LPCSTR);

#define GetEnhMetaFileA __imported_name(GetEnhMetaFileA)
extern HENHMETAFILE
 __imported_stdcall(GetEnhMetaFileA)(LPCSTR);

#define GetEnhMetaFileDescriptionA __imported_name(GetEnhMetaFileDescriptionA)
extern UINT
 __imported_stdcall(GetEnhMetaFileDescriptionA)(HENHMETAFILE, UINT, LPSTR );

#define GetTextMetricsA __imported_name(GetTextMetricsA)
extern WINBOOL
 __imported_stdcall(GetTextMetricsA)(HDC, LPTEXTMETRIC);

#define StartDocA __imported_name(StartDocA)
extern int
 __imported_stdcall(StartDocA)(HDC, CONST DOCINFO *);

#define GetObjectA __imported_name(GetObjectA)
extern int
 __imported_stdcall(GetObjectA)(HGDIOBJ, int, LPVOID);

#define TextOutA __imported_name(TextOutA)
extern WINBOOL
 __imported_stdcall(TextOutA)(HDC, int, int, LPCSTR, int);

#define ExtTextOutA __imported_name(ExtTextOutA)
extern WINBOOL
 __imported_stdcall(ExtTextOutA)(HDC, int, int, UINT, CONST RECT *,LPCSTR, UINT, CONST INT *);

#define PolyTextOutA __imported_name(PolyTextOutA)
extern WINBOOL
 __imported_stdcall(PolyTextOutA)(HDC, CONST POLYTEXT *, int); 

#define GetTextFaceA __imported_name(GetTextFaceA)
extern int
 __imported_stdcall(GetTextFaceA)(HDC, int, LPSTR);

#define GetKerningPairsA __imported_name(GetKerningPairsA)
extern DWORD
 __imported_stdcall(GetKerningPairsA)(HDC, DWORD, LPKERNINGPAIR);

#define CreateColorSpaceA __imported_name(CreateColorSpaceA)
extern HCOLORSPACE
 __imported_stdcall(CreateColorSpaceA)(LPLOGCOLORSPACE);

#define GetLogColorSpaceA __imported_name(GetLogColorSpaceA)
extern WINBOOL
 __imported_stdcall(GetLogColorSpaceA)(HCOLORSPACE,LPLOGCOLORSPACE,DWORD);

#define GetICMProfileA __imported_name(GetICMProfileA)
extern WINBOOL
 __imported_stdcall(GetICMProfileA)(HDC,DWORD,LPSTR);

#define SetICMProfileA __imported_name(SetICMProfileA)
extern WINBOOL
 __imported_stdcall(SetICMProfileA)(HDC,LPSTR);

#define UpdateICMRegKeyA __imported_name(UpdateICMRegKeyA)
extern WINBOOL
 __imported_stdcall(UpdateICMRegKeyA)(DWORD, DWORD, LPSTR, UINT);

#define EnumICMProfilesA __imported_name(EnumICMProfilesA)
extern int
 __imported_stdcall(EnumICMProfilesA)(HDC,ICMENUMPROC,LPARAM);

#define PropertySheetA __imported_name(PropertySheetA)
extern int
 __imported_stdcall(PropertySheetA)(LPCPROPSHEETHEADER lppsph);

#define ImageList_LoadImageA __imported_name(ImageList_LoadImageA)
extern HIMAGELIST
 __imported_stdcall(ImageList_LoadImageA)(HINSTANCE hi, LPCSTR lpbmp, int cx, int cGrow, COLORREF crMask, UINT uType, UINT uFlags);

#define CreateStatusWindowA __imported_name(CreateStatusWindowA)
extern HWND
 __imported_stdcall(CreateStatusWindowA)(LONG style, LPCSTR lpszText, HWND hwndParent, UINT wID);

#define DrawStatusTextA __imported_name(DrawStatusTextA)
extern void
 __imported_stdcall(DrawStatusTextA)(HDC hDC, LPRECT lprc, LPCSTR pszText, UINT uFlags);

#define GetOpenFileNameA __imported_name(GetOpenFileNameA)
extern WINBOOL
 __imported_stdcall(GetOpenFileNameA)(LPOPENFILENAME);

#define GetSaveFileNameA __imported_name(GetSaveFileNameA)
extern WINBOOL
 __imported_stdcall(GetSaveFileNameA)(LPOPENFILENAME);

#define GetFileTitleA __imported_name(GetFileTitleA)
extern short
 __imported_stdcall(GetFileTitleA)(LPCSTR, LPSTR, WORD);

#define ChooseColorA __imported_name(ChooseColorA)
extern WINBOOL
 __imported_stdcall(ChooseColorA)(LPCHOOSECOLOR);

#define FindTextA __imported_name(FindTextA)
extern HWND
 __imported_stdcall(FindTextA)(LPFINDREPLACE);

#define ReplaceTextA __imported_name(ReplaceTextA)
extern HWND
 __imported_stdcall(ReplaceTextA)(LPFINDREPLACE);

#define ChooseFontA __imported_name(ChooseFontA)
extern WINBOOL
 __imported_stdcall(ChooseFontA)(LPCHOOSEFONT);

#define PrintDlgA __imported_name(PrintDlgA)
extern WINBOOL
 __imported_stdcall(PrintDlgA)(LPPRINTDLG);

#define PageSetupDlgA __imported_name(PageSetupDlgA)
extern WINBOOL
 __imported_stdcall(PageSetupDlgA)( LPPAGESETUPDLG );

#define CreateProcessA __imported_name(CreateProcessA)
extern WINBOOL
 __imported_stdcall(CreateProcessA)(
    LPCSTR lpApplicationName,
    LPSTR lpCommandLine,
    LPSECURITY_ATTRIBUTES lpProcessAttributes,
    LPSECURITY_ATTRIBUTES lpThreadAttributes,
    WINBOOL bInheritHandles,
    DWORD dwCreationFlags,
    LPVOID lpEnvironment,
    LPCSTR lpCurrentDirectory,
    LPSTARTUPINFO lpStartupInfo,
    LPPROCESS_INFORMATION lpProcessInformation
    );

#define GetStartupInfoA __imported_name(GetStartupInfoA)
extern VOID
 __imported_stdcall(GetStartupInfoA)(
    LPSTARTUPINFO lpStartupInfo
    );

#define FindFirstFileA __imported_name(FindFirstFileA)
extern HANDLE
 __imported_stdcall(FindFirstFileA)(
    LPCSTR lpFileName,
    LPWIN32_FIND_DATA lpFindFileData
    );

#define FindNextFileA __imported_name(FindNextFileA)
extern WINBOOL
 __imported_stdcall(FindNextFileA)(
    HANDLE hFindFile,
    LPWIN32_FIND_DATA lpFindFileData
    );

#define GetVersionExA __imported_name(GetVersionExA)
extern WINBOOL
 __imported_stdcall(GetVersionExA)(
    LPOSVERSIONINFO lpVersionInformation
    );

#define CreateWindowA(lpClassName, lpWindowName, dwStyle, x, y,\
nWidth, nHeight, hWndParent, hMenu, hInstance, lpParam)\
CreateWindowExA(0L, lpClassName, lpWindowName, dwStyle, x, y,\
nWidth, nHeight, hWndParent, hMenu, hInstance, lpParam)

#define CreateDialogA(hInstance, lpName, hWndParent, lpDialogFunc) \
CreateDialogParamA(hInstance, lpName, hWndParent, lpDialogFunc, 0L)

#define CreateDialogIndirectA(hInstance, lpTemplate, hWndParent, lpDialogFunc) \
CreateDialogIndirectParamA(hInstance, lpTemplate, hWndParent, lpDialogFunc, 0L)

#define DialogBoxA(hInstance, lpTemplate, hWndParent, lpDialogFunc) \
DialogBoxParamA(hInstance, lpTemplate, hWndParent, lpDialogFunc, 0L)

#define DialogBoxIndirectA(hInstance, lpTemplate, hWndParent, lpDialogFunc) \
DialogBoxIndirectParamA(hInstance, lpTemplate, hWndParent, lpDialogFunc, 0L)

#define CreateDCA __imported_name(CreateDCA)
extern HDC
 __imported_stdcall(CreateDCA)(LPCSTR, LPCSTR , LPCSTR , CONST DEVMODE *);

#define VerInstallFileA __imported_name(VerInstallFileA)
extern DWORD
 __imported_stdcall(VerInstallFileA)(
        DWORD uFlags,
        LPSTR szSrcFileName,
        LPSTR szDestFileName,
        LPSTR szSrcDir,
        LPSTR szDestDir,
        LPSTR szCurDir,
        LPSTR szTmpFile,
        PUINT lpuTmpFileLen
        );

#define GetFileVersionInfoSizeA __imported_name(GetFileVersionInfoSizeA)
extern DWORD
 __imported_stdcall(GetFileVersionInfoSizeA)(
        LPSTR lptstrFilename,
        LPDWORD lpdwHandle
        );

#define GetFileVersionInfoA __imported_name(GetFileVersionInfoA)
extern WINBOOL
 __imported_stdcall(GetFileVersionInfoA)(
        LPSTR lptstrFilename,
        DWORD dwHandle,
        DWORD dwLen,
        LPVOID lpData
        );

#define VerLanguageNameA __imported_name(VerLanguageNameA)
extern DWORD
 __imported_stdcall(VerLanguageNameA)(
        DWORD wLang,
        LPSTR szLang,
        DWORD nSize
        );

#define VerQueryValueA __imported_name(VerQueryValueA)
extern WINBOOL
 __imported_stdcall(VerQueryValueA)(
        const LPVOID pBlock,
        LPSTR lpSubBlock,
        LPVOID * lplpBuffer,
        PUINT puLen
        );

#define VerFindFileA __imported_name(VerFindFileA)
extern DWORD
 __imported_stdcall(VerFindFileA)(
        DWORD uFlags,
        LPSTR szFileName,
        LPSTR szWinDir,
        LPSTR szAppDir,
        LPSTR szCurDir,
        PUINT lpuCurDirLen,
        LPSTR szDestDir,
        PUINT lpuDestDirLen
        );

#define RegConnectRegistryA __imported_name(RegConnectRegistryA)
extern LONG
 __imported_stdcall(RegConnectRegistryA)(
    LPSTR lpMachineName,
    HKEY hKey,
    PHKEY phkResult
    );

#define RegCreateKeyA __imported_name(RegCreateKeyA)
extern LONG
 __imported_stdcall(RegCreateKeyA)(
    HKEY hKey,
    LPCSTR lpSubKey,
    PHKEY phkResult
    );

#define RegCreateKeyExA __imported_name(RegCreateKeyExA)
extern LONG
 __imported_stdcall(RegCreateKeyExA)(
    HKEY hKey,
    LPCSTR lpSubKey,
    DWORD Reserved,
    LPSTR lpClass,
    DWORD dwOptions,
    REGSAM samDesired,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    PHKEY phkResult,
    LPDWORD lpdwDisposition
    );

#define RegDeleteKeyA __imported_name(RegDeleteKeyA)
extern LONG
 __imported_stdcall(RegDeleteKeyA)(
    HKEY hKey,
    LPCSTR lpSubKey
    );

#define RegDeleteValueA __imported_name(RegDeleteValueA)
extern LONG
 __imported_stdcall(RegDeleteValueA)(
    HKEY hKey,
    LPCSTR lpValueName
    );

#define RegEnumKeyA __imported_name(RegEnumKeyA)
extern LONG
 __imported_stdcall(RegEnumKeyA)(
    HKEY hKey,
    DWORD dwIndex,
    LPSTR lpName,
    DWORD cbName
    );

#define RegEnumKeyExA __imported_name(RegEnumKeyExA)
extern LONG
 __imported_stdcall(RegEnumKeyExA)(
    HKEY hKey,
    DWORD dwIndex,
    LPSTR lpName,
    LPDWORD lpcbName,
    LPDWORD lpReserved,
    LPSTR lpClass,
    LPDWORD lpcbClass,
    PFILETIME lpftLastWriteTime
    );

#define RegEnumValueA __imported_name(RegEnumValueA)
extern LONG
 __imported_stdcall(RegEnumValueA)(
    HKEY hKey,
    DWORD dwIndex,
    LPSTR lpValueName,
    LPDWORD lpcbValueName,
    LPDWORD lpReserved,
    LPDWORD lpType,
    LPBYTE lpData,
    LPDWORD lpcbData
    );

#define RegLoadKeyA __imported_name(RegLoadKeyA)
extern LONG
 __imported_stdcall(RegLoadKeyA)(
    HKEY    hKey,
    LPCSTR  lpSubKey,
    LPCSTR  lpFile
    );

#define RegOpenKeyA __imported_name(RegOpenKeyA)
extern LONG
 __imported_stdcall(RegOpenKeyA)(
    HKEY hKey,
    LPCSTR lpSubKey,
    PHKEY phkResult
    );

#define RegOpenKeyExA __imported_name(RegOpenKeyExA)
extern LONG
 __imported_stdcall(RegOpenKeyExA)(
    HKEY hKey,
    LPCSTR lpSubKey,
    DWORD ulOptions,
    REGSAM samDesired,
    PHKEY phkResult
    );

#define RegQueryInfoKeyA __imported_name(RegQueryInfoKeyA)
extern LONG
 __imported_stdcall(RegQueryInfoKeyA)(
    HKEY hKey,
    LPSTR lpClass,
    LPDWORD lpcbClass,
    LPDWORD lpReserved,
    LPDWORD lpcSubKeys,
    LPDWORD lpcbMaxSubKeyLen,
    LPDWORD lpcbMaxClassLen,
    LPDWORD lpcValues,
    LPDWORD lpcbMaxValueNameLen,
    LPDWORD lpcbMaxValueLen,
    LPDWORD lpcbSecurityDescriptor,
    PFILETIME lpftLastWriteTime
    );

#define RegQueryValueA __imported_name(RegQueryValueA)
extern LONG
 __imported_stdcall(RegQueryValueA)(
    HKEY hKey,
    LPCSTR lpSubKey,
    LPSTR lpValue,
    PLONG   lpcbValue
    );

#define RegQueryMultipleValuesA __imported_name(RegQueryMultipleValuesA)
extern LONG
 __imported_stdcall(RegQueryMultipleValuesA)(
    HKEY hKey,
    PVALENT val_list,
    DWORD num_vals,
    LPSTR lpValueBuf,
    LPDWORD ldwTotsize
    );

#define RegQueryValueExA __imported_name(RegQueryValueExA)
extern LONG
 __imported_stdcall(RegQueryValueExA)(
    HKEY hKey,
    LPCSTR lpValueName,
    LPDWORD lpReserved,
    LPDWORD lpType,
    LPBYTE lpData,
    LPDWORD lpcbData
    );

#define RegReplaceKeyA __imported_name(RegReplaceKeyA)
extern LONG
 __imported_stdcall(RegReplaceKeyA)(
    HKEY     hKey,
    LPCSTR  lpSubKey,
    LPCSTR  lpNewFile,
    LPCSTR  lpOldFile
    );

#define RegRestoreKeyA __imported_name(RegRestoreKeyA)
extern LONG
 __imported_stdcall(RegRestoreKeyA)(
    HKEY hKey,
    LPCSTR lpFile,
    DWORD   dwFlags
    );

#define RegSaveKeyA __imported_name(RegSaveKeyA)
extern LONG
 __imported_stdcall(RegSaveKeyA)(
    HKEY hKey,
    LPCSTR lpFile,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );

#define RegSetValueA __imported_name(RegSetValueA)
extern LONG
 __imported_stdcall(RegSetValueA)(
    HKEY hKey,
    LPCSTR lpSubKey,
    DWORD dwType,
    LPCSTR lpData,
    DWORD cbData
    );

#define RegSetValueExA __imported_name(RegSetValueExA)
extern LONG
 __imported_stdcall(RegSetValueExA)(
    HKEY hKey,
    LPCSTR lpValueName,
    DWORD Reserved,
    DWORD dwType,
    CONST BYTE* lpData,
    DWORD cbData
    );

#define RegUnLoadKeyA __imported_name(RegUnLoadKeyA)
extern LONG
 __imported_stdcall(RegUnLoadKeyA)(
    HKEY    hKey,
    LPCSTR lpSubKey
    );

#define InitiateSystemShutdownA __imported_name(InitiateSystemShutdownA)
extern WINBOOL
 __imported_stdcall(InitiateSystemShutdownA)(
    LPSTR lpMachineName,
    LPSTR lpMessage,
    DWORD dwTimeout,
    WINBOOL bForceAppsClosed,
    WINBOOL bRebootAfterShutdown
    );

#define AbortSystemShutdownA __imported_name(AbortSystemShutdownA)
extern WINBOOL
 __imported_stdcall(AbortSystemShutdownA)(
    LPSTR lpMachineName
    );

#define CompareStringA __imported_name(CompareStringA)
extern int
 __imported_stdcall(CompareStringA)(
    LCID     Locale,
    DWORD    dwCmpFlags,
    LPCSTR lpString1,
    int      cchCount1,
    LPCSTR lpString2,
    int      cchCount2);

#define LCMapStringA __imported_name(LCMapStringA)
extern int
 __imported_stdcall(LCMapStringA)(
    LCID     Locale,
    DWORD    dwMapFlags,
    LPCSTR lpSrcStr,
    int      cchSrc,
    LPSTR  lpDestStr,
    int      cchDest);

#define GetLocaleInfoA __imported_name(GetLocaleInfoA)
extern int
 __imported_stdcall(GetLocaleInfoA)(
    LCID     Locale,
    LCTYPE   LCType,
    LPSTR  lpLCData,
    int      cchData);

#define SetLocaleInfoA __imported_name(SetLocaleInfoA)
extern WINBOOL
 __imported_stdcall(SetLocaleInfoA)(
    LCID     Locale,
    LCTYPE   LCType,
    LPCSTR lpLCData);

#define GetTimeFormatA __imported_name(GetTimeFormatA)
extern int
 __imported_stdcall(GetTimeFormatA)(
    LCID     Locale,
    DWORD    dwFlags,
    CONST SYSTEMTIME *lpTime,
    LPCSTR lpFormat,
    LPSTR  lpTimeStr,
    int      cchTime);

#define GetDateFormatA __imported_name(GetDateFormatA)
extern int
 __imported_stdcall(GetDateFormatA)(
    LCID     Locale,
    DWORD    dwFlags,
    CONST SYSTEMTIME *lpDate,
    LPCSTR lpFormat,
    LPSTR  lpDateStr,
    int      cchDate);

#define GetNumberFormatA __imported_name(GetNumberFormatA)
extern int
 __imported_stdcall(GetNumberFormatA)(
    LCID     Locale,
    DWORD    dwFlags,
    LPCSTR lpValue,
    CONST NUMBERFMT *lpFormat,
    LPSTR  lpNumberStr,
    int      cchNumber);

#define GetCurrencyFormatA __imported_name(GetCurrencyFormatA)
extern int
 __imported_stdcall(GetCurrencyFormatA)(
    LCID     Locale,
    DWORD    dwFlags,
    LPCSTR lpValue,
    CONST CURRENCYFMT *lpFormat,
    LPSTR  lpCurrencyStr,
    int      cchCurrency);

#define EnumCalendarInfoA __imported_name(EnumCalendarInfoA)
extern WINBOOL
 __imported_stdcall(EnumCalendarInfoA)(
    CALINFO_ENUMPROC lpCalInfoEnumProc,
    LCID              Locale,
    CALID             Calendar,
    CALTYPE           CalType);

#define EnumTimeFormatsA __imported_name(EnumTimeFormatsA)
extern WINBOOL
 __imported_stdcall(EnumTimeFormatsA)(
    TIMEFMT_ENUMPROC lpTimeFmtEnumProc,
    LCID              Locale,
    DWORD             dwFlags);

#define EnumDateFormatsA __imported_name(EnumDateFormatsA)
extern WINBOOL
 __imported_stdcall(EnumDateFormatsA)(
    DATEFMT_ENUMPROC lpDateFmtEnumProc,
    LCID              Locale,
    DWORD             dwFlags);

#define GetStringTypeExA __imported_name(GetStringTypeExA)
extern WINBOOL
 __imported_stdcall(GetStringTypeExA)(
    LCID     Locale,
    DWORD    dwInfoType,
    LPCSTR lpSrcStr,
    int      cchSrc,
    LPWORD   lpCharType);

#define GetStringTypeA __imported_name(GetStringTypeA)
extern WINBOOL
 __imported_stdcall(GetStringTypeA)(
    LCID     Locale,
    DWORD    dwInfoType,
    LPCSTR   lpSrcStr,
    int      cchSrc,
    LPWORD   lpCharType);


#define FoldStringA __imported_name(FoldStringA)
extern int
 __imported_stdcall(FoldStringA)(
    DWORD    dwMapFlags,
    LPCSTR lpSrcStr,
    int      cchSrc,
    LPSTR  lpDestStr,
    int      cchDest);

#define EnumSystemLocalesA __imported_name(EnumSystemLocalesA)
extern WINBOOL
 __imported_stdcall(EnumSystemLocalesA)(
    LOCALE_ENUMPROC lpLocaleEnumProc,
    DWORD            dwFlags);

#define EnumSystemCodePagesA __imported_name(EnumSystemCodePagesA)
extern WINBOOL
 __imported_stdcall(EnumSystemCodePagesA)(
    CODEPAGE_ENUMPROC lpCodePageEnumProc,
    DWORD              dwFlags);

#define PeekConsoleInputA __imported_name(PeekConsoleInputA)
extern WINBOOL
 __imported_stdcall(PeekConsoleInputA)(
    HANDLE hConsoleInput,
    PINPUT_RECORD lpBuffer,
    DWORD nLength,
    LPDWORD lpNumberOfEventsRead
    );

#define ReadConsoleInputA __imported_name(ReadConsoleInputA)
extern WINBOOL
 __imported_stdcall(ReadConsoleInputA)(
    HANDLE hConsoleInput,
    PINPUT_RECORD lpBuffer,
    DWORD nLength,
    LPDWORD lpNumberOfEventsRead
    );

#define WriteConsoleInputA __imported_name(WriteConsoleInputA)
extern WINBOOL
 __imported_stdcall(WriteConsoleInputA)(
    HANDLE hConsoleInput,
    CONST INPUT_RECORD *lpBuffer,
    DWORD nLength,
    LPDWORD lpNumberOfEventsWritten
    );

#define ReadConsoleOutputA __imported_name(ReadConsoleOutputA)
extern WINBOOL
 __imported_stdcall(ReadConsoleOutputA)(
    HANDLE hConsoleOutput,
    PCHAR_INFO lpBuffer,
    COORD dwBufferSize,
    COORD dwBufferCoord,
    PSMALL_RECT lpReadRegion
    );

#define WriteConsoleOutputA __imported_name(WriteConsoleOutputA)
extern WINBOOL
 __imported_stdcall(WriteConsoleOutputA)(
    HANDLE hConsoleOutput,
    CONST CHAR_INFO *lpBuffer,
    COORD dwBufferSize,
    COORD dwBufferCoord,
    PSMALL_RECT lpWriteRegion
    );

#define ReadConsoleOutputCharacterA __imported_name(ReadConsoleOutputCharacterA)
extern WINBOOL
 __imported_stdcall(ReadConsoleOutputCharacterA)(
    HANDLE hConsoleOutput,
    LPSTR lpCharacter,
    DWORD nLength,
    COORD dwReadCoord,
    LPDWORD lpNumberOfCharsRead
    );

#define WriteConsoleOutputCharacterA __imported_name(WriteConsoleOutputCharacterA)
extern WINBOOL
 __imported_stdcall(WriteConsoleOutputCharacterA)(
    HANDLE hConsoleOutput,
    LPCSTR lpCharacter,
    DWORD nLength,
    COORD dwWriteCoord,
    LPDWORD lpNumberOfCharsWritten
    );

#define FillConsoleOutputCharacterA __imported_name(FillConsoleOutputCharacterA)
extern WINBOOL
 __imported_stdcall(FillConsoleOutputCharacterA)(
    HANDLE hConsoleOutput,
    CHAR  cCharacter,
    DWORD  nLength,
    COORD  dwWriteCoord,
    LPDWORD lpNumberOfCharsWritten
    );

#define ScrollConsoleScreenBufferA __imported_name(ScrollConsoleScreenBufferA)
extern WINBOOL
 __imported_stdcall(ScrollConsoleScreenBufferA)(
    HANDLE hConsoleOutput,
    CONST SMALL_RECT *lpScrollRectangle,
    CONST SMALL_RECT *lpClipRectangle,
    COORD dwDestinationOrigin,
    CONST CHAR_INFO *lpFill
    );

#define GetConsoleTitleA __imported_name(GetConsoleTitleA)
extern DWORD
 __imported_stdcall(GetConsoleTitleA)(
    LPSTR lpConsoleTitle,
    DWORD nSize
    );

#define SetConsoleTitleA __imported_name(SetConsoleTitleA)
extern WINBOOL
 __imported_stdcall(SetConsoleTitleA)(
    LPCSTR lpConsoleTitle
    );

#define ReadConsoleA __imported_name(ReadConsoleA)
extern WINBOOL
 __imported_stdcall(ReadConsoleA)(
    HANDLE hConsoleInput,
    LPVOID lpBuffer,
    DWORD nNumberOfCharsToRead,
    LPDWORD lpNumberOfCharsRead,
    LPVOID lpReserved
    );

#define WriteConsoleA __imported_name(WriteConsoleA)
extern WINBOOL
 __imported_stdcall(WriteConsoleA)(
    HANDLE hConsoleOutput,
    CONST VOID *lpBuffer,
    DWORD nNumberOfCharsToWrite,
    LPDWORD lpNumberOfCharsWritten,
    LPVOID lpReserved
    );

#define WNetAddConnectionA __imported_name(WNetAddConnectionA)
extern DWORD  __imported_stdcall(WNetAddConnectionA)(
     LPCSTR   lpRemoteName,
     LPCSTR   lpPassword,
     LPCSTR   lpLocalName
    );

#define WNetAddConnection2A __imported_name(WNetAddConnection2A)
extern DWORD  __imported_stdcall(WNetAddConnection2A)(
     LPNETRESOURCE lpNetResource,
     LPCSTR       lpPassword,
     LPCSTR       lpUserName,
     DWORD          dwFlags
    );

#define WNetAddConnection3A __imported_name(WNetAddConnection3A)
extern DWORD  __imported_stdcall(WNetAddConnection3A)(
     HWND           hwndOwner,
     LPNETRESOURCE lpNetResource,
     LPCSTR       lpPassword,
     LPCSTR       lpUserName,
     DWORD          dwFlags
    );

#define WNetCancelConnectionA __imported_name(WNetCancelConnectionA)
extern DWORD  __imported_stdcall(WNetCancelConnectionA)(
     LPCSTR lpName,
     WINBOOL     fForce
    );

#define WNetCancelConnection2A __imported_name(WNetCancelConnection2A)
extern DWORD  __imported_stdcall(WNetCancelConnection2A)(
     LPCSTR lpName,
     DWORD    dwFlags,
     WINBOOL     fForce
    );

#define WNetGetConnectionA __imported_name(WNetGetConnectionA)
extern DWORD  __imported_stdcall(WNetGetConnectionA)(
     LPCSTR lpLocalName,
     LPSTR  lpRemoteName,
     LPDWORD  lpnLength
    );

#define WNetUseConnectionA __imported_name(WNetUseConnectionA)
extern DWORD  __imported_stdcall(WNetUseConnectionA)(
    HWND            hwndOwner,
    LPNETRESOURCE  lpNetResource,
    LPCSTR        lpUserID,
    LPCSTR        lpPassword,
    DWORD           dwFlags,
    LPSTR         lpAccessName,
    LPDWORD         lpBufferSize,
    LPDWORD         lpResult
    );

#define WNetSetConnectionA __imported_name(WNetSetConnectionA)
extern DWORD  __imported_stdcall(WNetSetConnectionA)(
    LPCSTR    lpName,
    DWORD       dwProperties,
    LPVOID      pvValues
    );

#define WNetConnectionDialog1A __imported_name(WNetConnectionDialog1A)
extern DWORD  __imported_stdcall(WNetConnectionDialog1A)(
    LPCONNECTDLGSTRUCT lpConnDlgStruct
    );

#define WNetDisconnectDialog1A __imported_name(WNetDisconnectDialog1A)
extern DWORD  __imported_stdcall(WNetDisconnectDialog1A)(
    LPDISCDLGSTRUCT lpConnDlgStruct
    );

#define WNetOpenEnumA __imported_name(WNetOpenEnumA)
extern DWORD  __imported_stdcall(WNetOpenEnumA)(
     DWORD          dwScope,
     DWORD          dwType,
     DWORD          dwUsage,
     LPNETRESOURCE lpNetResource,
     LPHANDLE       lphEnum
    );

#define WNetEnumResourceA __imported_name(WNetEnumResourceA)
extern DWORD  __imported_stdcall(WNetEnumResourceA)(
     HANDLE  hEnum,
     LPDWORD lpcCount,
     LPVOID  lpBuffer,
     LPDWORD lpBufferSize
    );

#define WNetGetUniversalNameA __imported_name(WNetGetUniversalNameA)
extern DWORD  __imported_stdcall(WNetGetUniversalNameA)(
     LPCSTR lpLocalPath,
     DWORD    dwInfoLevel,
     LPVOID   lpBuffer,
     LPDWORD  lpBufferSize
     );

#define WNetGetUserA __imported_name(WNetGetUserA)
extern DWORD  __imported_stdcall(WNetGetUserA)(
     LPCSTR  lpName,
     LPSTR   lpUserName,
     LPDWORD   lpnLength
    );

#define WNetGetProviderNameA __imported_name(WNetGetProviderNameA)
extern DWORD  __imported_stdcall(WNetGetProviderNameA)(
    DWORD   dwNetType,
    LPSTR lpProviderName,
    LPDWORD lpBufferSize
    );

#define WNetGetNetworkInformationA __imported_name(WNetGetNetworkInformationA)
extern DWORD  __imported_stdcall(WNetGetNetworkInformationA)(
    LPCSTR          lpProvider,
    LPNETINFOSTRUCT   lpNetInfoStruct
    );

#define WNetGetLastErrorA __imported_name(WNetGetLastErrorA)
extern DWORD  __imported_stdcall(WNetGetLastErrorA)(
     LPDWORD    lpError,
     LPSTR    lpErrorBuf,
     DWORD      nErrorBufSize,
     LPSTR    lpNameBuf,
     DWORD      nNameBufSize
    );

#define MultinetGetConnectionPerformanceA __imported_name(MultinetGetConnectionPerformanceA)
extern DWORD  __imported_stdcall(MultinetGetConnectionPerformanceA)(
        LPNETRESOURCE lpNetResource,
        LPNETCONNECTINFOSTRUCT lpNetConnectInfoStruct
        );

#define ChangeServiceConfigA __imported_name(ChangeServiceConfigA)
extern WINBOOL
 __imported_stdcall(ChangeServiceConfigA)(
    SC_HANDLE    hService,
    DWORD        dwServiceType,
    DWORD        dwStartType,
    DWORD        dwErrorControl,
    LPCSTR     lpBinaryPathName,
    LPCSTR     lpLoadOrderGroup,
    LPDWORD      lpdwTagId,
    LPCSTR     lpDependencies,
    LPCSTR     lpServiceStartName,
    LPCSTR     lpPassword,
    LPCSTR     lpDisplayName
    );

#define CreateServiceA __imported_name(CreateServiceA)
extern SC_HANDLE
 __imported_stdcall(CreateServiceA)(
    SC_HANDLE    hSCManager,
    LPCSTR     lpServiceName,
    LPCSTR     lpDisplayName,
    DWORD        dwDesiredAccess,
    DWORD        dwServiceType,
    DWORD        dwStartType,
    DWORD        dwErrorControl,
    LPCSTR     lpBinaryPathName,
    LPCSTR     lpLoadOrderGroup,
    LPDWORD      lpdwTagId,
    LPCSTR     lpDependencies,
    LPCSTR     lpServiceStartName,
    LPCSTR     lpPassword
    );

#define EnumDependentServicesA __imported_name(EnumDependentServicesA)
extern WINBOOL
 __imported_stdcall(EnumDependentServicesA)(
    SC_HANDLE               hService,
    DWORD                   dwServiceState,
    LPENUM_SERVICE_STATUS  lpServices,
    DWORD                   cbBufSize,
    LPDWORD                 pcbBytesNeeded,
    LPDWORD                 lpServicesReturned
    );

#define EnumServicesStatusA __imported_name(EnumServicesStatusA)
extern WINBOOL
 __imported_stdcall(EnumServicesStatusA)(
    SC_HANDLE               hSCManager,
    DWORD                   dwServiceType,
    DWORD                   dwServiceState,
    LPENUM_SERVICE_STATUS  lpServices,
    DWORD                   cbBufSize,
    LPDWORD                 pcbBytesNeeded,
    LPDWORD                 lpServicesReturned,
    LPDWORD                 lpResumeHandle
    );

#define GetServiceKeyNameA __imported_name(GetServiceKeyNameA)
extern WINBOOL
 __imported_stdcall(GetServiceKeyNameA)(
    SC_HANDLE               hSCManager,
    LPCSTR                lpDisplayName,
    LPSTR                 lpServiceName,
    LPDWORD                 lpcchBuffer
    );

#define GetServiceDisplayNameA __imported_name(GetServiceDisplayNameA)
extern WINBOOL
 __imported_stdcall(GetServiceDisplayNameA)(
    SC_HANDLE               hSCManager,
    LPCSTR                lpServiceName,
    LPSTR                 lpDisplayName,
    LPDWORD                 lpcchBuffer
    );

#define OpenSCManagerA __imported_name(OpenSCManagerA)
extern SC_HANDLE
 __imported_stdcall(OpenSCManagerA)(
    LPCSTR lpMachineName,
    LPCSTR lpDatabaseName,
    DWORD   dwDesiredAccess
    );

#define OpenServiceA __imported_name(OpenServiceA)
extern SC_HANDLE
 __imported_stdcall(OpenServiceA)(
    SC_HANDLE   hSCManager,
    LPCSTR    lpServiceName,
    DWORD       dwDesiredAccess
    );

#define QueryServiceConfigA __imported_name(QueryServiceConfigA)
extern WINBOOL
 __imported_stdcall(QueryServiceConfigA)(
    SC_HANDLE               hService,
    LPQUERY_SERVICE_CONFIG lpServiceConfig,
    DWORD                   cbBufSize,
    LPDWORD                 pcbBytesNeeded
    );

#define QueryServiceLockStatusA __imported_name(QueryServiceLockStatusA)
extern WINBOOL
 __imported_stdcall(QueryServiceLockStatusA)(
    SC_HANDLE                       hSCManager,
    LPQUERY_SERVICE_LOCK_STATUS    lpLockStatus,
    DWORD                           cbBufSize,
    LPDWORD                         pcbBytesNeeded
    );

#define RegisterServiceCtrlHandlerA __imported_name(RegisterServiceCtrlHandlerA)
extern SERVICE_STATUS_HANDLE
 __imported_stdcall(RegisterServiceCtrlHandlerA)(
    LPCSTR             lpServiceName,
    LPHANDLER_FUNCTION   lpHandlerProc
    );

#define StartServiceCtrlDispatcherA __imported_name(StartServiceCtrlDispatcherA)
extern WINBOOL
 __imported_stdcall(StartServiceCtrlDispatcherA)(
			    LPSERVICE_TABLE_ENTRY    lpServiceStartTable
			    );

#define StartServiceA __imported_name(StartServiceA)
extern WINBOOL
 __imported_stdcall(StartServiceA)(
	      SC_HANDLE            hService,
	      DWORD                dwNumServiceArgs,
	      LPCSTR             *lpServiceArgVectors
	      );

/* Extensions to OpenGL */

#define wglUseFontBitmapsA __imported_name(wglUseFontBitmapsA)
extern WINBOOL  __imported_stdcall(wglUseFontBitmapsA)(HDC, DWORD, DWORD, DWORD);

#define wglUseFontOutlinesA __imported_name(wglUseFontOutlinesA)
extern WINBOOL  __imported_stdcall(wglUseFontOutlinesA)(HDC, DWORD, DWORD, DWORD, FLOAT,
		    FLOAT, int, LPGLYPHMETRICSFLOAT);

/* ------------------------------------- */
/* From shellapi.h in old Cygnus headers */

#define DragQueryFileA __imported_name(DragQueryFileA)
extern unsigned int  __imported_stdcall(DragQueryFileA)(HDROP, unsigned int, char *, unsigned int);

#define ExtractAssociatedIconA __imported_name(ExtractAssociatedIconA)
extern HICON  __imported_stdcall(ExtractAssociatedIconA)(HINSTANCE, char *, WORD *);

#define ExtractIconA __imported_name(ExtractIconA)
extern HICON  __imported_stdcall(ExtractIconA)(HINSTANCE, const char *, unsigned int);

#define FindExecutableA __imported_name(FindExecutableA)
extern HINSTANCE  __imported_stdcall(FindExecutableA)(const char *, const char *, char *);

#define ShellAboutA __imported_name(ShellAboutA)
extern int  __imported_stdcall(ShellAboutA)(HWND, const char *, const char *, HICON);

#define ShellExecuteA __imported_name(ShellExecuteA)
extern HINSTANCE  __imported_stdcall(ShellExecuteA)(HWND, const char *, const char *, char *, const char *, int);

/* end of stuff from shellapi.h in old Cygnus headers */
/* -------------------------------------------------- */
/* From ddeml.h in old Cygnus headers */

#define DdeCreateStringHandleA __imported_name(DdeCreateStringHandleA)
extern HSZ  __imported_stdcall(DdeCreateStringHandleA)(DWORD, char *, int);

#define DdeInitializeA __imported_name(DdeInitializeA)
extern UINT  __imported_stdcall(DdeInitializeA)(DWORD *, CALLB, DWORD, DWORD);

#define DdeQueryStringA __imported_name(DdeQueryStringA)
extern DWORD  __imported_stdcall(DdeQueryStringA)(DWORD, HSZ, char *, DWORD, int);

/* end of stuff from ddeml.h in old Cygnus headers */
/* ----------------------------------------------- */

#define LogonUserA __imported_name(LogonUserA)
extern WINBOOL  __imported_stdcall(LogonUserA)(LPSTR, LPSTR, LPSTR, DWORD, DWORD, HANDLE *);
#define CreateProcessAsUserA __imported_name(CreateProcessAsUserA)
extern WINBOOL  __imported_stdcall(CreateProcessAsUserA)(HANDLE, LPCTSTR, LPTSTR,
	SECURITY_ATTRIBUTES*, SECURITY_ATTRIBUTES*, WINBOOL, DWORD, LPVOID,
	LPCTSTR, STARTUPINFO*, PROCESS_INFORMATION*);

#define PlaySoundA __imported_name(PlaySoundA)
extern WINBOOL  __imported_stdcall(PlaySoundA)(LPCSTR pszSound, HMODULE hmod, DWORD fdwSound);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif	/* RC_INVOKED */

#endif /* _GNU_H_WINDOWS32_ASCIIFUNCTIONS */
