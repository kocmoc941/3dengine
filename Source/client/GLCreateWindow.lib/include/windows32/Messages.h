/* 
   Messages.h

   Windows32 API message definitions

   Copyright (C) 1996 Free Software Foundation, Inc.

   Author: Scott Christley <scottc@net-community.com>

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
/* WARNING:  This file is automatically generated. */

#ifndef _GNU_H_WINDOWS32_MESSAGES
#define _GNU_H_WINDOWS32_MESSAGES

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Application bar */

/* Application bar notifications */

/* Animation Control */
#define ACM_OPENW	(1127)
#define ACM_OPENA	(1124)
#ifdef UNICODE
#define ACM_OPEN ACM_OPENW
#else
#define ACM_OPEN ACM_OPENA
#endif /* UNICODE */
#define ACM_PLAY	(1125)
#define ACM_STOP	(1126)
#define ACN_START	(1)
#define ACN_STOP	(2)

/* Buttons */
#define BM_CLICK	(245)
#define BM_GETCHECK	(240)
#define BM_GETIMAGE	(246)
#define BM_GETSTATE	(242)
#define BM_SETCHECK	(241)
#define BM_SETIMAGE	(247)
#define BM_SETSTATE	(243)
#define BM_SETSTYLE	(244)
#define BN_CLICKED	(0)
#define BN_DBLCLK	(5)
#define BN_DISABLE	(4)
#define BN_DOUBLECLICKED	(5)
#define BN_HILITE	(2)
#define BN_KILLFOCUS	(7)
#define BN_PAINT	(1)
#define BN_PUSHED	(2)
#define BN_SETFOCUS	(6)
#define BN_UNHILITE	(3)
#define BN_UNPUSHED	(3)

/* Combo Box */
#define CB_ADDSTRING	(323)
#define CB_DELETESTRING	(324)
#define CB_DIR	(325)
#define CB_FINDSTRING	(332)
#define CB_FINDSTRINGEXACT	(344)
#define CB_GETCOUNT	(326)
#define CB_GETCURSEL	(327)
#define CB_GETDROPPEDCONTROLRECT	(338)
#define CB_GETDROPPEDSTATE	(343)
#define CB_GETDROPPEDWIDTH	(351)
#define CB_GETEDITSEL	(320)
#define CB_GETEXTENDEDUI	(342)
#define CB_GETHORIZONTALEXTENT	(349)
#define CB_GETITEMDATA	(336)
#define CB_GETITEMHEIGHT	(340)
#define CB_GETLBTEXT	(328)
#define CB_GETLBTEXTLEN	(329)
#define CB_GETLOCALE	(346)
#define CB_GETTOPINDEX	(347)
#define CB_INITSTORAGE	(353)
#define CB_INSERTSTRING	(330)
#define CB_LIMITTEXT	(321)
#define CB_RESETCONTENT	(331)
#define CB_SELECTSTRING	(333)
#define CB_SETCURSEL	(334)
#define CB_SETDROPPEDWIDTH	(352)
#define CB_SETEDITSEL	(322)
#define CB_SETEXTENDEDUI	(341)
#define CB_SETHORIZONTALEXTENT	(350)
#define CB_SETITEMDATA	(337)
#define CB_SETITEMHEIGHT	(339)
#define CB_SETLOCALE	(345)
#define CB_SETTOPINDEX	(348)
#define CB_SHOWDROPDOWN	(335)

/* Combo Box notifications */
#define CBN_CLOSEUP	(8)
#define CBN_DBLCLK	(2)
#define CBN_DROPDOWN	(7)
#define CBN_EDITCHANGE	(5)
#define CBN_EDITUPDATE	(6)
#define CBN_ERRSPACE	(-1)
#define CBN_KILLFOCUS	(4)
#define CBN_SELCHANGE	(1)
#define CBN_SELENDCANCEL	(10)
#define CBN_SELENDOK	(9)
#define CBN_SETFOCUS	(3)

/* Control Panel */

/* Device messages */

/* Drag list box */
#define DL_BEGINDRAG	(1157)
#define DL_CANCELDRAG	(1160)
#define DL_DRAGGING	(1158)
#define DL_DROPPED	(1159)

/* Default push button */
#define DM_GETDEFID	(1024)
#define DM_REPOSITION	(1026)
#define DM_SETDEFID	(1025)

/* RTF control */
#define EM_CANPASTE	(1074)
#define EM_CANUNDO	(198)
#define EM_CHARFROMPOS	(215)
#define EM_DISPLAYBAND	(1075)
#define EM_EMPTYUNDOBUFFER	(205)
#define EM_EXGETSEL	(1076)
#define EM_EXLIMITTEXT	(1077)
#define EM_EXLINEFROMCHAR	(1078)
#define EM_EXSETSEL	(1079)
#define EM_FINDTEXT	(1080)
#define EM_FINDTEXTEX	(1103)
#define EM_FINDWORDBREAK	(1100)
#define EM_FMTLINES	(200)
#define EM_FORMATRANGE	(1081)
#define EM_GETCHARFORMAT	(1082)
#define EM_GETEVENTMASK	(1083)
#define EM_GETFIRSTVISIBLELINE	(206)
#define EM_GETHANDLE	(189)
#define EM_GETLIMITTEXT	(213)
#define EM_GETLINE	(196)
#define EM_GETLINECOUNT	(186)
#define EM_GETMARGINS	(212)
#define EM_GETMODIFY	(184)
#define EM_GETIMECOLOR	(1129)
#define EM_GETIMEOPTIONS	(1131)
#define EM_GETOPTIONS	(1102)
#define EM_GETOLEINTERFACE	(1084)
#define EM_GETPARAFORMAT	(1085)
#define EM_GETPASSWORDCHAR	(210)
#define EM_GETPUNCTUATION	(1125)
#define EM_GETRECT	(178)
#define EM_GETSEL	(176)
#define EM_GETSELTEXT	(1086)
#define EM_GETTEXTRANGE	(1099)
#define EM_GETTHUMB	(190)
#define EM_GETWORDBREAKPROC	(209)
#define EM_GETWORDBREAKPROCEX	(1104)
#define EM_GETWORDWRAPMODE	(1127)
#define EM_HIDESELECTION	(1087)
#define EM_LIMITTEXT	(197)
#define EM_LINEFROMCHAR	(201)
#define EM_LINEINDEX	(187)
#define EM_LINELENGTH	(193)
#define EM_LINESCROLL	(182)
#define EM_PASTESPECIAL	(1088)
#define EM_POSFROMCHAR	(214)
#define EM_REPLACESEL	(194)
#define EM_REQUESTRESIZE	(1089)
#define EM_SCROLL	(181)
#define EM_SCROLLCARET	(183)
#define EM_SELECTIONTYPE	(1090)
#define EM_SETBKGNDCOLOR	(1091)
#define EM_SETCHARFORMAT	(1092)
#define EM_SETEVENTMASK	(1093)
#define EM_SETHANDLE	(188)
#define EM_SETIMECOLOR	(1128)
#define EM_SETIMEOPTIONS	(1130)
#define EM_SETLIMITTEXT	(197)
#define EM_SETMARGINS	(211)
#define EM_SETMODIFY	(185)
#define EM_SETOLECALLBACK	(1094)
#define EM_SETOPTIONS	(1101)
#define EM_SETPARAFORMAT	(1095)
#define EM_SETPASSWORDCHAR	(204)
#define EM_SETPUNCTUATION	(1124)
#define EM_SETREADONLY	(207)
#define EM_SETRECT	(179)
#define EM_SETRECTNP	(180)
#define EM_SETSEL	(177)
#define EM_SETTABSTOPS	(203)
#define EM_SETTARGETDEVICE	(1096)
#define EM_SETWORDBREAKPROC	(208)
#define EM_SETWORDBREAKPROCEX	(1105)
#define EM_SETWORDWRAPMODE	(1126)
#define EM_STREAMIN	(1097)
#define EM_STREAMOUT	(1098)
#define EM_UNDO	(199)

