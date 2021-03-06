  ;wingdi
  ;for SetPixelFormat
  PFD_DRAW_TO_WINDOW equ 0x00000004
  PFD_SUPPORT_OPENGL equ 0x00000020
  PFD_NEED_PALETTE equ 0x00000080 ; Colors in the palette should be specified according to the values of the cRedBits, cRedShift, cGreenBits, cGreenShift, cBluebits, and cBlueShift members
  PFD_DOUBLEBUFFER equ 0x00000001
  PFD_TYPE_RGBA equ 0
  PFD_MAIN_PLANE equ 0

  ;winuser
  ;for ChangeDisplaySettings  
  DISP_CHANGE_SUCCESSFUL equ 0
  DISP_CHANGE_RESTART equ 1
  DISP_CHANGE_FAILED equ -1
  DISP_CHANGE_BADMODE equ -2
  DISP_CHANGE_NOTUPDATED equ -3
  DISP_CHANGE_BADFLAGS equ -4
  DISP_CHANGE_BADPARAM equ -5
  DISP_CHANGE_BADDUALVIEW equ -6

  CDS_ZERO equ 0 ; The graphics mode for the current screen will be changed dynamically.
  CDS_UPDATEREGISTRY equ 0x00000001
  CDS_TEST equ 0x00000002
  CDS_FULLSCREEN equ 0x00000004
  CDS_GLOBAL equ 0x00000008
  CDS_SET_PRIMARY equ 0x00000010
  CDS_VIDEOPARAMETERS equ 0x00000020
  CDS_RESET equ 0x40000000
  CDS_RESET_EX equ 0x20000000
  CDS_NORESET equ 0x10000000  

  DM_POSITION equ 0x00000020
  DM_BITSPERPEL equ 0x00040000
  DM_PELSWIDTH equ 0x00080000
  DM_PELSHEIGHT equ 0x00100000
  DM_DISPLAYFLAGS equ 0x00200000
  DM_DISPLAYFREQUENCY equ 0x00400000

  ;for EnumDisplaySettings
  ENUM_CURRENT_SETTINGS equ DWORD -1
  ENUM_REGISTRY_SETTINGS equ DWORD -2