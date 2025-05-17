# sdel

Tujuan modul ini adalah untuk menghambat pemulihan file yang telah dihapus dengan menimpa isinya. Ini berguna ketika Anda perlu mengunduh file di mesin target dan kemudian menghapusnya tanpa meninggalkan petunjuk tentang isinya. Perhatikan bahwa skrip ini tidak menghapus ruang disk kosong, sehingga file `sementara/jarang/terenkripsi/terkompresi` mungkin tidak dapat ditimpa. Perhatikan juga bahwa entri `MFT` tidak ditimpa, sehingga file yang sangat kecil mungkin tetap berada dalam deskriptor aliran.

## Penulis
- Borja Merino bmerinofe@gmail.com

## Platform
- `Windows`
  
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

## Platform
- [Rapid7](https://www.rapid7.com/db/modules/post/windows/manage/sdel/)
