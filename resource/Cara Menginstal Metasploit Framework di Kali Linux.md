<p align="left">
  <a href="https://github.com/fixploit03/Belajar-Metasploit-Framework/blob/main/resource/Sejarah%20Metasploit%20Framework.md">Sejarah Metasploit Framework</a>
</p>

# Cara Menginstal Metasploit Framework di Kali Linux

Secara default Metasploit Framework sudah terinstal di Kali Linux, jika belum terinstal bisa menginstalnya dengan mengikuti lagkah-lanngkah berikut ini:

1. Masuk ke Mode root:

   ```
   sudo -i
   ```

   Masukkan password-nya.

2. Update Sistem:

   ```
   apt-get update && apt-get upgrade
   ```

   Tungguin proses `update` dan `upgradenya`, kalo update dan upgrade emang rada-rada lama prosesnya jadi mohon bersabar.
   
3. Instal Metasploit Framework:

   ```
   apt-get install metasploit-framework
   ```

4. Instal PostgreSQL:

   ```
   apt-get install postgresql
   ```

5. Inisialisasi Database untuk Metasploit Framework: 

   ```
   msfdb init
   ```

6. Jalankan Metasploit Framework:

   ```
   msfconsole
   ```

   Tunggu sampai konsol dari Metasploit Framework terbuka.

7. Cek Status Database:

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

<p align="right">
  <a href="https://github.com/fixploit03/Belajar-Metasploit-Framework/blob/main/resource/Struktur%20Folder%20dan%20File%20Penting%20di%20Metasploit%20Framework.md">Struktur Folder dan File Penting di Metasploit Framework</a>
</p>
