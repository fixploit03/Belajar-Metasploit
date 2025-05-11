# Cara Menginstal Metasploit Framework di Kali Linux

## 1. Masuk ke Mode root:

   ```
   sudo -i
   ```

   Masukkan password-nya.

## 2. Update Sistem:

   ```
   apt-get update && apt-get upgrade
   ```

   Tungguin proses `update` dan `upgradenya`, kalo update dan upgrade emang rada-rada lama prosesnya jadi mohon bersabar.
   
## 3. Instal Metasploit Framework:

   ```
   apt-get install metasploit-framework
   ```

## 4. Instal PostgreSQL:

   ```
   apt-get install postgresql
   ```

## 5. Inisialisasi Database untuk Metasploit Framework: 

   ```
   msfdb init
   ```

## 6. Jalankan Metasploit Framework:

   ```
   msfconsole
   ```

   Tunggu sampai konsol dari Metasploit Framework terbuka.

## 7. Cek Status Database:

   ```
   db_status
   ```

   Kalo output-nya seperti ini:
   
   ```
   [*] Connected to msf. Connection type: postgresql.
   ```

   Itu tandanya kita sudah berhasil menginstal `Metasploit Framework` beserta database `PostgreSQL` di Kali Linux.
   
## Tips Tambahan

- Gunakan `msfdb init` untuk secara otomatis membuat dan menghubungkan database PostgreSQL ke Metasploit.
- Cek koneksi database dengan `db_status`.
- Jangan lupa update exploit dan modul dengan `msfupdate` setelah instalasi selesai.
