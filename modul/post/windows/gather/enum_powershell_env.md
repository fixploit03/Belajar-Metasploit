# enum_powershell_env

Modul `enum_powershell_env` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk mengumpulkan informasi lingkungan `PowerShell` pada sistem target, termasuk versi `PowerShell`, `execution policy`, dan `variable environment` yang relevan, yang berguna untuk analisis lebih lanjut atau persiapan eksekusi skrip berbahaya.

## Cara Penggunaan di Metasploit

```
use post/windows/gather/enum_powershell_env
set SESSION <ID>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Running module against ADMIN-PC (192.168.1.53)
[*] PowerShell is installed on this system.
[*] Version: 2.0
[*] Execution Policy: 
[*] Path: C:\Windows\System32\WindowsPowerShell\v1.0\powershell.exe
[*] No PowerShell Snap-Ins are installed
[*] PowerShell Modules paths:
[*] 	WindowsPowerShell\Modules
[*] 	C:\Windows\system32\WindowsPowerShell\v1.0\Modules\
[*] PowerShell Modules:
[*] 	AppLocker
[*] 	BitsTransfer
[*] 	PSDiagnostics
[*] 	TroubleshootingPack
[*] Checking if users have PowerShell profiles
[*] Running with elevated privileges. Extracting user list ...
[*] Checking admin
[*] Post module execution completed
```
