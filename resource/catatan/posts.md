# Semua Modul Post yang Ada di Metasploit Framework:

```
Post
====

   #    Name                                                          Disclosure Date  Rank       Check  Description
   -    ----                                                          ---------------  ----       -----  -----------
   0    post/aix/hashdump                                             .                normal     No     AIX Gather Dump Password Hashes
   1    post/android/capture/screen                                   .                normal     No     Android Screen Capture
   2    post/android/gather/hashdump                                  .                normal     No     Android Gather Dump Password Hashes for Android Systems
   3    post/android/gather/sub_info                                  .                normal     No     extracts subscriber info from target device
   4    post/android/gather/wireless_ap                               .                normal     No     Displays wireless SSIDs and PSKs
   5    post/android/local/koffee                                     2020-12-02       normal     No     KOFFEE - Kia OFFensivE Exploit
   6    post/android/manage/remove_lock                               2013-10-11       normal     No     Android Settings Remove Device Locks (4.0-4.3)
   7    post/android/manage/remove_lock_root                          .                normal     No     Android Root Remove Device Locks (root)
   8    post/apple_ios/gather/ios_image_gather                        .                normal     No     iOS Image Gatherer
   9    post/apple_ios/gather/ios_text_gather                         .                normal     No     iOS Text Gatherer
   10   post/bsd/gather/hashdump                                      .                normal     No     BSD Dump Password Hashes
   11   post/firefox/gather/cookies                                   2014-03-26       normal     No     Firefox Gather Cookies from Privileged Javascript Shell
   12   post/firefox/gather/history                                   2014-04-11       normal     No     Firefox Gather History from Privileged Javascript Shell
   13   post/firefox/gather/passwords                                 2014-04-11       normal     No     Firefox Gather Passwords from Privileged Javascript Shell
   14   post/firefox/gather/xss                                       .                normal     No     Firefox XSS
   15   post/firefox/manage/webcam_chat                               2014-05-13       normal     No     Firefox Webcam Chat on Privileged Javascript Shell
   16   post/hardware/automotive/can_flood                            .                normal     No     CAN Flood
   17   post/hardware/automotive/canprobe                             .                normal     No     Module to Probe Different Data Points in a CAN Packet
   18   post/hardware/automotive/diagnostic_state                     .                normal     No     Diagnostic State
   19   post/hardware/automotive/ecu_hard_reset                       .                normal     No     ECU Hard Reset
   20   post/hardware/automotive/getvinfo                             .                normal     No     Get the Vehicle Information Such as the VIN from the Target Module
   21   post/hardware/automotive/identifymodules                      .                normal     No     Scan CAN Bus for Diagnostic Modules
   22   post/hardware/automotive/malibu_overheat                      .                normal     No     Sample Module to Flood Temp Gauge on 2006 Malibu
   23   post/hardware/automotive/mazda_ic_mover                       .                normal     No     Mazda 2 Instrument Cluster Accelorometer Mover
   24   post/hardware/automotive/pdt                                  .                normal     No     Check For and Prep the Pyrotechnic Devices (Airbags, Battery Clamps, etc.)
   25   post/hardware/rftransceiver/rfpwnon                           .                normal     No     Brute Force AM/OOK (ie: Garage Doors)
   26   post/hardware/rftransceiver/transmitter                       .                normal     No     RF Transceiver Transmitter
   27   post/hardware/zigbee/zstumbler                                .                normal     No     Sends Beacons to Scan for Active ZigBee Networks
   28   post/linux/busybox/enum_connections                           .                normal     No     BusyBox Enumerate Connections
   29   post/linux/busybox/enum_hosts                                 .                normal     No     BusyBox Enumerate Host Names
   30   post/linux/busybox/jailbreak                                  .                normal     No     BusyBox Jailbreak
   31   post/linux/busybox/ping_net                                   .                normal     No     BusyBox Ping Network Enumeration
   32   post/linux/busybox/set_dmz                                    .                normal     No     BusyBox DMZ Configuration
   33   post/linux/busybox/set_dns                                    .                normal     No     BusyBox DNS Configuration
   34   post/linux/busybox/smb_share_root                             .                normal     No     BusyBox SMB Sharing
   35   post/linux/busybox/wget_exec                                  .                normal     No     BusyBox Download and Execute
   36   post/linux/dos/xen_420_dos                                    .                normal     No     Linux DoS Xen 4.2.0 2012-5525
   37   post/linux/gather/ansible                                     .                normal     No     Ansible Config Gather
   38   post/linux/gather/ansible_playbook_error_message_file_reader  .                normal     No     Ansible Playbook Error Message File Reader
   39   post/linux/gather/apache_nifi_credentials                     .                normal     No     Apache NiFi Credentials Gather
   40   post/linux/gather/checkcontainer                              .                normal     No     Linux Gather Container Detection
   41   post/linux/gather/checkvm                                     .                normal     No     Linux Gather Virtual Environment Detection
   42   post/linux/gather/ecryptfs_creds                              .                normal     No     Gather eCryptfs Metadata
   43   post/linux/gather/enum_commands                               .                normal     No     Gather Available Shell Commands
   44   post/linux/gather/enum_configs                                .                normal     No     Linux Gather Configurations
   45   post/linux/gather/enum_containers                             .                normal     No     Linux Container Enumeration
   46   post/linux/gather/enum_nagios_xi                              2018-04-17       normal     No     Nagios XI Enumeration
   47   post/linux/gather/enum_network                                .                normal     No     Linux Gather Network Information
   48   post/linux/gather/enum_protections                            .                normal     No     Linux Gather Protection Enumeration
   49   post/linux/gather/enum_psk                                    .                normal     No     Linux Gather NetworkManager 802-11-Wireless-Security Credentials
   50   post/linux/gather/enum_system                                 .                normal     No     Linux Gather System and User Information
   51   post/linux/gather/enum_users_history                          .                normal     No     Linux Gather User History
   52   post/linux/gather/f5_loot_mcp                                 2022-11-16       normal     No     F5 Big-IP Gather Information from MCP Datastore
   53   post/linux/gather/gnome_commander_creds                       .                normal     No     Linux Gather Gnome-Commander Creds
   54   post/linux/gather/gnome_keyring_dump                          .                normal     No     Gnome-Keyring Dump
   55   post/linux/gather/haserl_read                                 .                normal     No     Haserl Arbitrary File Reader
   56   post/linux/gather/hashdump                                    .                normal     No     Linux Gather Dump Password Hashes for Linux Systems
   57   post/linux/gather/manageengine_password_manager_creds         .                normal     No     Linux Gather ManageEngine Password Manager Pro Password Extractor
   58   post/linux/gather/mimipenguin                                 2018-05-23       normal     No     MimiPenguin
   59   post/linux/gather/mount_cifs_creds                            .                normal     No     Linux Gather Saved mount.cifs/mount.smbfs Credentials
   60   post/linux/gather/openvpn_credentials                         .                normal     No     OpenVPN Gather Credentials
   61   post/linux/gather/phpmyadmin_credsteal                        .                normal     No     Phpmyadmin credentials stealer
   62   post/linux/gather/pptpd_chap_secrets                          .                normal     No     Linux Gather PPTP VPN chap-secrets Credentials
   63   post/linux/gather/puppet                                      .                normal     No     Puppet Config Gather
   64   post/linux/gather/rancher_audit_log_leak                      2024-02-08       normal     No     Rancher Audit Log Sensitive Information Leak
   65   post/linux/gather/tor_hiddenservices                          .                normal     No     Linux Gather TOR Hidden Services
   66   post/linux/gather/vcenter_secrets_dump                        2022-04-15       normal     No     VMware vCenter Secrets Dump
   67   post/linux/manage/adduser                                     .                normal     No     Add a new user to the system
   68   post/linux/manage/disable_clamav                              .                excellent  No     Disable ClamAV
   69   post/linux/manage/dns_spoofing                                .                normal     No     Native DNS Spoofing module
   70   post/linux/manage/download_exec                               .                normal     No     Linux Manage Download and Execute
   71   post/linux/manage/geutebruck_post_exp                         .                normal     No     Geutebruck Camera Deface
   72   post/linux/manage/iptables_removal                            .                normal     No     IPTABLES rules removal
   73   post/linux/manage/pseudo_shell                                .                normal     No     Pseudo-Shell Post-Exploitation Module
   74   post/linux/manage/sshkey_persistence                          .                excellent  No     SSH Key Persistence
   75   post/multi/escalate/aws_create_iam_user                       .                normal     No     Create an AWS IAM User
   76   post/multi/escalate/cups_root_file_read                       2012-11-20       normal     No     CUPS 1.6.1 Root File Read
   77   post/multi/escalate/metasploit_pcaplog                        2012-07-16       manual     No     Multi Escalate Metasploit pcap_log Local Privilege Escalation
   78   post/multi/gather/apple_ios_backup                            .                normal     No     Windows Gather Apple iOS MobileSync Backup File Collection
   79   post/multi/gather/aws_ec2_instance_metadata                   .                normal     No     Gather AWS EC2 Instance Metadata
   80   post/multi/gather/aws_keys                                    .                normal     No     UNIX Gather AWS Keys
   81   post/multi/gather/azure_cli_creds                             .                normal     No     Azure CLI Credentials Gatherer
   82   post/multi/gather/check_malware                               .                normal     No     Multi Gather Malware Verifier
   83   post/multi/gather/chrome_cookies                              .                normal     No     Chrome Gather Cookies
   84   post/multi/gather/dbeaver                                     .                normal     No     Gather Dbeaver Passwords
   85   post/multi/gather/dbvis_enum                                  .                normal     No     Multi Gather DbVisualizer Connections Settings
   86   post/multi/gather/dns_bruteforce                              .                normal     No     Multi Gather DNS Forward Lookup Bruteforce
   87   post/multi/gather/dns_reverse_lookup                          .                normal     No     Multi Gather DNS Reverse Lookup Scan
   88   post/multi/gather/dns_srv_lookup                              .                normal     No     Multi Gather DNS Service Record Lookup Scan
   89   post/multi/gather/docker_creds                                .                normal     No     Multi Gather Docker Credentials Collection
   90   post/multi/gather/electerm                                    .                normal     No     Gather electerm Passwords
   91   post/multi/gather/enum_hexchat                                .                normal     No     Linux Gather HexChat/XChat Enumeration
   92   post/multi/gather/enum_software_versions                      .                normal     No     Multiplatform Installed Software Version Enumerator
   93   post/multi/gather/enum_vbox                                   .                normal     No     Multi Gather VirtualBox VM Enumeration
   94   post/multi/gather/env                                         .                normal     No     Multi Gather Generic Operating System Environment Settings
   95   post/multi/gather/fetchmailrc_creds                           .                normal     No     UNIX Gather .fetchmailrc Credentials
   96   post/multi/gather/filezilla_client_cred                       .                normal     No     Multi Gather FileZilla FTP Client Credential Collection
   97   post/multi/gather/find_vmx                                    .                normal     No     Multi Gather VMWare VM Identification
   98   post/multi/gather/firefox_creds                               .                normal     No     Multi Gather Firefox Signon Credential Collection
   99   post/multi/gather/gpg_creds                                   .                normal     No     Multi Gather GnuPG Credentials Collection
   100  post/multi/gather/grub_creds                                  .                normal     No     Gather GRUB Password
   101  post/multi/gather/irssi_creds                                 .                normal     No     Multi Gather IRSSI IRC Password(s)
   102  post/multi/gather/jboss_gather                                .                normal     No     Jboss Credential Collector
   103  post/multi/gather/jenkins_gather                              .                normal     No     Jenkins Credential Collector
   104  post/multi/gather/lastpass_creds                              .                normal     No     LastPass Vault Decryptor
   105  post/multi/gather/maven_creds                                 .                normal     No     Multi Gather Maven Credentials Collection
   106  post/multi/gather/memory_search                               .                normal     No     Memory Search
   107  post/multi/gather/minio_client                                .                normal     No     Gather MinIO Client Key
   108  post/multi/gather/multi_command                               .                normal     No     Multi Gather Run Shell Command Resource File
   109  post/multi/gather/netrc_creds                                 .                normal     No     UNIX Gather .netrc Credentials
   110  post/multi/gather/pgpass_creds                                .                normal     No     Multi Gather pgpass Credentials
   111  post/multi/gather/pidgin_cred                                 .                normal     No     Multi Gather Pidgin Instant Messenger Credential Collection
   112  post/multi/gather/ping_sweep                                  .                normal     No     Multi Gather Ping Sweep
   113  post/multi/gather/remmina_creds                               .                normal     No     UNIX Gather Remmina Credentials
   114  post/multi/gather/resolve_hosts                               .                normal     No     Multi Gather Resolve Hosts
   115  post/multi/gather/rsyncd_creds                                .                normal     No     UNIX Gather RSYNC Credentials
   116  post/multi/gather/rubygems_api_key                            .                normal     No     Multi Gather RubyGems API Key
   117  post/multi/gather/run_console_rc_file                         .                normal     No     Multi Gather Run Console Resource File
   118  post/multi/gather/saltstack_salt                              .                normal     No     SaltStack Salt Information Gatherer
   119  post/multi/gather/skype_enum                                  .                normal     No     Multi Gather Skype User Data Enumeration
   120  post/multi/gather/ssh_creds                                   .                normal     No     Multi Gather OpenSSH PKI Credentials Collection
   121  post/multi/gather/thunderbird_creds                           .                normal     No     Multi Gather Mozilla Thunderbird Signon Credential Collection
   122  post/multi/gather/tomcat_gather                               .                normal     No     Gather Tomcat Credentials
   123  post/multi/gather/ubiquiti_unifi_backup                       .                normal     No     Multi Gather Ubiquiti UniFi Controller Backup
   124  post/multi/gather/unix_cached_ad_hashes                       .                normal     No     UNIX Gather Cached AD Hashes
   125  post/multi/gather/unix_kerberos_tickets                       .                normal     No     UNIX Gather Kerberos Tickets
   126  post/multi/gather/wlan_geolocate                              .                normal     No     Multiplatform WLAN Enumeration and Geolocation
   127  post/multi/gather/wowza_streaming_engine_creds                .                normal     No     Gather Wowza Streaming Engine Credentials
   128  post/multi/general/close                                      .                normal     No     Multi Generic Operating System Session Close
   129  post/multi/general/execute                                    .                normal     No     Multi Generic Operating System Session Command Execution
   130  post/multi/general/wall                                       .                normal     No     Write Messages to Users
   131  post/multi/manage/autoroute                                   .                normal     No     Multi Manage Network Route via Meterpreter Session
   132  post/multi/manage/dbvis_add_db_admin                          .                normal     No     Multi Manage DbVisualizer Add Db Admin
   133  post/multi/manage/dbvis_query                                 .                normal     No     Multi Manage DbVisualizer Query
   134  post/multi/manage/fileshare                                   .                normal     No     Browse the session filesystem in a Web Browser
   135  post/multi/manage/hsts_eraser                                 .                normal     No     Web browsers HSTS entries eraser
   136  post/multi/manage/multi_post                                  .                normal     No     Multi Manage Post Module Macro Execution
   137  post/multi/manage/open                                        .                normal     No     Open a file or URL on the target computer
   138  post/multi/manage/play_youtube                                .                normal     No     Multi Manage YouTube Broadcast
   139  post/multi/manage/record_mic                                  .                normal     No     Multi Manage Record Microphone
   140  post/multi/manage/screensaver                                 .                excellent  No     Multi Manage the screensaver of the target computer
   141  post/multi/manage/screenshare                                 .                normal     No     Multi Manage the screen of the target meterpreter session
   142  post/multi/manage/set_wallpaper                               .                normal     No     Multi Manage Set Wallpaper
   143  post/multi/manage/shell_to_meterpreter                        .                normal     No     Shell to Meterpreter Upgrade
   144  post/multi/manage/sudo                                        .                normal     No     Multiple Linux / Unix Post Sudo Upgrade Shell
   145  post/multi/manage/system_session                              .                normal     No     Multi Manage System Remote TCP Shell Session
   146  post/multi/manage/upload_exec                                 .                normal     No     Upload and Execute
   147  post/multi/manage/zip                                         .                normal     No     Multi Manage File Compressor
   148  post/multi/recon/local_exploit_suggester                      .                normal     No     Multi Recon Local Exploit Suggester
   149  post/multi/recon/multiport_egress_traffic                     .                normal     No     Generate TCP/UDP Outbound Traffic On Multiple Ports
   150  post/multi/recon/reverse_lookup                               .                normal     No     Reverse Lookup IP Addresses
   151  post/multi/recon/sudo_commands                                .                normal     No     Sudo Commands
   152  post/multi/sap/smdagent_get_properties                        .                normal     No     Diagnostics Agent in Solution Manager, stores unencrypted credentials for Solution Manager server
   153  post/networking/gather/enum_brocade                           .                normal     No     Brocade Gather Device General Information
   154  post/networking/gather/enum_cisco                             .                normal     No     Cisco Gather Device General Information
   155  post/networking/gather/enum_f5                                .                normal     No     F5 Gather Device General Information
   156  post/networking/gather/enum_juniper                           .                normal     No     Juniper Gather Device General Information
   157  post/networking/gather/enum_mikrotik                          .                normal     No     Mikrotik Gather Device General Information
   158  post/networking/gather/enum_vyos                              .                normal     No     VyOS Gather Device General Information
   159  post/osx/admin/say                                            .                normal     No     OS X Text to Speech Utility
   160  post/osx/capture/keylog_recorder                              .                normal     No     OSX Capture Userspace Keylogger
   161  post/osx/capture/screen                                       .                normal     No     OSX Screen Capture
   162  post/osx/escalate/tccbypass                                   .                normal     Yes    Bypass the macOS TCC Framework
   163  post/osx/gather/apfs_encrypted_volume_passwd                  2018-03-21       normal     Yes    Mac OS X APFS Encrypted Volume Password Disclosure
   164  post/osx/gather/autologin_password                            .                normal     No     OSX Gather Autologin Password as Root
   165  post/osx/gather/enum_adium                                    .                normal     No     OS X Gather Adium Enumeration
   166  post/osx/gather/enum_airport                                  .                normal     No     OS X Gather Airport Wireless Preferences
   167  post/osx/gather/enum_chicken_vnc_profile                      .                normal     No     OS X Gather Chicken of the VNC Profile
   168  post/osx/gather/enum_colloquy                                 .                normal     No     OS X Gather Colloquy Enumeration
   169  post/osx/gather/enum_keychain                                 .                normal     No     OS X Gather Keychain Enumeration
   170  post/osx/gather/enum_messages                                 .                normal     No     OS X Gather Messages
   171  post/osx/gather/enum_osx                                      .                normal     No     OS X Gather Mac OS X System Information Enumeration
   172  post/osx/gather/gitignore                                     .                normal     No     Git Ignore Retriever
   173  post/osx/gather/hashdump                                      .                normal     No     OS X Gather Mac OS X Password Hash Collector
   174  post/osx/gather/password_prompt_spoof                         .                normal     No     OSX Password Prompt Spoof
   175  post/osx/gather/safari_lastsession                            .                normal     No     OSX Gather Safari LastSession.plist
   176  post/osx/gather/vnc_password_osx                              .                normal     No     OS X Display Apple VNC Password
   177  post/osx/manage/mount_share                                   .                normal     No     OSX Network Share Mounter
   178  post/osx/manage/record_mic                                    .                normal     No     OSX Manage Record Microphone
   179  post/osx/manage/sonic_pi                                      .                normal     No     OS X Manage Sonic Pi
   180  post/osx/manage/vpn                                           .                normal     No     OSX VPN Manager
   181  post/osx/manage/webcam                                        .                normal     No     OSX Manage Webcam
   182  post/solaris/escalate/pfexec                                  .                normal     No     Solaris pfexec Upgrade Shell
   183  post/solaris/escalate/srsexec_readline                        2007-05-07       normal     Yes    Solaris srsexec Arbitrary File Reader
   184  post/solaris/gather/checkvm                                   .                normal     No     Solaris Gather Virtual Environment Detection
   185  post/solaris/gather/enum_packages                             .                normal     No     Solaris Gather Installed Packages
   186  post/solaris/gather/enum_services                             .                normal     No     Solaris Gather Configured Services
   187  post/solaris/gather/hashdump                                  .                normal     No     Solaris Gather Dump Password Hashes for Solaris Systems
   188  post/windows/capture/keylog_recorder                          .                normal     No     Windows Capture Keystroke Recorder
   189  post/windows/capture/lockout_keylogger                        .                normal     No     Windows Capture Winlogon Lockout Credential Keylogger
   190  post/windows/escalate/droplnk                                 .                normal     No     Windows Escalate SMB Icon LNK Dropper
   191  post/windows/escalate/getsystem                               .                normal     No     Windows Escalation
   192  post/windows/escalate/golden_ticket                           .                normal     No     Windows Escalate Golden Ticket
   193  post/windows/escalate/ms10_073_kbdlayout                      2010-10-12       normal     No     Windows Escalate NtUserLoadKeyboardLayoutEx Privilege Escalation
   194  post/windows/escalate/screen_unlock                           .                normal     No     Windows Escalate Locked Desktop Unlocker
   195  post/windows/escalate/unmarshal_cmd_exec                      2018-08-05       normal     No     Windows unmarshal post exploitation
   196  post/windows/gather/ad_to_sqlite                              .                normal     No     AD Computer, Group and Recursive User Membership to Local SQLite DB
   197  post/windows/gather/arp_scanner                               .                normal     No     Windows Gather ARP Scanner
   198  post/windows/gather/avast_memory_dump                         .                normal     No     Avast AV Memory Dumping Utility
   199  post/windows/gather/bitcoin_jacker                            .                normal     No     Windows Gather Bitcoin Wallet
   200  post/windows/gather/bitlocker_fvek                            .                normal     No     Bitlocker Master Key (FVEK) Extraction
   201  post/windows/gather/bloodhound                                .                normal     No     BloodHound Ingestor
   202  post/windows/gather/cachedump                                 .                normal     No     Windows Gather Credential Cache Dump
   203  post/windows/gather/checkvm                                   .                normal     No     Windows Gather Virtual Environment Detection
   204  post/windows/gather/credentials/adi_irc                       .                normal     No     Adi IRC credential gatherer
   205  post/windows/gather/credentials/aim                           .                normal     No     Aim credential gatherer
   206  post/windows/gather/credentials/avira_password                .                normal     No     Windows Gather Avira Password Extraction
   207  post/windows/gather/credentials/bulletproof_ftp               .                normal     No     Windows Gather BulletProof FTP Client Saved Password Extraction
   208  post/windows/gather/credentials/carotdav_ftp                  .                normal     No     CarotDAV credential gatherer
   209  post/windows/gather/credentials/chrome                        .                normal     No     Chrome credential gatherer
   210  post/windows/gather/credentials/comodo                        .                normal     No     Comodo credential gatherer
   211  post/windows/gather/credentials/coolnovo                      .                normal     No     Coolnovo credential gatherer
   212  post/windows/gather/credentials/coreftp                       .                normal     No     Windows Gather CoreFTP Saved Password Extraction
   213  post/windows/gather/credentials/credential_collector          .                normal     No     Windows Gather Credential Collector
   214  post/windows/gather/credentials/digsby                        .                normal     No     Digsby credential gatherer
   215  post/windows/gather/credentials/domain_hashdump               .                normal     No     Windows Domain Controller Hashdump
   216  post/windows/gather/credentials/dynazip_log                   2001-03-27       normal     No     Windows Gather DynaZIP Saved Password Extraction
   217  post/windows/gather/credentials/dyndns                        .                normal     No     Windows Gather DynDNS Client Password Extractor
   218  post/windows/gather/credentials/enum_cred_store               .                normal     No     Windows Gather Credential Store Enumeration and Decryption Module
   219  post/windows/gather/credentials/enum_laps                     .                normal     No     Windows Gather Credentials Local Administrator Password Solution
   220  post/windows/gather/credentials/enum_picasa_pwds              .                normal     No     Windows Gather Google Picasa Password Extractor
   221  post/windows/gather/credentials/epo_sql                       .                normal     No     Windows Gather McAfee ePO 4.6 Config SQL Credentials
   222  post/windows/gather/credentials/filezilla_server              .                normal     No     Windows Gather FileZilla FTP Server Credential Collection
   223  post/windows/gather/credentials/flashfxp                      .                normal     No     Windows Gather FlashFXP Saved Password Extraction
   224  post/windows/gather/credentials/flock                         .                normal     No     Flock credential gatherer
   225  post/windows/gather/credentials/ftpnavigator                  .                normal     No     Windows Gather FTP Navigator Saved Password Extraction
   226  post/windows/gather/credentials/ftpx                          .                normal     No     Windows Gather FTP Explorer (FTPX) Credential Extraction
   227  post/windows/gather/credentials/gadugadu                      .                normal     No     Gadugadu credential gatherer
   228  post/windows/gather/credentials/gpp                           .                normal     No     Windows Gather Group Policy Preference Saved Passwords
   229  post/windows/gather/credentials/halloy_irc                    .                normal     No     Halloy IRC credential gatherer
   230  post/windows/gather/credentials/heidisql                      .                normal     No     Windows Gather HeidiSQL Saved Password Extraction
   231  post/windows/gather/credentials/icq                           .                normal     No     ICQ credential gatherer
   232  post/windows/gather/credentials/idm                           .                normal     No     Windows Gather Internet Download Manager (IDM) Password Extractor
   233  post/windows/gather/credentials/ie                            .                normal     No     Ie credential gatherer
   234  post/windows/gather/credentials/imail                         .                normal     No     Windows Gather IPSwitch iMail User Data Enumeration
   235  post/windows/gather/credentials/imvu                          .                normal     No     Windows Gather Credentials IMVU Game Client
   236  post/windows/gather/credentials/incredimail                   .                normal     No     Incredimail credential gatherer
   237  post/windows/gather/credentials/kakaotalk                     .                normal     No     KakaoTalk credential gatherer
   238  post/windows/gather/credentials/kmeleon                       .                normal     No     Kmeleon credential gatherer
   239  post/windows/gather/credentials/line                          .                normal     No     LINE credential gatherer
   240  post/windows/gather/credentials/maxthon                       .                normal     No     Maxthon credential gatherer
   241  post/windows/gather/credentials/mcafee_vse_hashdump           .                normal     No     McAfee Virus Scan Enterprise Password Hashes Dump
   242  post/windows/gather/credentials/mdaemon_cred_collector        .                excellent  No     Windows Gather MDaemonEmailServer Credential Cracking
   243  post/windows/gather/credentials/meebo                         .                normal     No     Windows Gather Meebo Password Extractor
   244  post/windows/gather/credentials/miranda                       .                normal     No     Miranda credential gatherer
   245  post/windows/gather/credentials/moba_xterm                    .                normal     No     Windows Gather MobaXterm Passwords
   246  post/windows/gather/credentials/mremote                       .                normal     No     Windows Gather mRemote Saved Password Extraction
   247  post/windows/gather/credentials/mssql_local_hashdump          .                normal     No     Windows Gather Local SQL Server Hash Dump
   248  post/windows/gather/credentials/navicat                       .                normal     No     Windows Gather Navicat Passwords
   249  post/windows/gather/credentials/nimbuzz                       .                normal     No     Windows Gather Nimbuzz Instant Messenger Password Extractor
   250  post/windows/gather/credentials/opera                         .                normal     No     Opera credential gatherer
   251  post/windows/gather/credentials/operamail                     .                normal     No     Operamail credential gatherer
   252  post/windows/gather/credentials/outlook                       .                normal     No     Windows Gather Microsoft Outlook Saved Password Extraction
   253  post/windows/gather/credentials/plsql_developer               .                normal     No     Windows Gather PL/SQL Developer Connection Credentials
   254  post/windows/gather/credentials/postbox                       .                normal     No     Postbox credential gatherer
   255  post/windows/gather/credentials/pulse_secure                  .                normal     Yes    Windows Pulse Secure Connect Client Saved Password Extractor
   256  post/windows/gather/credentials/purevpn_cred_collector        .                normal     No     Windows Gather PureVPN Client Credential Collector
   257  post/windows/gather/credentials/qq                            .                normal     No     QQ credential gatherer
   258  post/windows/gather/credentials/quassel_irc                   .                normal     No     Quassel IRC credential gatherer
   259  post/windows/gather/credentials/razer_synapse                 .                normal     No     Windows Gather Razer Synapse Password Extraction
   260  post/windows/gather/credentials/razorsql                      .                normal     No     Windows Gather RazorSQL Credentials
   261  post/windows/gather/credentials/rdc_manager_creds             .                normal     No     Windows Gather Remote Desktop Connection Manager Saved Password Extraction
   262  post/windows/gather/credentials/redis_desktop_manager         .                normal     No     RedisDesktopManager credential gatherer
   263  post/windows/gather/credentials/safari                        .                normal     No     Safari credential gatherer
   264  post/windows/gather/credentials/seamonkey                     .                normal     No     Seamonkey credential gatherer
   265  post/windows/gather/credentials/securecrt                     .                normal     No     Windows SecureCRT Session Information Enumeration
   266  post/windows/gather/credentials/skype                         .                normal     No     Windows Gather Skype Saved Password Hash Extraction
   267  post/windows/gather/credentials/smartermail                   .                normal     No     Windows Gather SmarterMail Password Extraction
   268  post/windows/gather/credentials/smartftp                      .                normal     No     Windows Gather SmartFTP Saved Password Extraction
   269  post/windows/gather/credentials/solarwinds_orion_dump         2022-11-08       manual     No     SolarWinds Orion Secrets Dump
   270  post/windows/gather/credentials/spark_im                      .                normal     No     Windows Gather Spark IM Password Extraction
   271  post/windows/gather/credentials/srware                        .                normal     No     Srware credential gatherer
   272  post/windows/gather/credentials/sso                           .                normal     No     Windows Single Sign On Credential Collector (Mimikatz)
   273  post/windows/gather/credentials/steam                         .                normal     No     Windows Gather Steam Client Session Collector.
   274  post/windows/gather/credentials/sylpheed                      .                normal     No     Sylpheed email credential gatherer
   275  post/windows/gather/credentials/tango                         .                normal     No     Tango credential gatherer
   276  post/windows/gather/credentials/teamviewer_passwords          .                normal     No     Windows Gather TeamViewer Passwords
   277  post/windows/gather/credentials/thunderbird                   .                normal     No     Thunderbird credential gatherer
   278  post/windows/gather/credentials/thycotic_secretserver_dump    2022-08-15       manual     No     Delinea Thycotic Secret Server Dump
   279  post/windows/gather/credentials/tlen                          .                normal     No     Tlen credential gatherer
   280  post/windows/gather/credentials/tortoisesvn                   .                normal     No     Windows Gather TortoiseSVN Saved Password Extraction
   281  post/windows/gather/credentials/total_commander               .                normal     No     Windows Gather Total Commander Saved Password Extraction
   282  post/windows/gather/credentials/trillian                      .                normal     No     Windows Gather Trillian Password Extractor
   283  post/windows/gather/credentials/veeam_credential_dump         2022-11-22       manual     No     Veeam Backup and Replication Credentials Dump
   284  post/windows/gather/credentials/viber                         .                normal     No     Viber credential gatherer
   285  post/windows/gather/credentials/vnc                           .                normal     No     Windows Gather VNC Password Extraction
   286  post/windows/gather/credentials/whatsupgold_credential_dump   2022-11-22       manual     No     WhatsUp Gold Credentials Dump
   287  post/windows/gather/credentials/winbox_settings               .                normal     No     Windows Gather Mikrotik Winbox "Keep Password" Credentials Extractor
   288  post/windows/gather/credentials/windows_autologin             .                normal     No     Windows Gather AutoLogin User Credential Extractor
   289  post/windows/gather/credentials/windows_sam_hivenightmare     2021-07-20       normal     No     Windows SAM secrets leak - HiveNightmare
   290  post/windows/gather/credentials/windowslivemail               .                normal     No     Windows Live Mail credential gatherer
   291  post/windows/gather/credentials/winscp                        .                normal     No     Windows Gather WinSCP Saved Password Extraction
   292  post/windows/gather/credentials/wsftp_client                  .                normal     No     Windows Gather WS_FTP Saved Password Extraction
   293  post/windows/gather/credentials/xchat                         .                normal     No     Xchat credential gatherer
   294  post/windows/gather/credentials/xshell_xftp_password          .                normal     No     Windows Gather Xshell and Xftp Passwords
   295  post/windows/gather/dnscache_dump                             .                normal     No     Windows Gather DNS Cache
   296  post/windows/gather/dumplinks                                 .                normal     No     Windows Gather Dump Recent Files lnk Info
   297  post/windows/gather/enum_ad_bitlocker                         .                normal     No     Windows Gather Active Directory BitLocker Recovery
   298  post/windows/gather/enum_ad_computers                         .                normal     No     Windows Gather Active Directory Computers
   299  post/windows/gather/enum_ad_groups                            .                normal     No     Windows Gather Active Directory Groups
   300  post/windows/gather/enum_ad_managedby_groups                  .                normal     No     Windows Gather Active Directory Managed Groups
   301  post/windows/gather/enum_ad_service_principal_names           .                normal     No     Windows Gather Active Directory Service Principal Names
   302  post/windows/gather/enum_ad_to_wordlist                       .                normal     No     Windows Active Directory Wordlist Builder
   303  post/windows/gather/enum_ad_user_comments                     .                normal     No     Windows Gather Active Directory User Comments
   304  post/windows/gather/enum_ad_users                             .                normal     No     Windows Gather Active Directory Users
   305  post/windows/gather/enum_applications                         .                normal     No     Windows Gather Installed Application Enumeration
   306  post/windows/gather/enum_artifacts                            .                normal     No     Windows Gather File and Registry Artifacts Enumeration
   307  post/windows/gather/enum_av                                   .                normal     No     Windows Installed AntiVirus Enumeration
   308  post/windows/gather/enum_av_excluded                          .                normal     No     Windows Antivirus Exclusions Enumeration
   309  post/windows/gather/enum_browsers                             .                normal     No     Advanced Browser Data Extraction for Chromium and Gecko Browsers
   310  post/windows/gather/enum_chocolatey_applications              .                normal     No     Windows Gather Installed Application Within Chocolatey Enumeration
   311  post/windows/gather/enum_chrome                               .                normal     No     Windows Gather Google Chrome User Data Enumeration
   312  post/windows/gather/enum_computers                            .                normal     No     Windows Gather Enumerate Computers
   313  post/windows/gather/enum_db                                   .                normal     No     Windows Gather Database Instance Enumeration
   314  post/windows/gather/enum_devices                              .                normal     No     Windows Gather Hardware Enumeration
   315  post/windows/gather/enum_dirperms                             .                normal     No     Windows Gather Directory Permissions Enumeration
   316  post/windows/gather/enum_domain                               .                normal     No     Windows Gather Enumerate Domain
   317  post/windows/gather/enum_domain_group_users                   .                normal     No     Windows Gather Enumerate Domain Group
   318  post/windows/gather/enum_domain_tokens                        .                normal     No     Windows Gather Enumerate Domain Tokens
   319  post/windows/gather/enum_domain_users                         .                normal     No     Windows Gather Enumerate Active Domain Users
   320  post/windows/gather/enum_domains                              .                normal     No     Windows Gather Domain Enumeration
   321  post/windows/gather/enum_emet                                 .                normal     No     Windows Gather EMET Protected Paths
   322  post/windows/gather/enum_files                                .                normal     No     Windows Gather Generic File Collection
   323  post/windows/gather/enum_hostfile                             .                normal     No     Windows Gather Windows Host File Enumeration
   324  post/windows/gather/enum_hyperv_vms                           .                normal     No     Windows Hyper-V VM Enumeration
   325  post/windows/gather/enum_ie                                   .                normal     No     Windows Gather Internet Explorer User Data Enumeration
   326  post/windows/gather/enum_logged_on_users                      .                normal     No     Windows Gather Logged On User Enumeration (Registry)
   327  post/windows/gather/enum_ms_product_keys                      .                normal     No     Windows Gather Product Key
   328  post/windows/gather/enum_muicache                             .                normal     No     Windows Gather Enum User MUICache
   329  post/windows/gather/enum_onedrive                             .                normal     No     OneDrive Sync Provider Enumeration Module
   330  post/windows/gather/enum_patches                              .                normal     No     Windows Gather Applied Patches
   331  post/windows/gather/enum_powershell_env                       .                normal     No     Windows Gather PowerShell Environment Setting Enumeration
   332  post/windows/gather/enum_prefetch                             .                normal     No     Windows Gather Prefetch File Information
   333  post/windows/gather/enum_proxy                                .                normal     No     Windows Gather Proxy Setting
   334  post/windows/gather/enum_putty_saved_sessions                 .                normal     No     PuTTY Saved Sessions Enumeration Module
   335  post/windows/gather/enum_services                             .                normal     No     Windows Gather Service Info Enumeration
   336  post/windows/gather/enum_shares                               .                normal     No     Windows Gather SMB Share Enumeration via Registry
   337  post/windows/gather/enum_snmp                                 .                normal     No     Windows Gather SNMP Settings
   338  post/windows/gather/enum_termserv                             .                normal     No     Windows Gather Terminal Server Client Connection Information Dumper
   339  post/windows/gather/enum_tokens                               .                normal     No     Windows Gather Enumerate Domain Admin Tokens (Token Hunter)
   340  post/windows/gather/enum_tomcat                               .                normal     No     Windows Gather Apache Tomcat Enumeration
   341  post/windows/gather/enum_trusted_locations                    .                normal     No     Windows Gather Microsoft Office Trusted Locations
   342  post/windows/gather/enum_unattend                             .                normal     No     Windows Gather Unattended Answer File Enumeration
   343  post/windows/gather/exchange                                  .                normal     No     Windows Gather Exchange Server Mailboxes
   344  post/windows/gather/file_from_raw_ntfs                        .                normal     No     Windows File Gather File from Raw NTFS
   345  post/windows/gather/forensics/browser_history                 .                normal     No     Windows Gather Skype, Firefox, and Chrome Artifacts
   346  post/windows/gather/forensics/duqu_check                      .                normal     No     Windows Gather Forensics Duqu Registry Check
   347  post/windows/gather/forensics/enum_drives                     .                normal     No     Windows Gather Physical Drives and Logical Volumes
   348  post/windows/gather/forensics/fanny_bmp_check                 .                normal     No     FannyBMP or DementiaWheel Detection Registry Check
   349  post/windows/gather/forensics/imager                          .                normal     No     Windows Gather Forensic Imaging
   350  post/windows/gather/forensics/nbd_server                      .                normal     No     Windows Gather Local NBD Server
   351  post/windows/gather/forensics/recovery_files                  .                normal     No     Windows Gather Deleted Files Enumeration and Recovering
   352  post/windows/gather/get_bookmarks                             .                normal     No     Bookmarked Sites Retriever
   353  post/windows/gather/hashdump                                  .                normal     No     Windows Gather Local User Account Password Hashes (Registry)
   354  post/windows/gather/local_admin_search_enum                   .                normal     No     Windows Gather Local Admin Search
   355  post/windows/gather/lsa_secrets                               .                normal     No     Windows Enumerate LSA Secrets
   356  post/windows/gather/make_csv_orgchart                         .                normal     No     Generate CSV Organizational Chart Data Using Manager Information
   357  post/windows/gather/memory_dump                               .                normal     No     Windows Process Memory Dump
   358  post/windows/gather/memory_grep                               .                normal     No     Windows Gather Process Memory Grep
   359  post/windows/gather/netlm_downgrade                           .                normal     No     Windows NetLM Downgrade Attack
   360  post/windows/gather/ntds_grabber                              .                normal     No     NTDS Grabber
   361  post/windows/gather/ntds_location                             .                normal     No     Post Windows Gather NTDS.DIT Location
   362  post/windows/gather/outlook                                   .                normal     No     Windows Gather Outlook Email Messages
   363  post/windows/gather/phish_windows_credentials                 .                normal     No     Windows Gather User Credentials (phishing)
   364  post/windows/gather/psreadline_history                        .                normal     No     Windows Gather PSReadline History
   365  post/windows/gather/resolve_sid                               .                normal     No     Windows Gather Local User Account SID Lookup
   366  post/windows/gather/screen_spy                                .                normal     No     Windows Gather Screen Spy
   367  post/windows/gather/smart_hashdump                            .                normal     No     Windows Gather Local and Domain Controller Account Password Hashes
   368  post/windows/gather/tcpnetstat                                .                normal     No     Windows Gather TCP Netstat
   369  post/windows/gather/usb_history                               .                normal     No     Windows Gather USB Drive History
   370  post/windows/gather/win_privs                                 .                normal     No     Windows Gather Privileges Enumeration
   371  post/windows/gather/wmic_command                              .                normal     No     Windows Gather Run WMIC Commands
   372  post/windows/gather/word_unc_injector                         .                normal     No     Windows Gather Microsoft Office Word UNC Path Injector
   373  post/windows/manage/add_user                                  .                normal     No     Windows Manage Add User to the Domain and/or to a Domain Group
   374  post/windows/manage/archmigrate                               .                normal     No     Architecture Migrate
   375  post/windows/manage/change_password                           .                normal     No     Windows Manage Change Password
   376  post/windows/manage/clone_proxy_settings                      .                normal     No     Windows Manage Proxy Setting Cloner
   377  post/windows/manage/delete_user                               .                normal     No     Windows Manage Local User Account Deletion
   378  post/windows/manage/dell_memory_protect                       .                manual     No     Dell DBUtilDrv2.sys Memory Protection Modifier
   379  post/windows/manage/download_exec                             .                normal     No     Windows Manage Download and/or Execute
   380  post/windows/manage/driver_loader                             .                normal     No     Windows Manage Driver Loader
   381  post/windows/manage/enable_rdp                                .                normal     No     Windows Manage Enable Remote Desktop
   382  post/windows/manage/enable_support_account                    .                normal     No     Windows Manage Trojanize Support Account
   383  post/windows/manage/exec_powershell                           .                normal     No     Windows Powershell Execution Post Module
   384  post/windows/manage/execute_dotnet_assembly                   .                normal     No     Execute .net Assembly (x64 only)
   385  post/windows/manage/forward_pageant                           .                normal     No     Forward SSH Agent Requests To Remote Pageant
   386  post/windows/manage/hashcarve                                 .                normal     No     Windows Local User Account Hash Carver
   387  post/windows/manage/ie_proxypac                               .                normal     No     Windows Manage Proxy PAC File
   388  post/windows/manage/inject_ca                                 .                normal     No     Windows Manage Certificate Authority Injection
   389  post/windows/manage/inject_host                               .                normal     No     Windows Manage Hosts File Injection
   390  post/windows/manage/install_python                            .                normal     No     Install Python for Windows
   391  post/windows/manage/install_ssh                               .                normal     No     Install OpenSSH for Windows
   392  post/windows/manage/kerberos_tickets                          .                normal     No     Kerberos Ticket Management
   393  post/windows/manage/killav                                    .                normal     No     Windows Post Kill Antivirus and Hips
   394  post/windows/manage/make_token                                .                normal     No     Make Token Command
   395  post/windows/manage/migrate                                   .                normal     No     Windows Manage Process Migration
   396  post/windows/manage/mssql_local_auth_bypass                   .                normal     No     Windows Manage Local Microsoft SQL Server Authorization Bypass
   397  post/windows/manage/multi_meterpreter_inject                  .                normal     No     Windows Manage Inject in Memory Multiple Payloads
   398  post/windows/manage/nbd_server                                .                normal     No     Windows Manage Local NBD Server for Remote Disks
   399  post/windows/manage/peinjector                                .                normal     No     Peinjector
   400  post/windows/manage/persistence_exe                           .                normal     No     Windows Manage Persistent EXE Payload Installer
   401  post/windows/manage/portproxy                                 .                normal     No     Windows Manage Set Port Forwarding With PortProxy
   402  post/windows/manage/powershell/build_net_code                 2012-08-14       excellent  No     Powershell .NET Compiler
   403  post/windows/manage/powershell/exec_powershell                .                normal     No     Windows Manage PowerShell Download and/or Execute
   404  post/windows/manage/powershell/load_script                    .                normal     No     Load Scripts Into PowerShell Session
   405  post/windows/manage/pptp_tunnel                               .                normal     No     Windows Manage Remote Point-to-Point Tunneling Protocol
   406  post/windows/manage/priv_migrate                              .                normal     No     Windows Manage Privilege Based Process Migration
   407  post/windows/manage/pxeexploit                                .                normal     No     Windows Manage PXE Exploit Server
   408  post/windows/manage/reflective_dll_inject                     .                normal     No     Windows Manage Reflective DLL Injection Module
   409  post/windows/manage/remove_ca                                 .                normal     No     Windows Manage Certificate Authority Removal
   410  post/windows/manage/remove_host                               .                normal     No     Windows Manage Host File Entry Removal
   411  post/windows/manage/rid_hijack                                .                normal     No     Windows Manage RID Hijacking
   412  post/windows/manage/rollback_defender_signatures              .                normal     No     Disable Windows Defender Signatures
   413  post/windows/manage/rpcapd_start                              .                normal     No     Windows Manage Remote Packet Capture Service Starter
   414  post/windows/manage/run_as                                    .                normal     No     Windows Manage Run Command As User
   415  post/windows/manage/run_as_psh                                .                normal     No     Windows 'Run As' Using Powershell
   416  post/windows/manage/sdel                                      .                normal     No     Windows Manage Safe Delete
   417  post/windows/manage/shellcode_inject                          .                normal     No     Windows Manage Memory Shellcode Injection Module
   418  post/windows/manage/sshkey_persistence                        .                good       No     SSH Key Persistence
   419  post/windows/manage/sticky_keys                               .                normal     No     Sticky Keys Persistence Module
   420  post/windows/manage/vmdk_mount                                .                normal     No     Windows Manage VMDK Mount Drive
   421  post/windows/manage/vss                                       .                normal     No     Windows Manage Volume Shadow Copies
   422  post/windows/manage/wdigest_caching                           .                normal     No     Windows Post Manage WDigest Credential Caching
   423  post/windows/manage/webcam                                    .                normal     No     Windows Manage Webcam
   424  post/windows/recon/computer_browser_discovery                 .                normal     No     Windows Recon Computer Browser Discovery
   425  post/windows/recon/outbound_ports                             .                normal     No     Windows Outbound-Filtering Rules
   426  post/windows/wlan/wlan_bss_list                               .                normal     No     Windows Gather Wireless BSS Info
   427  post/windows/wlan/wlan_current_connection                     .                normal     No     Windows Gather Wireless Current Connection Info
   428  post/windows/wlan/wlan_disconnect                             .                normal     No     Windows Disconnect Wireless Connection
   429  post/windows/wlan/wlan_probe_request                          .                normal     No     Windows Send Probe Request Packets
   430  post/windows/wlan/wlan_profile                                .                normal     No     Windows Gather Wireless Profile
```
