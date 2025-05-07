# Jenis-Jenis Modul di Metasploit Framework

Metasploit Framework memiliki berbagai jenis modul yang memiliki fungsi dan peran masing-masing dalam proses eksploitasi dan pengujian keamanan.

## 1. Modul Exploit

Modul Exploit digunakan untuk menyerang kerentanan (vulnerability) pada sistem target. Jika berhasil, exploit akan menjalankan payload di sistem target.

**Contoh:**

- `exploit/windows/smb/ms17_010_eternalblue`
- `exploit/unix/ftp/vsftpd_234_backdoor`
- `exploit/windows/smb/ms03_049_netapi`

## 2. Modul Auxiliary

Modul Auxiliary Digunakan untuk aktivitas selain exploit, seperti scanning, fuzzing, sniffing, brute-force, dll. Tidak menghasilkan akses langsung ke sistem.

**Contoh:**

- `auxiliary/scanner/http/dir_scanner`
- `auxiliary/scanner/smb/smb_version`
- `auxiliary/scanner/rdp/rdp_scanner`

## 3. Modul Post

Modul Post digunakan setelah berhasil eksploitasi, biasanya setelah kita mendapat shell atau meterpreter. Digunakan untuk privilege escalation, informasi sistem, exfiltration, dll.

**Contoh:**

- `post/windows/gather/enum_logged_on_users`
- `post/linux/gather/enum_network`
- `post/windows/gather/credentials/chrome`

## 4. Modul Payload

Modul Payload merupakan Bagian kode yang akan dijalankan setelah exploit berhasil. Payload bisa berupa shell, meterpreter, dan lainnya.

**Jenis Payload**:

- **Singles**: Payload mandiri, tidak butuh komponen lain
- **Stagers**: Mengatur komunikasi untuk menerima stager lainnya
- **Stages**: Payload utama yang dikirim setelah stager

### A. Payload Singles

Payload Singles adalah payload mandiri (standalone) yang tidak membutuhkan bagian lain untuk dijalankan. Artinya, seluruh kode yang dibutuhkan untuk dieksekusi sudah ada di dalam payload itu sendiri.

### Karakteristik Payload Singles

| Fitur	| Penjelasan |
|:--:|:--:|
| Mandiri |	Tidak butuh koneksi tambahan atau modul lanjutan |
| Kecil dan Cepat	| Ukurannya lebih kecil karena fungsinya terbatas |
| Minim | Interaksi	Biasanya hanya membuka shell langsung, tanpa fitur lanjutan |
| Keterbatasan | Tidak sekuat payload seperti Meterpreter (tidak bisa upload, webcam, dll) |

### Contoh Payload Single

- `windows/shell_bind_tcp`
- `linux/x86/shell_reverse_tcp`
- `windows/shell_reverse_tcp`

### B. Payload Stagers

Payload Stagers adalah payload kecil yang bertugas untuk membuka koneksi awal dan kemudian mengunduh payload utama (stage) dari attacker ke target. Ini membuat payload utama bisa lebih besar dan kompleks karena tidak dikirim langsung dari awal.

### Karakteristik Payload Stagers

| Fitur	| Penjelasan |
|:--:|:--:|
| Bersifat Loader | Hanya membuka kanal komunikasi untuk menerima bagian utama (Stage) |
| Efisien | Ukuran awal kecil, cocok untuk eksploit yang butuh payload ringan |
| Modular | Bisa dipadukan dengan berbagai payload utama |
| Bergantung | Jaringan	Jika koneksi ke attacker gagal, payload tidak akan berhasil |

### Contoh Payload Stagers

- `windows/meterpreter/reverse_tcp`
- `linux/x86/meterpreter_reverse_http`
- `windows/stager/reverse_named_pipe`

### C. Payload Stages

Payload Stages adalah bagian utama dari payload yang dikirim setelah stager berhasil membuka koneksi. Stage berisi fungsionalitas lanjutan seperti Meterpreter, command shell lanjutan, atau fitur post-exploitation lainnya.

| Fitur	| Penjelasan |
|:--:|:--:|
| Fungsionalitas | Penuh	Berisi fitur lengkap seperti upload file, keylogging, webcam, dll |
| Didownload | Setelah Stager	Hanya akan dijalankan jika stager berhasil |
| Powerful | Ideal untuk post-exploitation dan interaksi jangka panjang dengan target |
| Lebih Terlihat | Ukurannya besar, lebih mudah terdeteksi jika tidak di-encode atau diobfuscate |

### Contoh Payload Stages

- meterpreter (digunakan dengan stager)
- shell (dengan fitur tambahan seperti command injection)
- powershell payload (untuk kontrol Windows lanjutan)

## 5. Modul Encoder

Modul Encoder digunakan untuk menyembunyikan payload dari antivirus atau IDS (Intrusion Detection System). Encoder melakukan encoding ulang terhadap payload agar terlihat tidak berbahaya.

**Contoh:**

- `encoder/x86/shikata_ga_nai`
- `encoder/cmd/echo`
- `encoder/x86/bloxor`

### 6. Modul NOP (No Operation) Generators

Modul NOP Digunakan untuk membuat "NOP sled" agar exploit lebih stabil. NOP adalah instruksi yang tidak melakukan apa-apa, tapi membantu eksekusi payload dengan lebih presisi.

**Contoh:**

- `nop/x86/opty2`
- `nop/x86/single_byte`
- `nop/ppc/simple`

## 7. Modul Evasion

Modul baru di Metasploit (sejak 2019), digunakan untuk membuat payload yang bisa menghindari deteksi antivirus. Biasanya digabung dengan encoding dan teknik obfuscation lain.

**Contoh:**

- `evasion/windows/windows_defender_exe`
- `evasion/windows/applocker_evasion_msbuild`
- `evasion/windows/syscall_inject`

Itu dia jenis-jenis modul yang ada di Metasploit Framework.
