# enum_devices

Module `enum_devices` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk mengumpulkan informasi tentang `perangkat keras` (hardware) yang terhubung atau terpasang di komputer target, seperti `printer`, `USB`, dan `perangkat lainnya`. Modul ini bekerja setelah akses ke sistem berhasil diperoleh (misalnya via meterpreter) dan memanfaatkan perintah bawaan Windows untuk mendeteksi serta mencatat detail perangkat yang pernah atau sedang digunakan, sehingga membantu dalam pemetaan aset perangkat keras target selama fase `post-exploitation`.

## Cara Penggunaan di Metasploit

```
use post/windows/gather/enum_devices
set SESSION <ID>
set VERBOSE true
run 
```

Hasil output-nya seperti ini:

```
[*] Enumerating hardware on ADMIN-PC
[*] Enumerating VEN_1000&DEV_0054&SUBSYS_1F091028&REV_01
[*] Enumerating VEN_1002&DEV_515E&SUBSYS_01E61028&REV_02
[*] Enumerating VEN_106B&DEV_003F&SUBSYS_00000000&REV_00
[*] Enumerating VEN_14E4&DEV_1659&SUBSYS_01E61028&REV_11
[*] Enumerating VEN_8086&DEV_032C&SUBSYS_00000000&REV_09
[*] Enumerating VEN_8086&DEV_100E&SUBSYS_001E8086&REV_02
[*] Enumerating VEN_8086&DEV_1237&SUBSYS_00000000&REV_02
[*] Enumerating VEN_8086&DEV_244E&SUBSYS_01E61028&REV_E1
[*] Enumerating VEN_8086&DEV_265C&SUBSYS_00000000&REV_00
[*] Enumerating VEN_8086&DEV_2668&SUBSYS_76808384&REV_01
[*] Enumerating VEN_8086&DEV_2778&SUBSYS_01E61028&REV_00
[*] Enumerating VEN_8086&DEV_2779&SUBSYS_01E61028&REV_00
[*] Enumerating VEN_8086&DEV_27B8&SUBSYS_01E61028&REV_01
[*] Enumerating VEN_8086&DEV_27C8&SUBSYS_01E61028&REV_01
[*] Enumerating VEN_8086&DEV_27C9&SUBSYS_01E61028&REV_01
[*] Enumerating VEN_8086&DEV_27CA&SUBSYS_01E61028&REV_01
[*] Enumerating VEN_8086&DEV_27CC&SUBSYS_01E61028&REV_01
[*] Enumerating VEN_8086&DEV_27D0&SUBSYS_01E61028&REV_01
[*] Enumerating VEN_8086&DEV_27DF&SUBSYS_01E61028&REV_01
[*] Enumerating VEN_8086&DEV_27E0&SUBSYS_01E61028&REV_01
[*] Enumerating VEN_8086&DEV_27E2&SUBSYS_01E61028&REV_01
[*] Enumerating VEN_8086&DEV_2829&SUBSYS_00000000&REV_02
[*] Enumerating VEN_8086&DEV_7000&SUBSYS_00000000&REV_00
[*] Enumerating VEN_80EE&DEV_BEEF&SUBSYS_040515AD&REV_00
[*] Enumerating VEN_80EE&DEV_CAFE&SUBSYS_00000000&REV_00
[*] Enumerating ACPI0003
[*] Enumerating FixedButton
[*] Enumerating GenuineIntel_-_Intel64_Family_6_Model_142_-_Intel(R)_Core(TM)_i5-8350U_CPU_@_1.70GHz
[*] Enumerating GenuineIntel_-_Intel64_Family_6_Model_15_-_Intel(R)_Xeon(R)_CPU___________X3220__@_2.40GHz
[*] Enumerating PNP0000
[*] Enumerating PNP0100
[*] Enumerating PNP0200
[*] Enumerating PNP0303
[*] Enumerating PNP0700
[*] Enumerating PNP0A03
[*] Enumerating PNP0A08
[*] Enumerating PNP0B00
[*] Enumerating PNP0C0A
[*] Enumerating PNP0F03
[*] Enumerating PNP0C08
[*] Enumerating VID_14DD&PID_1005&Col01
[*] Enumerating VID_14DD&PID_1005&Col02
[*] Enumerating VID_14DD&PID_1005&Col03
[*] Enumerating VID_3151&PID_4003&MI_00
[*] Enumerating VID_3151&PID_4003&MI_01&Col01
[*] Enumerating VID_3151&PID_4003&MI_01&Col02
[*] Enumerating VID_3151&PID_4003&MI_01&Col03
[*] Enumerating VID_3151&PID_4003&MI_01&Col04
[*] Enumerating VID_3151&PID_4003&MI_01&Col05
[*] Enumerating VID_80EE&PID_0021
[*] Enumerating ROOT
[*] Enumerating CdRomHL-DT-ST_DVD-ROM_GDR-T10N_______________1.05____
[*] Enumerating CdRomVBOX_CD-ROM_____________________________1.0_____
[*] Enumerating DiskVBOX_HARDDISK___________________________1.0_____
[*] Enumerating IDEChannel
[*] Enumerating *ISATAP
[*] Enumerating *TEREDO
[*] Enumerating ACPI_HAL
[*] Enumerating blbdrive
[*] Enumerating COMPOSITEBUS
[*] Enumerating COMPOSITE_BATTERY
[*] Enumerating LEGACY_ADP94XX
[*] Enumerating LEGACY_ADPAHCI
[*] Enumerating LEGACY_ADPU320
[*] Enumerating LEGACY_AFD
[*] Enumerating LEGACY_ALIIDE
[*] Enumerating LEGACY_AMDIDE
[*] Enumerating LEGACY_AMDSATA
[*] Enumerating LEGACY_AMDSBS
[*] Enumerating LEGACY_ARC
[*] Enumerating LEGACY_ARCSAS
[*] Enumerating LEGACY_ATAPI
[*] Enumerating LEGACY_BEEP
[*] Enumerating LEGACY_BOWSER
[*] Enumerating LEGACY_CDFS
[*] Enumerating LEGACY_CLFS
[*] Enumerating LEGACY_CMDIDE
[*] Enumerating LEGACY_CNG
[*] Enumerating LEGACY_COMPBATT
[*] Enumerating LEGACY_CSC
[*] Enumerating LEGACY_DFSC
[*] Enumerating LEGACY_DISCACHE
[*] Enumerating LEGACY_DXGKRNL
[*] Enumerating LEGACY_ELXSTOR
[*] Enumerating LEGACY_FILEINFO
[*] Enumerating LEGACY_FLTMGR
[*] Enumerating LEGACY_FS_REC
[*] Enumerating LEGACY_FVEVOL
[*] Enumerating LEGACY_HPSAMD
[*] Enumerating LEGACY_HTTP
[*] Enumerating LEGACY_HWPOLICY
[*] Enumerating LEGACY_IASTORV
[*] Enumerating LEGACY_IIRSP
[*] Enumerating LEGACY_INTELIDE
[*] Enumerating LEGACY_IPNAT
[*] Enumerating LEGACY_ISAPNP
[*] Enumerating LEGACY_KSECDD
[*] Enumerating LEGACY_KSECPKG
[*] Enumerating LEGACY_LLTDIO
[*] Enumerating LEGACY_LSI_FC
[*] Enumerating LEGACY_LSI_SAS
[*] Enumerating LEGACY_LSI_SAS2
[*] Enumerating LEGACY_LSI_SCSI
[*] Enumerating LEGACY_LUAFV
[*] Enumerating LEGACY_MEGASAS
[*] Enumerating LEGACY_MEGASR
[*] Enumerating LEGACY_MOUNTMGR
[*] Enumerating LEGACY_MPSDRV
[*] Enumerating LEGACY_MRXSMB
[*] Enumerating LEGACY_MRXSMB10
[*] Enumerating LEGACY_MRXSMB20
[*] Enumerating LEGACY_MSAHCI
[*] Enumerating LEGACY_MSDSM
[*] Enumerating LEGACY_MSFS
[*] Enumerating LEGACY_MSISADRV
[*] Enumerating LEGACY_MUP
[*] Enumerating LEGACY_NATIVEWIFIP
[*] Enumerating LEGACY_NDIS
[*] Enumerating LEGACY_NDISTAPI
[*] Enumerating LEGACY_NDISUIO
[*] Enumerating LEGACY_NDPROXY
[*] Enumerating LEGACY_NETBIOS
[*] Enumerating LEGACY_NETBT
[*] Enumerating LEGACY_NFRD960
[*] Enumerating LEGACY_NPFS
[*] Enumerating LEGACY_NSIPROXY
[*] Enumerating LEGACY_NTFS
[*] Enumerating LEGACY_NULL
[*] Enumerating LEGACY_NVRAID
[*] Enumerating LEGACY_NVSTOR
[*] Enumerating LEGACY_PCIIDE
[*] Enumerating LEGACY_PCW
[*] Enumerating LEGACY_PEAUTH
[*] Enumerating LEGACY_PSCHED
[*] Enumerating LEGACY_QL2300
[*] Enumerating LEGACY_QL40XX
[*] Enumerating LEGACY_RDBSS
[*] Enumerating LEGACY_RDPCDD
[*] Enumerating LEGACY_RDPENCDD
[*] Enumerating LEGACY_RDPREFMP
[*] Enumerating LEGACY_RSPNDR
[*] Enumerating LEGACY_SBP2PORT
[*] Enumerating LEGACY_SECDRV
[*] Enumerating LEGACY_SISRAID2
[*] Enumerating LEGACY_SISRAID4
[*] Enumerating LEGACY_SPLDR
[*] Enumerating LEGACY_SRV
[*] Enumerating LEGACY_SRV2
[*] Enumerating LEGACY_SRVNET
[*] Enumerating LEGACY_STEXSTOR
[*] Enumerating LEGACY_STORFLT
[*] Enumerating LEGACY_STORVSC
[*] Enumerating LEGACY_TCPIP
[*] Enumerating LEGACY_TCPIPREG
[*] Enumerating LEGACY_TDX
[*] Enumerating LEGACY_UDFS
[*] Enumerating LEGACY_VBOXSF
[*] Enumerating LEGACY_VGASAVE
[*] Enumerating LEGACY_VIAIDE
[*] Enumerating LEGACY_VMBUS
[*] Enumerating LEGACY_VOLMGRX
[*] Enumerating LEGACY_VOLSNAP
[*] Enumerating LEGACY_VSMRAID
[*] Enumerating LEGACY_VWIFIFLT
[*] Enumerating LEGACY_WANARPV6
[*] Enumerating LEGACY_WD
[*] Enumerating LEGACY_WDF01000
[*] Enumerating LEGACY_WFPLWF
[*] Enumerating mssmbios
[*] Enumerating MS_AGILEVPNMINIPORT
[*] Enumerating MS_L2TPMINIPORT
[*] Enumerating MS_NDISWANBH
[*] Enumerating MS_NDISWANIP
[*] Enumerating MS_NDISWANIPV6
[*] Enumerating MS_PPPOEMINIPORT
[*] Enumerating MS_PPTPMINIPORT
[*] Enumerating MS_SSTPMINIPORT
[*] Enumerating RDPBUS
[*] Enumerating RDP_KBD
[*] Enumerating RDP_MOU
[*] Enumerating SYSTEM
[*] Enumerating UMBUS
[*] Enumerating vdrvroot
[*] Enumerating volmgr
[*] Enumerating Disk&Ven_Dell&Prod_VIRTUAL_DISK
[*] Enumerating Volume
[*] Enumerating VolumeSnapshot
[*] Enumerating {96e080c7-143c-11d1-b40f-00a0c9223196}
[*] Enumerating {97ebaacc-95bd-11d0-a3ea-00a0c9223196}
[*] Enumerating {cfd669f1-9bc2-11d0-8299-0000f822fe8a}
[*] Enumerating {ddf4358e-bb2c-11d0-a42f-00a0c9223196}
[*] Enumerating {eeab7790-c514-11d1-b42b-00805fc1270e}
[*] Enumerating {eec12db6-ad9c-4168-8658-b03daef417fe}
[*] Enumerating ROOT_HUB
[*] Enumerating ROOT_HUB20
[*] Enumerating VID_04B4&PID_6560
[*] Enumerating VID_0BDA&PID_8813
[*] Enumerating VID_14DD&PID_1005
[*] Enumerating VID_3151&PID_4003
[*] Enumerating VID_3151&PID_4003&MI_00
[*] Enumerating VID_3151&PID_4003&MI_01
[*] Enumerating VID_80EE&PID_0021

Device Information
==================

 Device Description                                    Driver Version    Class           Manufacturer                             Extra
 ------------------                                    --------------    -----           ------------                             -----
 ACPI Fixed Feature Button                             6.1.7601.17514    System          (Standard system devices)
 ACPI x64-based PC                                     6.1.7600.16385    Computer        (Standard computers)
 Beep                                                                    LegacyDriver
 CD-ROM Drive                                          6.1.7601.17514    CDROM           (Standard CD-ROM drives)                 VBOX CD-ROM ATA Device
 CD/DVD File System Reader                                               LegacyDriver
 CNG                                                                     LegacyDriver
 Composite Bus Enumerator                              6.1.7601.17514    System          Microsoft
 Direct memory access controller                       6.1.7601.17514    System          (Standard system devices)
 Disk drive                                            6.1.7600.16385    DiskDrive       (Standard disk drives)                   VBOX HARDDISK ATA Device
 File as Volume Driver                                 6.1.7600.16385    System          Microsoft
 Fs_Rec                                                                  LegacyDriver
 Generic volume                                        6.1.7601.17514    Volume          Microsoft
 Generic volume shadow copy                            6.1.7600.16385    VolumeSnapshot  Microsoft
 HID Keyboard Device                                   6.1.7601.17514    Keyboard        (Standard keyboards)
 HID-compliant consumer control device                 6.1.7600.16385    HIDClass        Microsoft
 HID-compliant device                                  6.1.7601.17514    HIDClass        (Standard system devices)
 HID-compliant mouse                                   6.1.7600.16385    Mouse           Microsoft
 High Definition Audio Controller                      6.1.7601.17514    System          Microsoft
 IDE Channel                                           6.1.7601.17514    hdc             (Standard IDE ATA/ATAPI controllers)
 IDE Channel                                                             LegacyDriver
 IP Network Address Translator                                           LegacyDriver
 Intel 82371SB PCI to ISA bridge                       6.1.7601.17514    System          Intel
 Intel 82441FX Pentium(R) Pro Processor to PCI bridge  6.1.7601.17514    System          Intel
 Intel Processor                                       6.1.7600.16385    Processor       Intel                                    Intel(R) Core(TM) i5-8350U CPU @ 1.70GHz
 Intel(R) 82801FB/FBM USB2 Enhanced Host Controller -  6.1.7601.17514    USB             Intel
  265C
 Intel(R) PRO/1000 MT Desktop Adapter                  8.4.1.0           Net             Intel
 KSecDD                                                                  LegacyDriver
 KSecPkg                                                                 LegacyDriver
 Kernel Mode Driver Frameworks service                                   LegacyDriver
 LDDM Graphics Subsystem                                                 LegacyDriver
 Link-Layer Topology Discovery Mapper I/O Driver                         LegacyDriver
 Link-Layer Topology Discovery Responder                                 LegacyDriver
 Microsoft AC Adapter                                  6.1.7600.16385    Battery         Microsoft
 Microsoft ACPI-Compliant Control Method Battery       6.1.7600.16385    Battery         Microsoft
 Microsoft ACPI-Compliant System                       6.1.7601.17514    System          Microsoft
 Microsoft Composite Battery                           6.1.7600.16385    Battery         Microsoft
 Microsoft ISATAP Adapter                              6.1.7600.16385    Net             Microsoft
 Microsoft PS/2 Mouse                                  6.1.7600.16385    Mouse           Microsoft
 Microsoft Streaming Clock Proxy                       6.1.7600.16385    MEDIA           Microsoft
 Microsoft Streaming Quality Manager Proxy             6.1.7600.16385    MEDIA           Microsoft
 Microsoft Streaming Service Proxy                     6.1.7600.16385    MEDIA           Microsoft
 Microsoft Streaming Tee/Sink-to-Sink Converter        6.1.7600.16385    MEDIA           Microsoft
 Microsoft System Management BIOS Driver               6.1.7601.17514    System          (Standard system devices)
 Microsoft Teredo Tunneling Adapter                    6.1.7600.16385    Net             Microsoft
 Microsoft Trusted Audio Drivers                       6.1.7600.16385    MEDIA           Microsoft
 Microsoft Virtual Drive Enumerator Driver             6.1.7601.17514    System          (Standard system devices)
 Msfs                                                                    LegacyDriver
 NDIS Usermode I/O Protocol                                              LegacyDriver
 NDProxy                                                                 LegacyDriver
 NativeWiFi Filter                                                       LegacyDriver
 NetBIOS Interface                                                       LegacyDriver
 Npfs                                                                    LegacyDriver
 Ntfs                                                                    LegacyDriver
 Null                                                                    LegacyDriver
 PCI bus                                               6.1.7601.17514    System          (Standard system devices)
 PEAUTH                                                                  LegacyDriver
 Performance Counters for Windows Driver                                 LegacyDriver
 Plug and Play Software Device Enumerator              6.1.7601.17514    System          (Standard system devices)
 Programmable interrupt controller                     6.1.7601.17514    System          (Standard system devices)
 RAS Async Adapter                                     6.1.7601.17514    Net             Microsoft
 Realtek 8814AU Wireless LAN 802.11ac USB NIC          1027.3.1015.2014  Net             Realtek Semiconductor Corp.              Port_#0001.Hub_#0002
 Remote Desktop Device Redirector Bus                  6.1.7600.16385    System          Microsoft
 Security Driver                                                         LegacyDriver
 Security Processor Loader Driver                                        LegacyDriver
 Standard AHCI 1.0 Serial ATA Controller               6.1.7601.17514    hdc             Standard AHCI 1.0 Serial ATA Controller
 Standard OpenHCD USB Host Controller                  6.1.7601.17514    USB             (Standard USB Host Controller)
 Standard PS/2 Keyboard                                6.1.7601.17514    Keyboard        (Standard keyboards)
 Storage volumes                                                         LegacyDriver
 System timer                                          6.1.7601.17514    System          (Standard system devices)
 TCP/IP Registry Compatibility                                           LegacyDriver
 Terminal Server Keyboard Driver                       6.1.7601.17514    System          (Standard system devices)
 Terminal Server Mouse Driver                          6.1.7601.17514    System          (Standard system devices)
 UMBus Root Bus Enumerator                             6.1.7601.17514    System          Microsoft
 USB Composite Device                                  6.1.7601.17514    USB             (Standard USB Host Controller)           Port_#0002.Hub_#0001
 USB Input Device                                      6.1.7601.17514    HIDClass        (Standard system devices)                0000.0006.0000.002.000.000.000.000.000
 USB Input Device                                      6.1.7601.17514    HIDClass        (Standard system devices)                Port_#0001.Hub_#0001
 USB Root Hub                                          6.1.7601.17514    USB             (Standard USB Host Controller)
 VgaSave                                                                 LegacyDriver
 Virtual WiFi Filter Driver                                              LegacyDriver
 VirtualBox Graphics Adapter (WDDM)                    7.1.8.18469       Display         Oracle Corporation
 VirtualBox Guest Device                               7.1.8.18469       System          Oracle Corporation
 VirtualBox Shared Folders                                               LegacyDriver
 Volume Manager                                        6.1.7601.17514    System          (Standard system devices)
 WAN Miniport (IKEv2)                                  6.1.7601.17514    Net             Microsoft
 WAN Miniport (IP)                                     6.1.7601.17514    Net             Microsoft
 WAN Miniport (IPv6)                                   6.1.7601.17514    Net             Microsoft
 WAN Miniport (L2TP)                                   6.1.7601.17514    Net             Microsoft
 WAN Miniport (Network Monitor)                        6.1.7601.17514    Net             Microsoft
 WAN Miniport (PPPOE)                                  6.1.7601.17514    Net             Microsoft
 WAN Miniport (PPTP)                                   6.1.7601.17514    Net             Microsoft
 WAN Miniport (SSTP)                                   6.1.7601.17514    Net             Microsoft
 WFP Lightweight Filter                                                  LegacyDriver
 msisadrv                                                                LegacyDriver
 srvnet                                                                  LegacyDriver
 udfs                                                                    LegacyDriver

[+] Results saved in: /root/.msf4/loot/20250516133718_default_192.168.1.52_host.hardware_828862.txt
[*] Post module execution completed
```