/* Edit control */
#define EN_CHANGE	(768)
#define EN_CORRECTTEXT	(1797)
#define EN_DROPFILES	(1795)
#define EN_ERRSPACE	(1280)
#define EN_HSCROLL	(1537)
#define EN_IMECHANGE	(1799)
#define EN_KILLFOCUS	(512)
#define EN_MAXTEXT	(1281)
#define EN_MSGFILTER	(1792)
#define EN_OLEOPFAILED	(1801)
#define EN_PROTECTED	(1796)
#define EN_REQUESTRESIZE	(1793)
#define EN_SAVECLIPBOARD	(1800)
#define EN_SELCHANGE	(1794)
#define EN_SETFOCUS	(256)
#define EN_STOPNOUNDO	(1798)
#define EN_UPDATE	(1024)
#define EN_VSCROLL	(1538)

/* File Manager extensions */

/* File Manager extensions DLL events */

/* Header control */
#define HDM_DELETEITEM	(4610)
#define HDM_GETITEMW	(4619)
#define HDM_INSERTITEMW	(4618)
#define HDM_SETITEMW	(4620)
#define HDM_GETITEMA	(4611)
#define HDM_INSERTITEMA	(4609)
#define HDM_SETITEMA	(4612)
#ifdef UNICODE
#define HDM_GETITEM HDM_GETITEMW
#define HDM_INSERTITEM HDM_INSERTITEMW
#define HDM_SETITEM HDM_SETITEMW
#else
#define HDM_GETITEM HDM_GETITEMA
#define HDM_INSERTITEM HDM_INSERTITEMA
#define HDM_SETITEM HDM_SETITEMA
#endif /* UNICODE */
#define HDM_GETITEMCOUNT	(4608)
#define HDM_HITTEST	(4614)
#define HDM_LAYOUT	(4613)

/* Header control notifications */
#define HDN_BEGINTRACKW	(-326)
#define HDN_DIVIDERDBLCLICKW	(-325)
#define HDN_ENDTRACKW	(-327)
#define HDN_ITEMCHANGEDW	(-321)
#define HDN_ITEMCHANGINGW	(-320)
#define HDN_ITEMCLICKW	(-322)
#define HDN_ITEMDBLCLICKW	(-323)
#define HDN_TRACKW	(-328)
#define HDN_BEGINTRACKA	(-306)
#define HDN_DIVIDERDBLCLICKA	(-305)
#define HDN_ENDTRACKA	(-307)
#define HDN_ITEMCHANGEDA	(-301)
#define HDN_ITEMCHANGINGA	(-300)
#define HDN_ITEMCLICKA	(-302)
#define HDN_ITEMDBLCLICKA	(-303)
#define HDN_TRACKA	(-308)
#ifdef UNICODE
#define HDN_BEGINTRACK HDN_BEGINTRACKW
#define HDN_DIVIDERDBLCLICK HDN_DIVIDERDBLCLICKW
#define HDN_ENDTRACK HDN_ENDTRACKW
#define HDN_ITEMCHANGED HDN_ITEMCHANGEDW
#define HDN_ITEMCHANGING HDN_ITEMCHANGINGW
#define HDN_ITEMCLICK HDN_ITEMCLICKW
#define HDN_ITEMDBLCLICK HDN_ITEMDBLCLICKW
#define HDN_TRACK HDN_TRACKW
#else
#define HDN_BEGINTRACK HDN_BEGINTRACKA
#define HDN_DIVIDERDBLCLICK HDN_DIVIDERDBLCLICKA
#define HDN_ENDTRACK HDN_ENDTRACKA
#define HDN_ITEMCHANGED HDN_ITEMCHANGEDA
#define HDN_ITEMCHANGING HDN_ITEMCHANGINGA
#define HDN_ITEMCLICK HDN_ITEMCLICKA
#define HDN_ITEMDBLCLICK HDN_ITEMDBLCLICKA
#define HDN_TRACK HDN_TRACKA
#endif /* UNICODE */

/* Hot key control */
#define HKM_GETHOTKEY	(1026)
#define HKM_SETHOTKEY	(1025)
#define HKM_SETRULES	(1027)

