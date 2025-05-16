# win_privs

Modul `win_privs` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk mengidentifikasi `hak istimewa` (privileges) yang dimiliki oleh session `meterpreter` saat ini pada komputer target.

## Cara Penggunaan di Metasploit

```
use use post/windows/gather/win_privs
set SESSION <ID>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
Current User
============

 Is Admin  Is System  Is In Local Admin Group  UAC Enabled  Foreground ID  UID
 --------  ---------  -----------------------  -----------  -------------  ---
 True      True       True                     False        1              NT AUTHORITY\SYSTEM

Windows Privileges
==================

 Name
 ----
 SeAssignPrimaryTokenPrivilege
 SeAuditPrivilege
 SeChangeNotifyPrivilege
 SeImpersonatePrivilege
 SeTcbPrivilege

[*] Post module execution completed
```
