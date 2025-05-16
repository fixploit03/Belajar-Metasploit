# arp_scanner

Modul `arp_scanner` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk memindai jaringan lokal (LAN) guna mengidentifikasi perangkat lain yang terhubung, menggunakan protokol `ARP` (Address Resolution Protocol). Modul ini bekerja setelah akses ke sistem berhasil diperoleh (misalnya via meterpreter) dan memanfaatkan kemampuan ARP untuk mengumpulkan informasi seperti `alamat IP` dan `MAC address` dari perangkat-perangkat dalam satu segmen jaringan, sehingga berguna untuk melakukan pemetaan jaringan internal dari perspektif target.

## Cara Penggunaan di Metasploit

```
use post/windows/gather/arp_scanner
set RHOSTS 192.168.X.0/24
set SESSION <ID>
set THREADS 10
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Running module against ADMIN-PC
[*] ARP Scanning 192.168.1.0/24
[+] 	IP: 192.168.1.1 MAC 68:58:11:25:43:20 (UNKNOWN)
[+] 	IP: 192.168.1.2 MAC 90:d4:73:eb:b7:22 (UNKNOWN)
[+] 	IP: 192.168.1.11 MAC 38:de:ad:dc:f9:0b (UNKNOWN)
[+] 	IP: 192.168.1.10 MAC 8e:72:04:67:85:25 (UNKNOWN)
[+] 	IP: 192.168.1.42 MAC 38:de:ad:dc:f9:0b (UNKNOWN)
[+] 	IP: 192.168.1.52 MAC 08:00:27:ca:05:fc (CADMUS COMPUTER SYSTEMS)
[+] 	IP: 192.168.1.255 MAC 08:00:27:ca:05:fc (CADMUS COMPUTER SYSTEMS)
[*] Post module execution completed
msf6 post(windows/gather/arp_scanner) > us
```