/* List box */
#define LB_ADDFILE	(406)
#define LB_ADDSTRING	(384)
#define LB_DELETESTRING	(386)
#define LB_DIR	(397)
#define LB_FINDSTRING	(399)
#define LB_FINDSTRINGEXACT	(418)
#define LB_GETANCHORINDEX	(413)
#define LB_GETCARETINDEX	(415)
#define LB_GETCOUNT	(395)
#define LB_GETCURSEL	(392)
#define LB_GETHORIZONTALEXTENT	(403)
#define LB_GETITEMDATA	(409)
#define LB_GETITEMHEIGHT	(417)
#define LB_GETITEMRECT	(408)
#define LB_GETLOCALE	(422)
#define LB_GETSEL	(391)
#define LB_GETSELCOUNT	(400)
#define LB_GETSELITEMS	(401)
#define LB_GETTEXT	(393)
#define LB_GETTEXTLEN	(394)
#define LB_GETTOPINDEX	(398)
#define LB_INITSTORAGE	(424)
#define LB_INSERTSTRING	(385)
#define LB_ITEMFROMPOINT	(425)
#define LB_RESETCONTENT	(388)
#define LB_SELECTSTRING	(396)
#define LB_SELITEMRANGE	(411)
#define LB_SELITEMRANGEEX	(387)
#define LB_SETANCHORINDEX	(412)
#define LB_SETCARETINDEX	(414)
#define LB_SETCOLUMNWIDTH	(405)
#define LB_SETCOUNT	(423)
#define LB_SETCURSEL	(390)
#define LB_SETHORIZONTALEXTENT	(404)
#define LB_SETITEMDATA	(410)
#define LB_SETITEMHEIGHT	(416)
#define LB_SETLOCALE	(421)
#define LB_SETSEL	(389)
#define LB_SETTABSTOPS	(402)
#define LB_SETTOPINDEX	(407)

/* List box notifications */
#define LBN_DBLCLK	(2)
#define LBN_ERRSPACE	(-2)
#define LBN_KILLFOCUS	(5)
#define LBN_SELCANCEL	(3)
#define LBN_SELCHANGE	(1)
#define LBN_SETFOCUS	(4)

/* List view control */
#define LVM_ARRANGE	(4118)
#define LVM_CREATEDRAGIMAGE	(4129)
#define LVM_DELETEALLITEMS	(4105)
#define LVM_DELETECOLUMN	(4124)
#define LVM_DELETEITEM	(4104)
#define LVM_ENSUREVISIBLE	(4115)
#define LVM_GETBKCOLOR	(4096)
#define LVM_GETCALLBACKMASK	(4106)
#define LVM_GETCOLUMNWIDTH	(4125)
#define LVM_GETCOUNTPERPAGE	(4136)
#define LVM_GETEDITCONTROL	(4120)
#define LVM_GETIMAGELIST	(4098)
#define LVM_EDITLABELW	(4214)
#define LVM_FINDITEMW	(4179)
#define LVM_GETCOLUMNW	(4191)
#define LVM_GETISEARCHSTRINGW	(4213)
#define LVM_GETITEMW	(4171)
#define LVM_GETITEMTEXTW	(4211)
#define LVM_GETSTRINGWIDTHW	(4183)
#define LVM_INSERTCOLUMNW	(4193)
#define LVM_INSERTITEMW	(4173)
#define LVM_SETCOLUMNW	(4192)
#define LVM_SETITEMW	(4172)
#define LVM_SETITEMTEXTW	(4212)
#define LVM_EDITLABELA	(4119)
#define LVM_FINDITEMA	(4109)
#define LVM_GETCOLUMNA	(4121)
#define LVM_GETISEARCHSTRINGA	(4148)
#define LVM_GETITEMA	(4101)
#define LVM_GETITEMTEXTA	(4141)
#define LVM_GETSTRINGWIDTHA	(4113)
#define LVM_INSERTCOLUMNA	(4123)
#define LVM_INSERTITEMA	(4103)
#define LVM_SETCOLUMNA	(4122)
#define LVM_SETITEMA	(4102)
#define LVM_SETITEMTEXTA	(4142)
#ifdef UNICODE
#define LVM_EDITLABEL LVM_EDITLABELW
#define LVM_FINDITEM LVM_FINDITEMW
#define LVM_GETCOLUMN LVM_GETCOLUMNW
#define LVM_GETISEARCHSTRING LVM_GETISEARCHSTRINGW
#define LVM_GETITEM LVM_GETITEMW
#define LVM_GETITEMTEXT LVM_GETITEMTEXTW
#define LVM_GETSTRINGWIDTH LVM_GETSTRINGWIDTHW
#define LVM_INSERTCOLUMN LVM_INSERTCOLUMNW
#define LVM_INSERTITEM LVM_INSERTITEMW
#define LVM_SETCOLUMN LVM_SETCOLUMNW
#define LVM_SETITEM LVM_SETITEMW
#define LVM_SETITEMTEXT LVM_SETITEMTEXTW
#else
#define LVM_EDITLABEL LVM_EDITLABELA
#define LVM_FINDITEM LVM_FINDITEMA
#define LVM_GETCOLUMN LVM_GETCOLUMNA
#define LVM_GETISEARCHSTRING LVM_GETISEARCHSTRINGA
#define LVM_GETITEM LVM_GETITEMA
#define LVM_GETITEMTEXT LVM_GETITEMTEXTA
#define LVM_GETSTRINGWIDTH LVM_GETSTRINGWIDTHA
#define LVM_INSERTCOLUMN LVM_INSERTCOLUMNA
#define LVM_INSERTITEM LVM_INSERTITEMA
#define LVM_SETCOLUMN LVM_SETCOLUMNA
#define LVM_SETITEM LVM_SETITEMA
#define LVM_SETITEMTEXT LVM_SETITEMTEXTA
#endif /* UNICODE */
#define LVM_GETITEMCOUNT	(4100)
#define LVM_GETITEMPOSITION	(4112)
#define LVM_GETITEMRECT	(4110)
#define LVM_GETITEMSPACING	(4147)
#define LVM_GETITEMSTATE	(4140)
#define LVM_GETNEXTITEM	(4108)
#define LVM_GETORIGIN	(4137)
#define LVM_GETSELECTEDCOUNT	(4146)
#define LVM_GETTEXTBKCOLOR	(4133)
#define LVM_GETTEXTCOLOR	(4131)
#define LVM_GETTOPINDEX	(4135)
#define LVM_GETVIEWRECT	(4130)
#define LVM_HITTEST	(4114)
#define LVM_REDRAWITEMS	(4117)
#define LVM_SCROLL	(4116)
#define LVM_SETBKCOLOR	(4097)
#define LVM_SETCALLBACKMASK	(4107)
#define LVM_SETCOLUMNWIDTH	(4126)
#define LVM_SETIMAGELIST	(4099)
#define LVM_SETITEMCOUNT	(4143)
#define LVM_SETITEMPOSITION	(4111)
#define LVM_SETITEMPOSITION32	(4145)
#define LVM_SETITEMSTATE	(4139)
#define LVM_SETTEXTBKCOLOR	(4134)
#define LVM_SETTEXTCOLOR	(4132)
#define LVM_SORTITEMS	(4144)
#define LVM_UPDATE	(4138)

