<p align="left"><b>Sebelumnya</b>: <a href="https://github.com/fixploit03/Belajar-Metasploit/blob/main/resource/Sejarah%20Metasploit%20Framework.md">Sejarah Metasploit Framework</a></p>

## Cara Menginstal Metasploit Framework di Kali Linux

### Masuk ke Mode root

```
sudo -i
```

Masukkan password-nya.

### Update Sistem

```
apt-get update && apt-get upgrade
```

### Instal Metasploit Framework

```
apt-get install metasploit-framework
```

## Instal PostgreSQL

```
apt-get install postgresql
```

## Inisialisasi Database untuk Metasploit Framework 

```
msfdb init
```

### Jalankan Metasploit Framework

```
msfconsole
```

Tunggu sampai konsol dari Metasploit Framework terbuka.

### Cek Status Database

```
db_status
```

Kalo output-nya seperti ini:

```
[*] Connected to msf. Connection type: postgresql.
```

Itu tandanya kamu sudah berhasil menginstal Metasploit Framework lengkap bareng database PostgreSQL-nya.

Itu dia cara menginstal Metasploit Framework di Kali Linux.

<p align="right"><b>Selanjutnya</b>: <a href="Struktur Folder dan File Penting di Metasploit Framework.md">Struktur Folder dan File Penting di Metasploit Framework</a></p>
