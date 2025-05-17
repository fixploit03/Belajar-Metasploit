# delete_user

Modul ini menghapus akun pengguna lokal dari server yang ditentukan, atau dari mesin lokal jika tidak ada server yang diberikan.

## Penulis
- chao-mu

## Platform
- `Windows`
  
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

## Referensi
- [Rapid7(https://www.rapid7.com/db/modules/post/windows/manage/delete_user/)