/* List view control notifications */
#define LVN_BEGINDRAG	(-109)
#define LVN_BEGINRDRAG	(-111)
#define LVN_COLUMNCLICK	(-108)
#define LVN_DELETEALLITEMS	(-104)
#define LVN_DELETEITEM	(-103)
#define LVN_BEGINLABELEDITW	(-175)
#define LVN_ENDLABELEDITW	(-176)
#define LVN_GETDISPINFOW	(-177)
#define LVN_SETDISPINFOW	(-178)
#define LVN_BEGINLABELEDITA	(-105)
#define LVN_ENDLABELEDITA	(-106)
#define LVN_GETDISPINFOA	(-150)
#define LVN_SETDISPINFOA	(-151)
#ifdef UNICODE
#define LVN_BEGINLABELEDIT LVN_BEGINLABELEDITW
#define LVN_ENDLABELEDIT LVN_ENDLABELEDITW
#define LVN_GETDISPINFO LVN_GETDISPINFOW
#define LVN_SETDISPINFO LVN_SETDISPINFOW
#else
#define LVN_BEGINLABELEDIT LVN_BEGINLABELEDITA
#define LVN_ENDLABELEDIT LVN_ENDLABELEDITA
#define LVN_GETDISPINFO LVN_GETDISPINFOA
#define LVN_SETDISPINFO LVN_SETDISPINFOA
#endif /* UNICODE */
#define LVN_INSERTITEM	(-102)
#define LVN_ITEMCHANGED	(-101)
#define LVN_ITEMCHANGING	(-100)
#define LVN_KEYDOWN	(-155)

/* Control notification */
#define NM_CLICK	(-2)
#define NM_DBLCLK	(-3)
#define NM_KILLFOCUS	(-8)
#define NM_OUTOFMEMORY	(-1)
#define NM_RCLICK	(-5)
#define NM_RDBLCLK	(-6)
#define NM_RETURN	(-4)
#define NM_SETFOCUS	(-7)

/* Power status */

/* Progress bar control */
#define PBM_DELTAPOS	(1027)
#define PBM_SETPOS	(1026)
#define PBM_SETRANGE	(1025)
#define PBM_SETSTEP	(1028)
#define PBM_STEPIT	(1029)

/* Property sheets */
#define PSM_ADDPAGE	(1127)
#define PSM_APPLY	(1134)
#define PSM_CANCELTOCLOSE	(1131)
#define PSM_CHANGED	(1128)
#define PSM_GETTABCONTROL	(1140)
#define PSM_GETCURRENTPAGEHWND	(1142)
#define PSM_ISDIALOGMESSAGE	(1141)
#define PSM_PRESSBUTTON	(1137)
#define PSM_QUERYSIBLINGS	(1132)
#define PSM_REBOOTSYSTEM	(1130)
#define PSM_REMOVEPAGE	(1126)
#define PSM_RESTARTWINDOWS	(1129)
#define PSM_SETCURSEL	(1125)
#define PSM_SETCURSELID	(1138)
#define PSM_SETFINISHTEXTW	(1145)
#define PSM_SETTITLEW	(1144)
#define PSM_SETFINISHTEXTA	(1139)
#define PSM_SETTITLEA	(1135)
#ifdef UNICODE
#define PSM_SETFINISHTEXT PSM_SETFINISHTEXTW
#define PSM_SETTITLE PSM_SETTITLEW
#else
#define PSM_SETFINISHTEXT PSM_SETFINISHTEXTA
#define PSM_SETTITLE PSM_SETTITLEA
#endif /* UNICODE */
#define PSM_SETWIZBUTTONS	(1136)
#define PSM_UNCHANGED	(1133)

/* Property sheet notifications */
#define PSN_APPLY	(-202)
#define PSN_HELP	(-205)
#define PSN_KILLACTIVE	(-201)
#define PSN_QUERYCANCEL	(-209)
#define PSN_RESET	(-203)
#define PSN_SETACTIVE	(-200)
#define PSN_WIZBACK	(-206)
#define PSN_WIZFINISH	(-208)
#define PSN_WIZNEXT	(-207)

/* Status window */
#define SB_GETBORDERS	(1031)
#define SB_GETPARTS	(1030)
#define SB_GETRECT	(1034)
#define SB_GETTEXTW	(1037)
#define SB_GETTEXTLENGTHW	(1036)
#define SB_SETTEXTW	(1035)
#define SB_GETTEXTA	(1026)
#define SB_GETTEXTLENGTHA	(1027)
#define SB_SETTEXTA	(1025)
#ifdef UNICODE
#define SB_GETTEXT SB_GETTEXTW
#define SB_GETTEXTLENGTH SB_GETTEXTLENGTHW
#define SB_SETTEXT SB_SETTEXTW
#else
#define SB_GETTEXT SB_GETTEXTA
#define SB_GETTEXTLENGTH SB_GETTEXTLENGTHA
#define SB_SETTEXT SB_SETTEXTA
#endif /* UNICODE */
#define SB_SETMINHEIGHT	(1032)
#define SB_SETPARTS	(1028)
#define SB_SIMPLE	(1033)

/* Scroll bar control */
#define SBM_ENABLE_ARROWS	(228)
#define SBM_GETPOS	(225)
#define SBM_GETRANGE	(227)
#define SBM_GETSCROLLINFO	(234)
#define SBM_SETPOS	(224)
#define SBM_SETRANGE	(226)
#define SBM_SETRANGEREDRAW	(230)
#define SBM_SETSCROLLINFO	(233)

/* Static control */
#define STM_GETICON	(369)
#define STM_GETIMAGE	(371)
#define STM_SETICON	(368)
#define STM_SETIMAGE	(370)

