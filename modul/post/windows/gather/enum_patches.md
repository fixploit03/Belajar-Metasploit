# enum_patches

Modul `enum_patches` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk mengumpulkan daftar `patch` atau pembaruan keamanan yang telah diinstal pada sistem target, berguna untuk menilai tingkat kerentanannya terhadap eksploitasi lebih lanjut.

## Cara Penggunaan di Metasploit

```
use post/windows/gather/enum_patches
set SESSION <ID>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Running module against ADMIN-PC (192.168.1.53)

Installed Patches
=================

  HotFix ID  Install Date
  ---------  ------------
  KB2534111  5/17/2025
  KB976902   11/20/2010

[*] Patch list saved to /root/.msf4/loot/20250517031620_default_192.168.1.53_enum_patches_338376.txt
[*] Post module execution completed
```
