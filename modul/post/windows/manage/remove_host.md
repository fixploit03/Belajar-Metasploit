# remove_host

Modul `remove_host` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk menghapus entri tertentu dari file hosts pada komputer target.

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