/* Static control notifications */
#define STN_CLICKED	(0)
#define STN_DBLCLK	(1)
#define STN_DISABLE	(3)
#define STN_ENABLE	(2)

/* Toolbar control */
#define TB_ADDBITMAP	(1043)
#define TB_ADDBUTTONS	(1044)
#define TB_AUTOSIZE	(1057)
#define TB_BUTTONCOUNT	(1048)
#define TB_BUTTONSTRUCTSIZE	(1054)
#define TB_CHANGEBITMAP	(1067)
#define TB_CHECKBUTTON	(1026)
#define TB_COMMANDTOINDEX	(1049)
#define TB_CUSTOMIZE	(1051)
#define TB_DELETEBUTTON	(1046)
#define TB_ENABLEBUTTON	(1025)
#define TB_GETBITMAP	(1068)
#define TB_GETBITMAPFLAGS	(1065)
#define TB_GETBUTTON	(1047)
#define TB_ADDSTRINGW	(1101)
#define TB_GETBUTTONTEXTW	(1099)
#define TB_SAVERESTOREW	(1100)
#define TB_ADDSTRINGA	(1052)
#define TB_GETBUTTONTEXTA	(1069)
#define TB_SAVERESTOREA	(1050)
#ifdef UNICODE
#define TB_ADDSTRING TB_ADDSTRINGW
#define TB_GETBUTTONTEXT TB_GETBUTTONTEXTW
#define TB_SAVERESTORE TB_SAVERESTOREW
#else
#define TB_ADDSTRING TB_ADDSTRINGA
#define TB_GETBUTTONTEXT TB_GETBUTTONTEXTA
#define TB_SAVERESTORE TB_SAVERESTOREA
#endif /* UNICODE */
#define TB_GETITEMRECT	(1053)
#define TB_GETROWS	(1064)
#define TB_GETSTATE	(1042)
#define TB_GETTOOLTIPS	(1059)
#define TB_HIDEBUTTON	(1028)
#define TB_INDETERMINATE	(1029)
#define TB_INSERTBUTTON	(1045)
#define TB_ISBUTTONCHECKED	(1034)
#define TB_ISBUTTONENABLED	(1033)
#define TB_ISBUTTONHIDDEN	(1036)
#define TB_ISBUTTONINDETERMINATE	(1037)
#define TB_ISBUTTONPRESSED	(1035)
#define TB_PRESSBUTTON	(1027)
#define TB_SETBITMAPSIZE	(1056)
#define TB_SETBUTTONSIZE	(1055)
#define TB_SETCMDID	(1066)
#define TB_SETPARENT	(1061)
#define TB_SETROWS	(1063)
#define TB_SETSTATE	(1041)
#define TB_SETTOOLTIPS	(1060)

/* Track bar control */
#define TBM_CLEARSEL	(1043)
#define TBM_CLEARTICS	(1033)
#define TBM_GETCHANNELRECT	(1050)
#define TBM_GETLINESIZE	(1048)
#define TBM_GETNUMTICS	(1040)
#define TBM_GETPAGESIZE	(1046)
#define TBM_GETPOS	(1024)
#define TBM_GETPTICS	(1038)
#define TBM_GETRANGEMAX	(1026)
#define TBM_GETRANGEMIN	(1025)
#define TBM_GETSELEND	(1042)
#define TBM_GETSELSTART	(1041)
#define TBM_GETTHUMBLENGTH	(1052)
#define TBM_GETTHUMBRECT	(1049)
#define TBM_GETTIC	(1027)
#define TBM_GETTICPOS	(1039)
#define TBM_SETLINESIZE	(1047)
#define TBM_SETPAGESIZE	(1045)
#define TBM_SETPOS	(1029)
#define TBM_SETRANGE	(1030)
#define TBM_SETRANGEMAX	(1032)
#define TBM_SETRANGEMIN	(1031)
#define TBM_SETSEL	(1034)
#define TBM_SETSELEND	(1036)
#define TBM_SETSELSTART	(1035)
#define TBM_SETTHUMBLENGTH	(1051)
#define TBM_SETTIC	(1028)
#define TBM_SETTICFREQ	(1044)

/* Tool bar control notifications */
#define	TBN_FIRST	(-700)
#define	TBN_LAST	(-720)
#define TBN_BEGINADJUST	(-703)
#define TBN_BEGINDRAG	(-701)
#define TBN_CUSTHELP	(-709)
#define TBN_ENDADJUST	(-704)
#define TBN_ENDDRAG	(-702)
#define TBN_GETBUTTONINFOW	(-720)
#define TBN_GETBUTTONINFOA	(-700)
#ifdef UNICODE
#define TBN_GETBUTTONINFO TBN_GETBUTTONINFOW
#else
#define TBN_GETBUTTONINFO TBN_GETBUTTONINFOA
#endif /* UNICODE */
#define TBN_QUERYDELETE	(-707)
#define TBN_QUERYINSERT	(-706)
#define TBN_RESET	(-705)
#define TBN_TOOLBARCHANGE	(-708)

/* Tab control */
#define TCM_ADJUSTRECT	(4904)
#define TCM_DELETEALLITEMS	(4873)
#define TCM_DELETEITEM	(4872)
#define TCM_GETCURFOCUS	(4911)
#define TCM_GETCURSEL	(4875)
#define TCM_GETIMAGELIST	(4866)
#define TCM_GETITEMW	(4924)
#define TCM_INSERTITEMW	(4926)
#define TCM_SETITEMW	(4925)
#define TCM_GETITEMA	(4869)
#define TCM_INSERTITEMA	(4871)
#define TCM_SETITEMA	(4870)
#ifdef UNICODE
#define TCM_GETITEM TCM_GETITEM
#define TCM_INSERTITEM TCM_INSERTITEMW
#define TCM_SETITEM TCM_SETITEMW
#else
#define TCM_GETITEM TCM_GETITEMA
#define TCM_INSERTITEM TCM_INSERTITEMA
#define TCM_SETITEM TCM_SETITEMA
#endif /* UNICODE */
#define TCM_GETITEMCOUNT	(4868)
#define TCM_GETITEMRECT	(4874)
#define TCM_GETROWCOUNT	(4908)
#define TCM_GETTOOLTIPS	(4909)
#define TCM_HITTEST	(4877)
#define TCM_REMOVEIMAGE	(4906)
#define TCM_SETCURFOCUS	(4912)
#define TCM_SETCURSEL	(4876)
#define TCM_SETIMAGELIST	(4867)
#define TCM_SETITEMEXTRA	(4878)
#define TCM_SETITEMSIZE	(4905)
#define TCM_SETPADDING	(4907)
#define TCM_SETTOOLTIPS	(4910)

