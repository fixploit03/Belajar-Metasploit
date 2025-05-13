<p align="left">
  <a href="https://github.com/fixploit03/Belajar-Metasploit/blob/main/resource/Modul%20Bruteforce%20Login%20di%20Metasploit.md">Modul Bruteforce Login di Metasploit</a>
</p>

# Menggunakan Auxiliary Scanner di Metasploit

## A. Apa Itu Auxiliary Scanner?

Auxiliary module di Metasploit adalah modul yang tidak bersifat eksploitasi langsung, tapi digunakan untuk:
- [Pemindaian](https://en.wikipedia.org/wiki/Vulnerability_scanner) (scanning)
- [Enumerasi](https://wiki.zacheller.dev/pentest/enumeration)
- [Fuzzing](https://en.wikipedia.org/wiki/Fuzzing)
- [Sniffing](https://en.wikipedia.org/wiki/Sniffing_attack)
- [DoS](https://en.wikipedia.org/wiki/Denial-of-service_attack), dll.

Auxiliary Scanner adalah bagian dari modul auxiliary yang digunakan khusus untuk melakukan pemindaian terhadap target, seperti:
- Port scanning
- Service detection
- Version detection
- Vulnerability scanning

## B. Struktur Auxiliary Scanner

Lokasi modul scanner di Metasploit:

```
/usr/share/metasploit-framework/modules/auxiliary/scanner/
```

Di dalam folder tersebut, tersedia banyak sub-folder untuk jenis scanner tertentu:
- `portscan/`
- `smb/`
- `ftp/`
- `http/`
- `ssh/`
- `mysql/`
- `dll.`

## C. Contoh Penggunaan Auxiliary Scanner

Langkah-langkah:

1. Jalankan Metasploit Framework:

   ```
   msfconsole
   ```

2. Cari Module Scanner:

   ```
   search type:auxiliary scanner
   ```

3. Pilih Salah Satu Scanner, Contoh:

   ```
   use auxiliary/scanner/portscan/tcp
   ```

4. Lihat Opsi Modul:

   ```
   show options
   ```

5. Setting target:

   ```
   set RHOSTS 192.168.1.0/24
   ```

6. Atur Port (jika diperlukan):

   ```
   set PORTS 22,80,443
   ```

7. Jalankan Scanner:

   ```
   run
   ```

## D. Contoh Scanner Populer dan Fungsinya

| Module | Fungsi |
|:--:|:--:|
| `auxiliary/scanner/portscan/tcp` | Melakukan TCP port scanning |
| `auxiliary/scanner/portscan/syn` | Melakukan SYN scan cepat (butuh root) |
| `auxiliary/scanner/ftp/ftp_version` | Deteksi versi FTP |
| `auxiliary/scanner/http/http_version` | Deteksi versi HTTP server| |
| `auxiliary/scanner/smb/smb_version` | Deteksi versi SMB |
| `auxiliary/scanner/ssh/ssh_version` | Deteksi versi SSH |
| `auxiliary/scanner/mysql/mysql_version` | Deteksi versi MySQL |
| `auxiliary/scanner/rdp/rdp_scanner` | Scan RDP port (3389) |
| `auxiliary/scanner/vmware/esx_fingerprint` | Fingerprint server VMware ESX |

## 5. Studi Kasus

**Studi Kasus: Scan SMB Version**

1. Jalankan Metasploit:

   ```
   msfconsole
   ```

2. Gunakan Scanner SMB:

   ```
   use auxiliary/scanner/smb/smb_version
   ```

3. Atur Target:

   ```
   set RHOSTS 192.168.1.10
   ```

4. Jalankan:

   ```
   run
   ```

5. Hasil:

   Akan terlihat versi sistem operasi Windows dan informasi SMB dari target.

   Hasil output-nya seperti ini:

   ```
   msf6 auxiliary(scanner/smb/smb_version) > run
   [*] 192.168.1.45:445      - Force SMB1 since SMB fingerprint needs native_lm/native_os information
   [*] 192.168.1.45:445      - SMB Detected (versions:1, 2) (preferred dialect:SMB 2.1) (signatures:optional) (uptime:11h 33m 25s) (guid:{3d8edf9c-5c4a-4bf8-8d60-6e359d75d200}) (authentication domain:ADMIN-PC)
   [+] 192.168.1.45:445      -   Host is running Windows 7  Professional  SP1  (build:7601)
   [*] 192.168.1.45          - Scanned 1 of 1 hosts (100% complete)
   [*] Auxiliary module execution completed
   msf6 auxiliary(scanner/smb/smb_version) >
   ```

   Dari hasil scan tersebut, versi SMB yang aktif ada 2 yaitu:
   - `SMBv1`
   - `SMBv2`
        
## Tips Tambahan

Gunakan `set THREADS` untuk mempercepat pemindaian (default = 1).

```
set THREADS 10
```

- Gunakan CIDR notation untuk subnet (misal: `192.168.1.0/24`).
- Simpan hasil dengan cara `copy-paste`, atau gunakan `loot` module untuk penyimpanan otomatis.

<p align="right">
  <a href="https://github.com/fixploit03/Belajar-Metasploit/blob/main/resource/Eksploitasi%20dengan%20Metasploit%20%2B%20Social%20Engineering%20Toolkit%20(SET).md">Eksploitasi dengan Metasploit + Social Engineering Toolkit (SET)</a>
</p>
