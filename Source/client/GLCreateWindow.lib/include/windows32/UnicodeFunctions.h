/* 
   UnicodeFunctions.h

   Declarations for all the Windows32 API Unicode Functions

   Copyright (C) 1996 Free Software Foundation, Inc.

   Author:  Scott Christley <scottc@net-community.com>
   Date: 1996
   
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

#ifndef _GNU_H_WINDOWS32_UNICODEFUNCTIONS
#define _GNU_H_WINDOWS32_UNICODEFUNCTIONS

#include <sys/config.h>

#ifndef	RC_INVOKED

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define GetBinaryTypeW __imported_name(GetBinaryTypeW)
extern WINBOOL
 __imported_stdcall(GetBinaryTypeW)(
    LPCWSTR lpApplicationName,
    LPDWORD lpBinaryType
    );

#define GetShortPathNameW __imported_name(GetShortPathNameW)
extern DWORD
 __imported_stdcall(GetShortPathNameW)(
    LPCWSTR lpszLongPath,
    LPWSTR  lpszShortPath,
    DWORD    cchBuffer
    );

#define GetEnvironmentStringsW __imported_name(GetEnvironmentStringsW)
extern LPWSTR
 __imported_stdcall(GetEnvironmentStringsW)(
    VOID
    );

#define FreeEnvironmentStringsW __imported_name(FreeEnvironmentStringsW)
extern WINBOOL
 __imported_stdcall(FreeEnvironmentStringsW)(
    LPWSTR
    );

#define FormatMessageW __imported_name(FormatMessageW)
extern DWORD
 __imported_stdcall(FormatMessageW)(
    DWORD dwFlags,
    LPCVOID lpSource,
    DWORD dwMessageId,
    DWORD dwLanguageId,
    LPWSTR lpBuffer,
    DWORD nSize,
    va_list *Arguments
    );

#define CreateMailslotW __imported_name(CreateMailslotW)
extern HANDLE
 __imported_stdcall(CreateMailslotW)(
    LPCWSTR lpName,
    DWORD nMaxMessageSize,
    DWORD lReadTimeout,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );

#define lstrcmpW __imported_name(lstrcmpW)
extern int
 __imported_stdcall(lstrcmpW)(
    LPCWSTR lpString1,
    LPCWSTR lpString2
    );

#define lstrcmpiW __imported_name(lstrcmpiW)
extern int
 __imported_stdcall(lstrcmpiW)(
    LPCWSTR lpString1,
    LPCWSTR lpString2
    );

#define lstrcpynW __imported_name(lstrcpynW)
extern LPWSTR
 __imported_stdcall(lstrcpynW)(
    LPWSTR lpString1,
    LPCWSTR lpString2,
    int iMaxLength
    );

#define lstrcpyW __imported_name(lstrcpyW)
extern LPWSTR
 __imported_stdcall(lstrcpyW)(
    LPWSTR lpString1,
    LPCWSTR lpString2
    );

#define lstrcatW __imported_name(lstrcatW)
extern LPWSTR
 __imported_stdcall(lstrcatW)(
    LPWSTR lpString1,
    LPCWSTR lpString2
    );

#define lstrlenW __imported_name(lstrlenW)
extern int
 __imported_stdcall(lstrlenW)(
    LPCWSTR lpString
    );

#define CreateMutexW __imported_name(CreateMutexW)
extern HANDLE
 __imported_stdcall(CreateMutexW)(
    LPSECURITY_ATTRIBUTES lpMutexAttributes,
    WINBOOL bInitialOwner,
    LPCWSTR lpName
    );

#define OpenMutexW __imported_name(OpenMutexW)
extern HANDLE
 __imported_stdcall(OpenMutexW)(
    DWORD dwDesiredAccess,
    WINBOOL bInheritHandle,
    LPCWSTR lpName
    );

#define CreateEventW __imported_name(CreateEventW)
extern HANDLE
 __imported_stdcall(CreateEventW)(
    LPSECURITY_ATTRIBUTES lpEventAttributes,
    WINBOOL bManualReset,
    WINBOOL bInitialState,
    LPCWSTR lpName
    );

#define OpenEventW __imported_name(OpenEventW)
extern HANDLE
 __imported_stdcall(OpenEventW)(
    DWORD dwDesiredAccess,
    WINBOOL bInheritHandle,
    LPCWSTR lpName
    );

#define CreateSemaphoreW __imported_name(CreateSemaphoreW)
extern HANDLE
 __imported_stdcall(CreateSemaphoreW)(
		 LPSECURITY_ATTRIBUTES lpSemaphoreAttributes,
		 LONG lInitialCount,
		 LONG lMaximumCount,
		 LPCWSTR lpName
		 );

#define OpenSemaphoreW __imported_name(OpenSemaphoreW)
extern HANDLE
 __imported_stdcall(OpenSemaphoreW)(
    DWORD dwDesiredAccess,
    WINBOOL bInheritHandle,
    LPCWSTR lpName
    );

#define CreateFileMappingW __imported_name(CreateFileMappingW)
extern HANDLE
 __imported_stdcall(CreateFileMappingW)(
    HANDLE hFile,
    LPSECURITY_ATTRIBUTES lpFileMappingAttributes,
    DWORD flProtect,
    DWORD dwMaximumSizeHigh,
    DWORD dwMaximumSizeLow,
    LPCWSTR lpName
    );

#define OpenFileMappingW __imported_name(OpenFileMappingW)
extern HANDLE
 __imported_stdcall(OpenFileMappingW)(
    DWORD dwDesiredAccess,
    WINBOOL bInheritHandle,
    LPCWSTR lpName
    );

#define GetLogicalDriveStringsW __imported_name(GetLogicalDriveStringsW)
extern DWORD
 __imported_stdcall(GetLogicalDriveStringsW)(
    DWORD nBufferLength,
    LPWSTR lpBuffer
    );

#define LoadLibraryW __imported_name(LoadLibraryW)
extern HINSTANCE
 __imported_stdcall(LoadLibraryW)(
    LPCWSTR lpLibFileName
    );

#define LoadLibraryExW __imported_name(LoadLibraryExW)
extern HINSTANCE
 __imported_stdcall(LoadLibraryExW)(
    LPCWSTR lpLibFileName,
    HANDLE hFile,
    DWORD dwFlags
    );

#define GetModuleFileNameW __imported_name(GetModuleFileNameW)
extern DWORD
 __imported_stdcall(GetModuleFileNameW)(
    HINSTANCE hModule,
    LPWSTR lpFilename,
    DWORD nSize
    );

#define GetModuleHandleW __imported_name(GetModuleHandleW)
extern HMODULE
 __imported_stdcall(GetModuleHandleW)(
    LPCWSTR lpModuleName
    );

#define FatalAppExitW __imported_name(FatalAppExitW)
extern VOID
 __imported_stdcall(FatalAppExitW)(
    UINT uAction,
    LPCWSTR lpMessageText
    );

#define GetCommandLineW __imported_name(GetCommandLineW)
extern LPWSTR
 __imported_stdcall(GetCommandLineW)(
    VOID
    );

#define GetEnvironmentVariableW __imported_name(GetEnvironmentVariableW)
extern DWORD
 __imported_stdcall(GetEnvironmentVariableW)(
    LPCWSTR lpName,
    LPWSTR lpBuffer,
    DWORD nSize
    );

#define SetEnvironmentVariableW __imported_name(SetEnvironmentVariableW)
extern WINBOOL
 __imported_stdcall(SetEnvironmentVariableW)(
    LPCWSTR lpName,
    LPCWSTR lpValue
    );

#define ExpandEnvironmentStringsW __imported_name(ExpandEnvironmentStringsW)
extern DWORD
 __imported_stdcall(ExpandEnvironmentStringsW)(
    LPCWSTR lpSrc,
    LPWSTR lpDst,
    DWORD nSize
    );

#define OutputDebugStringW __imported_name(OutputDebugStringW)
extern VOID
 __imported_stdcall(OutputDebugStringW)(
    LPCWSTR lpOutputString
    );

#define FindResourceW __imported_name(FindResourceW)
extern HRSRC
 __imported_stdcall(FindResourceW)(
    HINSTANCE hModule,
    LPCWSTR lpName,
    LPCWSTR lpType
    );

#define FindResourceExW __imported_name(FindResourceExW)
extern HRSRC
 __imported_stdcall(FindResourceExW)(
    HINSTANCE hModule,
    LPCWSTR lpType,
    LPCWSTR lpName,
    WORD    wLanguage
    );

#define EnumResourceTypesW __imported_name(EnumResourceTypesW)
extern WINBOOL
 __imported_stdcall(EnumResourceTypesW)(
    HINSTANCE hModule,
    ENUMRESTYPEPROC lpEnumFunc,
    LONG lParam
    );

#define EnumResourceNamesW __imported_name(EnumResourceNamesW)
extern WINBOOL
 __imported_stdcall(EnumResourceNamesW)(
    HINSTANCE hModule,
    LPCWSTR lpType,
    ENUMRESNAMEPROC lpEnumFunc,
    LONG lParam
    );

#define EnumResourceLanguagesW __imported_name(EnumResourceLanguagesW)
extern WINBOOL
 __imported_stdcall(EnumResourceLanguagesW)(
    HINSTANCE hModule,
    LPCWSTR lpType,
    LPCWSTR lpName,
    ENUMRESLANGPROC lpEnumFunc,
    LONG lParam
    );

#define BeginUpdateResourceW __imported_name(BeginUpdateResourceW)
extern HANDLE
 __imported_stdcall(BeginUpdateResourceW)(
    LPCWSTR pFileName,
    WINBOOL bDeleteExistingResources
    );

#define UpdateResourceW __imported_name(UpdateResourceW)
extern WINBOOL
 __imported_stdcall(UpdateResourceW)(
    HANDLE      hUpdate,
    LPCWSTR     lpType,
    LPCWSTR     lpName,
    WORD        wLanguage,
    LPVOID      lpData,
    DWORD       cbData
    );

#define EndUpdateResourceW __imported_name(EndUpdateResourceW)
extern WINBOOL
 __imported_stdcall(EndUpdateResourceW)(
    HANDLE      hUpdate,
    WINBOOL        fDiscard
    );

#define GlobalAddAtomW __imported_name(GlobalAddAtomW)
extern ATOM
 __imported_stdcall(GlobalAddAtomW)(
    LPCWSTR lpString
    );

#define GlobalFindAtomW __imported_name(GlobalFindAtomW)
extern ATOM
 __imported_stdcall(GlobalFindAtomW)(
    LPCWSTR lpString
    );

#define GlobalGetAtomNameW __imported_name(GlobalGetAtomNameW)
extern UINT
 __imported_stdcall(GlobalGetAtomNameW)(
    ATOM nAtom,
    LPWSTR lpBuffer,
    int nSize
    );

#define AddAtomW __imported_name(AddAtomW)
extern ATOM
 __imported_stdcall(AddAtomW)(
    LPCWSTR lpString
    );

#define FindAtomW __imported_name(FindAtomW)
extern ATOM
 __imported_stdcall(FindAtomW)(
    LPCWSTR lpString
    );

#define GetAtomNameW __imported_name(GetAtomNameW)
extern UINT
 __imported_stdcall(GetAtomNameW)(
    ATOM nAtom,
    LPWSTR lpBuffer,
    int nSize
    );

#define GetProfileIntW __imported_name(GetProfileIntW)
extern UINT
 __imported_stdcall(GetProfileIntW)(
    LPCWSTR lpAppName,
    LPCWSTR lpKeyName,
    INT nDefault
    );

#define GetProfileStringW __imported_name(GetProfileStringW)
extern DWORD
 __imported_stdcall(GetProfileStringW)(
    LPCWSTR lpAppName,
    LPCWSTR lpKeyName,
    LPCWSTR lpDefault,
    LPWSTR lpReturnedString,
    DWORD nSize
    );

#define WriteProfileStringW __imported_name(WriteProfileStringW)
extern WINBOOL
 __imported_stdcall(WriteProfileStringW)(
    LPCWSTR lpAppName,
    LPCWSTR lpKeyName,
    LPCWSTR lpString
    );

#define GetProfileSectionW __imported_name(GetProfileSectionW)
extern DWORD
 __imported_stdcall(GetProfileSectionW)(
    LPCWSTR lpAppName,
    LPWSTR lpReturnedString,
    DWORD nSize
    );

#define WriteProfileSectionW __imported_name(WriteProfileSectionW)
extern WINBOOL
 __imported_stdcall(WriteProfileSectionW)(
    LPCWSTR lpAppName,
    LPCWSTR lpString
    );

#define GetPrivateProfileIntW __imported_name(GetPrivateProfileIntW)
extern UINT
 __imported_stdcall(GetPrivateProfileIntW)(
    LPCWSTR lpAppName,
    LPCWSTR lpKeyName,
    INT nDefault,
    LPCWSTR lpFileName
    );

#define GetPrivateProfileStringW __imported_name(GetPrivateProfileStringW)
extern DWORD
 __imported_stdcall(GetPrivateProfileStringW)(
    LPCWSTR lpAppName,
    LPCWSTR lpKeyName,
    LPCWSTR lpDefault,
    LPWSTR lpReturnedString,
    DWORD nSize,
    LPCWSTR lpFileName
    );

#define WritePrivateProfileStringW __imported_name(WritePrivateProfileStringW)
extern WINBOOL
 __imported_stdcall(WritePrivateProfileStringW)(
    LPCWSTR lpAppName,
    LPCWSTR lpKeyName,
    LPCWSTR lpString,
    LPCWSTR lpFileName
    );

#define GetPrivateProfileSectionW __imported_name(GetPrivateProfileSectionW)
extern DWORD
 __imported_stdcall(GetPrivateProfileSectionW)(
    LPCWSTR lpAppName,
    LPWSTR lpReturnedString,
    DWORD nSize,
    LPCWSTR lpFileName
    );

#define WritePrivateProfileSectionW __imported_name(WritePrivateProfileSectionW)
extern WINBOOL
 __imported_stdcall(WritePrivateProfileSectionW)(
    LPCWSTR lpAppName,
    LPCWSTR lpString,
    LPCWSTR lpFileName
    );

#define GetDriveTypeW __imported_name(GetDriveTypeW)
extern UINT
 __imported_stdcall(GetDriveTypeW)(
    LPCWSTR lpRootPathName
    );

#define GetSystemDirectoryW __imported_name(GetSystemDirectoryW)
extern UINT
 __imported_stdcall(GetSystemDirectoryW)(
    LPWSTR lpBuffer,
    UINT uSize
    );

#define GetTempPathW __imported_name(GetTempPathW)
extern DWORD
 __imported_stdcall(GetTempPathW)(
    DWORD nBufferLength,
    LPWSTR lpBuffer
    );

#define GetTempFileNameW __imported_name(GetTempFileNameW)
extern UINT
 __imported_stdcall(GetTempFileNameW)(
    LPCWSTR lpPathName,
    LPCWSTR lpPrefixString,
    UINT uUnique,
    LPWSTR lpTempFileName
    );

#define GetWindowsDirectoryW __imported_name(GetWindowsDirectoryW)
extern UINT
 __imported_stdcall(GetWindowsDirectoryW)(
    LPWSTR lpBuffer,
    UINT uSize
    );

#define SetCurrentDirectoryW __imported_name(SetCurrentDirectoryW)
extern WINBOOL
 __imported_stdcall(SetCurrentDirectoryW)(
    LPCWSTR lpPathName
    );

#define GetCurrentDirectoryW __imported_name(GetCurrentDirectoryW)
extern DWORD
 __imported_stdcall(GetCurrentDirectoryW)(
    DWORD nBufferLength,
    LPWSTR lpBuffer
    );

#define GetDiskFreeSpaceW __imported_name(GetDiskFreeSpaceW)
extern WINBOOL
 __imported_stdcall(GetDiskFreeSpaceW)(
    LPCWSTR lpRootPathName,
    LPDWORD lpSectorsPerCluster,
    LPDWORD lpBytesPerSector,
    LPDWORD lpNumberOfFreeClusters,
    LPDWORD lpTotalNumberOfClusters
    );

#define CreateDirectoryW __imported_name(CreateDirectoryW)
extern WINBOOL
 __imported_stdcall(CreateDirectoryW)(
    LPCWSTR lpPathName,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );

#define CreateDirectoryExW __imported_name(CreateDirectoryExW)
extern WINBOOL
 __imported_stdcall(CreateDirectoryExW)(
    LPCWSTR lpTemplateDirectory,
    LPCWSTR lpNewDirectory,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );

#define RemoveDirectoryW __imported_name(RemoveDirectoryW)
extern WINBOOL
 __imported_stdcall(RemoveDirectoryW)(
    LPCWSTR lpPathName
    );

#define GetFullPathNameW __imported_name(GetFullPathNameW)
extern DWORD
 __imported_stdcall(GetFullPathNameW)(
    LPCWSTR lpFileName,
    DWORD nBufferLength,
    LPWSTR lpBuffer,
    LPWSTR *lpFilePart
    );

#define DefineDosDeviceW __imported_name(DefineDosDeviceW)
extern WINBOOL
 __imported_stdcall(DefineDosDeviceW)(
    DWORD dwFlags,
    LPCWSTR lpDeviceName,
    LPCWSTR lpTargetPath
    );

#define QueryDosDeviceW __imported_name(QueryDosDeviceW)
extern DWORD
 __imported_stdcall(QueryDosDeviceW)(
    LPCWSTR lpDeviceName,
    LPWSTR lpTargetPath,
    DWORD ucchMax
    );

#define CreateFileW __imported_name(CreateFileW)
extern HANDLE
 __imported_stdcall(CreateFileW)(
    LPCWSTR lpFileName,
    DWORD dwDesiredAccess,
    DWORD dwShareMode,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    DWORD dwCreationDisposition,
    DWORD dwFlagsAndAttributes,
    HANDLE hTemplateFile
    );

#define SetFileAttributesW __imported_name(SetFileAttributesW)
extern WINBOOL
 __imported_stdcall(SetFileAttributesW)(
    LPCWSTR lpFileName,
    DWORD dwFileAttributes
    );

#define GetFileAttributesW __imported_name(GetFileAttributesW)
extern DWORD
 __imported_stdcall(GetFileAttributesW)(
    LPCWSTR lpFileName
    );

#define GetCompressedFileSizeW __imported_name(GetCompressedFileSizeW)
extern DWORD
 __imported_stdcall(GetCompressedFileSizeW)(
    LPCWSTR lpFileName,
    LPDWORD lpFileSizeHigh
    );

#define DeleteFileW __imported_name(DeleteFileW)
extern WINBOOL
 __imported_stdcall(DeleteFileW)(
    LPCWSTR lpFileName
    );

#define SearchPathW __imported_name(SearchPathW)
extern DWORD
 __imported_stdcall(SearchPathW)(
    LPCWSTR lpPath,
    LPCWSTR lpFileName,
    LPCWSTR lpExtension,
    DWORD nBufferLength,
    LPWSTR lpBuffer,
    LPWSTR *lpFilePart
    );

#define CopyFileW __imported_name(CopyFileW)
extern WINBOOL
 __imported_stdcall(CopyFileW)(
    LPCWSTR lpExistingFileName,
    LPCWSTR lpNewFileName,
    WINBOOL bFailIfExists
    );

#define MoveFileW __imported_name(MoveFileW)
extern WINBOOL
 __imported_stdcall(MoveFileW)(
    LPCWSTR lpExistingFileName,
    LPCWSTR lpNewFileName
    );

#define MoveFileExW __imported_name(MoveFileExW)
extern WINBOOL
 __imported_stdcall(MoveFileExW)(
    LPCWSTR lpExistingFileName,
    LPCWSTR lpNewFileName,
    DWORD dwFlags
    );

#define CreateNamedPipeW __imported_name(CreateNamedPipeW)
extern HANDLE
 __imported_stdcall(CreateNamedPipeW)(
    LPCWSTR lpName,
    DWORD dwOpenMode,
    DWORD dwPipeMode,
    DWORD nMaxInstances,
    DWORD nOutBufferSize,
    DWORD nInBufferSize,
    DWORD nDefaultTimeOut,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );

#define GetNamedPipeHandleStateW __imported_name(GetNamedPipeHandleStateW)
extern WINBOOL
 __imported_stdcall(GetNamedPipeHandleStateW)(
    HANDLE hNamedPipe,
    LPDWORD lpState,
    LPDWORD lpCurInstances,
    LPDWORD lpMaxCollectionCount,
    LPDWORD lpCollectDataTimeout,
    LPWSTR lpUserName,
    DWORD nMaxUserNameSize
    );

#define CallNamedPipeW __imported_name(CallNamedPipeW)
extern WINBOOL
 __imported_stdcall(CallNamedPipeW)(
    LPCWSTR lpNamedPipeName,
    LPVOID lpInBuffer,
    DWORD nInBufferSize,
    LPVOID lpOutBuffer,
    DWORD nOutBufferSize,
    LPDWORD lpBytesRead,
    DWORD nTimeOut
    );

#define WaitNamedPipeW __imported_name(WaitNamedPipeW)
extern WINBOOL
 __imported_stdcall(WaitNamedPipeW)(
    LPCWSTR lpNamedPipeName,
    DWORD nTimeOut
    );

#define SetVolumeLabelW __imported_name(SetVolumeLabelW)
extern WINBOOL
 __imported_stdcall(SetVolumeLabelW)(
    LPCWSTR lpRootPathName,
    LPCWSTR lpVolumeName
    );

#define GetVolumeInformationW __imported_name(GetVolumeInformationW)
extern WINBOOL
 __imported_stdcall(GetVolumeInformationW)(
    LPCWSTR lpRootPathName,
    LPWSTR lpVolumeNameBuffer,
    DWORD nVolumeNameSize,
    LPDWORD lpVolumeSerialNumber,
    LPDWORD lpMaximumComponentLength,
    LPDWORD lpFileSystemFlags,
    LPWSTR lpFileSystemNameBuffer,
    DWORD nFileSystemNameSize
    );

#define ClearEventLogW __imported_name(ClearEventLogW)
extern WINBOOL
 __imported_stdcall(ClearEventLogW)(
    HANDLE hEventLog,
    LPCWSTR lpBackupFileName
    );

#define BackupEventLogW __imported_name(BackupEventLogW)
extern WINBOOL
 __imported_stdcall(BackupEventLogW)(
    HANDLE hEventLog,
    LPCWSTR lpBackupFileName
    );

#define OpenEventLogW __imported_name(OpenEventLogW)
extern HANDLE
 __imported_stdcall(OpenEventLogW)(
    LPCWSTR lpUNCServerName,
    LPCWSTR lpSourceName
    );

#define RegisterEventSourceW __imported_name(RegisterEventSourceW)
extern HANDLE
 __imported_stdcall(RegisterEventSourceW)(
    LPCWSTR lpUNCServerName,
    LPCWSTR lpSourceName
    );

#define OpenBackupEventLogW __imported_name(OpenBackupEventLogW)
extern HANDLE
 __imported_stdcall(OpenBackupEventLogW)(
    LPCWSTR lpUNCServerName,
    LPCWSTR lpFileName
    );

#define ReadEventLogW __imported_name(ReadEventLogW)
extern WINBOOL
 __imported_stdcall(ReadEventLogW)(
     HANDLE     hEventLog,
     DWORD      dwReadFlags,
     DWORD      dwRecordOffset,
     LPVOID     lpBuffer,
     DWORD      nNumberOfBytesToRead,
     DWORD      *pnBytesRead,
     DWORD      *pnMinNumberOfBytesNeeded
    );

#define ReportEventW __imported_name(ReportEventW)
extern WINBOOL
 __imported_stdcall(ReportEventW)(
     HANDLE     hEventLog,
     WORD       wType,
     WORD       wCategory,
     DWORD      dwEventID,
     PSID       lpUserSid,
     WORD       wNumStrings,
     DWORD      dwDataSize,
     LPCWSTR   *lpStrings,
     LPVOID     lpRawData
    );

#define AccessCheckAndAuditAlarmW __imported_name(AccessCheckAndAuditAlarmW)
extern WINBOOL
 __imported_stdcall(AccessCheckAndAuditAlarmW)(
    LPCWSTR SubsystemName,
    LPVOID HandleId,
    LPWSTR ObjectTypeName,
    LPWSTR ObjectName,
    PSECURITY_DESCRIPTOR SecurityDescriptor,
    DWORD DesiredAccess,
    PGENERIC_MAPPING GenericMapping,
    WINBOOL ObjectCreation,
    LPDWORD GrantedAccess,
    LPBOOL AccessStatus,
    LPBOOL pfGenerateOnClose
    );

#define ObjectOpenAuditAlarmW __imported_name(ObjectOpenAuditAlarmW)
extern WINBOOL
 __imported_stdcall(ObjectOpenAuditAlarmW)(
    LPCWSTR SubsystemName,
    LPVOID HandleId,
    LPWSTR ObjectTypeName,
    LPWSTR ObjectName,
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    HANDLE ClientToken,
    DWORD DesiredAccess,
    DWORD GrantedAccess,
    PPRIVILEGE_SET Privileges,
    WINBOOL ObjectCreation,
    WINBOOL AccessGranted,
    LPBOOL GenerateOnClose
    );

#define ObjectPrivilegeAuditAlarmW __imported_name(ObjectPrivilegeAuditAlarmW)
extern WINBOOL
 __imported_stdcall(ObjectPrivilegeAuditAlarmW)(
    LPCWSTR SubsystemName,
    LPVOID HandleId,
    HANDLE ClientToken,
    DWORD DesiredAccess,
    PPRIVILEGE_SET Privileges,
    WINBOOL AccessGranted
    );

#define ObjectCloseAuditAlarmW __imported_name(ObjectCloseAuditAlarmW)
extern WINBOOL
 __imported_stdcall(ObjectCloseAuditAlarmW)(
    LPCWSTR SubsystemName,
    LPVOID HandleId,
    WINBOOL GenerateOnClose
    );

#define PrivilegedServiceAuditAlarmW __imported_name(PrivilegedServiceAuditAlarmW)
extern WINBOOL
 __imported_stdcall(PrivilegedServiceAuditAlarmW)(
    LPCWSTR SubsystemName,
    LPCWSTR ServiceName,
    HANDLE ClientToken,
    PPRIVILEGE_SET Privileges,
    WINBOOL AccessGranted
    );

#define SetFileSecurityW __imported_name(SetFileSecurityW)
extern WINBOOL
 __imported_stdcall(SetFileSecurityW)(
    LPCWSTR lpFileName,
    SECURITY_INFORMATION SecurityInformation,
    PSECURITY_DESCRIPTOR pSecurityDescriptor
    );

#define GetFileSecurityW __imported_name(GetFileSecurityW)
extern WINBOOL
 __imported_stdcall(GetFileSecurityW)(
    LPCWSTR lpFileName,
    SECURITY_INFORMATION RequestedInformation,
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    DWORD nLength,
    LPDWORD lpnLengthNeeded
    );

#define FindFirstChangeNotificationW __imported_name(FindFirstChangeNotificationW)
extern HANDLE
 __imported_stdcall(FindFirstChangeNotificationW)(
    LPCWSTR lpPathName,
    WINBOOL bWatchSubtree,
    DWORD dwNotifyFilter
    );

#define IsBadStringPtrW __imported_name(IsBadStringPtrW)
extern WINBOOL
 __imported_stdcall(IsBadStringPtrW)(
    LPCWSTR lpsz,
    UINT ucchMax
    );

#define LookupAccountSidW __imported_name(LookupAccountSidW)
extern WINBOOL
 __imported_stdcall(LookupAccountSidW)(
    LPCWSTR lpSystemName,
    PSID Sid,
    LPWSTR Name,
    LPDWORD cbName,
    LPWSTR ReferencedDomainName,
    LPDWORD cbReferencedDomainName,
    PSID_NAME_USE peUse
    );

#define LookupAccountNameW __imported_name(LookupAccountNameW)
extern WINBOOL
 __imported_stdcall(LookupAccountNameW)(
    LPCWSTR lpSystemName,
    LPCWSTR lpAccountName,
    PSID Sid,
    LPDWORD cbSid,
    LPWSTR ReferencedDomainName,
    LPDWORD cbReferencedDomainName,
    PSID_NAME_USE peUse
    );

#define LookupPrivilegeValueW __imported_name(LookupPrivilegeValueW)
extern WINBOOL
 __imported_stdcall(LookupPrivilegeValueW)(
    LPCWSTR lpSystemName,
    LPCWSTR lpName,
    PLUID   lpLuid
    );

#define LookupPrivilegeNameW __imported_name(LookupPrivilegeNameW)
extern WINBOOL
 __imported_stdcall(LookupPrivilegeNameW)(
    LPCWSTR lpSystemName,
    PLUID   lpLuid,
    LPWSTR lpName,
    LPDWORD cbName
    );

#define LookupPrivilegeDisplayNameW __imported_name(LookupPrivilegeDisplayNameW)
extern WINBOOL
 __imported_stdcall(LookupPrivilegeDisplayNameW)(
    LPCWSTR lpSystemName,
    LPCWSTR lpName,
    LPWSTR lpDisplayName,
    LPDWORD cbDisplayName,
    LPDWORD lpLanguageId
    );

#define BuildCommDCBW __imported_name(BuildCommDCBW)
extern WINBOOL
 __imported_stdcall(BuildCommDCBW)(
    LPCWSTR lpDef,
    LPDCB lpDCB
    );

#define BuildCommDCBAndTimeoutsW __imported_name(BuildCommDCBAndTimeoutsW)
extern WINBOOL
 __imported_stdcall(BuildCommDCBAndTimeoutsW)(
    LPCWSTR lpDef,
    LPDCB lpDCB,
    LPCOMMTIMEOUTS lpCommTimeouts
    );

#define CommConfigDialogW __imported_name(CommConfigDialogW)
extern WINBOOL
 __imported_stdcall(CommConfigDialogW)(
    LPCWSTR lpszName,
    HWND hWnd,
    LPCOMMCONFIG lpCC
    );

#define GetDefaultCommConfigW __imported_name(GetDefaultCommConfigW)
extern WINBOOL
 __imported_stdcall(GetDefaultCommConfigW)(
    LPCWSTR lpszName,
    LPCOMMCONFIG lpCC,
    LPDWORD lpdwSize
    );

#define SetDefaultCommConfigW __imported_name(SetDefaultCommConfigW)
extern WINBOOL
 __imported_stdcall(SetDefaultCommConfigW)(
    LPCWSTR lpszName,
    LPCOMMCONFIG lpCC,
    DWORD dwSize
    );

#define GetComputerNameW __imported_name(GetComputerNameW)
extern WINBOOL
 __imported_stdcall(GetComputerNameW)(
    LPWSTR lpBuffer,
    LPDWORD nSize
    );

#define SetComputerNameW __imported_name(SetComputerNameW)
extern WINBOOL
 __imported_stdcall(SetComputerNameW)(
    LPCWSTR lpComputerName
    );

#define GetUserNameW __imported_name(GetUserNameW)
extern WINBOOL
 __imported_stdcall(GetUserNameW)(
    LPWSTR lpBuffer,
    LPDWORD nSize
    );

#define wvsprintfW __imported_name(wvsprintfW)
extern int
 __imported_stdcall(wvsprintfW)(
    LPWSTR,
    LPCWSTR,
    va_list arglist);

#define wsprintfW __imported_name(wsprintfW)
extern int
wsprintfW(LPWSTR, LPCWSTR, ...);

#define LoadKeyboardLayoutW __imported_name(LoadKeyboardLayoutW)
extern HKL
 __imported_stdcall(LoadKeyboardLayoutW)(
    LPCWSTR pwszKLID,
    UINT Flags);

#define GetKeyboardLayoutNameW __imported_name(GetKeyboardLayoutNameW)
extern WINBOOL
 __imported_stdcall(GetKeyboardLayoutNameW)(
    LPWSTR pwszKLID);

#define CreateDesktopW __imported_name(CreateDesktopW)
extern HDESK
 __imported_stdcall(CreateDesktopW)(
    LPWSTR lpszDesktop,
    LPWSTR lpszDevice,
    LPDEVMODE pDevmode,
    DWORD dwFlags,
    DWORD dwDesiredAccess,
    LPSECURITY_ATTRIBUTES lpsa);

#define OpenDesktopW __imported_name(OpenDesktopW)
extern HDESK
 __imported_stdcall(OpenDesktopW)(
    LPWSTR lpszDesktop,
    DWORD dwFlags,
    WINBOOL fInherit,
    DWORD dwDesiredAccess);

#define EnumDesktopsW __imported_name(EnumDesktopsW)
extern WINBOOL
 __imported_stdcall(EnumDesktopsW)(
    HWINSTA hwinsta,
    DESKTOPENUMPROC lpEnumFunc,
    LPARAM lParam);

#define CreateWindowStationW __imported_name(CreateWindowStationW)
extern HWINSTA
 __imported_stdcall(CreateWindowStationW)(
    LPWSTR lpwinsta,
    DWORD dwReserved,
    DWORD dwDesiredAccess,
    LPSECURITY_ATTRIBUTES lpsa);

#define OpenWindowStationW __imported_name(OpenWindowStationW)
extern HWINSTA
 __imported_stdcall(OpenWindowStationW)(
    LPWSTR lpszWinSta,
    WINBOOL fInherit,
    DWORD dwDesiredAccess);

#define EnumWindowStationsW __imported_name(EnumWindowStationsW)
extern WINBOOL
 __imported_stdcall(EnumWindowStationsW)(
    ENUMWINDOWSTATIONPROC lpEnumFunc,
    LPARAM lParam);

#define GetUserObjectInformationW __imported_name(GetUserObjectInformationW)
extern WINBOOL
 __imported_stdcall(GetUserObjectInformationW)(
    HANDLE hObj,
    int nIndex,
    PVOID pvInfo,
    DWORD nLength,
    LPDWORD lpnLengthNeeded);

#define SetUserObjectInformationW __imported_name(SetUserObjectInformationW)
extern WINBOOL
 __imported_stdcall(SetUserObjectInformationW)(
    HANDLE hObj,
    int nIndex,
    PVOID pvInfo,
    DWORD nLength);

#define RegisterWindowMessageW __imported_name(RegisterWindowMessageW)
extern UINT
 __imported_stdcall(RegisterWindowMessageW)(
    LPCWSTR lpString);

#define GetMessageW __imported_name(GetMessageW)
extern WINBOOL
 __imported_stdcall(GetMessageW)(
    LPMSG lpMsg,
    HWND hWnd ,
    UINT wMsgFilterMin,
    UINT wMsgFilterMax);

#define DispatchMessageW __imported_name(DispatchMessageW)
extern LONG
 __imported_stdcall(DispatchMessageW)(
    CONST MSG *lpMsg);

#define PeekMessageW __imported_name(PeekMessageW)
extern WINBOOL
 __imported_stdcall(PeekMessageW)(
    LPMSG lpMsg,
    HWND hWnd ,
    UINT wMsgFilterMin,
    UINT wMsgFilterMax,
    UINT wRemoveMsg);

#define SendMessageW __imported_name(SendMessageW)
extern LRESULT
 __imported_stdcall(SendMessageW)(
    HWND hWnd,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam);

#define SendMessageTimeoutW __imported_name(SendMessageTimeoutW)
extern LRESULT
 __imported_stdcall(SendMessageTimeoutW)(
    HWND hWnd,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam,
    UINT fuFlags,
    UINT uTimeout,
    LPDWORD lpdwResult);

#define SendNotifyMessageW __imported_name(SendNotifyMessageW)
extern WINBOOL
 __imported_stdcall(SendNotifyMessageW)(
    HWND hWnd,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam);

#define SendMessageCallbackW __imported_name(SendMessageCallbackW)
extern WINBOOL
 __imported_stdcall(SendMessageCallbackW)(
    HWND hWnd,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam,
    SENDASYNCPROC lpResultCallBack,
    DWORD dwData);

#define PostMessageW __imported_name(PostMessageW)
extern WINBOOL
 __imported_stdcall(PostMessageW)(
    HWND hWnd,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam);

#define PostThreadMessageW __imported_name(PostThreadMessageW)
extern WINBOOL
 __imported_stdcall(PostThreadMessageW)(
    DWORD idThread,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam);

#define DefWindowProcW __imported_name(DefWindowProcW)
extern LRESULT
 __imported_stdcall(DefWindowProcW)(
    HWND hWnd,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam);

#define CallWindowProcW __imported_name(CallWindowProcW)
extern LRESULT
 __imported_stdcall(CallWindowProcW)(
    WNDPROC lpPrevWndFunc,
    HWND hWnd,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam);

#define RegisterClassW __imported_name(RegisterClassW)
extern ATOM
 __imported_stdcall(RegisterClassW)(
    CONST WNDCLASS *lpWndClass);

#define UnregisterClassW __imported_name(UnregisterClassW)
extern WINBOOL
 __imported_stdcall(UnregisterClassW)(
    LPCWSTR lpClassName,
    HINSTANCE hInstance);

#define GetClassInfoW __imported_name(GetClassInfoW)
extern WINBOOL
 __imported_stdcall(GetClassInfoW)(
    HINSTANCE hInstance ,
    LPCWSTR lpClassName,
    LPWNDCLASS lpWndClass);

#define RegisterClassExW __imported_name(RegisterClassExW)
extern ATOM
 __imported_stdcall(RegisterClassExW)(CONST WNDCLASSEX *);

#define GetClassInfoExW __imported_name(GetClassInfoExW)
extern WINBOOL
 __imported_stdcall(GetClassInfoExW)(HINSTANCE, LPCWSTR, LPWNDCLASSEX);

#define CreateWindowExW __imported_name(CreateWindowExW)
extern HWND
 __imported_stdcall(CreateWindowExW)(
    DWORD dwExStyle,
    LPCWSTR lpClassName,
    LPCWSTR lpWindowName,
    DWORD dwStyle,
    int X,
    int Y,
    int nWidth,
    int nHeight,
    HWND hWndParent ,
    HMENU hMenu,
    HINSTANCE hInstance,
    LPVOID lpParam);

#define CreateDialogParamW __imported_name(CreateDialogParamW)
extern HWND
 __imported_stdcall(CreateDialogParamW)(
    HINSTANCE hInstance,
    LPCWSTR lpTemplateName,
    HWND hWndParent ,
    DLGPROC lpDialogFunc,
    LPARAM dwInitParam);

#define CreateDialogIndirectParamW __imported_name(CreateDialogIndirectParamW)
extern HWND
 __imported_stdcall(CreateDialogIndirectParamW)(
    HINSTANCE hInstance,
    LPCDLGTEMPLATE lpTemplate,
    HWND hWndParent,
    DLGPROC lpDialogFunc,
    LPARAM dwInitParam);

#define DialogBoxParamW __imported_name(DialogBoxParamW)
extern int
 __imported_stdcall(DialogBoxParamW)(
    HINSTANCE hInstance,
    LPCWSTR lpTemplateName,
    HWND hWndParent ,
    DLGPROC lpDialogFunc,
    LPARAM dwInitParam);

#define DialogBoxIndirectParamW __imported_name(DialogBoxIndirectParamW)
extern int
 __imported_stdcall(DialogBoxIndirectParamW)(
    HINSTANCE hInstance,
    LPCDLGTEMPLATE hDialogTemplate,
    HWND hWndParent ,
    DLGPROC lpDialogFunc,
    LPARAM dwInitParam);

#define SetDlgItemTextW __imported_name(SetDlgItemTextW)
extern WINBOOL
 __imported_stdcall(SetDlgItemTextW)(
    HWND hDlg,
    int nIDDlgItem,
    LPCWSTR lpString);

#define GetDlgItemTextW __imported_name(GetDlgItemTextW)
extern UINT
 __imported_stdcall(GetDlgItemTextW)(
    HWND hDlg,
    int nIDDlgItem,
    LPWSTR lpString,
    int nMaxCount);

#define SendDlgItemMessageW __imported_name(SendDlgItemMessageW)
extern LONG
 __imported_stdcall(SendDlgItemMessageW)(
    HWND hDlg,
    int nIDDlgItem,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam);

#define DefDlgProcW __imported_name(DefDlgProcW)
extern LRESULT
 __imported_stdcall(DefDlgProcW)(
    HWND hDlg,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam);

#define CallMsgFilterW __imported_name(CallMsgFilterW)
extern WINBOOL
 __imported_stdcall(CallMsgFilterW)(
    LPMSG lpMsg,
    int nCode);

#define RegisterClipboardFormatW __imported_name(RegisterClipboardFormatW)
extern UINT
 __imported_stdcall(RegisterClipboardFormatW)(
    LPCWSTR lpszFormat);

#define GetClipboardFormatNameW __imported_name(GetClipboardFormatNameW)
extern int
 __imported_stdcall(GetClipboardFormatNameW)(
    UINT format,
    LPWSTR lpszFormatName,
    int cchMaxCount);

#define CharToOemW __imported_name(CharToOemW)
extern WINBOOL
 __imported_stdcall(CharToOemW)(
    LPCWSTR lpszSrc,
    LPSTR lpszDst);

#define OemToCharW __imported_name(OemToCharW)
extern WINBOOL
 __imported_stdcall(OemToCharW)(
    LPCSTR lpszSrc,
    LPWSTR lpszDst);

#define CharToOemBuffW __imported_name(CharToOemBuffW)
extern WINBOOL
 __imported_stdcall(CharToOemBuffW)(
    LPCWSTR lpszSrc,
    LPSTR lpszDst,
    DWORD cchDstLength);

#define OemToCharBuffW __imported_name(OemToCharBuffW)
extern WINBOOL
 __imported_stdcall(OemToCharBuffW)(
    LPCSTR lpszSrc,
    LPWSTR lpszDst,
    DWORD cchDstLength);

#define CharUpperW __imported_name(CharUpperW)
extern LPWSTR
 __imported_stdcall(CharUpperW)(
    LPWSTR lpsz);

#define CharUpperBuffW __imported_name(CharUpperBuffW)
extern DWORD
 __imported_stdcall(CharUpperBuffW)(
    LPWSTR lpsz,
    DWORD cchLength);

#define CharLowerW __imported_name(CharLowerW)
extern LPWSTR
 __imported_stdcall(CharLowerW)(
    LPWSTR lpsz);

#define CharLowerBuffW __imported_name(CharLowerBuffW)
extern DWORD
 __imported_stdcall(CharLowerBuffW)(
    LPWSTR lpsz,
    DWORD cchLength);

#define CharNextW __imported_name(CharNextW)
extern LPWSTR
 __imported_stdcall(CharNextW)(
    LPCWSTR lpsz);

#define CharPrevW __imported_name(CharPrevW)
extern LPWSTR
 __imported_stdcall(CharPrevW)(
    LPCWSTR lpszStart,
    LPCWSTR lpszCurrent);

#define IsCharAlphaW __imported_name(IsCharAlphaW)
extern WINBOOL
 __imported_stdcall(IsCharAlphaW)(
    WCHAR ch);

#define IsCharAlphaNumericW __imported_name(IsCharAlphaNumericW)
extern WINBOOL
 __imported_stdcall(IsCharAlphaNumericW)(
    WCHAR ch);

#define IsCharUpperW __imported_name(IsCharUpperW)
extern WINBOOL
 __imported_stdcall(IsCharUpperW)(
    WCHAR ch);

#define IsCharLowerW __imported_name(IsCharLowerW)
extern WINBOOL
 __imported_stdcall(IsCharLowerW)(
    WCHAR ch);

#define GetKeyNameTextW __imported_name(GetKeyNameTextW)
extern int
 __imported_stdcall(GetKeyNameTextW)(
    LONG lParam,
    LPWSTR lpString,
    int nSize
    );

#define VkKeyScanW __imported_name(VkKeyScanW)
extern SHORT
 __imported_stdcall(VkKeyScanW)(
    WCHAR ch);

#define VkKeyScanExW __imported_name(VkKeyScanExW)
extern SHORT
 __imported_stdcall(VkKeyScanExW)(
    WCHAR  ch,
    HKL   dwhkl);

#define MapVirtualKeyW __imported_name(MapVirtualKeyW)
extern UINT
 __imported_stdcall(MapVirtualKeyW)(
    UINT uCode,
    UINT uMapType);

#define MapVirtualKeyExW __imported_name(MapVirtualKeyExW)
extern UINT
 __imported_stdcall(MapVirtualKeyExW)(
    UINT uCode,
    UINT uMapType,
    HKL dwhkl);

#define LoadAcceleratorsW __imported_name(LoadAcceleratorsW)
extern HACCEL
 __imported_stdcall(LoadAcceleratorsW)(
    HINSTANCE hInstance,
    LPCWSTR lpTableName);

#define CreateAcceleratorTableW __imported_name(CreateAcceleratorTableW)
extern HACCEL
 __imported_stdcall(CreateAcceleratorTableW)(
    LPACCEL, int);

#define CopyAcceleratorTableW __imported_name(CopyAcceleratorTableW)
extern int
 __imported_stdcall(CopyAcceleratorTableW)(
    HACCEL hAccelSrc,
    LPACCEL lpAccelDst,
    int cAccelEntries);

#define TranslateAcceleratorW __imported_name(TranslateAcceleratorW)
extern int
 __imported_stdcall(TranslateAcceleratorW)(
    HWND hWnd,
    HACCEL hAccTable,
    LPMSG lpMsg);

#define LoadMenuW __imported_name(LoadMenuW)
extern HMENU
 __imported_stdcall(LoadMenuW)(
    HINSTANCE hInstance,
    LPCWSTR lpMenuName);

#define LoadMenuIndirectW __imported_name(LoadMenuIndirectW)
extern HMENU
 __imported_stdcall(LoadMenuIndirectW)(
    CONST MENUTEMPLATE *lpMenuTemplate);

#define ChangeMenuW __imported_name(ChangeMenuW)
extern WINBOOL
 __imported_stdcall(ChangeMenuW)(
    HMENU hMenu,
    UINT cmd,
    LPCWSTR lpszNewItem,
    UINT cmdInsert,
    UINT flags);

#define GetMenuStringW __imported_name(GetMenuStringW)
extern int
 __imported_stdcall(GetMenuStringW)(
    HMENU hMenu,
    UINT uIDItem,
    LPWSTR lpString,
    int nMaxCount,
    UINT uFlag);

#define InsertMenuW __imported_name(InsertMenuW)
extern WINBOOL
 __imported_stdcall(InsertMenuW)(
    HMENU hMenu,
    UINT uPosition,
    UINT uFlags,
    UINT uIDNewItem,
    LPCWSTR lpNewItem
    );

#define AppendMenuW __imported_name(AppendMenuW)
extern WINBOOL
 __imported_stdcall(AppendMenuW)(
    HMENU hMenu,
    UINT uFlags,
    UINT uIDNewItem,
    LPCWSTR lpNewItem
    );

#define ModifyMenuW __imported_name(ModifyMenuW)
extern WINBOOL
 __imported_stdcall(ModifyMenuW)(
    HMENU hMnu,
    UINT uPosition,
    UINT uFlags,
    UINT uIDNewItem,
    LPCWSTR lpNewItem
    );

#define InsertMenuItemW __imported_name(InsertMenuItemW)
extern WINBOOL
 __imported_stdcall(InsertMenuItemW)(
    HMENU,
    UINT,
    WINBOOL,
    LPCMENUITEMINFO
    );

#define GetMenuItemInfoW __imported_name(GetMenuItemInfoW)
extern WINBOOL
 __imported_stdcall(GetMenuItemInfoW)(
    HMENU,
    UINT,
    WINBOOL,
    LPMENUITEMINFO
    );

#define SetMenuItemInfoW __imported_name(SetMenuItemInfoW)
extern WINBOOL
 __imported_stdcall(SetMenuItemInfoW)(
    HMENU,
    UINT,
    WINBOOL,
    LPCMENUITEMINFO
    );

#define DrawTextW __imported_name(DrawTextW)
extern int
 __imported_stdcall(DrawTextW)(
    HDC hDC,
    LPCWSTR lpString,
    int nCount,
    LPRECT lpRect,
    UINT uFormat);

#define DrawTextExW __imported_name(DrawTextExW)
extern int
 __imported_stdcall(DrawTextExW)(HDC, LPWSTR, int, LPRECT, UINT, LPDRAWTEXTPARAMS);

#define GrayStringW __imported_name(GrayStringW)
extern WINBOOL
 __imported_stdcall(GrayStringW)(
    HDC hDC,
    HBRUSH hBrush,
    GRAYSTRINGPROC lpOutputFunc,
    LPARAM lpData,
    int nCount,
    int X,
    int Y,
    int nWidth,
    int nHeight);

#define DrawStateW __imported_name(DrawStateW)
extern WINBOOL  __imported_stdcall(DrawStateW)(HDC, HBRUSH, DRAWSTATEPROC, LPARAM, WPARAM, int, int, int, int, UINT);

#define TabbedTextOutW __imported_name(TabbedTextOutW)
extern LONG
 __imported_stdcall(TabbedTextOutW)(
    HDC hDC,
    int X,
    int Y,
    LPCWSTR lpString,
    int nCount,
    int nTabPositions,
    LPINT lpnTabStopPositions,
    int nTabOrigin);

#define GetTabbedTextExtentW __imported_name(GetTabbedTextExtentW)
extern DWORD
 __imported_stdcall(GetTabbedTextExtentW)(
    HDC hDC,
    LPCWSTR lpString,
    int nCount,
    int nTabPositions,
    LPINT lpnTabStopPositions);

#define SetPropW __imported_name(SetPropW)
extern WINBOOL
 __imported_stdcall(SetPropW)(
    HWND hWnd,
    LPCWSTR lpString,
    HANDLE hData);

#define GetPropW __imported_name(GetPropW)
extern HANDLE
 __imported_stdcall(GetPropW)(
    HWND hWnd,
    LPCWSTR lpString);

#define RemovePropW __imported_name(RemovePropW)
extern HANDLE
 __imported_stdcall(RemovePropW)(
    HWND hWnd,
    LPCWSTR lpString);

#define EnumPropsExW __imported_name(EnumPropsExW)
extern int
 __imported_stdcall(EnumPropsExW)(
    HWND hWnd,
    PROPENUMPROCEX lpEnumFunc,
    LPARAM lParam);

#define EnumPropsW __imported_name(EnumPropsW)
extern int
 __imported_stdcall(EnumPropsW)(
    HWND hWnd,
    PROPENUMPROC lpEnumFunc);

#define SetWindowTextW __imported_name(SetWindowTextW)
extern WINBOOL
 __imported_stdcall(SetWindowTextW)(
    HWND hWnd,
    LPCWSTR lpString);

#define GetWindowTextW __imported_name(GetWindowTextW)
extern int
 __imported_stdcall(GetWindowTextW)(
    HWND hWnd,
    LPWSTR lpString,
    int nMaxCount);

#define GetWindowTextLengthW __imported_name(GetWindowTextLengthW)
extern int
 __imported_stdcall(GetWindowTextLengthW)(
    HWND hWnd);

#define MessageBoxW __imported_name(MessageBoxW)
extern int
 __imported_stdcall(MessageBoxW)(
    HWND hWnd ,
    LPCWSTR lpText,
    LPCWSTR lpCaption,
    UINT uType);

#define MessageBoxExW __imported_name(MessageBoxExW)
extern int
 __imported_stdcall(MessageBoxExW)(
    HWND hWnd ,
    LPCWSTR lpText,
    LPCWSTR lpCaption,
    UINT uType,
    WORD wLanguageId);

#define MessageBoxIndirectW __imported_name(MessageBoxIndirectW)
extern int
 __imported_stdcall(MessageBoxIndirectW)(LPMSGBOXPARAMS);

#define GetWindowLongW __imported_name(GetWindowLongW)
extern LONG
 __imported_stdcall(GetWindowLongW)(
    HWND hWnd,
    int nIndex);

#define SetWindowLongW __imported_name(SetWindowLongW)
extern LONG
 __imported_stdcall(SetWindowLongW)(
    HWND hWnd,
    int nIndex,
    LONG dwNewLong);

#define GetClassLongW __imported_name(GetClassLongW)
extern DWORD
 __imported_stdcall(GetClassLongW)(
    HWND hWnd,
    int nIndex);

#define SetClassLongW __imported_name(SetClassLongW)
extern DWORD
 __imported_stdcall(SetClassLongW)(
    HWND hWnd,
    int nIndex,
    LONG dwNewLong);

#define FindWindowW __imported_name(FindWindowW)
extern HWND
 __imported_stdcall(FindWindowW)(
    LPCWSTR lpClassName ,
    LPCWSTR lpWindowName);

#define FindWindowExW __imported_name(FindWindowExW)
extern HWND
 __imported_stdcall(FindWindowExW)(HWND, HWND, LPCWSTR, LPCWSTR);

#define GetClassNameW __imported_name(GetClassNameW)
extern int
 __imported_stdcall(GetClassNameW)(
    HWND hWnd,
    LPWSTR lpClassName,
    int nMaxCount);

#define SetWindowsHookExW __imported_name(SetWindowsHookExW)
extern HHOOK
 __imported_stdcall(SetWindowsHookExW)(
    int idHook,
    HOOKPROC lpfn,
    HINSTANCE hmod,
    DWORD dwThreadId);

#define LoadBitmapW __imported_name(LoadBitmapW)
extern HBITMAP
 __imported_stdcall(LoadBitmapW)(
    HINSTANCE hInstance,
    LPCWSTR lpBitmapName);

#define LoadCursorW __imported_name(LoadCursorW)
extern HCURSOR
 __imported_stdcall(LoadCursorW)(
    HINSTANCE hInstance,
    LPCWSTR lpCursorName);

#define LoadCursorFromFileW __imported_name(LoadCursorFromFileW)
extern HCURSOR
 __imported_stdcall(LoadCursorFromFileW)(
    LPCWSTR    lpFileName);

#define LoadIconW __imported_name(LoadIconW)
extern HICON
 __imported_stdcall(LoadIconW)(
    HINSTANCE hInstance,
    LPCWSTR lpIconName);

#define LoadImageW __imported_name(LoadImageW)
extern HANDLE
 __imported_stdcall(LoadImageW)(
    HINSTANCE,
    LPCWSTR,
    UINT,
    int,
    int,
    UINT);

#define LoadStringW __imported_name(LoadStringW)
extern int
 __imported_stdcall(LoadStringW)(
    HINSTANCE hInstance,
    UINT uID,
    LPWSTR lpBuffer,
    int nBufferMax);

#define IsDialogMessageW __imported_name(IsDialogMessageW)
extern WINBOOL
 __imported_stdcall(IsDialogMessageW)(
    HWND hDlg,
    LPMSG lpMsg);

#define DlgDirListW __imported_name(DlgDirListW)
extern int
 __imported_stdcall(DlgDirListW)(
    HWND hDlg,
    LPWSTR lpPathSpec,
    int nIDListBox,
    int nIDStaticPath,
    UINT uFileType);

#define DlgDirSelectExW __imported_name(DlgDirSelectExW)
extern WINBOOL
 __imported_stdcall(DlgDirSelectExW)(
    HWND hDlg,
    LPWSTR lpString,
    int nCount,
    int nIDListBox);

#define DlgDirListComboBoxW __imported_name(DlgDirListComboBoxW)
extern int
 __imported_stdcall(DlgDirListComboBoxW)(
    HWND hDlg,
    LPWSTR lpPathSpec,
    int nIDComboBox,
    int nIDStaticPath,
    UINT uFiletype);

#define DlgDirSelectComboBoxExW __imported_name(DlgDirSelectComboBoxExW)
extern WINBOOL
 __imported_stdcall(DlgDirSelectComboBoxExW)(
    HWND hDlg,
    LPWSTR lpString,
    int nCount,
    int nIDComboBox);

#define DefFrameProcW __imported_name(DefFrameProcW)
extern LRESULT
 __imported_stdcall(DefFrameProcW)(
    HWND hWnd,
    HWND hWndMDIClient ,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);

#define DefMDIChildProcW __imported_name(DefMDIChildProcW)
extern LRESULT
 __imported_stdcall(DefMDIChildProcW)(
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);

#define CreateMDIWindowW __imported_name(CreateMDIWindowW)
extern HWND
 __imported_stdcall(CreateMDIWindowW)(
    LPWSTR lpClassName,
    LPWSTR lpWindowName,
    DWORD dwStyle,
    int X,
    int Y,
    int nWidth,
    int nHeight,
    HWND hWndParent,
    HINSTANCE hInstance,
    LPARAM lParam
    );

#define WinHelpW __imported_name(WinHelpW)
extern WINBOOL
 __imported_stdcall(WinHelpW)(
    HWND hWndMain,
    LPCWSTR lpszHelp,
    UINT uCommand,
    DWORD dwData
    );

#define ChangeDisplaySettingsW __imported_name(ChangeDisplaySettingsW)
extern LONG
 __imported_stdcall(ChangeDisplaySettingsW)(
    LPDEVMODE lpDevMode,
    DWORD dwFlags);

#define EnumDisplaySettingsW __imported_name(EnumDisplaySettingsW)
extern WINBOOL
 __imported_stdcall(EnumDisplaySettingsW)(
    LPCWSTR lpszDeviceName,
    DWORD iModeNum,
    LPDEVMODE lpDevMode);

#define SystemParametersInfoW __imported_name(SystemParametersInfoW)
extern WINBOOL
 __imported_stdcall(SystemParametersInfoW)(
    UINT uiAction,
    UINT uiParam,
    PVOID pvParam,
    UINT fWinIni);

#define AddFontResourceW __imported_name(AddFontResourceW)
extern int
 __imported_stdcall(AddFontResourceW)(LPCWSTR);

#define CopyMetaFileW __imported_name(CopyMetaFileW)
extern HMETAFILE
 __imported_stdcall(CopyMetaFileW)(HMETAFILE, LPCWSTR);

#define CreateFontIndirectW __imported_name(CreateFontIndirectW)
extern HFONT
 __imported_stdcall(CreateFontIndirectW)(CONST LOGFONT *);

#define CreateFontW __imported_name(CreateFontW)
extern HFONT
 __imported_stdcall(CreateFontW)(int, int, int, int, int, DWORD,
                             DWORD, DWORD, DWORD, DWORD, DWORD,
                             DWORD, DWORD, LPCWSTR);

#define CreateICW __imported_name(CreateICW)
extern HDC
 __imported_stdcall(CreateICW)(LPCWSTR, LPCWSTR , LPCWSTR , CONST DEVMODE *);

#define CreateMetaFileW __imported_name(CreateMetaFileW)
extern HDC
 __imported_stdcall(CreateMetaFileW)(LPCWSTR);

#define CreateScalableFontResourceW __imported_name(CreateScalableFontResourceW)
extern WINBOOL
 __imported_stdcall(CreateScalableFontResourceW)(DWORD, LPCWSTR, LPCWSTR, LPCWSTR);

#define DeviceCapabilitiesW __imported_name(DeviceCapabilitiesW)
extern int
 __imported_stdcall(DeviceCapabilitiesW)(LPCWSTR, LPCWSTR, WORD,
                                LPWSTR, CONST DEVMODE *);

#define EnumFontFamiliesExW __imported_name(EnumFontFamiliesExW)
extern int
 __imported_stdcall(EnumFontFamiliesExW)(HDC, LPLOGFONT, FONTENUMEXPROC, LPARAM, DWORD);

#define EnumFontFamiliesW __imported_name(EnumFontFamiliesW)
extern int
 __imported_stdcall(EnumFontFamiliesW)(HDC, LPCWSTR, FONTENUMPROC, LPARAM);

#define EnumFontsW __imported_name(EnumFontsW)
extern int
 __imported_stdcall(EnumFontsW)(HDC, LPCWSTR,  ENUMFONTSPROC, LPARAM);

#define GetCharWidthW __imported_name(GetCharWidthW)
extern WINBOOL
 __imported_stdcall(GetCharWidthW)(HDC, UINT, UINT, LPINT);

#define GetCharWidth32W __imported_name(GetCharWidth32W)
extern WINBOOL
  __imported_stdcall(GetCharWidth32W)(HDC, UINT, UINT, LPINT);

#define GetCharWidthFloatW __imported_name(GetCharWidthFloatW)
extern WINBOOL
 __imported_stdcall(GetCharWidthFloatW)(HDC, UINT, UINT, PFLOAT);

#define GetCharABCWidthsW __imported_name(GetCharABCWidthsW)
extern WINBOOL
 __imported_stdcall(GetCharABCWidthsW)(HDC, UINT, UINT, LPABC);

#define GetCharABCWidthsFloatW __imported_name(GetCharABCWidthsFloatW)
extern WINBOOL
 __imported_stdcall(GetCharABCWidthsFloatW)(HDC, UINT, UINT, LPABCFLOAT);

#define GetGlyphOutlineW __imported_name(GetGlyphOutlineW)
extern DWORD
 __imported_stdcall(GetGlyphOutlineW)(HDC, UINT, UINT, LPGLYPHMETRICS, DWORD, LPVOID, CONST MAT2 *);

#define GetMetaFileW __imported_name(GetMetaFileW)
extern HMETAFILE
 __imported_stdcall(GetMetaFileW)(LPCWSTR);

#define GetOutlineTextMetricsW __imported_name(GetOutlineTextMetricsW)
extern UINT
 __imported_stdcall(GetOutlineTextMetricsW)(HDC, UINT, LPOUTLINETEXTMETRIC);

#define GetTextExtentPointW __imported_name(GetTextExtentPointW)
extern WINBOOL
 __imported_stdcall(GetTextExtentPointW)(
                    HDC,
                    LPCWSTR,
                    int,
                    LPSIZE
                    );

#define GetTextExtentPoint32W __imported_name(GetTextExtentPoint32W)
extern WINBOOL
 __imported_stdcall(GetTextExtentPoint32W)(
                    HDC,
                    LPCWSTR,
                    int,
                    LPSIZE
                    );

#define GetTextExtentExPointW __imported_name(GetTextExtentExPointW)
extern WINBOOL
 __imported_stdcall(GetTextExtentExPointW)(
                    HDC,
                    LPCWSTR,
                    int,
                    int,
                    LPINT,
                    LPINT,
                    LPSIZE
                    );

#define GetCharacterPlacementW __imported_name(GetCharacterPlacementW)
extern DWORD
 __imported_stdcall(GetCharacterPlacementW)(HDC, LPCWSTR, int, int, LPGCP_RESULTS, DWORD);

#define ResetDCW __imported_name(ResetDCW)
extern HDC
 __imported_stdcall(ResetDCW)(HDC, CONST DEVMODE *);

#define RemoveFontResourceW __imported_name(RemoveFontResourceW)
extern WINBOOL
 __imported_stdcall(RemoveFontResourceW)(LPCWSTR);

#define CopyEnhMetaFileW __imported_name(CopyEnhMetaFileW)
extern HENHMETAFILE
 __imported_stdcall(CopyEnhMetaFileW)(HENHMETAFILE, LPCWSTR);

#define CreateEnhMetaFileW __imported_name(CreateEnhMetaFileW)
extern HDC
 __imported_stdcall(CreateEnhMetaFileW)(HDC, LPCWSTR, CONST RECT *, LPCWSTR);

#define GetEnhMetaFileW __imported_name(GetEnhMetaFileW)
extern HENHMETAFILE
 __imported_stdcall(GetEnhMetaFileW)(LPCWSTR);

#define GetEnhMetaFileDescriptionW __imported_name(GetEnhMetaFileDescriptionW)
extern UINT
 __imported_stdcall(GetEnhMetaFileDescriptionW)(HENHMETAFILE, UINT, LPWSTR );

#define GetTextMetricsW __imported_name(GetTextMetricsW)
extern WINBOOL
 __imported_stdcall(GetTextMetricsW)(HDC, LPTEXTMETRIC);

#define StartDocW __imported_name(StartDocW)
extern int
 __imported_stdcall(StartDocW)(HDC, CONST DOCINFO *);

#define GetObjectW __imported_name(GetObjectW)
extern int
 __imported_stdcall(GetObjectW)(HGDIOBJ, int, LPVOID);

#define TextOutW __imported_name(TextOutW)
extern WINBOOL
 __imported_stdcall(TextOutW)(HDC, int, int, LPCWSTR, int);

#define ExtTextOutW __imported_name(ExtTextOutW)
extern WINBOOL
 __imported_stdcall(ExtTextOutW)(HDC, int, int, UINT, CONST RECT *,LPCWSTR, UINT, CONST INT *);

#define PolyTextOutW __imported_name(PolyTextOutW)
extern WINBOOL
 __imported_stdcall(PolyTextOutW)(HDC, CONST POLYTEXT *, int);

#define GetTextFaceW __imported_name(GetTextFaceW)
extern int
 __imported_stdcall(GetTextFaceW)(HDC, int, LPWSTR);

#define GetKerningPairsW __imported_name(GetKerningPairsW)
extern DWORD
 __imported_stdcall(GetKerningPairsW)(HDC, DWORD, LPKERNINGPAIR);

#define GetLogColorSpaceW __imported_name(GetLogColorSpaceW)
extern WINBOOL
 __imported_stdcall(GetLogColorSpaceW)(HCOLORSPACE,LPLOGCOLORSPACE,DWORD);

#define CreateColorSpaceW __imported_name(CreateColorSpaceW)
extern HCOLORSPACE
 __imported_stdcall(CreateColorSpaceW)(LPLOGCOLORSPACE);

#define GetICMProfileW __imported_name(GetICMProfileW)
extern WINBOOL
 __imported_stdcall(GetICMProfileW)(HDC,DWORD,LPWSTR);

#define SetICMProfileW __imported_name(SetICMProfileW)
extern WINBOOL
 __imported_stdcall(SetICMProfileW)(HDC,LPWSTR);

#define UpdateICMRegKeyW __imported_name(UpdateICMRegKeyW)
extern WINBOOL
 __imported_stdcall(UpdateICMRegKeyW)(DWORD, DWORD, LPWSTR, UINT);

#define EnumICMProfilesW __imported_name(EnumICMProfilesW)
extern int
 __imported_stdcall(EnumICMProfilesW)(HDC,ICMENUMPROC,LPARAM);

#define CreatePropertySheetPageW __imported_name(CreatePropertySheetPageW)
extern HPROPSHEETPAGE
 __imported_stdcall(CreatePropertySheetPageW)(LPCPROPSHEETPAGE lppsp);

#define PropertySheetW __imported_name(PropertySheetW)
extern int
 __imported_stdcall(PropertySheetW)(LPCPROPSHEETHEADER lppsph);

#define ImageList_LoadImageW __imported_name(ImageList_LoadImageW)
extern HIMAGELIST
 __imported_stdcall(ImageList_LoadImageW)(HINSTANCE hi, 
LPCWSTR lpbmp, 
int cx, 
int cGrow, 
COLORREF crMask, 
UINT uType, 
UINT uFlags);

#define CreateStatusWindowW __imported_name(CreateStatusWindowW)
extern HWND
 __imported_stdcall(CreateStatusWindowW)(LONG style, LPCWSTR lpszText, HWND hwndParent, UINT wID);

#define DrawStatusTextW __imported_name(DrawStatusTextW)
extern void
 __imported_stdcall(DrawStatusTextW)(HDC hDC, LPRECT lprc, LPCWSTR pszText, UINT uFlags);

#define GetOpenFileNameW __imported_name(GetOpenFileNameW)
extern WINBOOL
 __imported_stdcall(GetOpenFileNameW)(LPOPENFILENAME);

#define GetSaveFileNameW __imported_name(GetSaveFileNameW)
extern WINBOOL
 __imported_stdcall(GetSaveFileNameW)(LPOPENFILENAME);

#define GetFileTitleW __imported_name(GetFileTitleW)
extern short
 __imported_stdcall(GetFileTitleW)(LPCWSTR, LPWSTR, WORD);

#define ChooseColorW __imported_name(ChooseColorW)
extern WINBOOL
 __imported_stdcall(ChooseColorW)(LPCHOOSECOLOR);

#define ReplaceTextW __imported_name(ReplaceTextW)
extern HWND
 __imported_stdcall(ReplaceTextW)(LPFINDREPLACE);

#define ChooseFontW __imported_name(ChooseFontW)
extern WINBOOL
 __imported_stdcall(ChooseFontW)(LPCHOOSEFONT);

#define FindTextW __imported_name(FindTextW)
extern HWND
 __imported_stdcall(FindTextW)(LPFINDREPLACE);

#define PrintDlgW __imported_name(PrintDlgW)
extern WINBOOL
 __imported_stdcall(PrintDlgW)(LPPRINTDLG);

#define PageSetupDlgW __imported_name(PageSetupDlgW)
extern WINBOOL
 __imported_stdcall(PageSetupDlgW)(LPPAGESETUPDLG);

#define CreateProcessW __imported_name(CreateProcessW)
extern WINBOOL
 __imported_stdcall(CreateProcessW)(
    LPCWSTR lpApplicationName,
    LPWSTR lpCommandLine,
    LPSECURITY_ATTRIBUTES lpProcessAttributes,
    LPSECURITY_ATTRIBUTES lpThreadAttributes,
    WINBOOL bInheritHandles,
    DWORD dwCreationFlags,
    LPVOID lpEnvironment,
    LPCWSTR lpCurrentDirectory,
    LPSTARTUPINFO lpStartupInfo,
    LPPROCESS_INFORMATION lpProcessInformation
    );

#define GetStartupInfoW __imported_name(GetStartupInfoW)
extern VOID
 __imported_stdcall(GetStartupInfoW)(
    LPSTARTUPINFO lpStartupInfo
    );

#define FindFirstFileW __imported_name(FindFirstFileW)
extern HANDLE
 __imported_stdcall(FindFirstFileW)(
    LPCWSTR lpFileName,
    LPWIN32_FIND_DATA lpFindFileData
    );

#define FindNextFileW __imported_name(FindNextFileW)
extern WINBOOL
 __imported_stdcall(FindNextFileW)(
    HANDLE hFindFile,
    LPWIN32_FIND_DATA lpFindFileData
    );

#define GetVersionExW __imported_name(GetVersionExW)
extern WINBOOL
 __imported_stdcall(GetVersionExW)(
    LPOSVERSIONINFO lpVersionInformation
    );

#define CreateWindowW(lpClassName, lpWindowName, dwStyle, x, y,\
nWidth, nHeight, hWndParent, hMenu, hInstance, lpParam)\
CreateWindowExW(0L, lpClassName, lpWindowName, dwStyle, x, y,\
nWidth, nHeight, hWndParent, hMenu, hInstance, lpParam)

#define CreateDialogW(hInstance, lpName, hWndParent, lpDialogFunc) \
CreateDialogParamW(hInstance, lpName, hWndParent, lpDialogFunc, 0L)

#define CreateDialogIndirectW(hInstance, lpTemplate, hWndParent, lpDialogFunc) \
CreateDialogIndirectParamW(hInstance, lpTemplate, hWndParent, lpDialogFunc, 0L)

#define DialogBoxW(hInstance, lpTemplate, hWndParent, lpDialogFunc) \
DialogBoxParamW(hInstance, lpTemplate, hWndParent, lpDialogFunc, 0L)

#define DialogBoxIndirectW(hInstance, lpTemplate, hWndParent, lpDialogFunc) \
DialogBoxIndirectParamW(hInstance, lpTemplate, hWndParent, lpDialogFunc, 0L)

#define CreateDCW __imported_name(CreateDCW)
extern HDC
 __imported_stdcall(CreateDCW)(LPCWSTR, LPCWSTR , LPCWSTR , CONST DEVMODE *);

#define CreateFontA __imported_name(CreateFontA)
extern HFONT
 __imported_stdcall(CreateFontA)(int, int, int, int, int, DWORD,
                             DWORD, DWORD, DWORD, DWORD, DWORD,
                             DWORD, DWORD, LPCSTR);

#define VerInstallFileW __imported_name(VerInstallFileW)
extern DWORD
 __imported_stdcall(VerInstallFileW)(
        DWORD uFlags,
        LPWSTR szSrcFileName,
        LPWSTR szDestFileName,
        LPWSTR szSrcDir,
        LPWSTR szDestDir,
        LPWSTR szCurDir,
        LPWSTR szTmpFile,
        PUINT lpuTmpFileLen
        );

#define GetFileVersionInfoSizeW __imported_name(GetFileVersionInfoSizeW)
extern DWORD
 __imported_stdcall(GetFileVersionInfoSizeW)(
        LPWSTR lptstrFilename,
        LPDWORD lpdwHandle
        );

#define GetFileVersionInfoW __imported_name(GetFileVersionInfoW)
extern WINBOOL
 __imported_stdcall(GetFileVersionInfoW)(
        LPWSTR lptstrFilename,
        DWORD dwHandle,
        DWORD dwLen,
        LPVOID lpData
        );

#define VerLanguageNameW __imported_name(VerLanguageNameW)
extern DWORD
 __imported_stdcall(VerLanguageNameW)(
        DWORD wLang,
        LPWSTR szLang,
        DWORD nSize
        );

#define VerQueryValueW __imported_name(VerQueryValueW)
extern WINBOOL
 __imported_stdcall(VerQueryValueW)(
        const LPVOID pBlock,
        LPWSTR lpSubBlock,
        LPVOID * lplpBuffer,
        PUINT puLen
        );

#define VerFindFileW __imported_name(VerFindFileW)
extern DWORD
 __imported_stdcall(VerFindFileW)(
        DWORD uFlags,
        LPWSTR szFileName,
        LPWSTR szWinDir,
        LPWSTR szAppDir,
        LPWSTR szCurDir,
        PUINT lpuCurDirLen,
        LPWSTR szDestDir,
        PUINT lpuDestDirLen
        );

#define RegSetValueExW __imported_name(RegSetValueExW)
extern LONG
 __imported_stdcall(RegSetValueExW)(
    HKEY hKey,
    LPCWSTR lpValueName,
    DWORD Reserved,
    DWORD dwType,
    CONST BYTE* lpData,
    DWORD cbData
    );

#define RegUnLoadKeyW __imported_name(RegUnLoadKeyW)
extern LONG
 __imported_stdcall(RegUnLoadKeyW)(
    HKEY    hKey,
    LPCWSTR lpSubKey
    );

#define InitiateSystemShutdownW __imported_name(InitiateSystemShutdownW)
extern WINBOOL
 __imported_stdcall(InitiateSystemShutdownW)(
    LPWSTR lpMachineName,
    LPWSTR lpMessage,
    DWORD dwTimeout,
    WINBOOL bForceAppsClosed,
    WINBOOL bRebootAfterShutdown
    );

#define AbortSystemShutdownW __imported_name(AbortSystemShutdownW)
extern WINBOOL
 __imported_stdcall(AbortSystemShutdownW)(
    LPWSTR lpMachineName
    );

#define RegRestoreKeyW __imported_name(RegRestoreKeyW)
extern LONG
 __imported_stdcall(RegRestoreKeyW)(
    HKEY hKey,
    LPCWSTR lpFile,
    DWORD   dwFlags
    );

#define RegSaveKeyW __imported_name(RegSaveKeyW)
extern LONG
 __imported_stdcall(RegSaveKeyW)(
    HKEY hKey,
    LPCWSTR lpFile,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );

#define RegSetValueW __imported_name(RegSetValueW)
extern LONG
 __imported_stdcall(RegSetValueW)(
    HKEY hKey,
    LPCWSTR lpSubKey,
    DWORD dwType,
    LPCWSTR lpData,
    DWORD cbData
    );

#define RegQueryValueW __imported_name(RegQueryValueW)
extern LONG
 __imported_stdcall(RegQueryValueW)(
    HKEY hKey,
    LPCWSTR lpSubKey,
    LPWSTR lpValue,
    PLONG   lpcbValue
    );

#define RegQueryMultipleValuesW __imported_name(RegQueryMultipleValuesW)
extern LONG
 __imported_stdcall(RegQueryMultipleValuesW)(
    HKEY hKey,
    PVALENT val_list,
    DWORD num_vals,
    LPWSTR lpValueBuf,
    LPDWORD ldwTotsize
    );

#define RegQueryValueExW __imported_name(RegQueryValueExW)
extern LONG
 __imported_stdcall(RegQueryValueExW)(
    HKEY hKey,
    LPCWSTR lpValueName,
    LPDWORD lpReserved,
    LPDWORD lpType,
    LPBYTE lpData,
    LPDWORD lpcbData
    );

#define RegReplaceKeyW __imported_name(RegReplaceKeyW)
extern LONG
 __imported_stdcall(RegReplaceKeyW)(
    HKEY     hKey,
    LPCWSTR  lpSubKey,
    LPCWSTR  lpNewFile,
    LPCWSTR  lpOldFile
    );

#define RegConnectRegistryW __imported_name(RegConnectRegistryW)
extern LONG
 __imported_stdcall(RegConnectRegistryW)(
    LPWSTR lpMachineName,
    HKEY hKey,
    PHKEY phkResult
    );

#define RegCreateKeyW __imported_name(RegCreateKeyW)
extern LONG
 __imported_stdcall(RegCreateKeyW)(
    HKEY hKey,
    LPCWSTR lpSubKey,
    PHKEY phkResult
    );

#define RegCreateKeyExW __imported_name(RegCreateKeyExW)
extern LONG
 __imported_stdcall(RegCreateKeyExW)(
    HKEY hKey,
    LPCWSTR lpSubKey,
    DWORD Reserved,
    LPWSTR lpClass,
    DWORD dwOptions,
    REGSAM samDesired,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    PHKEY phkResult,
    LPDWORD lpdwDisposition
    );

#define RegDeleteKeyW __imported_name(RegDeleteKeyW)
extern LONG
 __imported_stdcall(RegDeleteKeyW)(
    HKEY hKey,
    LPCWSTR lpSubKey
    );

#define RegDeleteValueW __imported_name(RegDeleteValueW)
extern LONG
 __imported_stdcall(RegDeleteValueW)(
    HKEY hKey,
    LPCWSTR lpValueName
    );

#define RegEnumKeyW __imported_name(RegEnumKeyW)
extern LONG
 __imported_stdcall(RegEnumKeyW)(
    HKEY hKey,
    DWORD dwIndex,
    LPWSTR lpName,
    DWORD cbName
    );

#define RegEnumKeyExW __imported_name(RegEnumKeyExW)
extern LONG
 __imported_stdcall(RegEnumKeyExW)(
    HKEY hKey,
    DWORD dwIndex,
    LPWSTR lpName,
    LPDWORD lpcbName,
    LPDWORD lpReserved,
    LPWSTR lpClass,
    LPDWORD lpcbClass,
    PFILETIME lpftLastWriteTime
    );

#define RegEnumValueW __imported_name(RegEnumValueW)
extern LONG
 __imported_stdcall(RegEnumValueW)(
    HKEY hKey,
    DWORD dwIndex,
    LPWSTR lpValueName,
    LPDWORD lpcbValueName,
    LPDWORD lpReserved,
    LPDWORD lpType,
    LPBYTE lpData,
    LPDWORD lpcbData
    );

#define RegLoadKeyW __imported_name(RegLoadKeyW)
extern LONG
 __imported_stdcall(RegLoadKeyW)(
    HKEY    hKey,
    LPCWSTR  lpSubKey,
    LPCWSTR  lpFile
    );

#define RegOpenKeyW __imported_name(RegOpenKeyW)
extern LONG
 __imported_stdcall(RegOpenKeyW)(
    HKEY hKey,
    LPCWSTR lpSubKey,
    PHKEY phkResult
    );

#define RegOpenKeyExW __imported_name(RegOpenKeyExW)
extern LONG
 __imported_stdcall(RegOpenKeyExW)(
    HKEY hKey,
    LPCWSTR lpSubKey,
    DWORD ulOptions,
    REGSAM samDesired,
    PHKEY phkResult
    );

#define RegQueryInfoKeyW __imported_name(RegQueryInfoKeyW)
extern LONG
 __imported_stdcall(RegQueryInfoKeyW)(
    HKEY hKey,
    LPWSTR lpClass,
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

#define CompareStringW __imported_name(CompareStringW)
extern int
 __imported_stdcall(CompareStringW)(
    LCID     Locale,
    DWORD    dwCmpFlags,
    LPCWSTR lpString1,
    int      cchCount1,
    LPCWSTR lpString2,
    int      cchCount2);

#define LCMapStringW __imported_name(LCMapStringW)
extern int
 __imported_stdcall(LCMapStringW)(
    LCID     Locale,
    DWORD    dwMapFlags,
    LPCWSTR lpSrcStr,
    int      cchSrc,
    LPWSTR  lpDestStr,
    int      cchDest);


#define GetLocaleInfoW __imported_name(GetLocaleInfoW)
extern int
 __imported_stdcall(GetLocaleInfoW)(
    LCID     Locale,
    LCTYPE   LCType,
    LPWSTR  lpLCData,
    int      cchData);

#define SetLocaleInfoW __imported_name(SetLocaleInfoW)
extern WINBOOL
 __imported_stdcall(SetLocaleInfoW)(
    LCID     Locale,
    LCTYPE   LCType,
    LPCWSTR lpLCData);

#define GetTimeFormatW __imported_name(GetTimeFormatW)
extern int
 __imported_stdcall(GetTimeFormatW)(
    LCID     Locale,
    DWORD    dwFlags,
    CONST SYSTEMTIME *lpTime,
    LPCWSTR lpFormat,
    LPWSTR  lpTimeStr,
    int      cchTime);

#define GetDateFormatW __imported_name(GetDateFormatW)
extern int
 __imported_stdcall(GetDateFormatW)(
    LCID     Locale,
    DWORD    dwFlags,
    CONST SYSTEMTIME *lpDate,
    LPCWSTR lpFormat,
    LPWSTR  lpDateStr,
    int      cchDate);

#define GetNumberFormatW __imported_name(GetNumberFormatW)
extern int
 __imported_stdcall(GetNumberFormatW)(
    LCID     Locale,
    DWORD    dwFlags,
    LPCWSTR lpValue,
    CONST NUMBERFMT *lpFormat,
    LPWSTR  lpNumberStr,
    int      cchNumber);

#define GetCurrencyFormatW __imported_name(GetCurrencyFormatW)
extern int
 __imported_stdcall(GetCurrencyFormatW)(
    LCID     Locale,
    DWORD    dwFlags,
    LPCWSTR lpValue,
    CONST CURRENCYFMT *lpFormat,
    LPWSTR  lpCurrencyStr,
    int      cchCurrency);

#define EnumCalendarInfoW __imported_name(EnumCalendarInfoW)
extern WINBOOL
 __imported_stdcall(EnumCalendarInfoW)(
    CALINFO_ENUMPROC lpCalInfoEnumProc,
    LCID              Locale,
    CALID             Calendar,
    CALTYPE           CalType);

#define EnumTimeFormatsW __imported_name(EnumTimeFormatsW)
extern WINBOOL
 __imported_stdcall(EnumTimeFormatsW)(
    TIMEFMT_ENUMPROC lpTimeFmtEnumProc,
    LCID              Locale,
    DWORD             dwFlags);

#define EnumDateFormatsW __imported_name(EnumDateFormatsW)
extern WINBOOL
 __imported_stdcall(EnumDateFormatsW)(
    DATEFMT_ENUMPROC lpDateFmtEnumProc,
    LCID              Locale,
    DWORD             dwFlags);

#define GetStringTypeExW __imported_name(GetStringTypeExW)
extern WINBOOL
 __imported_stdcall(GetStringTypeExW)(
    LCID     Locale,
    DWORD    dwInfoType,
    LPCWSTR lpSrcStr,
    int      cchSrc,
    LPWORD   lpCharType);

#define GetStringTypeW __imported_name(GetStringTypeW)
extern WINBOOL
 __imported_stdcall(GetStringTypeW)(
    DWORD    dwInfoType,
    LPCWSTR  lpSrcStr,
    int      cchSrc,
    LPWORD   lpCharType);

#define FoldStringW __imported_name(FoldStringW)
extern int
 __imported_stdcall(FoldStringW)(
    DWORD    dwMapFlags,
    LPCWSTR lpSrcStr,
    int      cchSrc,
    LPWSTR  lpDestStr,
    int      cchDest);

#define EnumSystemLocalesW __imported_name(EnumSystemLocalesW)
extern WINBOOL
 __imported_stdcall(EnumSystemLocalesW)(
    LOCALE_ENUMPROC lpLocaleEnumProc,
    DWORD            dwFlags);

#define EnumSystemCodePagesW __imported_name(EnumSystemCodePagesW)
extern WINBOOL
 __imported_stdcall(EnumSystemCodePagesW)(
    CODEPAGE_ENUMPROC lpCodePageEnumProc,
    DWORD              dwFlags);

#define PeekConsoleInputW __imported_name(PeekConsoleInputW)
extern WINBOOL
 __imported_stdcall(PeekConsoleInputW)(
    HANDLE hConsoleInput,
    PINPUT_RECORD lpBuffer,
    DWORD nLength,
    LPDWORD lpNumberOfEventsRead
    );

#define ReadConsoleInputW __imported_name(ReadConsoleInputW)
extern WINBOOL
 __imported_stdcall(ReadConsoleInputW)(
    HANDLE hConsoleInput,
    PINPUT_RECORD lpBuffer,
    DWORD nLength,
    LPDWORD lpNumberOfEventsRead
    );

#define WriteConsoleInputW __imported_name(WriteConsoleInputW)
extern WINBOOL
 __imported_stdcall(WriteConsoleInputW)(
    HANDLE hConsoleInput,
    CONST INPUT_RECORD *lpBuffer,
    DWORD nLength,
    LPDWORD lpNumberOfEventsWritten
    );

#define ReadConsoleOutputW __imported_name(ReadConsoleOutputW)
extern WINBOOL
 __imported_stdcall(ReadConsoleOutputW)(
    HANDLE hConsoleOutput,
    PCHAR_INFO lpBuffer,
    COORD dwBufferSize,
    COORD dwBufferCoord,
    PSMALL_RECT lpReadRegion
    );

#define WriteConsoleOutputW __imported_name(WriteConsoleOutputW)
extern WINBOOL
 __imported_stdcall(WriteConsoleOutputW)(
    HANDLE hConsoleOutput,
    CONST CHAR_INFO *lpBuffer,
    COORD dwBufferSize,
    COORD dwBufferCoord,
    PSMALL_RECT lpWriteRegion
    );

#define ReadConsoleOutputCharacterW __imported_name(ReadConsoleOutputCharacterW)
extern WINBOOL
 __imported_stdcall(ReadConsoleOutputCharacterW)(
    HANDLE hConsoleOutput,
    LPWSTR lpCharacter,
    DWORD nLength,
    COORD dwReadCoord,
    LPDWORD lpNumberOfCharsRead
    );

#define WriteConsoleOutputCharacterW __imported_name(WriteConsoleOutputCharacterW)
extern WINBOOL
 __imported_stdcall(WriteConsoleOutputCharacterW)(
    HANDLE hConsoleOutput,
    LPCWSTR lpCharacter,
    DWORD nLength,
    COORD dwWriteCoord,
    LPDWORD lpNumberOfCharsWritten
    );

#define FillConsoleOutputCharacterW __imported_name(FillConsoleOutputCharacterW)
extern WINBOOL
 __imported_stdcall(FillConsoleOutputCharacterW)(
    HANDLE hConsoleOutput,
    WCHAR  cCharacter,
    DWORD  nLength,
    COORD  dwWriteCoord,
    LPDWORD lpNumberOfCharsWritten
    );

#define ScrollConsoleScreenBufferW __imported_name(ScrollConsoleScreenBufferW)
extern WINBOOL
 __imported_stdcall(ScrollConsoleScreenBufferW)(
    HANDLE hConsoleOutput,
    CONST SMALL_RECT *lpScrollRectangle,
    CONST SMALL_RECT *lpClipRectangle,
    COORD dwDestinationOrigin,
    CONST CHAR_INFO *lpFill
    );

#define GetConsoleTitleW __imported_name(GetConsoleTitleW)
extern DWORD
 __imported_stdcall(GetConsoleTitleW)(
    LPWSTR lpConsoleTitle,
    DWORD nSize
    );

#define SetConsoleTitleW __imported_name(SetConsoleTitleW)
extern WINBOOL
 __imported_stdcall(SetConsoleTitleW)(
    LPCWSTR lpConsoleTitle
    );

#define ReadConsoleW __imported_name(ReadConsoleW)
extern WINBOOL
 __imported_stdcall(ReadConsoleW)(
    HANDLE hConsoleInput,
    LPVOID lpBuffer,
    DWORD nNumberOfCharsToRead,
    LPDWORD lpNumberOfCharsRead,
    LPVOID lpReserved
    );

#define WriteConsoleW __imported_name(WriteConsoleW)
extern WINBOOL
 __imported_stdcall(WriteConsoleW)(
    HANDLE hConsoleOutput,
    CONST VOID *lpBuffer,
    DWORD nNumberOfCharsToWrite,
    LPDWORD lpNumberOfCharsWritten,
    LPVOID lpReserved
    );

#define WNetAddConnectionW __imported_name(WNetAddConnectionW)
extern DWORD  __imported_stdcall(WNetAddConnectionW)(
     LPCWSTR   lpRemoteName,
     LPCWSTR   lpPassword,
     LPCWSTR   lpLocalName
    );

#define WNetAddConnection2W __imported_name(WNetAddConnection2W)
extern DWORD  __imported_stdcall(WNetAddConnection2W)(
     LPNETRESOURCE lpNetResource,
     LPCWSTR       lpPassword,
     LPCWSTR       lpUserName,
     DWORD          dwFlags
    );

#define WNetAddConnection3W __imported_name(WNetAddConnection3W)
extern DWORD  __imported_stdcall(WNetAddConnection3W)(
     HWND           hwndOwner,
     LPNETRESOURCE lpNetResource,
     LPCWSTR       lpPassword,
     LPCWSTR       lpUserName,
     DWORD          dwFlags
    );

#define WNetCancelConnectionW __imported_name(WNetCancelConnectionW)
extern DWORD  __imported_stdcall(WNetCancelConnectionW)(
     LPCWSTR lpName,
     WINBOOL     fForce
    );

#define WNetCancelConnection2W __imported_name(WNetCancelConnection2W)
extern DWORD  __imported_stdcall(WNetCancelConnection2W)(
     LPCWSTR lpName,
     DWORD    dwFlags,
     WINBOOL     fForce
    );

#define WNetGetConnectionW __imported_name(WNetGetConnectionW)
extern DWORD  __imported_stdcall(WNetGetConnectionW)(
     LPCWSTR lpLocalName,
     LPWSTR  lpRemoteName,
     LPDWORD  lpnLength
    );

#define WNetUseConnectionW __imported_name(WNetUseConnectionW)
extern DWORD  __imported_stdcall(WNetUseConnectionW)(
    HWND            hwndOwner,
    LPNETRESOURCE  lpNetResource,
    LPCWSTR        lpUserID,
    LPCWSTR        lpPassword,
    DWORD           dwFlags,
    LPWSTR         lpAccessName,
    LPDWORD         lpBufferSize,
    LPDWORD         lpResult
    );

#define WNetSetConnectionW __imported_name(WNetSetConnectionW)
extern DWORD  __imported_stdcall(WNetSetConnectionW)(
    LPCWSTR    lpName,
    DWORD       dwProperties,
    LPVOID      pvValues
    );

#define WNetConnectionDialog1W __imported_name(WNetConnectionDialog1W)
extern DWORD  __imported_stdcall(WNetConnectionDialog1W)(
    LPCONNECTDLGSTRUCT lpConnDlgStruct
    );

#define WNetDisconnectDialog1W __imported_name(WNetDisconnectDialog1W)
extern DWORD  __imported_stdcall(WNetDisconnectDialog1W)(
    LPDISCDLGSTRUCT lpConnDlgStruct
    );

#define WNetOpenEnumW __imported_name(WNetOpenEnumW)
extern DWORD  __imported_stdcall(WNetOpenEnumW)(
     DWORD          dwScope,
     DWORD          dwType,
     DWORD          dwUsage,
     LPNETRESOURCE lpNetResource,
     LPHANDLE       lphEnum
    );

#define WNetEnumResourceW __imported_name(WNetEnumResourceW)
extern DWORD  __imported_stdcall(WNetEnumResourceW)(
     HANDLE  hEnum,
     LPDWORD lpcCount,
     LPVOID  lpBuffer,
     LPDWORD lpBufferSize
    );

#define WNetGetUniversalNameW __imported_name(WNetGetUniversalNameW)
extern DWORD  __imported_stdcall(WNetGetUniversalNameW)(
     LPCWSTR lpLocalPath,
     DWORD    dwInfoLevel,
     LPVOID   lpBuffer,
     LPDWORD  lpBufferSize
     );

#define WNetGetUserW __imported_name(WNetGetUserW)
extern DWORD  __imported_stdcall(WNetGetUserW)(
     LPCWSTR  lpName,
     LPWSTR   lpUserName,
     LPDWORD   lpnLength
    );

#define WNetGetProviderNameW __imported_name(WNetGetProviderNameW)
extern DWORD  __imported_stdcall(WNetGetProviderNameW)(
    DWORD   dwNetType,
    LPWSTR lpProviderName,
    LPDWORD lpBufferSize
    );

#define WNetGetNetworkInformationW __imported_name(WNetGetNetworkInformationW)
extern DWORD  __imported_stdcall(WNetGetNetworkInformationW)(
    LPCWSTR          lpProvider,
    LPNETINFOSTRUCT   lpNetInfoStruct
    );

#define WNetGetLastErrorW __imported_name(WNetGetLastErrorW)
extern DWORD  __imported_stdcall(WNetGetLastErrorW)(
     LPDWORD    lpError,
     LPWSTR    lpErrorBuf,
     DWORD      nErrorBufSize,
     LPWSTR    lpNameBuf,
     DWORD      nNameBufSize
    );

#define MultinetGetConnectionPerformanceW __imported_name(MultinetGetConnectionPerformanceW)
extern DWORD  __imported_stdcall(MultinetGetConnectionPerformanceW)(
        LPNETRESOURCE lpNetResource,
        LPNETCONNECTINFOSTRUCT lpNetConnectInfoStruct
        );

#define ChangeServiceConfigW __imported_name(ChangeServiceConfigW)
extern WINBOOL
 __imported_stdcall(ChangeServiceConfigW)(
    SC_HANDLE    hService,
    DWORD        dwServiceType,
    DWORD        dwStartType,
    DWORD        dwErrorControl,
    LPCWSTR     lpBinaryPathName,
    LPCWSTR     lpLoadOrderGroup,
    LPDWORD      lpdwTagId,
    LPCWSTR     lpDependencies,
    LPCWSTR     lpServiceStartName,
    LPCWSTR     lpPassword,
    LPCWSTR     lpDisplayName
    );

#define CreateServiceW __imported_name(CreateServiceW)
extern SC_HANDLE
 __imported_stdcall(CreateServiceW)(
    SC_HANDLE    hSCManager,
    LPCWSTR     lpServiceName,
    LPCWSTR     lpDisplayName,
    DWORD        dwDesiredAccess,
    DWORD        dwServiceType,
    DWORD        dwStartType,
    DWORD        dwErrorControl,
    LPCWSTR     lpBinaryPathName,
    LPCWSTR     lpLoadOrderGroup,
    LPDWORD      lpdwTagId,
    LPCWSTR     lpDependencies,
    LPCWSTR     lpServiceStartName,
    LPCWSTR     lpPassword
    );

#define EnumDependentServicesW __imported_name(EnumDependentServicesW)
extern WINBOOL
 __imported_stdcall(EnumDependentServicesW)(
    SC_HANDLE               hService,
    DWORD                   dwServiceState,
    LPENUM_SERVICE_STATUS  lpServices,
    DWORD                   cbBufSize,
    LPDWORD                 pcbBytesNeeded,
    LPDWORD                 lpServicesReturned
    );

#define EnumServicesStatusW __imported_name(EnumServicesStatusW)
extern WINBOOL
 __imported_stdcall(EnumServicesStatusW)(
    SC_HANDLE               hSCManager,
    DWORD                   dwServiceType,
    DWORD                   dwServiceState,
    LPENUM_SERVICE_STATUS  lpServices,
    DWORD                   cbBufSize,
    LPDWORD                 pcbBytesNeeded,
    LPDWORD                 lpServicesReturned,
    LPDWORD                 lpResumeHandle
    );

#define GetServiceKeyNameW __imported_name(GetServiceKeyNameW)
extern WINBOOL
 __imported_stdcall(GetServiceKeyNameW)(
    SC_HANDLE               hSCManager,
    LPCWSTR                lpDisplayName,
    LPWSTR                 lpServiceName,
    LPDWORD                 lpcchBuffer
    );

#define GetServiceDisplayNameW __imported_name(GetServiceDisplayNameW)
extern WINBOOL
 __imported_stdcall(GetServiceDisplayNameW)(
    SC_HANDLE               hSCManager,
    LPCWSTR                lpServiceName,
    LPWSTR                 lpDisplayName,
    LPDWORD                 lpcchBuffer
    );

#define OpenSCManagerW __imported_name(OpenSCManagerW)
extern SC_HANDLE
 __imported_stdcall(OpenSCManagerW)(
    LPCWSTR lpMachineName,
    LPCWSTR lpDatabaseName,
    DWORD   dwDesiredAccess
    );

#define OpenServiceW __imported_name(OpenServiceW)
extern SC_HANDLE
 __imported_stdcall(OpenServiceW)(
    SC_HANDLE   hSCManager,
    LPCWSTR    lpServiceName,
    DWORD       dwDesiredAccess
    );

#define QueryServiceConfigW __imported_name(QueryServiceConfigW)
extern WINBOOL
 __imported_stdcall(QueryServiceConfigW)(
    SC_HANDLE               hService,
    LPQUERY_SERVICE_CONFIG lpServiceConfig,
    DWORD                   cbBufSize,
    LPDWORD                 pcbBytesNeeded
    );

#define QueryServiceLockStatusW __imported_name(QueryServiceLockStatusW)
extern WINBOOL
 __imported_stdcall(QueryServiceLockStatusW)(
    SC_HANDLE                       hSCManager,
    LPQUERY_SERVICE_LOCK_STATUS    lpLockStatus,
    DWORD                           cbBufSize,
    LPDWORD                         pcbBytesNeeded
    );

#define RegisterServiceCtrlHandlerW __imported_name(RegisterServiceCtrlHandlerW)
extern SERVICE_STATUS_HANDLE
 __imported_stdcall(RegisterServiceCtrlHandlerW)(
    LPCWSTR             lpServiceName,
    LPHANDLER_FUNCTION   lpHandlerProc
    );

#define StartServiceCtrlDispatcherW __imported_name(StartServiceCtrlDispatcherW)
extern WINBOOL
 __imported_stdcall(StartServiceCtrlDispatcherW)(
    LPSERVICE_TABLE_ENTRY    lpServiceStartTable
    );

#define StartServiceW __imported_name(StartServiceW)
extern WINBOOL
 __imported_stdcall(StartServiceW)(
    SC_HANDLE            hService,
    DWORD                dwNumServiceArgs,
    LPCWSTR             *lpServiceArgVectors
    );

/* Extensions to OpenGL */