/* Tab control notifications */
#define TCN_KEYDOWN	(-550)
#define TCN_SELCHANGE	(-551)
#define TCN_SELCHANGING	(-552)

/* Tool tip control */
#define TTM_ACTIVATE	(1025)
#define TTM_ADDTOOLW	(1074)
#define TTM_DELTOOLW	(1075)
#define TTM_ENUMTOOLSW	(1082)
#define TTM_GETCURRENTTOOLW	(1083)
#define TTM_GETTEXTW	(1080)
#define TTM_GETTOOLINFOW	(1077)
#define TTM_HITTESTW	(1079)
#define TTM_NEWTOOLRECTW	(1076)
#define TTM_SETTOOLINFOW	(1078)
#define TTM_UPDATETIPTEXTW	(1081)
#define TTM_ADDTOOLA	(1028)
#define TTM_DELTOOLA	(1029)
#define TTM_ENUMTOOLSA	(1038)
#define TTM_GETCURRENTTOOLA	(1039)
#define TTM_GETTEXTA	(1035)
#define TTM_GETTOOLINFOA	(1032)
#define TTM_HITTESTA	(1034)
#define TTM_NEWTOOLRECTA	(1030)
#define TTM_SETTOOLINFOA	(1033)
#define TTM_UPDATETIPTEXTA	(1036)
#ifdef UNICODE
#define TTM_ADDTOOL TTM_ADDTOOLW
#define TTM_DELTOOL TTM_DELTOOLW
#define TTM_ENUMTOOLS TTM_ENUMTOOLSW
#define TTM_GETCURRENTTOOL TTM_GETCURRENTTOOLW
#define TTM_GETTEXT TTM_GETTEXTW
#define TTM_GETTOOLINFO TTM_GETTOOLINFOW
#define TTM_HITTEST TTM_HITTESTW
#define TTM_NEWTOOLRECT TTM_NEWTOOLRECTW
#define TTM_SETTOOLINFO TTM_SETTOOLINFOW
#define TTM_UPDATETIPTEXT TTM_UPDATETIPTEXTW
#else
#define TTM_ADDTOOL TTM_ADDTOOLA
#define TTM_DELTOOL TTM_DELTOOLA
#define TTM_ENUMTOOLS TTM_ENUMTOOLSA
#define TTM_GETCURRENTTOOL TTM_GETCURRENTTOOLA
#define TTM_GETTEXT TTM_GETTEXTA
#define TTM_GETTOOLINFO TTM_GETTOOLINFOA
#define TTM_HITTEST TTM_HITTESTA
#define TTM_NEWTOOLRECT TTM_NEWTOOLRECTA
#define TTM_SETTOOLINFO TTM_SETTOOLINFOA
#define TTM_UPDATETIPTEXT TTM_UPDATETIPTEXTA
#endif /* UNICODE */
#define TTM_GETTOOLCOUNT	(1037)
#define TTM_RELAYEVENT	(1031)
#define TTM_SETDELAYTIME	(1027)
#define TTM_WINDOWFROMPOINT	(1040)

/* Tool tip control notification */
#define TTN_NEEDTEXTW	(-530)
#define TTN_NEEDTEXTA	(-520)
#ifdef UNICODE
#define TTN_NEEDTEXT TTN_NEEDTEXTW
#else
#define TTN_NEEDTEXT TTN_NEEDTEXTA
#endif /* UNICODE */
#define TTN_POP	(-522)
#define TTN_SHOW	(-521)

/* Tree view control */
#define TVM_CREATEDRAGIMAGE	(4370)
#define TVM_DELETEITEM	(4353)
#define TVM_ENDEDITLABELNOW	(4374)
#define TVM_ENSUREVISIBLE	(4372)
#define TVM_EXPAND	(4354)
#define TVM_GETCOUNT	(4357)
#define TVM_GETEDITCONTROL	(4367)
#define TVM_GETIMAGELIST	(4360)
#define TVM_GETINDENT	(4358)
#define TVM_GETITEMRECT	(4356)
#define TVM_GETNEXTITEM	(4362)
#define TVM_GETVISIBLECOUNT	(4368)
#define TVM_HITTEST	(4369)
#define TVM_EDITLABELW	(4417)
#define TVM_GETISEARCHSTRINGW	(4416)
#define TVM_GETITEMW	(4414)
#define TVM_INSERTITEMW	(4402)
#define TVM_SETITEMW	(4415)
#define TVM_EDITLABELA	(4366)
#define TVM_GETISEARCHSTRINGA	(4375)
#define TVM_GETITEMA	(4364)
#define TVM_INSERTITEMA	(4352)
#define TVM_SETITEMA	(4365)
#ifdef UNICODE
#define TVM_EDITLABEL TVM_EDITLABELW
#define TVM_GETISEARCHSTRING TVM_GETISEARCHSTRINGW
#define TVM_GETITEM TVM_GETITEMW
#define TVM_INSERTITEM TVM_INSERTITEMW
#define TVM_SETITEM TVM_SETITEMW
#else
#define TVM_EDITLABEL TVM_EDITLABELA
#define TVM_GETISEARCHSTRING TVM_GETISEARCHSTRINGA
#define TVM_GETITEM TVM_GETITEMA
#define TVM_INSERTITEM TVM_INSERTITEMA
#define TVM_SETITEM TVM_SETITEMA
#endif /* UNICODE */
#define TVM_SELECTITEM	(4363)
#define TVM_SETIMAGELIST	(4361)
#define TVM_SETINDENT	(4359)
#define TVM_SORTCHILDREN	(4371)
#define TVM_SORTCHILDRENCB	(4373)

