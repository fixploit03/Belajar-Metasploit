# delete_user

Modul `delete_user` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk menghapus akun pengguna lokal dari komputer target. Modul ini bekerja setelah akses ke sistem berhasil diperoleh (misalnya via meterpreter) dan memanfaatkan perintah bawaan Windows untuk menghapus user yang ditentukan, sehingga berguna untuk membersihkan jejak setelah eksploitasi atau menghapus akun yang sebelumnya dibuat selama proses kompromi sistem.

## Cara Penggunaan di Metasploit

```
use post/windows/manage/delete_user
set SESSION <ID>
set USERNAME <USERNAME>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] User was deleted!
[*] Post module execution completed
```