#define wglUseFontBitmapsW __imported_name(wglUseFontBitmapsW)
extern WINBOOL  __imported_stdcall(wglUseFontBitmapsW)(HDC, DWORD, DWORD, DWORD);

#define wglUseFontOutlinesW __imported_name(wglUseFontOutlinesW)
extern WINBOOL  __imported_stdcall(wglUseFontOutlinesW)(HDC, DWORD, DWORD, DWORD, FLOAT,
		    FLOAT, int, LPGLYPHMETRICSFLOAT);

/* ------------------------------------- */
/* From shellapi.h in old Cygnus headers */

#define DragQueryFileW __imported_name(DragQueryFileW)
extern unsigned int  __imported_stdcall(DragQueryFileW)(HDROP, unsigned int, LPCWSTR, unsigned int);

#define ExtractAssociatedIconW __imported_name(ExtractAssociatedIconW)
extern HICON  __imported_stdcall(ExtractAssociatedIconW)(HINSTANCE, LPCWSTR, WORD *);

#define ExtractIconW __imported_name(ExtractIconW)
extern HICON  __imported_stdcall(ExtractIconW)(HINSTANCE, const LPCWSTR, unsigned int);

#define FindExecutableW __imported_name(FindExecutableW)
extern HINSTANCE  __imported_stdcall(FindExecutableW)(const LPCWSTR, const LPCWSTR, LPCWSTR);

