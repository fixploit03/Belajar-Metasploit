# tcpnetstat

Modul `tcpnetstat` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk mengumpulkan informasi koneksi jaringan aktif, termasuk daftar port `TCP` yang sedang digunakan beserta `alamat IP sumber` dan `tujuan`, mirip dengan output perintah `netstat`.

Cara Penggunaan di Metasploit

```
use post/windows/gather/tcpnetstat
set SESSION <ID>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] TCP Table Size: 432
[*] Total TCP Entries: 11
[*] Connection Table
================

  STATE        LHOST         LPORT  RHOST         RPORT
  -----        -----         -----  -----         -----
  ESTABLISHED  192.168.1.53  49159  192.168.1.11  4444
  LISTEN       0.0.0.0       135    0.0.0.0       _
  LISTEN       0.0.0.0       445    0.0.0.0       _
  LISTEN       0.0.0.0       5357   0.0.0.0       _
  LISTEN       0.0.0.0       49152  0.0.0.0       _
  LISTEN       0.0.0.0       49153  0.0.0.0       _
  LISTEN       0.0.0.0       49154  0.0.0.0       _
  LISTEN       0.0.0.0       49155  0.0.0.0       _
  LISTEN       0.0.0.0       49156  0.0.0.0       _
  LISTEN       0.0.0.0       49157  0.0.0.0       _
  LISTEN       192.168.1.53  139    0.0.0.0       _

[*] Post module execution completed
```
