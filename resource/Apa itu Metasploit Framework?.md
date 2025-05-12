<p align="left">
  <a href="https://github.com/fixploit03/Belajar-Metasploit-Framework">Halaman Utama</a>
</p>

# Apa itu Metasploit Framework?

## A. Pengertian Metasploit Framework

[Metasploit Framework](https://www.metasploit.com/) adalah platform open-source yang digunakan untuk pengujian penetrasi (penetration testing) dan eksploitasi kerentanan keamanan (vulnerability exploitation) dalam sistem komputer.

Metasploit memungkinkan kita untuk:
- Mencari celah keamanan
- Mengembangkan dan menjalankan eksploit
- Menyisipkan payload
- Mengakses sistem target
- Melakukan pasca-eksploitasi (post-exploitation)

## B. Fungsi Utama Metasploit
- Membantu pengujian keamanan sistem dan aplikasi
- Mengotomatisasi proses eksploitasi
- Menghasilkan payload untuk berbagai platform
- Menganalisis dan memanfaatkan celah keamanan
- Melakukan bypass antivirus
- Memberikan akses pasca-eksploitasi (Meterpreter)

## C. Komponen Utama Metasploit Framework

| Komponen | Penjelasan |
|:--:|:--:|
| `Exploit` | Modul yang digunakan untuk memanfaatkan celah keamanan |
| `Payload` | Aksi yang dilakukan setelah eksploit berhasil |
| `Encoder` | Mengenkripsi payload agar tidak terdeteksi AV |
| `NOPs` | Padding agar payload berjalan stabil |
| `Auxiliary` | Modul tambahan seperti `scanner`, `DoS`, `dll` |
| `Post` | Modul pasca-eksploitasi seperti dump password |
| `Listener` | Menunggu koneksi dari target | 
| `msfconsole` | Antarmuka utama berbasis command line |
| `msfvenom` | Tool untuk membuat custom payload |
| `Meterpreter` | Shell interaktif yang powerful setelah target berhasil dieksploitasi |

## D. Kelebihan Metasploit
- Gratis dan open-source
- Komunitas aktif dan modul selalu diperbarui
- Mendukung berbagai sistem operasi (`Windows`, `Linux`, `Android`, `macOS`)
- Mendukung otomatisasi uji penetrasi
- Bisa diintegrasikan dengan tools lain seperti `nmap`, `Burp Suite`, `Nessus`

## E. Versi Metasploit

| Versi |	Penjelasan |
|:--:|:--:|
| `Metasploit Framework (MSF)` | Versi CLI open-source |
| `Metasploit Pro` | Versi berbayar dengan GUI dan fitur komersial | 
| `Armitage` | GUI gratis berbasis Java untuk Metasploit |
| `Cobalt Strike` | Versi komersial dari Armitage dengan fitur C2 | 

## F. Struktur Direktori Metasploit

Biasanya terletak di:

```
/usr/share/metasploit-framework
```

Struktur utama:
- `modules/`: berisi `exploit`, `auxiliary`, `payload`, `dll`
- `lib/`: library internal
- `tools/`: tools bantu
- `data/`: data pendukung

## G. Metasploit dalam Dunia Profesional

Digunakan oleh:
- Ethical hacker
- Penetration tester
- Bug bounty hunter
- Cybersecurity analyst
- Red team operator


## H. Contoh Kasus Penggunaan

- Menemukan kerentanan `ms17_010` pada server Windows
- Menghasilkan backdoor trojan Android
- Membangun reverse shell dan dump password target
- Bypass AV untuk payload tertentu

## I. Kesimpulan

Metasploit adalah alat wajib dalam dunia ethical hacking dan penetrasi sistem karena kekuatan, fleksibilitas, dan dukungan komunitasnya.

> Ingat: Penggunaan Metasploit hanya untuk tujuan edukasi dan etis. Uji hanya pada sistem yang kamu miliki izin.

<p align="right">
  <a href="https://github.com/fixploit03/Belajar-Metasploit-Framework/blob/main/resource/Sejarah%20Metasploit%20Framework.md">Sejarah Metasploit Framework</a>
</p>