/* Tree view control notification */
#define TVN_KEYDOWN	(-412)
#define TVN_BEGINDRAGW	(-456)
#define TVN_BEGINLABELEDITW	(-459)
#define TVN_BEGINRDRAGW	(-457)
#define TVN_DELETEITEMW	(-458)
#define TVN_ENDLABELEDITW	(-460)
#define TVN_GETDISPINFOW	(-452)
#define TVN_ITEMEXPANDEDW	(-455)
#define TVN_ITEMEXPANDINGW	(-454)
#define TVN_SELCHANGEDW	(-451)
#define TVN_SELCHANGINGW	(-450)
#define TVN_SETDISPINFOW	(-453)
#define TVN_BEGINDRAGA	(-407)
#define TVN_BEGINLABELEDITA	(-410)
#define TVN_BEGINRDRAGA	(-408)
#define TVN_DELETEITEMA	(-409)
#define TVN_ENDLABELEDITA	(-411)
#define TVN_GETDISPINFOA	(-403)
#define TVN_ITEMEXPANDEDA	(-406)
#define TVN_ITEMEXPANDINGA	(-405)
#define TVN_SELCHANGEDA	(-402)
#define TVN_SELCHANGINGA	(-401)
#define TVN_SETDISPINFOA	(-404)
#ifdef UNICODE
#define TVN_BEGINDRAG TVN_BEGINDRAGW
#define TVN_BEGINLABELEDIT TVN_BEGINLABELEDITW
#define TVN_BEGINRDRAG TVN_BEGINRDRAGW
#define TVN_DELETEITEM TVN_DELETEITEMW
#define TVN_ENDLABELEDIT TVN_ENDLABELEDITW
#define TVN_GETDISPINFO TVN_GETDISPINFOW
#define TVN_ITEMEXPANDED TVN_ITEMEXPANDEDW
#define TVN_ITEMEXPANDING TVN_ITEMEXPANDINGW
#define TVN_SELCHANGED TVN_SELCHANGEDW
#define TVN_SELCHANGING TVN_SELCHANGINGW
#define TVN_SETDISPINFO TVN_SETDISPINFOW
#else
#define TVN_BEGINDRAG TVN_BEGINDRAGA
#define TVN_BEGINLABELEDIT TVN_BEGINLABELEDITA
#define TVN_BEGINRDRAG TVN_BEGINRDRAGA
#define TVN_DELETEITEM TVN_DELETEITEMA
#define TVN_ENDLABELEDIT TVN_ENDLABELEDITA
#define TVN_GETDISPINFO TVN_GETDISPINFOA
#define TVN_ITEMEXPANDED TVN_ITEMEXPANDEDA
#define TVN_ITEMEXPANDING TVN_ITEMEXPANDINGA
#define TVN_SELCHANGED TVN_SELCHANGEDA
#define TVN_SELCHANGING TVN_SELCHANGINGA
#define TVN_SETDISPINFO TVN_SETDISPINFOA
#endif /* UNICODE */

/* Up/down control */
#define UDM_GETACCEL	(1132)
#define UDM_GETBASE	(1134)
#define UDM_GETBUDDY	(1130)
#define UDM_GETPOS	(1128)
#define UDM_GETRANGE	(1126)
#define UDM_SETACCEL	(1131)
#define UDM_SETBASE	(1133)
#define UDM_SETBUDDY	(1129)
#define UDM_SETPOS	(1127)
#define UDM_SETRANGE	(1125)

/* Up/down control notification */
#define UDN_DELTAPOS	(-722)

/* Window messages */

