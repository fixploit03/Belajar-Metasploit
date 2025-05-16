# enum_prefetch

Modul `enum_prefetch` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk mengekstrak file prefetch dari target, yang berisi informasi eksekusi program terbaru, berguna dalam analisis forensik atau untuk mengidentifikasi aplikasi yang sering digunakan oleh korban.

## Cara Penggunaan di Metasploit

```
use post/windows/gather/enum_prefetch
set SESSION <ID>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[!] SESSION may not be compatible with this module:
[!]  * incompatible session type: meterpreter. This module works with: .
[*] Prefetch Gathering started.
[+] Detected Windows 7 Service Pack 1 (max 128 entries)
[+] EnablePrefetcher Value: (3) = Applaunch and boot enabled (Default Value, excl. Win2k3).
[+] Remote: Timezone is SE Asia Standard Time.
[+] Remote: Localtime bias to UTC: +419 minutes.
[+] Current UTC Time: 2025-05-16 20:36:31 UTC
[*] Gathering information from remote system. This will take awhile..

Prefetch Information
====================

 Last execution (filetime)  Run Count  Hash  Filename                      Filepath
 -------------------------  ---------  ----  --------                      --------
 2025-05-16 19:50:03 UTC    40DD444D   1     DLLHOST.EXE                   \HARDDISKVOLUME2\WINDOWS\SYSTEM32\DLLHOST.EXE
 2025-05-16 19:50:03 UTC    4A6353B9   1     SEARCHINDEXER.EXE             \HARDDISKVOLUME2\WINDOWS\SYSTEM32\SEARCHINDEXER.
                                                                           EXE
 2025-05-16 19:50:05 UTC    09140401   1     LOGONUI.EXE                   \HARDDISKVOLUME2\WINDOWS\SYSTEM32\LOGONUI.EXE
 2025-05-16 19:50:12 UTC    6FFD3DA8   1     DWM.EXE                       \HARDDISKVOLUME2\WINDOWS\SYSTEM32\DWM.EXE
 2025-05-16 19:50:12 UTC    2257A3E7   1     USERINIT.EXE                  \HARDDISKVOLUME2\WINDOWS\SYSTEM32\USERINIT.EXE
 2025-05-16 19:50:13 UTC    D0649312   1     RUNONCE.EXE                   \HARDDISKVOLUME2\WINDOWS\SYSTEM32\RUNONCE.EXE
 2025-05-16 19:50:16 UTC    1092D371   1     WINMAIL.EXE                   \HARDDISKVOLUME2\PROGRAM FILES\WINDOWS MAIL\WINM
                                                                           AIL.EXE
 2025-05-16 19:50:22 UTC    8461DBEE   2     REGSVR32.EXE                  \HARDDISKVOLUME2\WINDOWS\SYSTEM32\REGSVR32.EXE
 2025-05-16 19:50:22 UTC    2294B148   1     UNREGMP2.EXE                  \HARDDISKVOLUME2\WINDOWS\SYSTEM32\UNREGMP2.EXE
 2025-05-16 19:50:23 UTC    C211633D   1     RUNDLL32.EXE                  \HARDDISKVOLUME2\WINDOWS\SYSTEM32\RUNDLL32.EXE
 2025-05-16 19:50:24 UTC    3A7E0C67   3     IE4UINIT.EXE                  \HARDDISKVOLUME2\WINDOWS\SYSTEM32\IE4UINIT.EXE
 2025-05-16 19:50:24 UTC    9CC17D45   1     RUNDLL32.EXE                  \HARDDISKVOLUME2\WINDOWS\SYSTEM32\RUNDLL32.EXE
 2025-05-16 19:50:25 UTC    C9CFA3B9   1     MCTADMIN.EXE                  \HARDDISKVOLUME2\WINDOWS\SYSTEM32\MCTADMIN.EXE
 2025-05-16 19:50:25 UTC    FA75EA61   1     SIDEBAR.EXE                   \HARDDISKVOLUME2\PROGRAM FILES\WINDOWS SIDEBAR\S
                                                                           IDEBAR.EXE
 2025-05-16 19:50:31 UTC    FC0D39BF   2     WMPNSCFG.EXE                  \HARDDISKVOLUME2\PROGRAM FILES\WINDOWS MEDIA PLA
                                                                           YER\WMPNSCFG.EXE
 2025-05-16 19:50:40 UTC    EE01DD11   1     VBOXWINDOWSADDITIONS.EXE      *** Filepath not found ***
 2025-05-16 19:50:49 UTC    C4ADF8B8   1     VBOXWINDOWSADDITIONS-X86.EXE  *** Filepath not found ***
 2025-05-16 19:50:51 UTC    ED1D1C0E   1     NS71FC.TMP                    \HARDDISKVOLUME2\USERS\ADMIN\APPDATA\LOCAL\TEMP\
                                                                           NSI6921.TMP\NS71FC.TMP
 2025-05-16 19:50:51 UTC    945D79AE   1     SC.EXE                        \HARDDISKVOLUME2\WINDOWS\SYSTEM32\SC.EXE
 2025-05-16 19:50:53 UTC    7BC4C3EF   1     NS76CF.TMP                    \HARDDISKVOLUME2\USERS\ADMIN\APPDATA\LOCAL\TEMP\
                                                                           NSI6921.TMP\NS76CF.TMP
 2025-05-16 19:50:53 UTC    0165D4B9   1     NS777C.TMP                    \HARDDISKVOLUME2\USERS\ADMIN\APPDATA\LOCAL\TEMP\
                                                                           NSI6921.TMP\NS777C.TMP
 2025-05-16 19:50:53 UTC    C5CFE48B   1     NS7829.TMP                    \HARDDISKVOLUME2\USERS\ADMIN\APPDATA\LOCAL\TEMP\
                                                                           NSI6921.TMP\NS7829.TMP
 2025-05-16 19:50:53 UTC    ADDAAB46   1     NS78D6.TMP                    \HARDDISKVOLUME2\USERS\ADMIN\APPDATA\LOCAL\TEMP\
                                                                           NSI6921.TMP\NS78D6.TMP
 2025-05-16 19:50:53 UTC    8CF5E144   4     VBOXCERTUTIL.EXE              \HARDDISKVOLUME2\PROGRAM FILES\ORACLE\VIRTUALBOX
                                                                            GUEST ADDITIONS\CERT\VBOXCERTUTIL.EXE
 2025-05-16 19:50:54 UTC    912ACE4E   1     NS7BD4.TMP                    \HARDDISKVOLUME2\USERS\ADMIN\APPDATA\LOCAL\TEMP\
                                                                           NSI6921.TMP\NS7BD4.TMP
 2025-05-16 19:50:54 UTC    9CB5107D   1     RUNDLL32.EXE                  \HARDDISKVOLUME2\WINDOWS\SYSTEM32\RUNDLL32.EXE
 2025-05-16 19:51:06 UTC    5C294CB8   1     NSA94E.TMP                    \HARDDISKVOLUME2\USERS\ADMIN\APPDATA\LOCAL\TEMP\
                                                                           NSI6921.TMP\NSA94E.TMP
 2025-05-16 19:51:06 UTC    B7265FCA   1     RUNDLL32.EXE                  \HARDDISKVOLUME2\WINDOWS\SYSTEM32\RUNDLL32.EXE
 2025-05-16 19:51:20 UTC    97F6C89B   1     NSE00E.TMP                    \HARDDISKVOLUME2\USERS\ADMIN\APPDATA\LOCAL\TEMP\
                                                                           NSI6921.TMP\NSE00E.TMP
 2025-05-16 19:51:20 UTC    A97A61E4   1     RUNDLL32.EXE                  \HARDDISKVOLUME2\WINDOWS\SYSTEM32\RUNDLL32.EXE
 2025-05-16 19:51:20 UTC    7DCD6070   3     VBOXDRVINST.EXE               *** Filepath not found ***
 2025-05-16 19:51:34 UTC    81F4AAD9   1     NS1681.TMP                    \HARDDISKVOLUME2\USERS\ADMIN\APPDATA\LOCAL\TEMP\
                                                                           NSI6921.TMP\NS1681.TMP
 2025-05-16 19:51:34 UTC    B1180E20   1     NS179B.TMP                    \HARDDISKVOLUME2\USERS\ADMIN\APPDATA\LOCAL\TEMP\
                                                                           NSI6921.TMP\NS179B.TMP
 2025-05-16 19:51:34 UTC    75A66901   1     NS18A6.TMP                    \HARDDISKVOLUME2\USERS\ADMIN\APPDATA\LOCAL\TEMP\
                                                                           NSI6921.TMP\NS18A6.TMP
 2025-05-16 19:51:34 UTC    FB4779CB   1     NS1953.TMP                    \HARDDISKVOLUME2\USERS\ADMIN\APPDATA\LOCAL\TEMP\
                                                                           NSI6921.TMP\NS1953.TMP
 2025-05-16 19:51:35 UTC    7DDFCF49   1     NS19F0.TMP                    \HARDDISKVOLUME2\USERS\ADMIN\APPDATA\LOCAL\TEMP\
                                                                           NSI6921.TMP\NS19F0.TMP
 2025-05-16 19:51:35 UTC    4A86E38D   1     NS1BC6.TMP                    \HARDDISKVOLUME2\USERS\ADMIN\APPDATA\LOCAL\TEMP\
                                                                           NSI6921.TMP\NS1BC6.TMP
 2025-05-16 19:51:35 UTC    E1A6F741   6     VBOXGUESTINSTALLHELPER.EXE    \HARDDISKVOLUME2\PROGRAM FILES\ORACLE\VIRTUALBOX
                                                                            GUEST ADDITIONS\VBOXGUESTINSTALLHELPER.EXE
 2025-05-16 19:54:57 UTC    3818615B   1     FIREFOX SETUP 10.0.EXE        *** Filepath not found ***
 2025-05-16 19:55:00 UTC    59B02747   2     SETUP.EXE                     *** Filepath not found ***
 2025-05-16 19:55:05 UTC    A606B53C   2     FIREFOX.EXE                   *** Filepath not found ***
 2025-05-16 19:55:10 UTC    8AEDE3E3   1     HELPER.EXE                    \HARDDISKVOLUME2\PROGRAM FILES\MOZILLA FIREFOX\U
                                                                           NINSTALL\HELPER.EXE
 2025-05-16 19:55:23 UTC    7C52E31C   1     VERCLSID.EXE                  \HARDDISKVOLUME2\WINDOWS\SYSTEM32\VERCLSID.EXE
 2025-05-16 19:55:28 UTC    766398D2   7     DLLHOST.EXE                   \HARDDISKVOLUME2\WINDOWS\SYSTEM32\DLLHOST.EXE
 2025-05-16 19:55:28 UTC    F2DCEF0D   1     DLLHOST.EXE                   \HARDDISKVOLUME2\WINDOWS\SYSTEM32\DLLHOST.EXE
 2025-05-16 19:55:31 UTC    3AB35CA7   1     SVCHOST.EXE                   \HARDDISKVOLUME2\WINDOWS\SYSTEM32\SVCHOST.EXE
 2025-05-16 20:02:13 UTC    F6564EE5   2     NTVDM.EXE                     \HARDDISKVOLUME2\WINDOWS\SYSTEM32\NTVDM.EXE
 2025-05-16 20:04:36 UTC    A80E4F97   4     EXPLORER.EXE                  \HARDDISKVOLUME2\WINDOWS\EXPLORER.EXE
 2025-05-16 20:04:47 UTC    52D07627   3     WIN7_X86_ACTIVATOR.EXE        \HARDDISKVOLUME2\USERS\ADMIN\DOWNLOADS\WIN7_X86_
                                                                           ACTIVATOR.EXE
 2025-05-16 20:05:29 UTC    05F624AB   3     SVCHOST.EXE                   \HARDDISKVOLUME2\WINDOWS\SYSTEM32\SVCHOST.EXE
 2025-05-16 20:05:30 UTC    D9F2A96F   3     WMPNETWK.EXE                  \HARDDISKVOLUME2\PROGRAM FILES\WINDOWS MEDIA PLA
                                                                           YER\WMPNETWK.EXE
 2025-05-16 20:05:36 UTC    D9EBDC7F   1     WHERE.EXE                     \HARDDISKVOLUME2\WINDOWS\SYSTEM32\WHERE.EXE
 2025-05-16 20:05:36 UTC    A7D06383   1     WMIC.EXE                      \HARDDISKVOLUME2\WINDOWS\SYSTEM32\WBEM\WMIC.EXE
 2025-05-16 20:07:28 UTC    F8DFDFA2   3     WMIADAP.EXE                   \HARDDISKVOLUME2\WINDOWS\SYSTEM32\WBEM\WMIADAP.E
                                                                           XE
 2025-05-16 20:19:18 UTC    DE36CB46   1     WINSAT.EXE                    \HARDDISKVOLUME2\WINDOWS\SYSTEM32\WINSAT.EXE
 2025-05-16 20:19:24 UTC    80F4A784   2     SVCHOST.EXE                   \HARDDISKVOLUME2\WINDOWS\SYSTEM32\SVCHOST.EXE
 2025-05-16 20:19:24 UTC    E69F695A   3     WERFAULT.EXE                  \HARDDISKVOLUME2\WINDOWS\SYSTEM32\WERFAULT.EXE
 2025-05-16 20:19:48 UTC    588F90AD   1     DEFRAG.EXE                    \HARDDISKVOLUME2\WINDOWS\SYSTEM32\DEFRAG.EXE
 2025-05-16 20:19:48 UTC    7AC6742A   1     SVCHOST.EXE                   \HARDDISKVOLUME2\WINDOWS\SYSTEM32\SVCHOST.EXE
 2025-05-16 20:22:19 UTC    411A328D   1     RUNDLL32.EXE                  *** Filepath not found ***
 2025-05-16 20:23:29 UTC    3CC531E5   1     TRUSTEDINSTALLER.EXE          \HARDDISKVOLUME2\WINDOWS\SERVICING\TRUSTEDINSTAL
                                                                           LER.EXE
 2025-05-16 20:26:15 UTC    0F2AC88C   3     WERMGR.EXE                    \HARDDISKVOLUME2\WINDOWS\SYSTEM32\WERMGR.EXE
 2025-05-16 20:29:19 UTC    230FC512   1     RUNDLL32.EXE                  *** Filepath not found ***
 2025-05-16 20:29:19 UTC    8D72177C   1     SDIAGNHOST.EXE                *** Filepath not found ***
 2025-05-16 20:29:20 UTC    A3B8D95D   3     CSC.EXE                       \HARDDISKVOLUME2\WINDOWS\MICROSOFT.NET\FRAMEWORK
                                                                           \V2.0.50727\CSC.EXE
 2025-05-16 20:29:20 UTC    7CFEDEA3   2     SVCHOST.EXE                   \HARDDISKVOLUME2\WINDOWS\SYSTEM32\SVCHOST.EXE
 2025-05-16 20:29:20 UTC    B8AFC319   2     VSSVC.EXE                     \HARDDISKVOLUME2\WINDOWS\SYSTEM32\VSSVC.EXE
 2025-05-16 20:29:20 UTC    1628051C   7     WMIPRVSE.EXE                  \HARDDISKVOLUME2\WINDOWS\SYSTEM32\WBEM\WMIPRVSE.
                                                                           EXE
 2025-05-16 20:29:21 UTC    069169FB   3     CVTRES.EXE                    \HARDDISKVOLUME2\WINDOWS\MICROSOFT.NET\FRAMEWORK
                                                                           \V2.0.50727\CVTRES.EXE
 2025-05-16 20:29:22 UTC    7E94E73E   2     PING.EXE                      \HARDDISKVOLUME2\WINDOWS\SYSTEM32\PING.EXE
 2025-05-16 20:29:23 UTC    1101AF41   2     W32TM.EXE                     \HARDDISKVOLUME2\WINDOWS\SYSTEM32\W32TM.EXE
 2025-05-16 20:29:32 UTC    5E46FA0D   9     DLLHOST.EXE                   \HARDDISKVOLUME2\WINDOWS\SYSTEM32\DLLHOST.EXE
 2025-05-16 20:29:49 UTC    A2D55CB6   4     MSIEXEC.EXE                   \HARDDISKVOLUME2\WINDOWS\SYSTEM32\MSIEXEC.EXE
 2025-05-16 20:31:02 UTC    531BD9EA   5     CONSENT.EXE                   *** Filepath not found ***
 2025-05-16 20:31:13 UTC    F401FBB4   6     MPCMDRUN.EXE                  \HARDDISKVOLUME2\PROGRAM FILES\WINDOWS DEFENDER\
                                                                           MPCMDRUN.EXE
 2025-05-16 20:31:31 UTC    77482212   9     SEARCHFILTERHOST.EXE          \HARDDISKVOLUME2\WINDOWS\SYSTEM32\SEARCHFILTERHO
                                                                           ST.EXE
 2025-05-16 20:31:31 UTC    0CB8CADE   8     SEARCHPROTOCOLHOST.EXE        \HARDDISKVOLUME2\WINDOWS\SYSTEM32\SEARCHPROTOCOL
                                                                           HOST.EXE
 2025-05-16 20:31:33 UTC    D8414F97   1     NOTEPAD.EXE                   \HARDDISKVOLUME2\WINDOWS\SYSTEM32\NOTEPAD.EXE
 2025-05-16 20:37:02 UTC    BDFD3029   2     AUDIODG.EXE                   \HARDDISKVOLUME2\WINDOWS\SYSTEM32\AUDIODG.EXE
 2025-05-16 20:37:32 UTC    7D8FB982   2     PUTTY.EXE                     \HARDDISKVOLUME2\PROGRAM FILES\PUTTY\PUTTY.EXE
 2025-05-16 20:42:44 UTC    912F3D5B   1     IPCONFIG.EXE                  \HARDDISKVOLUME2\WINDOWS\SYSTEM32\IPCONFIG.EXE
 2025-05-16 20:43:18 UTC    4A81B364   8     CMD.EXE                       \HARDDISKVOLUME2\WINDOWS\SYSTEM32\CMD.EXE
 2025-05-16 20:43:19 UTC    920BBA2A   2     POWERSHELL.EXE                *** Filepath not found ***
 2025-05-17 09:46:52 UTC    4CB4314A   14    DRVINST.EXE                   \HARDDISKVOLUME2\WINDOWS\SYSTEM32\DRVINST.EXE
 2025-05-17 09:47:07 UTC    7238F31D   1     TASKHOST.EXE                  \HARDDISKVOLUME2\WINDOWS\SYSTEM32\TASKHOST.EXE
 2025-05-17 09:47:22 UTC    B0F8131B   1     SPPSVC.EXE                    \HARDDISKVOLUME2\WINDOWS\SYSTEM32\SPPSVC.EXE
 2025-05-17 09:47:48 UTC    9C7A4DEE   1     BFSVC.EXE                     \HARDDISKVOLUME2\WINDOWS\BFSVC.EXE
 2025-05-17 09:47:52 UTC    F1B6DA12   2     NETSH.EXE                     \HARDDISKVOLUME2\WINDOWS\SYSTEM32\NETSH.EXE
 2025-05-17 09:47:53 UTC    4FA736A3   3     CLRGC.EXE                     \HARDDISKVOLUME2\WINDOWS\WINSXS\X86_NETFX-CLRGC_
                                                                           B03F5F7F11D50A3A_6.1.7601.17514_NONE_F5276FE6B5
                                                                           ADF276\CLRGC.EXE
 2025-05-17 09:47:53 UTC    1F3E9D7E   6     CONHOST.EXE                   \HARDDISKVOLUME2\WINDOWS\SYSTEM32\CONHOST.EXE
 2025-05-17 09:47:54 UTC    90526FAC   1     MSCORSVW.EXE                  \HARDDISKVOLUME2\WINDOWS\MICROSOFT.NET\FRAMEWORK
                                                                           \V2.0.50727\MSCORSVW.EXE
 2025-05-17 10:24:02 UTC    B00DFAAD   2     NTOSBOOT                      *** Filepath not found ***


[*] Finished gathering information from prefetch files.
[*] Results stored in: /root/.msf4/loot/20250517033703_default_192.168.1.53_prefetch_info_087486.txt
[*] Post module execution completed
```
