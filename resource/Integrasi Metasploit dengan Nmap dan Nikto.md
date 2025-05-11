# Integrasi Metasploit dengan Nmap dan Nikto

Metasploit Framework bukan hanya alat eksploitasi, ia juga mendukung integrasi dengan berbagai tool eksternal untuk memperkuat proses enumerasi dan analisis target. Dua tool penting yang sering digunakan bersama Metasploit adalah:
- [Nmap](https://nmap.org/): Untuk port scanning dan service detection.
- [Nikto](https://www.cirt.net/Nikto2): Untuk web vulnerability scanning.

Mengintegrasikan `Nmap` dan `Nikto` ke dalam workflow Metasploit akan mempercepat proses penemuan celah keamanan sebelum dieksploitasi.

## A. Integrasi Metasploit dengan Nmap

Tujuan:
- Mendapatkan port terbuka dan service target.
- Memasukkan hasil Nmap ke dalam database Metasploit.
- Langsung menggunakan hasil untuk eksploitasi.

Langkah-Langkah:

1. Menjalankan Nmap dari Luar Metasploit (dengan output XML):

   ```
   nmap -sS -sV -O -oX scan.xml 192.168.1.10
   ```

   Keterangan:
   - `-sS`: SYN scan (stealth)
   - `-sV`: Deteksi versi
   - `-O`: Deteksi OS
   - `-oX`: Output XML (penting untuk diimpor ke Metasploit)

2. Import ke Metasploit:

   ```
   msf6 > db_import scan.xml
   ```

3. Lihat Hasil:

   ```
   msf6 > hosts
   msf6 > services
   ```

   Tips:
   - Jalankan `db_status` untuk memastikan database aktif.
   - Gunakan `search` berdasarkan service hasil Nmap:
  
     ```
     msf6 > services -p 80
     msf6 > search type:exploit name:apache
     ```

4. Alternatif: Jalankan Nmap langsung dari dalam Metasploit:

   ```
   msf6 > nmap -sS -sV 192.168.1.10
   ```

   Namun ini tidak menyimpan hasil ke database secara otomatis, tetap disarankan gunakan `-oX` dan `db_import`.

## B. Integrasi Metasploit dengan Nikto

Tujuan:
- Scan celah keamanan umum di aplikasi web (misalnya `XSS`, `LFI`, `directory listing`)
- Mengetahui struktur direktori web
- Menemukan file dan path sensitif sebelum eksploitasi

Langkah-Langkah:

1. Jalankan Nikto dan Sinpan Output:

   ```
   nikto -h http://192.168.1.10 -o nikto_result.txt
   ```

   Output Penting:
   - Versi software (`Apache`, `PHP`, `dll`)
   - Directory listing
   - File yang bisa diakses langsung (misalnya `/phpinfo.php`, `/admin`)
   - Celah `XSS`, `LFI`, `dll`

2. Buka Hasilnya dan Cocokkan Dengan Eksploit di Metasploit:

   ```
   msf6 > search type:exploit name:phpmyadmin
   ```

3. Gunakan Modul `auxiliary` atau `exploit` yang Cocok:

   ```
   use exploit/multi/http/phpmyadmin_unauth_rce
   ```

## C. Alur Integrasi Workflow

```
+------------+        +------------+        +------------+
|    Nmap    | -----> | Metasploit | <----- |   Nikto    |
|   (Scan)   |        | (Database) |        | (Web Vuln) |
+------------+        +------------+        +------------+
      |                     |                      |
      |----> Port/Service   |   Web Vuln Info <----|
      |----> OS Detection   |   Sensitive Dir <----|
```

## D. Kesimpulan

Mengintegrasikan `Nmap` dan `Nikto` dengan Metasploit memungkinkan proses yang jauh lebih terstruktur dan efisien:
- **Nmap**: Fokus pada enumerasi `jaringan`, `service`, dan `OS`.
- **Nikto**: Fokus pada enumerasi dan celah `aplikasi web`.
- **Metasploit**: Gunakan hasil kedua tool tersebut untuk melakukan eksploitasi yang tepat sasaran.
Dengan integrasi ini, kamu bekerja lebih cepat, lebih tepat, dan lebih profesional sebagai penetration tester.