#define WM_ACTIVATE	(6)
#define WM_ACTIVATEAPP	(28)
#define WM_ASKCBFORMATNAME	(780)
#define WM_CANCELJOURNAL	(75)
#define WM_CANCELMODE	(31)
#define WM_CAPTURECHANGED	(533)
#define WM_CHANGECBCHAIN	(781)
#define WM_CHAR	(258)
#define WM_CHARTOITEM	(47)
#define WM_CHILDACTIVATE	(34)
#define WM_CHOOSEFONT_GETLOGFONT	(1025)
#define WM_CHOOSEFONT_SETLOGFONT	(1125)
#define WM_CHOOSEFONT_SETFLAGS	(1126)
#define WM_CLEAR	(771)
#define WM_CLOSE	(16)
#define WM_COMMAND	(273)
#define WM_COMPACTING	(65)
#define WM_COMPAREITEM	(57)
#define WM_CONTEXTMENU	(123)
#define WM_COPY	(769)
#define WM_COPYDATA	(74)
#define WM_CREATE	(1)
#define WM_CTLCOLORBTN	(309)
#define WM_CTLCOLORDLG	(310)
#define WM_CTLCOLOREDIT	(307)
#define WM_CTLCOLORLISTBOX	(308)
#define WM_CTLCOLORMSGBOX	(306)
#define WM_CTLCOLORSCROLLBAR	(311)
#define WM_CTLCOLORSTATIC	(312)
#define WM_CUT	(768)
#define WM_DEADCHAR	(259)
#define WM_DELETEITEM	(45)
#define WM_DESTROY	(2)
#define WM_DESTROYCLIPBOARD	(775)
#define WM_DEVICECHANGE	(537)
#define WM_DEVMODECHANGE	(27)
#define WM_DISPLAYCHANGE	(126)
#define WM_DRAWCLIPBOARD	(776)
#define WM_DRAWITEM	(43)
#define WM_DROPFILES	(563)
#define WM_ENABLE	(10)
#define WM_ENDSESSION	(22)
#define WM_ENTERIDLE	(289)
#define WM_ENTERMENULOOP	(529)
#define WM_ENTERSIZEMOVE	(561)
#define WM_ERASEBKGND	(20)
#define WM_EXITMENULOOP	(530)
#define WM_EXITSIZEMOVE	(562)
#define WM_FONTCHANGE	(29)
#define WM_GETDLGCODE	(135)
#define WM_GETFONT	(49)
#define WM_GETHOTKEY	(51)
#define WM_GETICON	(127)
#define WM_GETMINMAXINFO	(36)
#define WM_GETTEXT	(13)
#define WM_GETTEXTLENGTH	(14)
#define WM_HELP	(83)
#define WM_HOTKEY	(786)
#define WM_HSCROLL	(276)
#define WM_HSCROLLCLIPBOARD	(782)
#define WM_ICONERASEBKGND	(39)
#define WM_IME_CHAR	(646)
#define WM_IME_COMPOSITION	(271)
#define WM_IME_COMPOSITIONFULL	(644)
#define WM_IME_CONTROL	(643)
#define WM_IME_ENDCOMPOSITION	(270)
#define WM_IME_KEYDOWN	(656)
#define WM_IME_KEYUP	(657)
#define WM_IME_NOTIFY	(642)
#define WM_IME_SELECT	(645)
#define WM_IME_SETCONTEXT	(641)
#define WM_IME_STARTCOMPOSITION	(269)
#define WM_INITDIALOG	(272)
#define WM_INITMENU	(278)
#define WM_INITMENUPOPUP	(279)
#define WM_INPUTLANGCHANGE	(81)
#define WM_INPUTLANGCHANGEREQUEST	(80)
#define WM_KEYDOWN	(256)
#define WM_KEYUP	(257)
#define WM_KILLFOCUS	(8)
#define WM_LBUTTONDBLCLK	(515)
#define WM_LBUTTONDOWN	(513)
#define WM_LBUTTONUP	(514)
#define WM_MBUTTONDBLCLK	(521)
#define WM_MBUTTONDOWN	(519)
#define WM_MBUTTONUP	(520)
#define WM_MDIACTIVATE	(546)
#define WM_MDICASCADE	(551)
#define WM_MDICREATE	(544)
#define WM_MDIDESTROY	(545)
#define WM_MDIGETACTIVE	(553)
#define WM_MDIICONARRANGE	(552)
#define WM_MDIMAXIMIZE	(549)
#define WM_MDINEXT	(548)
#define WM_MDIREFRESHMENU	(564)
#define WM_MDIRESTORE	(547)
#define WM_MDISETMENU	(560)
#define WM_MDITILE	(550)
#define WM_MEASUREITEM	(44)
#define WM_MENUCHAR	(288)
#define WM_MENUSELECT	(287)
#define WM_MOUSEACTIVATE	(33)
#define WM_MOUSEMOVE	(512)
#define WM_MOVE	(3)
#define WM_MOVING	(534)
#define WM_NCACTIVATE	(134)
#define WM_NCCALCSIZE	(131)
#define WM_NCCREATE	(129)
#define WM_NCDESTROY	(130)
#define WM_NCHITTEST	(132)
#define WM_NCLBUTTONDBLCLK	(163)
#define WM_NCLBUTTONDOWN	(161)
#define WM_NCLBUTTONUP	(162)
#define WM_NCMBUTTONDBLCLK	(169)
#define WM_NCMBUTTONDOWN	(167)
#define WM_NCMBUTTONUP	(168)
#define WM_NCMOUSEMOVE	(160)
#define WM_NCPAINT	(133)
#define WM_NCRBUTTONDBLCLK	(166)
#define WM_NCRBUTTONDOWN	(164)
#define WM_NCRBUTTONUP	(165)
#define WM_NEXTDLGCTL	(40)
#define WM_NOTIFY	(78)
#define WM_NOTIFYFORMAT	(85)
#define WM_NULL         (0)
#define WM_PAINT	(15)
#define WM_PAINTCLIPBOARD	(777)
#define WM_PAINTICON	(38)
#define WM_PALETTECHANGED	(785)
#define WM_PALETTEISCHANGING	(784)
#define WM_PARENTNOTIFY	(528)
#define WM_PASTE	(770)
#define WM_PENWINFIRST  (896)
#define WM_PENWINLAST  (911)
#define WM_POWER	(72)
#define WM_POWERBROADCAST	(536)
#define WM_PRINT	(791)
#define WM_PRINTCLIENT	(792)
#define WM_PSD_ENVSTAMPRECT	(1029)
#define WM_PSD_FULLPAGERECT	(1025)
#define WM_PSD_GREEKTEXTRECT	(1028)
#define WM_PSD_MARGINRECT	(1027)
#define WM_PSD_MINMARGINRECT	(1026)
#define WM_PSD_PAGESETUPDLG	(1024)
#define WM_PSD_YAFULLPAGERECT	(1030)
#define WM_QUERYDRAGICON	(55)
#define WM_QUERYENDSESSION	(17)
#define WM_QUERYNEWPALETTE	(783)
#define WM_QUERYOPEN	(19)
#define WM_QUEUESYNC	(35)
#define WM_QUIT	(18)
#define WM_RBUTTONDBLCLK	(518)
#define WM_RBUTTONDOWN	(516)
#define WM_RBUTTONUP	(517)
#define WM_RENDERALLFORMATS	(774)
#define WM_RENDERFORMAT	(773)
#define WM_SETCURSOR	(32)
#define WM_SETFOCUS	(7)
#define WM_SETFONT	(48)
#define WM_SETHOTKEY	(50)
#define WM_SETICON	(128)
#define WM_SETREDRAW	(11)
#define WM_SETTEXT	(12)
#define WM_SETTINGCHANGE	(26)
#define WM_SHOWWINDOW	(24)
#define WM_SIZE	(5)
#define WM_SIZECLIPBOARD	(779)
#define WM_SIZING	(532)
#define WM_SPOOLERSTATUS	(42)
#define WM_STYLECHANGED	(125)
#define WM_STYLECHANGING	(124)
#define WM_SYSCHAR	(262)
#define WM_SYSCOLORCHANGE	(21)
#define WM_SYSCOMMAND	(274)
#define WM_SYSDEADCHAR	(263)
#define WM_SYSKEYDOWN	(260)
#define WM_SYSKEYUP	(261)
#define WM_TCARD	(82)
#define WM_TIMECHANGE	(30)
#define WM_TIMER	(275)
#define WM_UNDO	(772)
#define WM_USER	(1024)
#define WM_USERCHANGED	(84)
#define WM_VKEYTOITEM	(46)
#define WM_VSCROLL	(277)
#define WM_VSCROLLCLIPBOARD	(778)
#define WM_WINDOWPOSCHANGED	(71)
#define WM_WINDOWPOSCHANGING	(70)
#define WM_WININICHANGE	(26)

/* Window message ranges */
#define WM_KEYFIRST	(256)
#define WM_KEYLAST	(264)
#define WM_MOUSEFIRST	(512)
#define WM_MOUSELAST	(521)

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _GNU_H_WINDOWS32_MESSAGES */
