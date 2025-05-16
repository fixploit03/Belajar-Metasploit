# enum_hostfile

Modul enum_hostfile di Metasploit adalah modul post-exploitation untuk sistem Windows yang digunakan untuk mengekstrak isi file hosts dari sistem target, guna mengidentifikasi pemetaan nama host lokal ke alamat IP yang mungkin digunakan untuk pivoting atau analisis jaringan internal.

## Cara Penggunaan di Metasploit

```
use post/windows/gather/enum_hostfile
set SESSION <ID>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Hosts file saved: /root/.msf4/loot/20250517025910_default_192.168.1.53_hosts.confige_898765.txt
[*] Post module execution completed
```
