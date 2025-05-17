# remove_host

Modul ini memungkinkan penyerang untuk menghapus entri dari file `hosts` Windows.

## Penulis
- vt nick.freeman@security-assessment.com

## Platform
- `Windows`

## Cara Penggunaan di Metasploit

```
use post/windows/manage/remove_hos
set DOMAIN <DOMAIN>
set SESSION <ID>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Removing hosts file entry pointing to ADMIN-PC
[+] Done!
[*] Post module execution completed
```

## Referensi
- [Rapid7](https://www.rapid7.com/db/modules/post/windows/manage/remove_host/)
