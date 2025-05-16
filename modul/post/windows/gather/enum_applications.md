# enum_applications

Modul `enum_applications` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk mengumpulkan daftar aplikasi yang terinstal di komputer target.

## Cara Penggunaan di Metasploit

```
use post/windows/gather/enum_applications
set SESSION <ID>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Enumerating applications installed on ADMIN-PC

Installed Applications
======================

 Name                                                       Version
 ----                                                       -------
 Cisco EAP-FAST Module                                      2.2.14
 Cisco LEAP Module                                          1.0.19
 Cisco PEAP Module                                          1.1.6
 Microsoft Visual C++ 2008 Redistributable - x86 9.0.30729  9.0.30729
 Mozilla Firefox (x64 en-US)                                115.0.3
 Mozilla Maintenance Service                                115.0.1
 Oracle VirtualBox Guest Additions 7.1.8                    7.1.8.168469
 REALTEK Wireless LAN Driver and Utility                    1.00.0253


[+] Results stored in: /root/.msf4/loot/20250516131207_default_192.168.1.52_host.application_336295.txt
[*] Post module execution completed
```
