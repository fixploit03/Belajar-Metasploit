<p align="left"><b>Sebelumnya</b>: <a href="https://github.com/fixploit03/Belajar-Metasploit/blob/main/resource/Apa%20Itu%20Metasploit%20Framework.md">Apa itu Metasploit Framework ?</a></p>

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

### Instal PostgreSQL

```
apt-get install postgresql
```

### Aktifkan dan Jalankan PostgreSQL

```
systemctl enable postgresql
systemctl start postgresql
```

## Buat User PostgreSQL untuk Metasploit Framework

```
sudo -u postgres createuser msf -P
```

Masukkan password-nya misalnya: `msf123` (hanya contoh).

### Buat Database PostgreSQL untuk Metasploit Framework

```
sudo -u postgres createdb msf_database -O msf
```

### Buat File Konfigurasi Metasploit Framework

```
mkdir -p ~/.msf4
nano ~/.msf4/database.yml
```

Isi dengan:

```
production:
  adapter: postgresql
  database: msf_database
  username: msf
  password: msf123
  host: 127.0.0.1
  port: 5432
  pool: 75
  timeout: 5
```

Simpan dengan `CTRL+O`, lalu keluar dengan `CTRL+X`.

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
[*] Connected to msf_database
```

Itu tandanya kamu sudah berhasil menginstal Metasploit Framework lengkap bareng database PostgreSQL-nya.

<p align="right"><b>Selanjutnya</b>: <a href="#">Next</a></p>