#define ShellAboutW __imported_name(ShellAboutW)
extern int  __imported_stdcall(ShellAboutW)(HWND, const LPCWSTR, const LPCWSTR, HICON);

#define ShellExecuteW __imported_name(ShellExecuteW)
extern HINSTANCE  __imported_stdcall(ShellExecuteW)(HWND, const LPCWSTR, const LPCWSTR, LPCWSTR, const LPCWSTR, int);

/* end of stuff from shellapi.h in old Cygnus headers */
/* -------------------------------------------------- */
/* From ddeml.h in old Cygnus headers */

#define DdeCreateStringHandleW __imported_name(DdeCreateStringHandleW)
extern HSZ  __imported_stdcall(DdeCreateStringHandleW)(DWORD, LPCWSTR, int);

#define DdeInitializeW __imported_name(DdeInitializeW)
extern UINT  __imported_stdcall(DdeInitializeW)(DWORD *, CALLB, DWORD, DWORD);

#define DdeQueryStringW __imported_name(DdeQueryStringW)
extern DWORD  __imported_stdcall(DdeQueryStringW)(DWORD, HSZ, LPCWSTR, DWORD, int);

/* end of stuff from ddeml.h in old Cygnus headers */
/* ----------------------------------------------- */

#define LogonUserW __imported_name(LogonUserW)
extern WINBOOL  __imported_stdcall(LogonUserW)(LPWSTR, LPWSTR, LPWSTR, DWORD, DWORD, HANDLE *);
#define CreateProcessAsUserW __imported_name(CreateProcessAsUserW)
extern WINBOOL  __imported_stdcall(CreateProcessAsUserW)(HANDLE, LPCWSTR, LPWSTR,
			SECURITY_ATTRIBUTES*, SECURITY_ATTRIBUTES*, WINBOOL,
			DWORD, LPVOID, LPCWSTR, STARTUPINFO*,
			PROCESS_INFORMATION*);

#define PlaySoundW __imported_name(PlaySoundW)
extern WINBOOL  __imported_stdcall(PlaySoundW)(LPCWSTR pszSound, HMODULE hmod, DWORD fdwSound);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* RC_INVOKED */

#endif /* _GNU_H_WINDOWS32_UNICODEFUNCTIONS */
