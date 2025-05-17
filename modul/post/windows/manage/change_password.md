# change_password

Modul ini akan mencoba mengubah kata sandi akun yang ditargetkan. Penggunaan umumnya adalah untuk mengubah kata sandi akun yang baru dibuat di host jarak jauh guna menghindari kesalahan, `System error 1907 has occurred`, yang terjadi ketika kebijakan akun mewajibkan perubahan kata sandi sebelum login berikutnya.

## Penulis
- Ben Campbell eat_meatballs@hotmail.co.uk

## Platform
- `Windows`
  
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

## Referensi
- [Rapid7](https://www.rapid7.com/db/modules/post/windows/manage/change_password/)
