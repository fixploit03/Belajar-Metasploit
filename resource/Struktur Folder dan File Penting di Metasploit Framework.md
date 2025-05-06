<p align="left"><b>Sebelumnya</b>: <a href="https://github.com/fixploit03/Belajar-Metasploit/blob/main/resource/Cara%20Menginstal%20Metasploit%20Framework%20di%20Kali%20Linux.md">Cara Menginstal Metasploit Framework di Kali Linux</a></p>

## Struktur Folder dan File Penting di Metasploit Framework

Setelah berhasil menginstal Metasploit Framework, penting untuk memahami struktur folder dan file yang ada di Metasploit Framework. Ini akan sangat membantu saat ingin membuat modul sendiri, memahami cara kerja exploit, atau saat troubleshooting.

### Lokasi Instalasi Utama

Folder utama Metasploit Framework biasanya ada di:

```
/usr/share/metasploit-framework
```

Isi folder utama Metasploit Framework:

| Jenis | Nama | Keterangan |
|:--:|:--:|:--:|
| Folder | app | Berisi kode aplikasi utama (MVC) untuk Metasploit. |
| Folder | config | Konfigurasi internal Metasploit, termasuk setting database. |
| Folder | data | data	File data pendukung seperti wordlists, payload templates, dan lain-lain. |
| Folder | db | Struktur database dan migrasi untuk framework. |
| Folder | docs | Dokumentasi teknis dan panduan penggunaan. |
| Folder | documentation | documentation	Dokumentasi tambahan (mirip docs, bisa berbeda tergantung versi). |
| File | Gemfile | Daftar dependencies Ruby yang dibutuhkan. |
| File | Gemfile.lock | Versi terkunci dari dependencies untuk menjaga konsistensi. | 
| Folder | lib | Pustaka utama Ruby yang menjadi “otak” dari Metasploit. |
| File | metasploit-framework.gemspec | Metadata dan konfigurasi untuk membuat gem Ruby Metasploit. |
| Folder | modules | Folder paling penting, berisi semua modul exploit, payload, encoder, dll. |
| File | msfconsole | CLI utama untuk mengakses dan menjalankan Metasploit. |
| File | msfd | Metasploit Daemon, memungkinkan koneksi ke MSF via socket. |
| File | msfdb | Tool untuk setup database secara otomatis (init, start, stop). |
| File | msf-json-rpc.ru | Server JSON-RPC untuk remote kontrol MSF (via API). |
| File | msfrpc | Client untuk berinteraksi dengan Metasploit RPC API. |
| File | msfrpcd | Server daemon untuk RPC API. |
| File | msfupdate | Tool update otomatis Metasploit. |
| File | msfvenom | Generator payload all-in-one (gabungan msfpayload dan msfencode). |
| File | msf-ws.ru | Web service Metasploit berbasis Ruby. |
| Folder | plugins | Berisi plugin untuk memperluas kemampuan msfconsole. |
| File | Rakefile | File build otomatis berbasis Ruby (semacam Makefile di Ruby). | 
| File | ruby | Entry point/metascript Ruby (bisa jadi symlink). |
| File | script-exploit | Script terkait exploitasi. |
| File | script-password | Script untuk cracking/penanganan password. |
| FILE | script-recon | Script untuk reconnaissance/pemetaan target. |
| Folder | scripts | Berisi berbagai script Ruby bawaan. |
| Folser | tools | Alat tambahan seperti pattern_create, pattern_offset, dll. |
| Folder | vendor | Dependency pihak ketiga yang dibundel langsung. |

### Folder Konfigurasi User

Folder konfigurasi user ada di:

```
~/.msf4
```

Isi folder konfigurasi user:

| Jenis |	Nama | Keterangan |
|:--:|:--:|:--:|
| Folder | bootsnap_cache | Cache untuk mempercepat load Ruby (via Bootsnap). | 
| Folder | config | File konfigurasi lokal pengguna untuk Metasploit. |
| Folder | data | Data pengguna yang disimpan oleh Metasploit. |
| Folder | histories | Riwayat per sesi dari perintah-perintah yang dijalankan. |
| File | history | Riwayat umum perintah dari msfconsole. |
| Folder | local | Modul lokal yang ditambahkan oleh pengguna. |
| Folder | logos | Logo ASCII yang ditampilkan saat msfconsole dijalankan. |
| Folder | logs | Log aktivitas framework (scan, exploit, dll). |
| Folder | loot | Data hasil exploitasi, seperti file dump, credential, dll. |
| File | meterpreter_history | Riwayat perintah yang diketik di dalam sesi Meterpreter. |
| Folder | modules | Modul yang ditambahkan secara manual oleh pengguna. |
| Folder | plugins | Plugin tambahan yang bisa dimuat pengguna. |
|Folder | store	| Tempat penyimpanan setting/pengaturan sementara. |

Itu dia struktur folder dan file penting yang ada di Metasploit Framework.

<p align="right"><b>Sebelumnya</b>: <a href="#">Next</a></p>
