# checkvm

Modul `checkvm` di Metasploit adalah `modul post-exploitation` untuk sistem Windows yang digunakan untuk mendeteksi apakah komputer target berjalan di dalam lingkungan virtualisasi, seperti `VMware`, `VirtualBox`, `Hyper-V`, atau `lainnya`.
## Cara Penggunaan di Metasploit

```
use post/windows/gather/checkvm
set SESSION <ID>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Checking if the target is a Virtual Machine ...
[+] This is a VirtualBox Virtual Machine
[*] Post module execution completed
```
