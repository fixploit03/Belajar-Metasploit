## Menonaktifkan Windows Defender

Buka Powershell, jalankan sebagi Administrator dan ketikkan perintah:

```
Stop-Service -Name WinDefend
Set-Service -Name WinDefend -StartupType Disabled
```

Kalo mau mengaktifkannya lagi ketikkan perintah:

```
Set-Service -Name WinDefend -StartupType Automatic
Start-Service -Name WinDefend
```
