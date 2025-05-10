# Semua Modul Auxiliary yang Ada di Metasploit Framework:

```
Auxiliary
=========

   #     Name                                                                     Disclosure Date  Rank    Check  Description
   -     ----                                                                     ---------------  ----    -----  -----------
   0     auxiliary/admin/2wire/xslt_password_reset                                2007-08-15       normal  No     2Wire Cross-Site Request Forgery Password Reset Vulnerability
   1     auxiliary/admin/android/google_play_store_uxss_xframe_rce                .                normal  No     Android Browser RCE Through Google Play Store XFO
   2     auxiliary/admin/appletv/appletv_display_image                            .                normal  No     Apple TV Image Remote Control
   3     auxiliary/admin/appletv/appletv_display_video                            .                normal  No     Apple TV Video Remote Control
   4     auxiliary/admin/atg/atg_client                                           .                normal  No     Veeder-Root Automatic Tank Gauge (ATG) Administrative Client
   5     auxiliary/admin/aws/aws_launch_instances                                 .                normal  No     Launches Hosts in AWS
   6     auxiliary/admin/backupexec/dump                                          .                normal  No     Veritas Backup Exec Windows Remote File Access
   7     auxiliary/admin/backupexec/registry                                      .                normal  No     Veritas Backup Exec Server Registry Access
   8     auxiliary/admin/chromecast/chromecast_reset                              .                normal  No     Chromecast Factory Reset DoS
   9     auxiliary/admin/chromecast/chromecast_youtube                            .                normal  No     Chromecast YouTube Remote Control
   10    auxiliary/admin/citrix/citrix_netscaler_config_decrypt                   2022-05-19       normal  No     Decrypt Citrix NetScaler Config Secrets
   11    auxiliary/admin/db2/db2rcmd                                              2004-03-04       normal  No     IBM DB2 db2rcmd.exe Command Execution Vulnerability
   12    auxiliary/admin/dcerpc/cve_2020_1472_zerologon                           .                normal  Yes    Netlogon Weak Cryptographic Authentication
   13    auxiliary/admin/dcerpc/cve_2022_26923_certifried                         .                normal  No     Active Directory Certificate Services (ADCS) privilege escalation (Certifried)
   14    auxiliary/admin/dcerpc/icpr_cert                                         .                normal  No     ICPR Certificate Management
   15    auxiliary/admin/dcerpc/samr_account                                      .                normal  No     SAMR Account Management
   16    auxiliary/admin/dns/dyn_dns_update                                       .                normal  No     DNS Server Dynamic Update Record Injection
   17    auxiliary/admin/edirectory/edirectory_dhost_cookie                       .                normal  No     Novell eDirectory DHOST Predictable Session Cookie
   18    auxiliary/admin/edirectory/edirectory_edirutil                           .                normal  No     Novell eDirectory eMBox Unauthenticated File Access
   19    auxiliary/admin/emc/alphastor_devicemanager_exec                         2008-05-27       normal  No     EMC AlphaStor Device Manager Arbitrary Command Execution
   20    auxiliary/admin/emc/alphastor_librarymanager_exec                        2008-05-27       normal  No     EMC AlphaStor Library Manager Arbitrary Command Execution
   21    auxiliary/admin/firetv/firetv_youtube                                    .                normal  No     Amazon Fire TV YouTube Remote Control
   22    auxiliary/admin/hp/hp_data_protector_cmd                                 2011-02-07       normal  No     HP Data Protector 6.1 EXEC_CMD Command Execution
   23    auxiliary/admin/hp/hp_ilo_create_admin_account                           2017-08-24       normal  Yes    HP iLO 4 1.00-2.50 Authentication Bypass Administrator Account Creation
   24    auxiliary/admin/hp/hp_imc_som_create_account                             2013-10-08       normal  No     HP Intelligent Management SOM Account Creation
   25    auxiliary/admin/http/allegro_rompager_auth_bypass                        2014-12-17       normal  No     Allegro Software RomPager 'Misfortune Cookie' (CVE-2014-9222) Authentication Bypass
   26    auxiliary/admin/http/arris_motorola_surfboard_backdoor_xss               2015-04-08       normal  No     Arris / Motorola Surfboard SBG6580 Web Interface Takeover
   27    auxiliary/admin/http/atlassian_confluence_auth_bypass                    2023-10-04       normal  Yes    Atlassian Confluence Data Center and Server Authentication Bypass via Broken Access Control
   28    auxiliary/admin/http/axigen_file_access                                  2012-10-31       normal  No     Axigen Arbitrary File Read and Delete
   29    auxiliary/admin/http/cfme_manageiq_evm_pass_reset                        2013-11-12       normal  No     Red Hat CloudForms Management Engine 5.1 miq_policy/explorer SQL Injection
   30    auxiliary/admin/http/cisco_7937g_ssh_privesc                             2020-06-02       normal  No     Cisco 7937G SSH Privilege Escalation
   31    auxiliary/admin/http/cisco_ios_xe_cli_exec_cve_2023_20198                2023-10-16       normal  No     Cisco IOX XE unauthenticated Command Line Interface (CLI) execution
   32    auxiliary/admin/http/cisco_ios_xe_os_exec_cve_2023_20273                 2023-10-16       normal  No     Cisco IOX XE unauthenticated OS command execution
   33    auxiliary/admin/http/cisco_ssm_onprem_account                            2024-07-20       normal  Yes    Cisco Smart Software Manager (SSM) On-Prem Account Takeover (CVE-2024-20419)
   34    auxiliary/admin/http/cnpilot_r_cmd_exec                                  .                normal  No     Cambium cnPilot r200/r201 Command Execution as 'root'
   35    auxiliary/admin/http/cnpilot_r_fpt                                       .                normal  No     Cambium cnPilot r200/r201 File Path Traversal
   36    auxiliary/admin/http/contentkeeper_fileaccess                            .                normal  No     ContentKeeper Web Appliance mimencode File Access
   37    auxiliary/admin/http/dlink_dir_300_600_exec_noauth                       2013-02-04       normal  No     D-Link DIR-600 / DIR-300 Unauthenticated Remote Command Execution
   38    auxiliary/admin/http/dlink_dir_645_password_extractor                    .                normal  No     D-Link DIR 645 Password Extractor
   39    auxiliary/admin/http/dlink_dsl320b_password_extractor                    .                normal  No     D-Link DSL 320B Password Extractor
   40    auxiliary/admin/http/foreman_openstack_satellite_priv_esc                2013-06-06       normal  No     Foreman (Red Hat OpenStack/Satellite) users/create Mass Assignment
   41    auxiliary/admin/http/fortra_filecatalyst_workflow_sqli                   2024-06-25       normal  No     Fortra FileCatalyst Workflow SQL Injection (CVE-2024-5276)
   42    auxiliary/admin/http/gitlab_password_reset_account_takeover              2024-01-11       normal  No     GitLab Password Reset Account Takeover
   43    auxiliary/admin/http/gitstack_rest                                       2018-01-15       normal  No     GitStack Unauthenticated REST API Requests
   44    auxiliary/admin/http/grafana_auth_bypass                                 2019-08-14       normal  No     Grafana 2.0 through 5.2.2 authentication bypass for LDAP and OAuth
   45    auxiliary/admin/http/hikvision_unauth_pwd_reset_cve_2017_7921            2017-09-23       normal  Yes    Hikvision IP Camera Unauthenticated Password Change Via Improper Authentication Logic
   46    auxiliary/admin/http/hp_web_jetadmin_exec                                2004-04-27       normal  No     HP Web JetAdmin 6.5 Server Arbitrary Command Execution
   47    auxiliary/admin/http/ibm_drm_download                                    2020-04-21       normal  Yes    IBM Data Risk Manager Arbitrary File Download
   48    auxiliary/admin/http/idsecure_auth_bypass                                2023-11-27       normal  Yes    Control iD iDSecure Authentication Bypass (CVE-2023-6329)
   49    auxiliary/admin/http/iis_auth_bypass                                     2010-07-02       normal  No     MS10-065 Microsoft IIS 5 NTFS Stream Authentication Bypass
   50    auxiliary/admin/http/intersil_pass_reset                                 2007-09-10       normal  Yes    Intersil (Boa) HTTPd Basic Authentication Password Reset
   51    auxiliary/admin/http/iomega_storcenterpro_sessionid                      .                normal  No     Iomega StorCenter Pro NAS Web Authentication Bypass
   52    auxiliary/admin/http/ivanti_vtm_admin                                    2024-08-05       normal  Yes    Ivanti Virtual Traffic Manager Authentication Bypass (CVE-2024-7593)
   53    auxiliary/admin/http/jboss_bshdeployer                                   .                normal  No     JBoss JMX Console Beanshell Deployer WAR Upload and Deployment
   54    auxiliary/admin/http/jboss_deploymentfilerepository                      .                normal  No     JBoss JMX Console DeploymentFileRepository WAR Upload and Deployment
   55    auxiliary/admin/http/jboss_seam_exec                                     2010-07-19       normal  No     JBoss Seam 2 Remote Command Execution
   56    auxiliary/admin/http/joomla_registration_privesc                         2016-10-25       normal  Yes    Joomla Account Creation and Privilege Escalation
   57    auxiliary/admin/http/kaseya_master_admin                                 2015-09-23       normal  No     Kaseya VSA Master Administrator Account Creation
   58    auxiliary/admin/http/katello_satellite_priv_esc                          2014-03-24       normal  No     Katello (Red Hat Satellite) users/update_roles Missing Authorization
   59    auxiliary/admin/http/limesurvey_file_download                            2015-10-12       normal  No     Limesurvey Unauthenticated File Download
   60    auxiliary/admin/http/linksys_e1500_e2500_exec                            2013-02-05       normal  No     Linksys E1500/E2500 Remote Command Execution
   61    auxiliary/admin/http/linksys_tmunblock_admin_reset_bof                   2014-02-19       normal  No     Linksys WRT120N tmUnblock Stack Buffer Overflow
   62    auxiliary/admin/http/linksys_wrt54gl_exec                                2013-01-18       normal  No     Linksys WRT54GL Remote Command Execution
   63    auxiliary/admin/http/manage_engine_dc_create_admin                       2014-12-31       normal  No     ManageEngine Desktop Central Administrator Account Creation
   64    auxiliary/admin/http/manageengine_dir_listing                            2015-01-28       normal  No     ManageEngine Multiple Products Arbitrary Directory Listing
   65    auxiliary/admin/http/manageengine_file_download                          2015-01-28       normal  No     ManageEngine Multiple Products Arbitrary File Download
   66    auxiliary/admin/http/manageengine_pmp_privesc                            2014-11-08       normal  Yes    ManageEngine Password Manager SQLAdvancedALSearchResult.cc Pro SQL Injection
   67    auxiliary/admin/http/mantisbt_password_reset                             2017-04-16       normal  Yes    MantisBT password reset
   68    auxiliary/admin/http/mutiny_frontend_read_delete                         2013-05-15       normal  No     Mutiny 5 Arbitrary File Read and Delete
   69    auxiliary/admin/http/netflow_file_download                               2014-11-30       normal  No     ManageEngine NetFlow Analyzer Arbitrary File Download
   70    auxiliary/admin/http/netgear_auth_download                               2016-02-04       normal  No     NETGEAR ProSafe Network Management System 300 Authenticated File Download
   71    auxiliary/admin/http/netgear_pnpx_getsharefolderlist_auth_bypass         2021-09-06       normal  Yes    Netgear PNPX_GetShareFolderList Authentication Bypass
   72    auxiliary/admin/http/netgear_r6700_pass_reset                            2020-06-15       normal  Yes    Netgear R6700v3 Unauthenticated LAN Admin Password Reset
   73    auxiliary/admin/http/netgear_r7000_backup_cgi_heap_overflow_rce          2021-04-21       normal  Yes    Netgear R7000 backup.cgi Heap Overflow RCE
   74    auxiliary/admin/http/netgear_soap_password_extractor                     2015-02-11       normal  No     Netgear Unauthenticated SOAP Password Extractor
   75    auxiliary/admin/http/netgear_wnr2000_pass_recovery                       2016-12-20       normal  No     NETGEAR WNR2000v5 Administrator Password Recovery
   76    auxiliary/admin/http/nexpose_xxe_file_read                               .                normal  No     Nexpose XXE Arbitrary File Read
   77    auxiliary/admin/http/novell_file_reporter_filedelete                     .                normal  No     Novell File Reporter Agent Arbitrary File Delete
   78    auxiliary/admin/http/nuuo_nvrmini_reset                                  2016-08-04       normal  No     NUUO NVRmini 2 / NETGEAR ReadyNAS Surveillance Default Configuration Load and Administrator Password Reset
   79    auxiliary/admin/http/openbravo_xxe                                       2013-10-30       normal  No     Openbravo ERP XXE Arbitrary File Read
   80    auxiliary/admin/http/pfadmin_set_protected_alias                         2017-02-03       normal  Yes    Postfixadmin Protected Alias Deletion Vulnerability
   81    auxiliary/admin/http/pihole_domains_api_exec                             2021-08-04       normal  Yes    Pi-Hole Top Domains API Authenticated Exec
   82    auxiliary/admin/http/rails_devise_pass_reset                             2013-01-28       normal  No     Ruby on Rails Devise Authentication Password Reset
   83    auxiliary/admin/http/scadabr_credential_dump                             2017-05-28       normal  No     ScadaBR Credentials Dumper
   84    auxiliary/admin/http/scrutinizer_add_user                                2012-07-27       normal  No     Plixer Scrutinizer NetFlow and sFlow Analyzer HTTP Authentication Bypass
   85    auxiliary/admin/http/sophos_wpa_traversal                                2013-04-03       normal  No     Sophos Web Protection Appliance patience.cgi Directory Traversal
   86    auxiliary/admin/http/supra_smart_cloud_tv_rfi                            2019-06-03       normal  No     Supra Smart Cloud TV Remote File Inclusion
   87    auxiliary/admin/http/sysaid_admin_acct                                   2015-06-03       normal  No     SysAid Help Desk Administrator Account Creation
   88    auxiliary/admin/http/sysaid_file_download                                2015-06-03       normal  No     SysAid Help Desk Arbitrary File Download
   89    auxiliary/admin/http/sysaid_sql_creds                                    2015-06-03       normal  No     SysAid Help Desk Database Credentials Disclosure
   90    auxiliary/admin/http/telpho10_credential_dump                            2016-09-02       normal  No     Telpho10 Backup Credentials Dumper
   91    auxiliary/admin/http/tomcat_administration                               .                normal  No     Tomcat Administration Tool Default Access
   92    auxiliary/admin/http/tomcat_ghostcat                                     2020-02-20       normal  Yes    Apache Tomcat AJP File Read
   93    auxiliary/admin/http/tomcat_utf8_traversal                               2009-01-09       normal  No     Tomcat UTF-8 Directory Traversal Vulnerability
   94    auxiliary/admin/http/trendmicro_dlp_traversal                            2009-01-09       normal  No     TrendMicro Data Loss Prevention 5.5 Directory Traversal
   95    auxiliary/admin/http/typo3_news_module_sqli                              2017-04-06       normal  No     TYPO3 News Module SQL Injection
   96    auxiliary/admin/http/typo3_sa_2009_001                                   2009-01-20       normal  No     TYPO3 sa-2009-001 Weak Encryption Key File Disclosure
   97    auxiliary/admin/http/typo3_sa_2009_002                                   2009-02-10       normal  No     Typo3 sa-2009-002 File Disclosure
   98    auxiliary/admin/http/typo3_sa_2010_020                                   .                normal  No     TYPO3 sa-2010-020 Remote File Disclosure
   99    auxiliary/admin/http/typo3_winstaller_default_enc_keys                   .                normal  No     TYPO3 Winstaller Default Encryption Keys
   100   auxiliary/admin/http/ulterius_file_download                              .                normal  No     Ulterius Server File Download Vulnerability
   101   auxiliary/admin/http/vbulletin_upgrade_admin                             2013-10-09       normal  No     vBulletin Administrator Account Creation
   102   auxiliary/admin/http/webnms_cred_disclosure                              2016-07-04       normal  No     WebNMS Framework Server Credential Disclosure
   103   auxiliary/admin/http/webnms_file_download                                2016-07-04       normal  No     WebNMS Framework Server Arbitrary Text File Download
   104   auxiliary/admin/http/whatsup_gold_sqli                                   2024-08-29       normal  Yes    WhatsUp Gold SQL Injection (CVE-2024-6670)
   105   auxiliary/admin/http/wp_automatic_plugin_privesc                         2021-09-06       normal  Yes    WordPress Plugin Automatic Config Change to RCE
   106   auxiliary/admin/http/wp_custom_contact_forms                             2014-08-07       normal  No     WordPress custom-contact-forms Plugin SQL Upload
   107   auxiliary/admin/http/wp_easycart_privilege_escalation                    2015-02-25       normal  Yes    WordPress WP EasyCart Plugin Privilege Escalation
   108   auxiliary/admin/http/wp_gdpr_compliance_privesc                          2018-11-08       normal  Yes    WordPress WP GDPR Compliance Plugin Privilege Escalation
   109   auxiliary/admin/http/wp_google_maps_sqli                                 2019-04-02       normal  Yes    WordPress Google Maps Plugin SQL Injection
   110   auxiliary/admin/http/wp_masterstudy_privesc                              2022-02-18       normal  Yes    Wordpress MasterStudy Admin Account Creation
   111   auxiliary/admin/http/wp_post_smtp_acct_takeover                          2024-01-10       normal  Yes    Wordpress POST SMTP Account Takeover
   112   auxiliary/admin/http/wp_symposium_sql_injection                          2015-08-18       normal  Yes    WordPress Symposium Plugin SQL Injection
   113   auxiliary/admin/http/wp_wplms_privilege_escalation                       2015-02-09       normal  Yes    WordPress WPLMS Theme Privilege Escalation
   114   auxiliary/admin/http/zyxel_admin_password_extractor                      .                normal  No     ZyXEL GS1510-16 Password Extractor
   115   auxiliary/admin/kerberos/forge_ticket                                    .                normal  No     Kerberos Silver/Golden/Diamond/Sapphire Ticket Forging
   116   auxiliary/admin/kerberos/get_ticket                                      .                normal  No     Kerberos TGT/TGS Ticket Requester
   117   auxiliary/admin/kerberos/inspect_ticket                                  .                normal  No     Kerberos Ticket Inspecting
   118   auxiliary/admin/kerberos/keytab                                          .                normal  No     Kerberos keytab utilities
   119   auxiliary/admin/kerberos/ms14_068_kerberos_checksum                      2014-11-18       normal  No     MS14-068 Microsoft Kerberos Checksum Validation Vulnerability
   120   auxiliary/admin/kerberos/ticket_converter                                .                normal  No     Kerberos ticket converter
   121   auxiliary/admin/ldap/ad_cs_cert_template                                 .                normal  No     AD CS Certificate Template Management
   122   auxiliary/admin/ldap/change_password                                     .                normal  No     Change Password
   123   auxiliary/admin/ldap/rbcd                                                .                normal  No     Role Base Constrained Delegation
   124   auxiliary/admin/ldap/shadow_credentials                                  .                normal  No     Shadow Credentials
   125   auxiliary/admin/ldap/vmware_vcenter_vmdir_auth_bypass                    2020-04-09       normal  Yes    VMware vCenter Server vmdir Authentication Bypass
   126   auxiliary/admin/maxdb/maxdb_cons_exec                                    2008-01-09       normal  No     SAP MaxDB cons.exe Remote Command Injection
   127   auxiliary/admin/misc/sercomm_dump_config                                 2013-12-31       normal  No     SerComm Device Configuration Dump
   128   auxiliary/admin/misc/wol                                                 .                normal  No     UDP Wake-On-Lan (WOL)
   129   auxiliary/admin/motorola/wr850g_cred                                     2004-09-24       normal  No     Motorola WR850G v4.03 Credentials
   130   auxiliary/admin/ms/ms08_059_his2006                                      2008-10-14       normal  No     Microsoft Host Integration Server 2006 Command Execution Vulnerability
   131   auxiliary/admin/mssql/mssql_enum                                         .                normal  No     Microsoft SQL Server Configuration Enumerator
   132   auxiliary/admin/mssql/mssql_enum_domain_accounts                         .                normal  No     Microsoft SQL Server SUSER_SNAME Windows Domain Account Enumeration
   133   auxiliary/admin/mssql/mssql_enum_domain_accounts_sqli                    .                normal  No     Microsoft SQL Server SQLi SUSER_SNAME Windows Domain Account Enumeration
   134   auxiliary/admin/mssql/mssql_enum_sql_logins                              .                normal  No     Microsoft SQL Server SUSER_SNAME SQL Logins Enumeration
   135   auxiliary/admin/mssql/mssql_escalate_dbowner                             .                normal  No     Microsoft SQL Server Escalate Db_Owner
   136   auxiliary/admin/mssql/mssql_escalate_dbowner_sqli                        .                normal  No     Microsoft SQL Server SQLi Escalate Db_Owner
   137   auxiliary/admin/mssql/mssql_escalate_execute_as                          .                normal  No     Microsoft SQL Server Escalate EXECUTE AS
   138   auxiliary/admin/mssql/mssql_escalate_execute_as_sqli                     .                normal  No     Microsoft SQL Server SQLi Escalate Execute AS
   139   auxiliary/admin/mssql/mssql_exec                                         .                normal  No     Microsoft SQL Server Command Execution
   140   auxiliary/admin/mssql/mssql_findandsampledata                            .                normal  No     Microsoft SQL Server Find and Sample Data
   141   auxiliary/admin/mssql/mssql_idf                                          .                normal  No     Microsoft SQL Server Interesting Data Finder
   142   auxiliary/admin/mssql/mssql_ntlm_stealer                                 .                normal  No     Microsoft SQL Server NTLM Stealer
   143   auxiliary/admin/mssql/mssql_ntlm_stealer_sqli                            .                normal  No     Microsoft SQL Server SQLi NTLM Stealer
   144   auxiliary/admin/mssql/mssql_sql                                          .                normal  No     Microsoft SQL Server Generic Query
   145   auxiliary/admin/mssql/mssql_sql_file                                     .                normal  No     Microsoft SQL Server Generic Query from File
   146   auxiliary/admin/mysql/mysql_enum                                         .                normal  No     MySQL Enumeration Module
   147   auxiliary/admin/mysql/mysql_sql                                          .                normal  No     MySQL SQL Generic Query
   148   auxiliary/admin/natpmp/natpmp_map                                        .                normal  No     NAT-PMP Port Mapper
   149   auxiliary/admin/netbios/netbios_spoof                                    .                normal  No     NetBIOS Response Brute Force Spoof (Direct)
   150   auxiliary/admin/networking/arista_config                                 .                normal  No     Arista Configuration Importer
   151   auxiliary/admin/networking/brocade_config                                .                normal  No     Brocade Configuration Importer
   152   auxiliary/admin/networking/cisco_asa_extrabacon                          .                normal  Yes    Cisco ASA Authentication Bypass (EXTRABACON)
   153   auxiliary/admin/networking/cisco_config                                  .                normal  No     Cisco Configuration Importer
   154   auxiliary/admin/networking/cisco_dcnm_auth_bypass                        2020-06-01       normal  Yes    Cisco DCNM auth bypass
   155   auxiliary/admin/networking/cisco_dcnm_download                           2019-06-26       normal  No     Cisco Data Center Network Manager Unauthenticated File Download
   156   auxiliary/admin/networking/cisco_secure_acs_bypass                       .                normal  No     Cisco Secure ACS Unauthorized Password Change
   157   auxiliary/admin/networking/cisco_vpn_3000_ftp_bypass                     2006-08-23       normal  No     Cisco VPN Concentrator 3000 FTP Unauthorized Administrative Access
   158   auxiliary/admin/networking/f5_config                                     .                normal  No     F5 Configuration Importer
   159   auxiliary/admin/networking/juniper_config                                .                normal  No     Juniper Configuration Importer
   160   auxiliary/admin/networking/mikrotik_config                               .                normal  No     Mikrotik Configuration Importer
   161   auxiliary/admin/networking/ubiquiti_config                               .                normal  No     Ubiquiti Configuration Importer
   162   auxiliary/admin/networking/vyos_config                                   .                normal  No     VyOS Configuration Importer
   163   auxiliary/admin/officescan/tmlisten_traversal                            .                normal  No     TrendMicro OfficeScanNT Listener Traversal Arbitrary File Access
   164   auxiliary/admin/oracle/ora_ntlm_stealer                                  2009-04-07       normal  No     Oracle SMB Relay Code Execution
   165   auxiliary/admin/oracle/oracle_index_privesc                              2015-01-21       normal  No     Oracle DB Privilege Escalation via Function-Based Index
   166   auxiliary/admin/oracle/oracle_login                                      2008-11-20       normal  No     Oracle Account Discovery
   167   auxiliary/admin/oracle/oracle_sql                                        2007-12-07       normal  No     Oracle SQL Generic Query
   168   auxiliary/admin/oracle/oraenum                                           .                normal  No     Oracle Database Enumeration
   169   auxiliary/admin/oracle/osb_execqr                                        2009-01-14       normal  No     Oracle Secure Backup exec_qr() Command Injection Vulnerability
   170   auxiliary/admin/oracle/osb_execqr2                                       2009-08-18       normal  No     Oracle Secure Backup Authentication Bypass/Command Injection Vulnerability
   171   auxiliary/admin/oracle/osb_execqr3                                       2010-07-13       normal  No     Oracle Secure Backup Authentication Bypass/Command Injection Vulnerability
   172   auxiliary/admin/oracle/post_exploitation/win32exec                       2007-12-07       normal  No     Oracle Java execCommand (Win32)
   173   auxiliary/admin/oracle/post_exploitation/win32upload                     2005-02-10       normal  No     Oracle URL Download
   174   auxiliary/admin/oracle/sid_brute                                         2009-01-07       normal  No     Oracle TNS Listener SID Brute Forcer
   175   auxiliary/admin/oracle/tnscmd                                            2009-02-01       normal  No     Oracle TNS Listener Command Issuer
   176   auxiliary/admin/pop2/uw_fileretrieval                                    2000-07-14       normal  No     UoW pop2d Remote File Retrieval Vulnerability
   177   auxiliary/admin/postgres/postgres_readfile                               .                normal  No     PostgreSQL Server Generic Query
   178   auxiliary/admin/postgres/postgres_sql                                    .                normal  No     PostgreSQL Server Generic Query
   179   auxiliary/admin/registry_security_descriptor                             .                normal  No     Windows Registry Security Descriptor Utility
   180   auxiliary/admin/sap/cve_2020_6207_solman_rce                             2020-10-03       normal  No     SAP Solution Manager remote unauthorized OS commands execution
   181   auxiliary/admin/sap/cve_2020_6287_ws_add_user                            2020-07-14       normal  Yes    SAP Unauthenticated WebService User Creation
   182   auxiliary/admin/sap/sap_configservlet_exec_noauth                        2012-11-01       normal  No     SAP ConfigServlet OS Command Execution
   183   auxiliary/admin/sap/sap_igs_xmlchart_xxe                                 2018-03-14       normal  Yes    SAP Internet Graphics Server (IGS) XMLCHART XXE
   184   auxiliary/admin/sap/sap_mgmt_con_osexec                                  .                normal  No     SAP Management Console OSExecute
   185   auxiliary/admin/scada/advantech_webaccess_dbvisitor_sqli                 2014-04-08       normal  Yes    Advantech WebAccess DBVisitor.dll ChartThemeConfig SQL Injection
   186   auxiliary/admin/scada/ge_proficy_substitute_traversal                    2013-01-22       normal  No     GE Proficy Cimplicity WebView substitute.bcl Directory Traversal
   187   auxiliary/admin/scada/modicon_command                                    2012-04-05       normal  No     Schneider Modicon Remote START/STOP Command
   188   auxiliary/admin/scada/modicon_password_recovery                          2012-01-19       normal  Yes    Schneider Modicon Quantum Password Recovery
   189   auxiliary/admin/scada/modicon_stux_transfer                              2012-04-05       normal  No     Schneider Modicon Ladder Logic Upload/Download
   190   auxiliary/admin/scada/moxa_credentials_recovery                          2015-07-28       normal  Yes    Moxa Device Credential Retrieval
   191   auxiliary/admin/scada/multi_cip_command                                  2012-01-19       normal  No     Allen-Bradley/Rockwell Automation EtherNet/IP CIP Commands
   192   auxiliary/admin/scada/mypro_mgr_creds                                    2025-02-13       normal  Yes    mySCADA myPRO Manager Credential Harvester (CVE-2025-24865 and CVE-2025-22896)
   193   auxiliary/admin/scada/pcom_command                                       .                normal  No     Unitronics PCOM remote START/STOP/RESET command
   194   auxiliary/admin/scada/phoenix_command                                    2015-05-20       normal  No     PhoenixContact PLC Remote START/STOP Command
   195   auxiliary/admin/scada/yokogawa_bkbcopyd_client                           2014-08-09       normal  No     Yokogawa BKBCopyD.exe Client
   196   auxiliary/admin/sccm/get_naa_credentials                                 .                normal  No     Get NAA Credentials
   197   auxiliary/admin/serverprotect/file                                       .                normal  No     TrendMicro ServerProtect File Access
   198   auxiliary/admin/smb/change_password                                      .                normal  No     SMB Password Change
   199   auxiliary/admin/smb/check_dir_file                                       .                normal  No     SMB Scanner Check File/Directory Utility
   200   auxiliary/admin/smb/delete_file                                          .                normal  No     SMB File Delete Utility
   201   auxiliary/admin/smb/download_file                                        .                normal  No     SMB File Download Utility
   202   auxiliary/admin/smb/list_directory                                       .                normal  No     SMB Directory Listing Utility
   203   auxiliary/admin/smb/ms17_010_command                                     2017-03-14       normal  No     MS17-010 EternalRomance/EternalSynergy/EternalChampion SMB Remote Windows Command Execution
   204   auxiliary/admin/smb/psexec_ntdsgrab                                      .                normal  No     PsExec NTDS.dit And SYSTEM Hive Download Utility
   205   auxiliary/admin/smb/samba_symlink_traversal                              .                normal  No     Samba Symlink Directory Traversal
   206   auxiliary/admin/smb/upload_file                                          .                normal  No     SMB File Upload Utility
   207   auxiliary/admin/smb/webexec_command                                      .                normal  No     WebEx Remote Command Execution Utility
   208   auxiliary/admin/sunrpc/solaris_kcms_readfile                             2003-01-22       normal  No     Solaris KCMS + TTDB Arbitrary File Read
   209   auxiliary/admin/teradata/teradata_odbc_sql                               2018-03-29       normal  No     Teradata ODBC SQL Query Module
   210   auxiliary/admin/tftp/tftp_transfer_util                                  .                normal  No     TFTP File Transfer Utility
   211   auxiliary/admin/tikiwiki/tikidblib                                       2006-11-01       normal  No     TikiWiki Information Disclosure
   212   auxiliary/admin/upnp/soap_portmapping                                    .                normal  No     UPnP IGD SOAP Port Mapping Utility
   213   auxiliary/admin/vmware/poweroff_vm                                       .                normal  No     VMWare Power Off Virtual Machine
   214   auxiliary/admin/vmware/poweron_vm                                        .                normal  No     VMWare Power On Virtual Machine
   215   auxiliary/admin/vmware/tag_vm                                            .                normal  No     VMWare Tag Virtual Machine
   216   auxiliary/admin/vmware/terminate_esx_sessions                            .                normal  No     VMWare Terminate ESX Login Sessions
   217   auxiliary/admin/vmware/vcenter_forge_saml_token                          2022-04-20       normal  No     VMware vCenter Forge SAML Authentication Credentials
   218   auxiliary/admin/vmware/vcenter_offline_mdb_extract                       2022-05-10       normal  No     VMware vCenter Extract Secrets from vmdir / vmafd DB File
   219   auxiliary/admin/vnc/realvnc_41_bypass                                    2006-05-15       normal  No     RealVNC NULL Authentication Mode Bypass
   220   auxiliary/admin/vxworks/apple_airport_extreme_password                   .                normal  No     Apple Airport Extreme Password Extraction (WDBRPC)
   221   auxiliary/admin/vxworks/dlink_i2eye_autoanswer                           .                normal  No     D-Link i2eye Video Conference AutoAnswer (WDBRPC)
   222   auxiliary/admin/vxworks/wdbrpc_memory_dump                               .                normal  No     VxWorks WDB Agent Remote Memory Dump
   223   auxiliary/admin/vxworks/wdbrpc_reboot                                    .                normal  No     VxWorks WDB Agent Remote Reboot
   224   auxiliary/admin/webmin/edit_html_fileaccess                              2012-09-06       normal  No     Webmin edit_html.cgi file Parameter Traversal Arbitrary File Access
   225   auxiliary/admin/webmin/file_disclosure                                   2006-06-30       normal  No     Webmin File Disclosure
   226   auxiliary/admin/wemo/crockpot                                            .                normal  Yes    Belkin Wemo-Enabled Crock-Pot Remote Control
   227   auxiliary/admin/zend/java_bridge                                         2011-03-28       normal  No     Zend Server Java Bridge Design Flaw Remote Code Execution
   228   auxiliary/analyze/apply_pot                                              .                normal  No     Apply Pot File To Hashes
   229   auxiliary/analyze/crack_aix                                              .                normal  No     Password Cracker: AIX
   230   auxiliary/analyze/crack_databases                                        .                normal  No     Password Cracker: Databases
   231   auxiliary/analyze/crack_linux                                            .                normal  No     Password Cracker: Linux
   232   auxiliary/analyze/crack_mobile                                           .                normal  No     Password Cracker: Mobile
   233   auxiliary/analyze/crack_osx                                              .                normal  No     Password Cracker: OSX
   234   auxiliary/analyze/crack_webapps                                          .                normal  No     Password Cracker: Webapps
   235   auxiliary/analyze/crack_windows                                          .                normal  No     Password Cracker: Windows
   236   auxiliary/analyze/modbus_zip                                             .                normal  No     Extract zip from Modbus communication
   237   auxiliary/bnat/bnat_router                                               .                normal  No     BNAT Router
   238   auxiliary/bnat/bnat_scan                                                 .                normal  No     BNAT Scanner
   239   auxiliary/client/hwbridge/connect                                        .                normal  No     Hardware Bridge Session Connector
   240   auxiliary/client/iec104/iec104                                           .                normal  No     IEC104 Client Utility
   241   auxiliary/client/mms/send_mms                                            .                normal  No     MMS Client
   242   auxiliary/client/sms/send_text                                           .                normal  No     SMS Client
   243   auxiliary/client/smtp/emailer                                            .                normal  No     Generic Emailer (SMTP)
   244   auxiliary/client/telegram/send_message                                   .                normal  No     Telegram Message Client
   245   auxiliary/cloud/aws/enum_ec2                                             .                normal  No     Amazon Web Services EC2 instance enumeration
   246   auxiliary/cloud/aws/enum_iam                                             .                normal  No     Amazon Web Services IAM credential enumeration
   247   auxiliary/cloud/aws/enum_s3                                              .                normal  No     Amazon Web Services S3 instance enumeration
   248   auxiliary/cloud/aws/enum_ssm                                             .                normal  No     Amazon Web Services EC2 SSM enumeration
   249   auxiliary/cloud/kubernetes/enum_kubernetes                               .                normal  No     Kubernetes Enumeration
   250   auxiliary/crawler/msfcrawler                                             .                normal  No     Metasploit Web Crawler
   251   auxiliary/docx/word_unc_injector                                         .                normal  No     Microsoft Word UNC Path Injector
   252   auxiliary/dos/android/android_stock_browser_iframe                       2012-12-01       normal  No     Android Stock Browser Iframe DOS
   253   auxiliary/dos/apple_ios/webkit_backdrop_filter_blur                      2018-09-15       normal  No     iOS Safari Denial of Service with CSS
   254   auxiliary/dos/cisco/cisco_7937g_dos                                      2020-06-02       normal  No     Cisco 7937G Denial-of-Service Attack
   255   auxiliary/dos/cisco/cisco_7937g_dos_reboot                               2020-06-02       normal  No     Cisco 7937G Denial-of-Service Reboot Attack
   256   auxiliary/dos/cisco/ios_http_percentpercent                              2000-04-26       normal  No     Cisco IOS HTTP GET /%% Request Denial of Service
   257   auxiliary/dos/cisco/ios_telnet_rocem                                     2017-03-17       normal  No     Cisco IOS Telnet Denial of Service
   258   auxiliary/dos/dhcp/isc_dhcpd_clientid                                    .                normal  No     ISC DHCP Zero Length ClientID Denial of Service Module
   259   auxiliary/dos/dns/bind_tkey                                              2015-07-28       normal  No     BIND TKEY Query Denial of Service
   260   auxiliary/dos/dns/bind_tsig                                              2016-09-27       normal  No     BIND TSIG Query Denial of Service
   261   auxiliary/dos/dns/bind_tsig_badtime                                      2020-05-19       normal  No     BIND TSIG Badtime Query Denial of Service
   262   auxiliary/dos/freebsd/nfsd/nfsd_mount                                    .                normal  No     FreeBSD Remote NFS RPC Request Denial of Service
   263   auxiliary/dos/ftp/vsftpd_232                                             2011-02-03       normal  Yes    VSFTPD 2.3.2 Denial of Service
   264   auxiliary/dos/hp/data_protector_rds                                      2011-01-08       normal  No     HP Data Protector Manager RDS DOS
   265   auxiliary/dos/http/3com_superstack_switch                                2004-06-24       normal  No     3Com SuperStack Switch Denial of Service
   266   auxiliary/dos/http/apache_commons_fileupload_dos                         2014-02-06       normal  No     Apache Commons FileUpload and Apache Tomcat DoS
   267   auxiliary/dos/http/apache_mod_isapi                                      2010-03-05       normal  No     Apache mod_isapi Dangling Pointer
   268   auxiliary/dos/http/apache_range_dos                                      2011-08-19       normal  No     Apache Range Header DoS (Apache Killer)
   269   auxiliary/dos/http/apache_tomcat_transfer_encoding                       2010-07-09       normal  No     Apache Tomcat Transfer-Encoding Information Disclosure and DoS
   270   auxiliary/dos/http/brother_debut_dos                                     2017-11-02       normal  No     Brother Debut http Denial Of Service
   271   auxiliary/dos/http/cable_haunt_websocket_dos                             2020-01-07       normal  No     "Cablehaunt" Cable Modem WebSocket DoS
   272   auxiliary/dos/http/canon_wireless_printer                                2013-06-18       normal  No     Canon Wireless Printer Denial Of Service
   273   auxiliary/dos/http/dell_openmanage_post                                  2004-02-26       normal  No     Dell OpenManage POST Request Heap Overflow (win32)
   274   auxiliary/dos/http/f5_bigip_apm_max_sessions                             .                normal  No     F5 BigIP Access Policy Manager Session Exhaustion Denial of Service
   275   auxiliary/dos/http/flexense_http_server_dos                              2018-03-09       normal  Yes    Flexense HTTP Server Denial Of Service
   276   auxiliary/dos/http/gzip_bomb_dos                                         2004-01-01       normal  No     Gzip Memory Bomb Denial Of Service
   277   auxiliary/dos/http/hashcollision_dos                                     2011-12-28       normal  No     Hashtable Collisions
   278   auxiliary/dos/http/ibm_lotus_notes                                       2017-08-31       normal  No     IBM Notes encodeURI DOS
   279   auxiliary/dos/http/ibm_lotus_notes2                                      2017-08-31       normal  No     IBM Notes Denial Of Service
   280   auxiliary/dos/http/marked_redos                                          .                normal  No     marked npm module "heading" ReDoS
   281   auxiliary/dos/http/metasploit_httphandler_dos                            2019-09-04       normal  No     Metasploit HTTP(S) handler DoS
   282   auxiliary/dos/http/monkey_headers                                        2013-05-30       normal  No     Monkey HTTPD Header Parsing Denial of Service (DoS)
   283   auxiliary/dos/http/ms15_034_ulonglongadd                                 .                normal  Yes    MS15-034 HTTP Protocol Stack Request Handling Denial-of-Service
   284   auxiliary/dos/http/nodejs_pipelining                                     2013-10-18       normal  Yes    Node.js HTTP Pipelining Denial of Service
   285   auxiliary/dos/http/novell_file_reporter_heap_bof                         2012-11-16       normal  No     NFR Agent Heap Overflow Vulnerability
   286   auxiliary/dos/http/rails_action_view                                     2013-12-04       normal  No     Ruby on Rails Action View MIME Memory Exhaustion
   287   auxiliary/dos/http/rails_json_float_dos                                  2013-11-22       normal  No     Ruby on Rails JSON Processor Floating Point Heap Overflow DoS
   288   auxiliary/dos/http/slowloris                                             2009-06-17       normal  No     Slowloris Denial of Service Attack
   289   auxiliary/dos/http/sonicwall_ssl_format                                  2009-05-29       normal  No     SonicWALL SSL-VPN Format String Vulnerability
   290   auxiliary/dos/http/squid_range_dos                                       2021-05-27       normal  No     Squid Proxy Range Header DoS
   291   auxiliary/dos/http/tautulli_shutdown_exec                                .                normal  No     Tautulli v2.1.9 - Shutdown Denial of Service
   292   auxiliary/dos/http/ua_parser_js_redos                                    .                normal  No     ua-parser-js npm module ReDoS
   293   auxiliary/dos/http/webkitplus                                            2018-06-03       normal  No     WebKitGTK+ WebKitFaviconDatabase DoS
   294   auxiliary/dos/http/webrick_regex                                         2008-08-08       normal  No     Ruby WEBrick::HTTP::DefaultFileHandler DoS
   295   auxiliary/dos/http/wordpress_directory_traversal_dos                     .                normal  No     WordPress Traversal Directory DoS
   296   auxiliary/dos/http/wordpress_long_password_dos                           2014-11-20       normal  No     WordPress Long Password DoS
   297   auxiliary/dos/http/wordpress_xmlrpc_dos                                  2014-08-06       normal  No     Wordpress XMLRPC DoS
   298   auxiliary/dos/http/ws_dos                                                .                normal  No     ws - Denial of Service
   299   auxiliary/dos/mdns/avahi_portzero                                        2008-11-14       normal  No     Avahi Source Port 0 DoS
   300   auxiliary/dos/mirageos/qubes_mirage_firewall_dos                         2022-12-04       normal  No     Mirage firewall for QubesOS 0.8.0-0.8.3 Denial of Service (DoS) Exploit
   301   auxiliary/dos/misc/dopewars                                              2009-10-05       normal  No     Dopewars Denial of Service
   302   auxiliary/dos/misc/ibm_sametime_webplayer_dos                            2013-11-07       normal  No     IBM Lotus Sametime WebPlayer DoS
   303   auxiliary/dos/misc/ibm_tsm_dos                                           2015-12-15       normal  No     IBM Tivoli Storage Manager FastBack Server Opcode 0x534 Denial of Service
   304   auxiliary/dos/misc/memcached                                             .                normal  No     Memcached Remote Denial of Service
   305   auxiliary/dos/ntp/ntpd_reserved_dos                                      2009-10-04       normal  No     NTP.org ntpd Reserved Mode Denial of Service
   306   auxiliary/dos/pptp/ms02_063_pptp_dos                                     2002-09-26       normal  No     MS02-063 PPTP Malformed Control Data Kernel Denial of Service
   307   auxiliary/dos/rpc/rpcbomb                                                .                normal  No     RPC DoS targeting *nix rpcbind/libtirpc
   308   auxiliary/dos/samba/lsa_addprivs_heap                                    .                normal  No     Samba lsa_io_privilege_set Heap Overflow
   309   auxiliary/dos/samba/lsa_transnames_heap                                  .                normal  No     Samba lsa_io_trans_names Heap Overflow
   310   auxiliary/dos/samba/read_nttrans_ea_list                                 .                normal  No     Samba read_nttrans_ea_list Integer Overflow
   311   auxiliary/dos/sap/sap_soap_rfc_eps_delete_file                           .                normal  No     SAP SOAP EPS_DELETE_FILE File Deletion
   312   auxiliary/dos/scada/allen_bradley_pccc                                   .                normal  Yes    DoS Exploitation of Allen-Bradley's Legacy Protocol (PCCC)
   313   auxiliary/dos/scada/beckhoff_twincat                                     2011-09-13       normal  No     Beckhoff TwinCAT SCADA PLC 2.11.0.2004 DoS
   314   auxiliary/dos/scada/d20_tftp_overflow                                    2012-01-19       normal  No     General Electric D20ME TFTP Server Buffer Overflow DoS
   315   auxiliary/dos/scada/igss9_dataserver                                     2011-12-20       normal  No     7-Technologies IGSS 9 IGSSdataServer.exe DoS
   316   auxiliary/dos/scada/siemens_siprotec4                                    .                normal  No     Siemens SIPROTEC 4 and SIPROTEC Compact EN100 Ethernet Module - Denial of Service
   317   auxiliary/dos/scada/yokogawa_logsvr                                      2014-03-10       normal  No     Yokogawa CENTUM CS 3000 BKCLogSvr.exe Heap Buffer Overflow
   318   auxiliary/dos/smb/smb_loris                                              2017-06-29       normal  No     SMBLoris NBSS Denial of Service
   319   auxiliary/dos/smtp/sendmail_prescan                                      2003-09-17       normal  No     Sendmail SMTP Address prescan Memory Corruption
   320   auxiliary/dos/solaris/lpd/cascade_delete                                 .                normal  No     Solaris LPD Arbitrary File Delete
   321   auxiliary/dos/ssl/dtls_changecipherspec                                  2000-04-26       normal  No     OpenSSL DTLS ChangeCipherSpec Remote DoS
   322   auxiliary/dos/ssl/dtls_fragment_overflow                                 2014-06-05       normal  No     OpenSSL DTLS Fragment Buffer Overflow DoS
   323   auxiliary/dos/ssl/openssl_aesni                                          2013-02-05       normal  No     OpenSSL TLS 1.1 and 1.2 AES-NI DoS
   324   auxiliary/dos/syslog/rsyslog_long_tag                                    2011-09-01       normal  No     rsyslog Long Tag Off-By-Two DoS
   325   auxiliary/dos/tcp/claymore_dos                                           2018-02-06       normal  No     Claymore Dual GPU Miner  Format String dos attack
   326   auxiliary/dos/tcp/junos_tcp_opt                                          .                normal  No     Juniper JunOS Malformed TCP Option
   327   auxiliary/dos/tcp/synflood                                               .                normal  No     TCP SYN Flooder
   328   auxiliary/dos/upnp/miniupnpd_dos                                         2013-03-27       normal  No     MiniUPnPd 1.4 Denial of Service (DoS) Exploit
   329   auxiliary/dos/windows/appian/appian_bpm                                  2007-12-17       normal  No     Appian Enterprise Business Suite 5.6 SP1 DoS
   330   auxiliary/dos/windows/browser/ms09_065_eot_integer                       2009-11-10       normal  No     Microsoft Windows EOT Font Table Directory Integer Overflow
   331   auxiliary/dos/windows/ftp/filezilla_admin_user                           2005-11-07       normal  No     FileZilla FTP Server Admin Interface Denial of Service
   332   auxiliary/dos/windows/ftp/filezilla_server_port                          2006-12-11       normal  No     FileZilla FTP Server Malformed PORT Denial of Service
   333   auxiliary/dos/windows/ftp/guildftp_cwdlist                               2008-10-12       normal  No     Guild FTPd 0.999.8.11/0.999.14 Heap Corruption
   334   auxiliary/dos/windows/ftp/iis75_ftpd_iac_bof                             2010-12-21       normal  No     Microsoft IIS FTP Server Encoded Response Overflow Trigger
   335   auxiliary/dos/windows/ftp/iis_list_exhaustion                            2009-09-03       normal  No     Microsoft IIS FTP Server LIST Stack Exhaustion
   336   auxiliary/dos/windows/ftp/solarftp_user                                  2011-02-22       normal  No     Solar FTP Server Malformed USER Denial of Service
   337   auxiliary/dos/windows/ftp/titan626_site                                  2008-10-14       normal  No     Titan FTP Server 6.26.630 SITE WHO DoS
   338   auxiliary/dos/windows/ftp/vicftps50_list                                 2008-10-24       normal  No     Victory FTP Server 5.0 LIST DoS
   339   auxiliary/dos/windows/ftp/winftp230_nlst                                 2008-09-26       normal  No     WinFTP 2.3.0 NLST Denial of Service
   340   auxiliary/dos/windows/ftp/xmeasy560_nlst                                 2008-10-13       normal  No     XM Easy Personal FTP Server 5.6.0 NLST DoS
   341   auxiliary/dos/windows/ftp/xmeasy570_nlst                                 2009-03-27       normal  No     XM Easy Personal FTP Server 5.7.0 NLST DoS
   342   auxiliary/dos/windows/games/kaillera                                     2011-07-02       normal  No     Kaillera 0.86 Server Denial of Service
   343   auxiliary/dos/windows/http/http_sys_accept_encoding_dos_cve_2021_31166   2021-05-11       normal  No     Windows IIS HTTP Protocol Stack DOS
   344   auxiliary/dos/windows/http/ms10_065_ii6_asp_dos                          2010-09-14       normal  No     Microsoft IIS 6.0 ASP Stack Exhaustion Denial of Service
   345   auxiliary/dos/windows/http/pi3web_isapi                                  2008-11-13       normal  No     Pi3Web ISAPI DoS
   346   auxiliary/dos/windows/llmnr/ms11_030_dnsapi                              2011-04-12       normal  No     Microsoft Windows DNSAPI.dll LLMNR Buffer Underrun DoS
   347   auxiliary/dos/windows/nat/nat_helper                                     2006-10-26       normal  No     Microsoft Windows NAT Helper Denial of Service
   348   auxiliary/dos/windows/rdp/ms12_020_maxchannelids                         2012-03-16       normal  No     MS12-020 Microsoft Remote Desktop Use-After-Free DoS
   349   auxiliary/dos/windows/smb/ms05_047_pnp                                   .                normal  No     Microsoft Plug and Play Service Registry Overflow
   350   auxiliary/dos/windows/smb/ms06_035_mailslot                              2006-07-11       normal  No     Microsoft SRV.SYS Mailslot Write Corruption
   351   auxiliary/dos/windows/smb/ms06_063_trans                                 .                normal  No     Microsoft SRV.SYS Pipe Transaction No Null
   352   auxiliary/dos/windows/smb/ms09_001_write                                 .                normal  No     Microsoft SRV.SYS WriteAndX Invalid DataOffset
   353   auxiliary/dos/windows/smb/ms09_050_smb2_negotiate_pidhigh                .                normal  No     Microsoft SRV2.SYS SMB Negotiate ProcessID Function Table Dereference
   354   auxiliary/dos/windows/smb/ms09_050_smb2_session_logoff                   .                normal  No     Microsoft SRV2.SYS SMB2 Logoff Remote Kernel NULL Pointer Dereference
   355   auxiliary/dos/windows/smb/ms10_006_negotiate_response_loop               .                normal  No     Microsoft Windows 7 / Server 2008 R2 SMB Client Infinite Loop
   356   auxiliary/dos/windows/smb/ms10_054_queryfs_pool_overflow                 .                normal  No     Microsoft Windows SRV.SYS SrvSmbQueryFsInformation Pool Overflow DoS
   357   auxiliary/dos/windows/smb/ms11_019_electbowser                           .                normal  No     Microsoft Windows Browser Pool DoS
   358   auxiliary/dos/windows/smb/rras_vls_null_deref                            2006-06-14       normal  No     Microsoft RRAS InterfaceAdjustVLSPointers NULL Dereference
   359   auxiliary/dos/windows/smb/vista_negotiate_stop                           .                normal  No     Microsoft Vista SP0 SMB Negotiate Protocol DoS
   360   auxiliary/dos/windows/smtp/ms06_019_exchange                             2004-11-12       normal  No     MS06-019 Exchange MODPROP Heap Overflow
   361   auxiliary/dos/windows/ssh/sysax_sshd_kexchange                           2013-03-17       normal  No     Sysax Multi-Server 6.10 SSHD Key Exchange Denial of Service
   362   auxiliary/dos/windows/tftp/pt360_write                                   2008-10-29       normal  No     PacketTrap TFTP Server 2.2.5459.0 DoS
   363   auxiliary/dos/windows/tftp/solarwinds                                    2010-05-21       normal  No     SolarWinds TFTP Server 10.4.0.10 Denial of Service
   364   auxiliary/dos/wireshark/capwap                                           2014-04-28       normal  No     Wireshark CAPWAP Dissector DoS
   365   auxiliary/dos/wireshark/chunked                                          2007-02-22       normal  No     Wireshark chunked_encoding_dissector Function DOS
   366   auxiliary/dos/wireshark/cldap                                            2011-03-01       normal  No     Wireshark CLDAP Dissector DOS
   367   auxiliary/dos/wireshark/ldap                                             2008-03-28       normal  No     Wireshark LDAP Dissector DOS
   368   auxiliary/fileformat/badpdf                                              .                normal  No     BADPDF Malicious PDF Creator
   369   auxiliary/fileformat/multidrop                                           .                normal  No     Windows SMB Multi Dropper
   370   auxiliary/fileformat/odt_badodt                                          2018-05-01       normal  No     LibreOffice 6.03 /Apache OpenOffice 4.1.5 Malicious ODT File Generator
   371   auxiliary/fuzzers/dns/dns_fuzzer                                         .                normal  No     DNS and DNSSEC Fuzzer
   372   auxiliary/fuzzers/ftp/client_ftp                                         .                normal  No     Simple FTP Client Fuzzer
   373   auxiliary/fuzzers/ftp/ftp_pre_post                                       .                normal  No     Simple FTP Fuzzer
   374   auxiliary/fuzzers/http/http_form_field                                   .                normal  No     HTTP Form Field Fuzzer
   375   auxiliary/fuzzers/http/http_get_uri_long                                 .                normal  No     HTTP GET Request URI Fuzzer (Incrementing Lengths)
   376   auxiliary/fuzzers/http/http_get_uri_strings                              .                normal  No     HTTP GET Request URI Fuzzer (Fuzzer Strings)
   377   auxiliary/fuzzers/ntp/ntp_protocol_fuzzer                                .                normal  No     NTP Protocol Fuzzer
   378   auxiliary/fuzzers/smb/smb2_negotiate_corrupt                             .                normal  No     SMB Negotiate SMB2 Dialect Corruption
   379   auxiliary/fuzzers/smb/smb_create_pipe                                    .                normal  No     SMB Create Pipe Request Fuzzer
   380   auxiliary/fuzzers/smb/smb_create_pipe_corrupt                            .                normal  No     SMB Create Pipe Request Corruption
   381   auxiliary/fuzzers/smb/smb_negotiate_corrupt                              .                normal  No     SMB Negotiate Dialect Corruption
   382   auxiliary/fuzzers/smb/smb_ntlm1_login_corrupt                            .                normal  No     SMB NTLMv1 Login Request Corruption
   383   auxiliary/fuzzers/smb/smb_tree_connect                                   .                normal  No     SMB Tree Connect Request Fuzzer
   384   auxiliary/fuzzers/smb/smb_tree_connect_corrupt                           .                normal  No     SMB Tree Connect Request Corruption
   385   auxiliary/fuzzers/smtp/smtp_fuzzer                                       .                normal  No     SMTP Simple Fuzzer
   386   auxiliary/fuzzers/ssh/ssh_kexinit_corrupt                                .                normal  No     SSH Key Exchange Init Corruption
   387   auxiliary/fuzzers/ssh/ssh_version_15                                     .                normal  No     SSH 1.5 Version Fuzzer
   388   auxiliary/fuzzers/ssh/ssh_version_2                                      .                normal  No     SSH 2.0 Version Fuzzer
   389   auxiliary/fuzzers/ssh/ssh_version_corrupt                                .                normal  No     SSH Version Corruption
   390   auxiliary/fuzzers/tds/tds_login_corrupt                                  .                normal  No     TDS Protocol Login Request Corruption Fuzzer
   391   auxiliary/fuzzers/tds/tds_login_username                                 .                normal  No     TDS Protocol Login Request Username Fuzzer
   392   auxiliary/gather/acronis_cyber_protect_machine_info_disclosure           .                normal  Yes    Acronis Cyber Protect/Backup machine info disclosure
   393   auxiliary/gather/adobe_coldfusion_fileread_cve_2023_26360                .                normal  No     Adobe ColdFusion Unauthenticated Arbitrary File Read
   394   auxiliary/gather/advantech_webaccess_creds                               2017-01-21       normal  No     Advantech WebAccess 8.1 Post Authentication Credential Collector
   395   auxiliary/gather/alienvault_iso27001_sqli                                2014-03-30       normal  No     AlienVault Authenticated SQL Injection Arbitrary File Read
   396   auxiliary/gather/alienvault_newpolicyform_sqli                           2014-05-09       normal  No     AlienVault Authenticated SQL Injection Arbitrary File Read
   397   auxiliary/gather/android_browser_file_theft                              .                normal  No     Android Browser File Theft
   398   auxiliary/gather/android_browser_new_tab_cookie_theft                    .                normal  No     Android Browser "Open in New Tab" Cookie Theft
   399   auxiliary/gather/android_htmlfileprovider                                .                normal  No     Android Content Provider File Disclosure
   400   auxiliary/gather/android_object_tag_webview_uxss                         2014-10-04       normal  No     Android Open Source Platform (AOSP) Browser UXSS
   401   auxiliary/gather/android_stock_browser_uxss                              .                normal  No     Android Open Source Platform (AOSP) Browser UXSS
   402   auxiliary/gather/apache_rave_creds                                       .                normal  No     Apache Rave User Information Disclosure
   403   auxiliary/gather/apache_superset_cookie_sig_priv_esc                     2023-04-25       normal  Yes    Apache Superset Signed Cookie Priv Esc
   404   auxiliary/gather/apple_safari_ftp_url_cookie_theft                       2015-04-08       normal  No     Apple OSX/iOS/Windows Safari Non-HTTPOnly Cookie Theft
   405   auxiliary/gather/apple_safari_webarchive_uxss                            2013-02-22       normal  No     Mac OS X Safari .webarchive File Format UXSS
   406   auxiliary/gather/argus_dvr_4_lfi_cve_2018_15745                          .                normal  No     Argus Surveillance DVR 4.0.0.0 - Directory Traversal
   407   auxiliary/gather/asrep                                                   .                normal  No     Find Users Without Pre-Auth Required (ASREP-roast)
   408   auxiliary/gather/asterisk_creds                                          .                normal  No     Asterisk Gather Credentials
   409   auxiliary/gather/avtech744_dvr_accounts                                  .                normal  No     AVTECH 744 DVR Account Information Retrieval
   410   auxiliary/gather/billquick_txtid_sqli                                    2021-10-22       normal  Yes    BillQuick Web Suite txtID SQLi
   411   auxiliary/gather/browser_info                                            2016-03-22       normal  No     HTTP Client Information Gather
   412   auxiliary/gather/browser_lanipleak                                       2013-09-05       normal  No     HTTP Client LAN IP Address Gather
   413   auxiliary/gather/c2s_dvr_password_disclosure                             2016-08-19       normal  No     C2S DVR Management Password Disclosure
   414   auxiliary/gather/censys_search                                           .                normal  No     Censys Search
   415   auxiliary/gather/cerberus_helpdesk_hash_disclosure                       2016-03-07       normal  No     Cerberus Helpdesk User Hash Disclosure
   416   auxiliary/gather/checkpoint_gateway_fileread_cve_2024_24919              .                normal  Yes    Check Point Security Gateway Arbitrary File Read
   417   auxiliary/gather/checkpoint_hostname                                     2011-12-14       normal  No     CheckPoint Firewall-1 SecuRemote Topology Service Hostname Disclosure
   418   auxiliary/gather/chrome_debugger                                         2019-09-24       normal  No     Chrome Debugger Arbitrary File Read / Arbitrary Web Request
   419   auxiliary/gather/cisco_pvc2300_download_config                           2013-07-12       normal  Yes    Cisco PVC2300 POE Video Camera configuration download
   420   auxiliary/gather/cisco_rv320_config                                      2019-01-24       normal  No     Cisco RV320/RV326 Configuration Disclosure
   421   auxiliary/gather/citrix_published_applications                           .                normal  No     Citrix MetaFrame ICA Published Applications Scanner
   422   auxiliary/gather/citrix_published_bruteforce                             .                normal  No     Citrix MetaFrame ICA Published Applications Bruteforcer
   423   auxiliary/gather/cloud_lookup                                            .                normal  No     Cloud Lookup (and Bypass)
   424   auxiliary/gather/coldfusion_pms_servlet_file_read                        2024-03-12       normal  No     CVE-2024-20767 - Adobe Coldfusion Arbitrary File Read
   425   auxiliary/gather/coldfusion_pwd_props                                    2013-05-07       normal  Yes    ColdFusion 'password.properties' Hash Extraction
   426   auxiliary/gather/corpwatch_lookup_id                                     .                normal  No     CorpWatch Company ID Information Search
   427   auxiliary/gather/corpwatch_lookup_name                                   .                normal  No     CorpWatch Company Name Information Search
   428   auxiliary/gather/crushftp_fileread_cve_2024_4040                         .                normal  Yes    CrushFTP Unauthenticated Arbitrary File Read
   429   auxiliary/gather/cve_2021_27850_apache_tapestry_hmac_key                 2021-04-15       normal  Yes    Apache Tapestry HMAC secret key leak
   430   auxiliary/gather/d20pass                                                 2012-01-19       normal  No     General Electric D20 Password Recovery
   431   auxiliary/gather/darkcomet_filedownloader                                2012-10-08       normal  No     DarkComet Server Remote File Download Exploit
   432   auxiliary/gather/dolibarr_creds_sqli                                     2018-05-30       normal  No     Dolibarr Gather Credentials via SQL Injection
   433   auxiliary/gather/doliwamp_traversal_creds                                2014-01-12       normal  Yes    DoliWamp 'jqueryFileTree.php' Traversal Gather Credentials
   434   auxiliary/gather/drupal_openid_xxe                                       2012-10-17       normal  Yes    Drupal OpenID External Entity Injection
   435   auxiliary/gather/eaton_nsm_creds                                         2012-06-26       normal  No     Network Shutdown Module sort_values Credential Dumper
   436   auxiliary/gather/elasticsearch_enum                                      .                normal  No     Elasticsearch Enumeration Utility
   437   auxiliary/gather/emc_cta_xxe                                             2014-03-31       normal  No     EMC CTA v10.0 Unauthenticated XXE Arbitrary File Read
   438   auxiliary/gather/enum_dns                                                .                normal  No     DNS Record Scanner and Enumerator
   439   auxiliary/gather/eventlog_cred_disclosure                                2014-11-05       normal  No     ManageEngine Eventlog Analyzer Managed Hosts Administrator Credential Disclosure
   440   auxiliary/gather/exchange_proxylogon_collector                           2021-03-02       normal  No     Microsoft Exchange ProxyLogon Collector
   441   auxiliary/gather/external_ip                                             .                normal  No     Discover External IP via Ifconfig.me
   442   auxiliary/gather/f5_bigip_cookie_disclosure                              .                normal  No     F5 BIG-IP Backend Cookie Disclosure
   443   auxiliary/gather/firefox_pdfjs_file_theft                                .                normal  No     Firefox PDF.js Browser File Theft
   444   auxiliary/gather/flash_rosetta_jsonp_url_disclosure                      2014-07-08       normal  Yes    Flash "Rosetta" JSONP GET/POST Response Disclosure
   445   auxiliary/gather/fortios_vpnssl_traversal_creds_leak                     .                normal  No     FortiOS Path Traversal Credential Gatherer
   446   auxiliary/gather/get_user_spns                                           2014-09-27       normal  No     Gather Ticket Granting Service (TGS) tickets for User Service Principal Names (SPN)
   447   auxiliary/gather/gitlab_authenticated_subgroups_file_read                2023-05-23       normal  Yes    GitLab Authenticated File Read
   448   auxiliary/gather/gitlab_tags_rss_feed_email_disclosure                   2024-01-25       normal  No     GitLab Tags RSS feed email disclosure
   449   auxiliary/gather/glpi_inventory_plugin_unauth_sqli                       2025-03-12       normal  Yes    GLPI Inventory Plugin Unauthenticated Blind Boolean SQLi
   450   auxiliary/gather/grandstream_ucm62xx_sql_account_guess                   2020-03-30       normal  Yes    Grandstream UCM62xx IP PBX WebSocket Blind SQL Injection Credential Dump
   451   auxiliary/gather/hikvision_info_disclosure_cve_2017_7921                 2017-09-23       normal  Yes    Unauthenticated information disclosure such as configuration, credentials and camera snapshots of a vulnerable Hikvision IP Camera
   452   auxiliary/gather/hp_enum_perfd                                           .                normal  No     HP Operations Manager Perfd Environment Scanner
   453   auxiliary/gather/hp_snac_domain_creds                                    2013-09-09       normal  No     HP ProCurve SNAC Domain Controller Credential Dumper
   454   auxiliary/gather/http_pdf_authors                                        .                normal  No     Gather PDF Authors
   455   auxiliary/gather/huawei_wifi_info                                        2013-11-11       normal  No     Huawei Datacard Information Disclosure Vulnerability
   456   auxiliary/gather/ibm_bigfix_sites_packages_enum                          2019-03-18       normal  No     IBM BigFix Relay Server Sites and Package Enum
   457   auxiliary/gather/ibm_sametime_enumerate_users                            2013-12-27       normal  No     IBM Lotus Notes Sametime User Enumeration
   458   auxiliary/gather/ibm_sametime_room_brute                                 2013-12-27       normal  No     IBM Lotus Notes Sametime Room Name Bruteforce
   459   auxiliary/gather/ibm_sametime_version                                    2013-12-27       normal  No     IBM Lotus Sametime Version Enumeration
   460   auxiliary/gather/ie_sandbox_findfiles                                    2016-08-09       normal  No     Internet Explorer Iframe Sandbox File Name Disclosure Vulnerability
   461   auxiliary/gather/ie_uxss_injection                                       2015-02-01       normal  No     MS15-018 Microsoft Internet Explorer 10 and 11 Cross-Domain JavaScript Injection
   462   auxiliary/gather/impersonate_ssl                                         .                normal  No     HTTP SSL Certificate Impersonation
   463   auxiliary/gather/ipcamera_password_disclosure                            2016-08-16       normal  No     JVC/Siemens/Vanderbilt IP-Camera Readfile Password Disclosure
   464   auxiliary/gather/jasmin_ransomware_dir_traversal                         2023-04-08       normal  Yes    Jasmin Ransomware Web Server Unauthenticated Directory Traversal
   465   auxiliary/gather/jasmin_ransomware_sqli                                  2023-04-08       normal  Yes    Jasmin Ransomware Web Server Unauthenticated SQL Injection
   466   auxiliary/gather/java_rmi_registry                                       .                normal  No     Java RMI Registry Interfaces Enumeration
   467   auxiliary/gather/jenkins_cli_ampersand_arbitrary_file_read               2024-01-24       normal  Yes    Jenkins cli Ampersand Replacement Arbitrary File Read
   468   auxiliary/gather/jenkins_cred_recovery                                   .                normal  Yes    Jenkins Domain Credential Recovery
   469   auxiliary/gather/jetty_web_inf_disclosure                                2021-07-15       normal  Yes    Jetty WEB-INF File Disclosure
   470   auxiliary/gather/joomla_com_realestatemanager_sqli                       2015-10-22       normal  Yes    Joomla Real Estate Manager Component Error-Based SQL Injection
   471   auxiliary/gather/joomla_contenthistory_sqli                              2015-10-22       normal  Yes    Joomla com_contenthistory Error-Based SQL Injection
   472   auxiliary/gather/joomla_weblinks_sqli                                    2014-03-02       normal  Yes    Joomla weblinks-categories Unauthenticated SQL Injection Arbitrary File Read
   473   auxiliary/gather/kerberos_enumusers                                      .                normal  No     Kerberos Domain User Enumeration
   474   auxiliary/gather/konica_minolta_pwd_extract                              .                normal  No     Konica Minolta Password Extractor
   475   auxiliary/gather/lansweeper_collector                                    .                normal  No     Lansweeper Credential Collector
   476   auxiliary/gather/ldap_esc_vulnerable_cert_finder                         2021-06-17       normal  No     Misconfigured Certificate Template Finder
   477   auxiliary/gather/ldap_hashdump                                           2020-07-23       normal  No     LDAP Information Disclosure
   478   auxiliary/gather/ldap_query                                              2022-05-19       normal  No     LDAP Query and Enumeration Module
   479   auxiliary/gather/magento_xxe_cve_2024_34102                              2024-06-11       normal  Yes    Magento XXE Unserialize Arbitrary File Read
   480   auxiliary/gather/manageengine_adaudit_plus_xnode_enum                    .                normal  Yes    ManageEngine ADAudit Plus Xnode Enumeration
   481   auxiliary/gather/manageengine_datasecurity_plus_xnode_enum               .                normal  Yes    ManageEngine DataSecurity Plus Xnode Enumeration
   482   auxiliary/gather/mantisbt_admin_sqli                                     2014-02-28       normal  No     MantisBT Admin SQL Injection Arbitrary File Read
   483   auxiliary/gather/mcafee_epo_xxe                                          2015-01-06       normal  No     McAfee ePolicy Orchestrator Authenticated XXE Credentials Exposure
   484   auxiliary/gather/memcached_extractor                                     .                normal  No     Memcached Extractor
   485   auxiliary/gather/microweber_lfi                                          2022-01-30       normal  Yes    Microweber CMS v1.2.10 Local File Inclusion (Authenticated)
   486   auxiliary/gather/mikrotik_winbox_fileread                                2018-08-02       normal  No     Mikrotik Winbox Arbitrary File Read
   487   auxiliary/gather/minio_bootstrap_verify_info_disc                        2023-03-20       normal  No     MinIO Bootstrap Verify Information Disclosure
   488   auxiliary/gather/mongodb_js_inject_collection_enum                       2014-06-07       normal  No     MongoDB NoSQL Collection Enumeration Via Injection
   489   auxiliary/gather/mongodb_ops_manager_diagnostic_archive_info             2023-06-09       normal  Yes    MongoDB Ops Manager Diagnostic Archive Sensitive Information Retriever
   490   auxiliary/gather/ms14_052_xmldom                                         2014-09-09       normal  No     MS14-052 Microsoft Internet Explorer XMLDOM Filename Disclosure
   491   auxiliary/gather/mybb_db_fingerprint                                     2014-02-13       normal  Yes    MyBB Database Fingerprint
   492   auxiliary/gather/natpmp_external_address                                 .                normal  No     NAT-PMP External Address Scanner
   493   auxiliary/gather/netgear_password_disclosure                             .                normal  Yes    NETGEAR Administrator Password Disclosure
   494   auxiliary/gather/nis_bootparamd_domain                                   .                normal  No     NIS bootparamd Domain Name Disclosure
   495   auxiliary/gather/nis_ypserv_map                                          .                normal  No     NIS ypserv Map Dumper
   496   auxiliary/gather/nuuo_cms_bruteforce                                     2018-10-11       normal  No     Nuuo Central Management Server User Session Token Bruteforce
   497   auxiliary/gather/nuuo_cms_file_download                                  2018-10-11       normal  No     Nuuo Central Management Server Authenticated Arbitrary File Download
   498   auxiliary/gather/oats_downloadservlet_traversal                          2019-04-16       normal  Yes    Oracle Application Testing Suite Post-Auth DownloadServlet Directory Traversal
   499   auxiliary/gather/office365userenum                                       2018-09-05       normal  No     Office 365 User Enumeration
   500   auxiliary/gather/onedev_arbitrary_file_read                              2024-10-19       normal  Yes    OneDev Unauthenticated Arbitrary File Read
   501   auxiliary/gather/opennms_xxe                                             2015-01-08       normal  No     OpenNMS Authenticated XXE
   502   auxiliary/gather/owncloud_phpinfo_reader                                 2023-11-21       normal  No     ownCloud Phpinfo Reader
   503   auxiliary/gather/peplink_bauth_sqli                                      .                normal  Yes    Peplink Balance routers SQLi
   504   auxiliary/gather/pimcore_creds_sqli                                      2018-08-13       normal  No     Pimcore Gather Credentials via SQL Injection
   505   auxiliary/gather/piwigo_cve_2023_26876                                   2023-04-21       normal  Yes    Piwigo CVE-2023-26876 Gather Credentials via SQL Injection
   506   auxiliary/gather/progress_moveit_sftp_fileread_cve_2024_5806             2024-06-25       normal  Yes    Progress MOVEit SFTP Authentication Bypass for Arbitrary File Read
   507   auxiliary/gather/prometheus_api_gather                                   2016-07-01       normal  No     Prometheus API Information Gather
   508   auxiliary/gather/prometheus_node_exporter_gather                         2013-04-18       normal  No     Prometheus Node Exporter And Windows Exporter Information Gather
   509   auxiliary/gather/pulse_secure_file_disclosure                            2019-04-24       normal  No     Pulse Secure VPN Arbitrary File Disclosure
   510   auxiliary/gather/python_flask_cookie_signer                              2019-01-26       normal  No     Python Flask Cookie Signer
   511   auxiliary/gather/qnap_backtrace_admin_hash                               2017-01-31       normal  Yes    QNAP NAS/NVR Administrator Hash Disclosure
   512   auxiliary/gather/qnap_lfi                                                2019-11-25       normal  Yes    QNAP QTS and Photo Station Local File Inclusion
   513   auxiliary/gather/rails_doubletap_file_read                               .                normal  Yes    Ruby On Rails File Content Disclosure ('doubletap')
   514   auxiliary/gather/rancher_authenticated_api_cred_exposure                 2022-08-18       normal  Yes    Rancher Authenticated API Credential Exposure
   515   auxiliary/gather/ray_lfi_cve_2023_6020                                   2023-11-15       normal  Yes    Ray static arbitrary file read
   516   auxiliary/gather/redis_extractor                                         .                normal  Yes    Redis Extractor
   517   auxiliary/gather/roundcube_auth_file_read                                2017-11-09       normal  No     Roundcube TimeZone Authenticated File Disclosure
   518   auxiliary/gather/safari_file_url_navigation                              2014-01-16       normal  No     Mac OS X Safari file:// Redirection Sandbox Escape
   519   auxiliary/gather/saltstack_salt_root_key                                 2020-04-30       normal  No     SaltStack Salt Master Server Root Key Disclosure
   520   auxiliary/gather/samsung_browser_sop_bypass                              2017-11-08       normal  No     Samsung Internet Browser SOP Bypass
   521   auxiliary/gather/search_email_collector                                  .                normal  No     Search Engine Domain Email Address Collector
   522   auxiliary/gather/searchengine_subdomains_collector                       .                normal  No     Search Engine Subdomains Collector
   523   auxiliary/gather/selenium_file_read                                      2020-10-01       normal  Yes    Selenium arbitrary file read
   524   auxiliary/gather/shodan_honeyscore                                       .                normal  No     Shodan Honeyscore Client
   525   auxiliary/gather/shodan_host                                             .                normal  No     Shodan Host Port
   526   auxiliary/gather/shodan_search                                           .                normal  No     Shodan Search
   527   auxiliary/gather/snare_registry                                          .                normal  No     Snare Lite for Windows Registry Access
   528   auxiliary/gather/solarwinds_orion_sqli                                   2015-02-24       normal  No     Solarwinds Orion AccountManagement.asmx GetAccounts Admin Creation
   529   auxiliary/gather/solarwinds_servu_fileread_cve_2024_28995                .                normal  Yes    SolarWinds Serv-U Unauthenticated Arbitrary File Read
   530   auxiliary/gather/solarwinds_webhelpdesk_backdoor                         2024-08-22       normal  Yes    SolarWinds Web Help Desk Backdoor (CVE-2024-28987)
   531   auxiliary/gather/splunk_raw_server_info                                  2018-06-08       normal  No     Splunk __raw Server Info Disclosure
   532   auxiliary/gather/ssllabs_scan                                            .                normal  No     SSL Labs API Client
   533   auxiliary/gather/suite_crm_export_sqli                                   2022-05-24       normal  Yes    SuiteCRM authenticated SQL injection in export functionality
   534   auxiliary/gather/teamtalk_creds                                          .                normal  No     TeamTalk Gather Credentials
   535   auxiliary/gather/tplink_archer_c7_traversal                              2015-04-08       normal  Yes    Archer C7 Directory Traversal Vulnerability
   536   auxiliary/gather/trackit_sql_domain_creds                                2014-10-07       normal  No     BMC / Numara Track-It! Domain Administrator and SQL Server User Password Disclosure
   537   auxiliary/gather/vbulletin_getindexablecontent_sqli                      2020-03-12       normal  No     vBulletin /ajax/api/content_infraction/getIndexableContent nodeid Parameter SQL Injection
   538   auxiliary/gather/vbulletin_vote_sqli                                     2013-03-24       normal  Yes    vBulletin Password Collector via nodeid SQL Injection
   539   auxiliary/gather/vmware_vcenter_vmdir_ldap                               2020-04-09       normal  No     VMware vCenter Server vmdir Information Disclosure
   540   auxiliary/gather/windows_deployment_services_shares                      .                normal  No     Microsoft Windows Deployment Services Unattend Gatherer
   541   auxiliary/gather/windows_secrets_dump                                    .                normal  No     Windows Secrets Dump
   542   auxiliary/gather/wp_all_in_one_migration_export                          2015-03-19       normal  Yes    WordPress All-in-One Migration Export
   543   auxiliary/gather/wp_bookingpress_category_services_sqli                  2022-02-28       normal  Yes    Wordpress BookingPress bookingpress_front_get_category_services SQLi
   544   auxiliary/gather/wp_ultimate_csv_importer_user_extract                   2015-02-02       normal  Yes    WordPress Ultimate CSV Importer User Table Extract
   545   auxiliary/gather/wp_w3_total_cache_hash_extract                          .                normal  No     WordPress W3-Total-Cache Plugin 0.9.2.4 (or before) Username and Hash Extract
   546   auxiliary/gather/x11_keyboard_spy                                        1997-07-01       normal  Yes    X11 Keylogger
   547   auxiliary/gather/xbmc_traversal                                          2012-11-04       normal  No     XBMC Web Server Directory Traversal
   548   auxiliary/gather/xerox_pwd_extract                                       .                normal  No     Xerox Administrator Console Password Extractor
   549   auxiliary/gather/xerox_workcentre_5xxx_ldap                              .                normal  No     Xerox Workcentre 5735 LDAP Service Redential Extractor
   550   auxiliary/gather/xymon_info                                              .                normal  No     Xymon Daemon Gather Information
   551   auxiliary/gather/zabbix_toggleids_sqli                                   2016-08-11       normal  Yes    Zabbix toggle_ids SQL Injection
   552   auxiliary/gather/zookeeper_info_disclosure                               2020-10-14       normal  No     Apache ZooKeeper Information Disclosure
   553   auxiliary/gather/zoomeye_search                                          .                normal  No     ZoomEye Search
   554   auxiliary/parser/unattend                                                .                normal  No     Auxilliary Parser Windows Unattend Passwords
   555   auxiliary/pdf/foxit/authbypass                                           2009-03-09       normal  No     Foxit Reader Authorization Bypass
   556   auxiliary/scanner/acpp/login                                             .                normal  No     Apple Airport ACPP Authentication Scanner
   557   auxiliary/scanner/afp/afp_login                                          .                normal  No     Apple Filing Protocol Login Utility
   558   auxiliary/scanner/afp/afp_server_info                                    .                normal  No     Apple Filing Protocol Info Enumerator
   559   auxiliary/scanner/amqp/amqp_login                                        .                normal  No     AMQP 0-9-1 Login Check Scanner
   560   auxiliary/scanner/amqp/amqp_version                                      .                normal  No     AMQP 0-9-1 Version Scanner
   561   auxiliary/scanner/backdoor/energizer_duo_detect                          .                normal  No     Energizer DUO Trojan Scanner
   562   auxiliary/scanner/chargen/chargen_probe                                  1996-02-08       normal  No     Chargen Probe Utility
   563   auxiliary/scanner/couchdb/couchdb_enum                                   .                normal  Yes    CouchDB Enum Utility
   564   auxiliary/scanner/couchdb/couchdb_login                                  .                normal  No     CouchDB Login Utility
   565   auxiliary/scanner/db2/db2_auth                                           .                normal  No     DB2 Authentication Brute Force Utility
   566   auxiliary/scanner/db2/db2_version                                        .                normal  No     DB2 Probe Utility
   567   auxiliary/scanner/db2/discovery                                          .                normal  No     DB2 Discovery Service Detection
   568   auxiliary/scanner/dcerpc/dfscoerce                                       .                normal  No     DFSCoerce
   569   auxiliary/scanner/dcerpc/endpoint_mapper                                 .                normal  No     Endpoint Mapper Service Discovery
   570   auxiliary/scanner/dcerpc/hidden                                          .                normal  No     Hidden DCERPC Service Discovery
   571   auxiliary/scanner/dcerpc/management                                      .                normal  No     Remote Management Interface Discovery
   572   auxiliary/scanner/dcerpc/nrpc_enumusers                                  .                normal  No     MS-NRPC Domain Users Enumeration
   573   auxiliary/scanner/dcerpc/petitpotam                                      .                normal  No     PetitPotam
   574   auxiliary/scanner/dcerpc/tcp_dcerpc_auditor                              .                normal  No     DCERPC TCP Service Auditor
   575   auxiliary/scanner/dcerpc/windows_deployment_services                     .                normal  No     Microsoft Windows Deployment Services Unattend Retrieval
   576   auxiliary/scanner/dect/call_scanner                                      .                normal  No     DECT Call Scanner
   577   auxiliary/scanner/dect/station_scanner                                   .                normal  No     DECT Base Station Scanner
   578   auxiliary/scanner/discovery/arp_sweep                                    .                normal  No     ARP Sweep Local Network Discovery
   579   auxiliary/scanner/discovery/empty_udp                                    .                normal  No     UDP Empty Prober
   580   auxiliary/scanner/discovery/ipv6_multicast_ping                          .                normal  No     IPv6 Link Local/Node Local Ping Discovery
   581   auxiliary/scanner/discovery/ipv6_neighbor                                .                normal  No     IPv6 Local Neighbor Discovery
   582   auxiliary/scanner/discovery/ipv6_neighbor_router_advertisement           .                normal  No     IPv6 Local Neighbor Discovery Using Router Advertisement
   583   auxiliary/scanner/discovery/udp_probe                                    .                normal  No     UDP Service Prober
   584   auxiliary/scanner/discovery/udp_sweep                                    .                normal  No     UDP Service Sweeper
   585   auxiliary/scanner/dlsw/dlsw_leak_capture                                 2014-11-17       normal  Yes    Cisco DLSw Information Disclosure Scanner
   586   auxiliary/scanner/dns/dns_amp                                            .                normal  No     DNS Amplification Scanner
   587   auxiliary/scanner/emc/alphastor_devicemanager                            .                normal  No     EMC AlphaStor Device Manager Service
   588   auxiliary/scanner/emc/alphastor_librarymanager                           .                normal  No     EMC AlphaStor Library Manager Service
   589   auxiliary/scanner/etcd/open_key_scanner                                  2018-03-16       normal  No     Etcd Keys API Information Gathering
   590   auxiliary/scanner/etcd/version                                           2018-03-16       normal  No     Etcd Version Scanner
   591   auxiliary/scanner/finger/finger_users                                    .                normal  No     Finger Service User Enumerator
   592   auxiliary/scanner/ftp/anonymous                                          .                normal  No     Anonymous FTP Access Detection
   593   auxiliary/scanner/ftp/bison_ftp_traversal                                2015-09-28       normal  Yes    BisonWare BisonFTP Server 3.5 Directory Traversal Information Disclosure
   594   auxiliary/scanner/ftp/colorado_ftp_traversal                             2016-08-11       normal  Yes    ColoradoFTP Server 1.3 Build 8 Directory Traversal Information Disclosure
   595   auxiliary/scanner/ftp/easy_file_sharing_ftp                              2017-03-07       normal  Yes    Easy File Sharing FTP Server 3.6 Directory Traversal
   596   auxiliary/scanner/ftp/ftp_login                                          .                normal  No     FTP Authentication Scanner
   597   auxiliary/scanner/ftp/ftp_version                                        .                normal  No     FTP Version Scanner
   598   auxiliary/scanner/ftp/konica_ftp_traversal                               2015-09-22       normal  Yes    Konica Minolta FTP Utility 1.00 Directory Traversal Information Disclosure
   599   auxiliary/scanner/ftp/pcman_ftp_traversal                                2015-09-28       normal  Yes    PCMan FTP Server 2.0.7 Directory Traversal Information Disclosure
   600   auxiliary/scanner/ftp/titanftp_xcrc_traversal                            2010-06-15       normal  No     Titan FTP XCRC Directory Traversal Information Disclosure
   601   auxiliary/scanner/gopher/gopher_gophermap                                .                normal  No     Gopher gophermap Scanner
   602   auxiliary/scanner/gprs/gtp_echo                                          .                normal  No     GTP Echo Scanner
   603   auxiliary/scanner/h323/h323_version                                      .                normal  No     H.323 Version Scanner
   604   auxiliary/scanner/http/a10networks_ax_directory_traversal                2014-01-28       normal  No     A10 Networks AX Loadbalancer Directory Traversal
   605   auxiliary/scanner/http/accellion_fta_statecode_file_read                 2015-07-10       normal  No     Accellion FTA 'statecode' Cookie Arbitrary File Read
   606   auxiliary/scanner/http/adobe_xml_inject                                  .                normal  No     Adobe XML External Entity Injection
   607   auxiliary/scanner/http/advantech_webaccess_login                         .                normal  No     Advantech WebAccess Login
   608   auxiliary/scanner/http/allegro_rompager_misfortune_cookie                2014-12-17       normal  Yes    Allegro Software RomPager 'Misfortune Cookie' (CVE-2014-9222) Scanner
   609   auxiliary/scanner/http/apache_activemq_source_disclosure                 .                normal  No     Apache ActiveMQ JSP Files Source Disclosure
   610   auxiliary/scanner/http/apache_activemq_traversal                         .                normal  No     Apache ActiveMQ Directory Traversal
   611   auxiliary/scanner/http/apache_flink_jobmanager_traversal                 2021-01-05       normal  Yes    Apache Flink JobManager Traversal
   612   auxiliary/scanner/http/apache_mod_cgi_bash_env                           2014-09-24       normal  Yes    Apache mod_cgi Bash Environment Variable Injection (Shellshock) Scanner
   613   auxiliary/scanner/http/apache_nifi_login                                 .                normal  No     Apache NiFi Login Scanner
   614   auxiliary/scanner/http/apache_nifi_version                               .                normal  No     Apache NiFi Version Scanner
   615   auxiliary/scanner/http/apache_normalize_path                             2021-05-10       normal  No     Apache 2.4.49/2.4.50 Traversal RCE scanner
   616   auxiliary/scanner/http/apache_optionsbleed                               2017-09-18       normal  No     Apache Optionsbleed Scanner
   617   auxiliary/scanner/http/apache_userdir_enum                               .                normal  No     Apache "mod_userdir" User Enumeration
   618   auxiliary/scanner/http/appletv_login                                     .                normal  No     AppleTV AirPlay Login Utility
   619   auxiliary/scanner/http/atlassian_crowd_fileaccess                        .                normal  No     Atlassian Crowd XML Entity Expansion Remote File Access
   620   auxiliary/scanner/http/axis_local_file_include                           .                normal  No     Apache Axis2 v1.4.1 Local File Inclusion
   621   auxiliary/scanner/http/axis_login                                        .                normal  No     Apache Axis2 Brute Force Utility
   622   auxiliary/scanner/http/azure_ad_login                                    .                normal  No     Microsoft Azure Active Directory Login Enumeration
   623   auxiliary/scanner/http/backup_file                                       .                normal  No     HTTP Backup File Scanner
   624   auxiliary/scanner/http/barracuda_directory_traversal                     2010-10-08       normal  No     Barracuda Multiple Product "locale" Directory Traversal
   625   auxiliary/scanner/http/bavision_cam_login                                .                normal  No     BAVision IP Camera Web Server Login
   626   auxiliary/scanner/http/binom3_login_config_pass_dump                     .                normal  No     Binom3 Web Management Login Scanner, Config and Password File Dump
   627   auxiliary/scanner/http/bitweaver_overlay_type_traversal                  2012-10-23       normal  No     Bitweaver overlay_type Directory Traversal
   628   auxiliary/scanner/http/blind_sql_query                                   .                normal  No     HTTP Blind SQL Injection Scanner
   629   auxiliary/scanner/http/bmc_trackit_passwd_reset                          2014-12-09       normal  Yes    BMC TrackIt! Unauthenticated Arbitrary User Password Change
   630   auxiliary/scanner/http/brute_dirs                                        .                normal  No     HTTP Directory Brute Force Scanner
   631   auxiliary/scanner/http/buffalo_login                                     .                normal  No     Buffalo NAS Login Utility
   632   auxiliary/scanner/http/buildmaster_login                                 .                normal  No     Inedo BuildMaster Login Scanner
   633   auxiliary/scanner/http/caidao_bruteforce_login                           .                normal  No     Chinese Caidao Backdoor Bruteforce
   634   auxiliary/scanner/http/canon_wireless                                    2013-06-18       normal  No     Canon Printer Wireless Configuration Disclosure
   635   auxiliary/scanner/http/cassandra_web_file_read                           .                normal  Yes    Cassandra Web File Read Vulnerability
   636   auxiliary/scanner/http/cert                                              .                normal  No     HTTP SSL Certificate Checker
   637   auxiliary/scanner/http/cgit_traversal                                    2018-08-03       normal  No     cgit Directory Traversal
   638   auxiliary/scanner/http/chef_webui_login                                  .                normal  No     Chef Web UI Brute Force Utility
   639   auxiliary/scanner/http/chromecast_webserver                              .                normal  No     Chromecast Web Server Scanner
   640   auxiliary/scanner/http/chromecast_wifi                                   .                normal  No     Chromecast Wifi Enumeration
   641   auxiliary/scanner/http/cisco_asa_asdm_bruteforce                         .                normal  No     Cisco ASA ASDM Brute-force Login
   642   auxiliary/scanner/http/cisco_asa_clientless_vpn                          .                normal  No     Cisco ASA Clientless SSL VPN (WebVPN) Brute-force Login Utility
   643   auxiliary/scanner/http/cisco_device_manager                              2000-10-26       normal  No     Cisco Device HTTP Device Manager Access
   644   auxiliary/scanner/http/cisco_directory_traversal                         2018-06-06       normal  No     Cisco ASA Directory Traversal
   645   auxiliary/scanner/http/cisco_firepower_download                          2016-10-10       normal  No     Cisco Firepower Management Console 6.0 Post Auth Report Download Directory Traversal
   646   auxiliary/scanner/http/cisco_firepower_login                             .                normal  No     Cisco Firepower Management Console 6.0 Login
   647   auxiliary/scanner/http/cisco_ios_auth_bypass                             2001-06-27       normal  No     Cisco IOS HTTP Unauthorized Administrative Access
   648   auxiliary/scanner/http/cisco_ironport_enum                               .                normal  No     Cisco Ironport Bruteforce Login Utility
   649   auxiliary/scanner/http/cisco_nac_manager_traversal                       .                normal  No     Cisco Network Access Manager Directory Traversal Vulnerability
   650   auxiliary/scanner/http/cisco_ssl_vpn                                     .                normal  No     Cisco SSL VPN Bruteforce Login Utility
   651   auxiliary/scanner/http/cisco_ssl_vpn_priv_esc                            2014-04-09       normal  No     Cisco ASA SSL VPN Privilege Escalation Vulnerability
   652   auxiliary/scanner/http/citrix_bleed_cve_2023_4966                        2023-10-25       normal  No     Citrix ADC (NetScaler) Bleed Scanner
   653   auxiliary/scanner/http/citrix_dir_traversal                              2019-12-17       normal  No     Citrix ADC (NetScaler) Directory Traversal Scanner
   654   auxiliary/scanner/http/clansphere_traversal                              2012-10-23       normal  No     ClanSphere 2011.3 Local File Inclusion Vulnerability
   655   auxiliary/scanner/http/cnpilot_r_web_login_loot                          .                normal  No     Cambium cnPilot r200/r201 Login Scanner and Config Dump
   656   auxiliary/scanner/http/coldfusion_locale_traversal                       .                normal  No     ColdFusion Server Check
   657   auxiliary/scanner/http/coldfusion_version                                .                normal  No     ColdFusion Version Scanner
   658   auxiliary/scanner/http/concrete5_member_list                             .                normal  No     Concrete5 Member List Enumeration
   659   auxiliary/scanner/http/copy_of_file                                      .                normal  No     HTTP Copy File Scanner
   660   auxiliary/scanner/http/crawler                                           .                normal  No     Web Site Crawler
   661   auxiliary/scanner/http/dell_idrac                                        .                normal  No     Dell iDRAC Default Login
   662   auxiliary/scanner/http/dicoogle_traversal                                2018-07-11       normal  No     Dicoogle PACS Web Server Directory Traversal
   663   auxiliary/scanner/http/dir_listing                                       .                normal  No     HTTP Directory Listing Scanner
   664   auxiliary/scanner/http/dir_scanner                                       .                normal  No     HTTP Directory Scanner
   665   auxiliary/scanner/http/dir_webdav_unicode_bypass                         .                normal  No     MS09-020 IIS6 WebDAV Unicode Auth Bypass Directory Scanner
   666   auxiliary/scanner/http/directadmin_login                                 .                normal  No     DirectAdmin Web Control Panel Login Utility
   667   auxiliary/scanner/http/dlink_dir_300_615_http_login                      .                normal  No     D-Link DIR-300A / DIR-320 / DIR-615D HTTP Login Utility
   668   auxiliary/scanner/http/dlink_dir_615h_http_login                         .                normal  No     D-Link DIR-615H HTTP Login Utility
   669   auxiliary/scanner/http/dlink_dir_session_cgi_http_login                  .                normal  No     D-Link DIR-300B / DIR-600B / DIR-815 / DIR-645 HTTP Login Utility
   670   auxiliary/scanner/http/dlink_user_agent_backdoor                         2013-10-12       normal  No     D-Link User-Agent Backdoor Scanner
   671   auxiliary/scanner/http/dnalims_file_retrieve                             2017-03-08       normal  No     DnaLIMS Directory Traversal
   672   auxiliary/scanner/http/docker_version                                    .                normal  No     Docker Server Version Scanner
   673   auxiliary/scanner/http/dolibarr_16_contact_dump                          2023-03-14       normal  Yes    Dolibarr 16 pre-auth contact database dump
   674   auxiliary/scanner/http/dolibarr_login                                    .                normal  No     Dolibarr ERP/CRM Login Utility
   675   auxiliary/scanner/http/drupal_views_user_enum                            2010-07-02       normal  Yes    Drupal Views Module Users Enumeration
   676   auxiliary/scanner/http/ektron_cms400net                                  .                normal  No     Ektron CMS400.NET Default Password Scanner
   677   auxiliary/scanner/http/elasticsearch_memory_disclosure                   2021-07-21       normal  Yes    Elasticsearch Memory Disclosure
   678   auxiliary/scanner/http/elasticsearch_traversal                           .                normal  Yes    ElasticSearch Snapshot API Directory Traversal
   679   auxiliary/scanner/http/emby_ssrf_scanner                                 .                normal  No     Emby SSRF HTTP Scanner
   680   auxiliary/scanner/http/emby_version_ssrf                                 .                normal  No     Emby Version Scanner
   681   auxiliary/scanner/http/enum_wayback                                      .                normal  No     Archive.org Stored Domain URLs
   682   auxiliary/scanner/http/epmp1000_dump_config                              .                normal  No     Cambium ePMP 1000 Dump Device Config
   683   auxiliary/scanner/http/epmp1000_dump_hashes                              .                normal  No     Cambium ePMP 1000 'ping' Password Hash Extractor (up to v2.5)
   684   auxiliary/scanner/http/epmp1000_get_chart_cmd_exec                       .                normal  No     Cambium ePMP 1000 'get_chart' Command Injection (v3.1-3.5-RC7)
   685   auxiliary/scanner/http/epmp1000_ping_cmd_exec                            .                normal  No     Cambium ePMP 1000 'ping' Command Injection (up to v2.5)
   686   auxiliary/scanner/http/epmp1000_reset_pass                               .                normal  No     Cambium ePMP 1000 Account Password Reset
   687   auxiliary/scanner/http/epmp1000_web_login                                .                normal  No     Cambium ePMP 1000 Login Scanner
   688   auxiliary/scanner/http/error_sql_injection                               .                normal  No     HTTP Error Based SQL Injection Scanner
   689   auxiliary/scanner/http/es_file_explorer_open_port                        2019-01-16       normal  No     ES File Explorer Open Port
   690   auxiliary/scanner/http/etherpad_duo_login                                .                normal  No     EtherPAD Duo Login Bruteforce Utility
   691   auxiliary/scanner/http/exchange_proxylogon                               2021-03-02       normal  No     Microsoft Exchange ProxyLogon Scanner
   692   auxiliary/scanner/http/exchange_web_server_pushsubscription              2019-01-21       normal  No     Microsoft Exchange Privilege Escalation Exploit
   693   auxiliary/scanner/http/f5_bigip_virtual_server                           .                normal  No     F5 BigIP HTTP Virtual Server Scanner
   694   auxiliary/scanner/http/f5_mgmt_scanner                                   .                normal  No     F5 Networks Devices Management Interface Scanner
   695   auxiliary/scanner/http/file_same_name_dir                                .                normal  No     HTTP File Same Name Directory Scanner
   696   auxiliary/scanner/http/files_dir                                         .                normal  No     HTTP Interesting File Scanner
   697   auxiliary/scanner/http/fortimail_login_bypass_detection                  .                normal  No     FortiMail Unauthenticated Login Bypass Scanner
   698   auxiliary/scanner/http/fortinet_ssl_vpn                                  .                normal  No     Fortinet SSL VPN Bruteforce Login Utility
   699   auxiliary/scanner/http/frontpage_credential_dump                         .                normal  No     FrontPage .pwd File Credential Dump
   700   auxiliary/scanner/http/frontpage_login                                   .                normal  No     FrontPage Server Extensions Anonymous Login Scanner
   701   auxiliary/scanner/http/gavazzi_em_login_loot                             .                normal  No     Carlo Gavazzi Energy Meters - Login Brute Force, Extract Info and Dump Plant Database
   702   auxiliary/scanner/http/git_scanner                                       .                normal  No     HTTP Git Scanner
   703   auxiliary/scanner/http/gitlab_graphql_user_enum                          2022-02-25       normal  No     GitLab GraphQL API User Enumeration
   704   auxiliary/scanner/http/gitlab_login                                      .                normal  No     GitLab Login Utility
   705   auxiliary/scanner/http/gitlab_user_enum                                  2014-11-21       normal  No     GitLab User Enumeration
   706   auxiliary/scanner/http/gitlab_version                                    .                normal  No     Gitlab Version Scanner
   707   auxiliary/scanner/http/glassfish_login                                   .                normal  No     GlassFish Brute Force Utility
   708   auxiliary/scanner/http/glassfish_traversal                               2015-08-08       normal  No     Path Traversal in Oracle GlassFish Server Open Source Edition
   709   auxiliary/scanner/http/goahead_traversal                                 .                normal  No     Embedthis GoAhead Embedded Web Server Directory Traversal
   710   auxiliary/scanner/http/grafana_plugin_traversal                          2021-12-02       normal  No     Grafana Plugin Path Traversal
   711   auxiliary/scanner/http/groupwise_agents_http_traversal                   .                normal  No     Novell Groupwise Agents HTTP Directory Traversal
   712   auxiliary/scanner/http/host_header_injection                             .                normal  No     HTTP Host Header Injection Detection
   713   auxiliary/scanner/http/hp_imc_bims_downloadservlet_traversal             .                normal  No     HP Intelligent Management BIMS DownloadServlet Directory Traversal
   714   auxiliary/scanner/http/hp_imc_faultdownloadservlet_traversal             .                normal  No     HP Intelligent Management FaultDownloadServlet Directory Traversal
   715   auxiliary/scanner/http/hp_imc_ictdownloadservlet_traversal               .                normal  No     HP Intelligent Management IctDownloadServlet Directory Traversal
   716   auxiliary/scanner/http/hp_imc_reportimgservlt_traversal                  .                normal  No     HP Intelligent Management ReportImgServlt Directory Traversal
   717   auxiliary/scanner/http/hp_imc_som_file_download                          .                normal  No     HP Intelligent Management SOM FileDownloadServlet Arbitrary Download
   718   auxiliary/scanner/http/hp_sitescope_getfileinternal_fileaccess           .                normal  No     HP SiteScope SOAP Call getFileInternal Remote File Access
   719   auxiliary/scanner/http/hp_sitescope_getsitescopeconfiguration            .                normal  No     HP SiteScope SOAP Call getSiteScopeConfiguration Configuration Access
   720   auxiliary/scanner/http/hp_sitescope_loadfilecontent_fileaccess           .                normal  No     HP SiteScope SOAP Call loadFileContent Remote File Access
   721   auxiliary/scanner/http/hp_sys_mgmt_login                                 .                normal  No     HP System Management Homepage Login Utility
   722   auxiliary/scanner/http/http_header                                       .                normal  No     HTTP Header Detection
   723   auxiliary/scanner/http/http_hsts                                         .                normal  No     HTTP Strict Transport Security (HSTS) Detection
   724   auxiliary/scanner/http/http_login                                        .                normal  No     HTTP Login Utility
   725   auxiliary/scanner/http/http_put                                          .                normal  No     HTTP Writable Path PUT/DELETE File Access
   726   auxiliary/scanner/http/http_sickrage_password_leak                       2018-03-08       normal  No     HTTP SickRage Password Leak
   727   auxiliary/scanner/http/http_traversal                                    .                normal  No     Generic HTTP Directory Traversal Utility
   728   auxiliary/scanner/http/http_version                                      .                normal  No     HTTP Version Detection
   729   auxiliary/scanner/http/httpbl_lookup                                     .                normal  No     Http:BL Lookup
   730   auxiliary/scanner/http/httpdasm_directory_traversal                      .                normal  No     Httpdasm Directory Traversal
   731   auxiliary/scanner/http/icinga_static_library_file_directory_traversal    2022-05-09       normal  Yes    Icingaweb Directory Traversal in Static Library File Requests
   732   auxiliary/scanner/http/iis_internal_ip                                   .                normal  No     Microsoft IIS HTTP Internal IP Disclosure
   733   auxiliary/scanner/http/iis_shortname_scanner                             .                normal  Yes    Microsoft IIS shortname vulnerability scanner
   734   auxiliary/scanner/http/influxdb_enum                                     .                normal  No     InfluxDB Enum Utility
   735   auxiliary/scanner/http/infovista_enum                                    .                normal  No     InfoVista VistaPortal Application Bruteforce Login Utility
   736   auxiliary/scanner/http/intel_amt_digest_bypass                           2017-05-05       normal  No     Intel AMT Digest Authentication Bypass Scanner
   737   auxiliary/scanner/http/ipboard_login                                     .                normal  No     IP Board Login Auxiliary Module
   738   auxiliary/scanner/http/jboss_status                                      .                normal  No     JBoss Status Servlet Information Gathering
   739   auxiliary/scanner/http/jboss_vulnscan                                    .                normal  No     JBoss Vulnerability Scanner
   740   auxiliary/scanner/http/jenkins_command                                   .                normal  No     Jenkins-CI Unauthenticated Script-Console Scanner
   741   auxiliary/scanner/http/jenkins_enum                                      .                normal  No     Jenkins-CI Enumeration
   742   auxiliary/scanner/http/jenkins_login                                     .                normal  No     Jenkins-CI Login Utility
   743   auxiliary/scanner/http/jira_user_enum                                    2020-08-16       normal  No     Jira Users Enumeration
   744   auxiliary/scanner/http/joomla_api_improper_access_checks                 2023-02-01       normal  Yes    Joomla API Improper Access Checks
   745   auxiliary/scanner/http/joomla_bruteforce_login                           .                normal  No     Joomla Bruteforce Login Utility
   746   auxiliary/scanner/http/joomla_ecommercewd_sqli_scanner                   2015-03-20       normal  No     Web-Dorado ECommerce WD for Joomla! search_category_id SQL Injection Scanner
   747   auxiliary/scanner/http/joomla_gallerywd_sqli_scanner                     2015-03-30       normal  No     Gallery WD for Joomla! Unauthenticated SQL Injection Scanner
   748   auxiliary/scanner/http/joomla_pages                                      .                normal  No     Joomla Page Scanner
   749   auxiliary/scanner/http/joomla_plugins                                    .                normal  No     Joomla Plugins Scanner
   750   auxiliary/scanner/http/joomla_version                                    .                normal  No     Joomla Version Scanner
   751   auxiliary/scanner/http/jupyter_login                                     .                normal  No     Jupyter Login Utility
   752   auxiliary/scanner/http/kodi_traversal                                    2017-02-12       normal  No     Kodi 17.0 Local File Inclusion Vulnerability
   753   auxiliary/scanner/http/limesurvey_zip_traversals                         2020-04-02       normal  No     LimeSurvey Zip Path Traversals
   754   auxiliary/scanner/http/linknat_vos_traversal                             .                normal  No     Linknat Vos Manager Traversal
   755   auxiliary/scanner/http/linksys_e1500_traversal                           .                normal  No     Linksys E1500 Directory Traversal Vulnerability
   756   auxiliary/scanner/http/litespeed_source_disclosure                       .                normal  No     LiteSpeed Source Code Disclosure/Download
   757   auxiliary/scanner/http/log4shell_scanner                                 2021-12-09       normal  No     Log4Shell HTTP Scanner
   758   auxiliary/scanner/http/lucky_punch                                       .                normal  No     HTTP Microsoft SQL Injection Table XSS Infection
   759   auxiliary/scanner/http/majordomo2_directory_traversal                    2011-03-08       normal  No     Majordomo2 _list_file_get() Directory Traversal
   760   auxiliary/scanner/http/manageengine_desktop_central_login                .                normal  No     ManageEngine Desktop Central Login Utility
   761   auxiliary/scanner/http/manageengine_deviceexpert_traversal               2012-03-18       normal  No     ManageEngine DeviceExpert 5.6 ScheduleResultViewer FileName Traversal
   762   auxiliary/scanner/http/manageengine_deviceexpert_user_creds              2014-08-28       normal  No     ManageEngine DeviceExpert User Credentials
   763   auxiliary/scanner/http/manageengine_securitymanager_traversal            2012-10-19       normal  No     ManageEngine SecurityManager Plus 5.5 Directory Traversal
   764   auxiliary/scanner/http/mediawiki_svg_fileaccess                          .                normal  No     MediaWiki SVG XML Entity Expansion Remote File Access
   765   auxiliary/scanner/http/meteocontrol_weblog_extractadmin                  .                normal  No     Meteocontrol WEBlog Password Extractor
   766   auxiliary/scanner/http/mod_negotiation_brute                             .                normal  No     Apache HTTPD mod_negotiation Filename Bruter
   767   auxiliary/scanner/http/mod_negotiation_scanner                           .                normal  No     Apache HTTPD mod_negotiation Scanner
   768   auxiliary/scanner/http/ms09_020_webdav_unicode_bypass                    .                normal  No     MS09-020 IIS6 WebDAV Unicode Authentication Bypass
   769   auxiliary/scanner/http/ms15_034_http_sys_memory_dump                     .                normal  Yes    MS15-034 HTTP Protocol Stack Request Handling HTTP.SYS Memory Information Disclosure
   770   auxiliary/scanner/http/mybook_live_login                                 .                normal  No     Western Digital MyBook Live Login Utility
   771   auxiliary/scanner/http/nagios_xi_scanner                                 .                normal  No     Nagios XI Scanner
   772   auxiliary/scanner/http/netalertx_file_read                               2025-01-30       normal  No     NetAlertX File Read Vulnerability
   773   auxiliary/scanner/http/netdecision_traversal                             2012-03-07       normal  No     NetDecision NOCVision Server Directory Traversal
   774   auxiliary/scanner/http/netgear_sph200d_traversal                         .                normal  No     Netgear SPH200D Directory Traversal Vulnerability
   775   auxiliary/scanner/http/nginx_source_disclosure                           .                normal  No     Nginx Source Code Disclosure/Download
   776   auxiliary/scanner/http/novell_file_reporter_fsfui_fileaccess             2012-11-16       normal  No     NFR Agent FSFUI Record Arbitrary Remote File Access
   777   auxiliary/scanner/http/novell_file_reporter_srs_fileaccess               2012-11-16       normal  No     NFR Agent SRS Record Arbitrary Remote File Access
   778   auxiliary/scanner/http/novell_mdm_creds                                  .                normal  No     Novell Zenworks Mobile Device Management Admin Credentials
   779   auxiliary/scanner/http/ntlm_info_enumeration                             .                normal  No     Host Information Enumeration via NTLM Authentication
   780   auxiliary/scanner/http/octopusdeploy_login                               .                normal  No     Octopus Deploy Login Utility
   781   auxiliary/scanner/http/onion_omega2_login                                2019-03-27       normal  No     Onion Omega2 Login Brute-Force
   782   auxiliary/scanner/http/open_proxy                                        .                normal  No     HTTP Open Proxy Detection
   783   auxiliary/scanner/http/openmind_messageos_login                          .                normal  No     OpenMind Message-OS Portal Login Brute Force Utility
   784   auxiliary/scanner/http/options                                           .                normal  No     HTTP Options Detection
   785   auxiliary/scanner/http/oracle_demantra_database_credentials_leak         2014-02-28       normal  No     Oracle Demantra Database Credentials Leak
   786   auxiliary/scanner/http/oracle_demantra_file_retrieval                    2014-02-28       normal  No     Oracle Demantra Arbitrary File Retrieval with Authentication Bypass
   787   auxiliary/scanner/http/oracle_ilom_login                                 .                normal  No     Oracle ILO Manager Login Brute Force Utility
   788   auxiliary/scanner/http/owa_ews_login                                     .                normal  No     OWA Exchange Web Services (EWS) Login Scanner
   789   auxiliary/scanner/http/owa_iis_internal_ip                               2012-12-17       normal  No     Outlook Web App (OWA) / Client Access Server (CAS) IIS HTTP Internal IP Disclosure
   790   auxiliary/scanner/http/owa_login                                         .                normal  No     Outlook Web App (OWA) Brute Force Utility
   791   auxiliary/scanner/http/pfsense_login                                     .                normal  No     pfSense Login Scanner
   792   auxiliary/scanner/http/phpmyadmin_login                                  .                normal  No     PhpMyAdmin Login Scanner
   793   auxiliary/scanner/http/pocketpad_login                                   .                normal  No     PocketPAD Login Bruteforce Force Utility
   794   auxiliary/scanner/http/prev_dir_same_name_file                           .                normal  No     HTTP Previous Directory File Scanner
   795   auxiliary/scanner/http/radware_appdirector_enum                          .                normal  No     Radware AppDirector Bruteforce Login Utility
   796   auxiliary/scanner/http/rails_json_yaml_scanner                           .                normal  No     Ruby on Rails JSON Processor YAML Deserialization Scanner
   797   auxiliary/scanner/http/rails_mass_assignment                             .                normal  No     Ruby On Rails Attributes Mass Assignment Scanner
   798   auxiliary/scanner/http/rails_xml_yaml_scanner                            .                normal  No     Ruby on Rails XML Processor YAML Deserialization Scanner
   799   auxiliary/scanner/http/rdp_web_login                                     2020-12-23       normal  No     Microsoft RDP Web Client Login Enumeration
   800   auxiliary/scanner/http/replace_ext                                       .                normal  No     HTTP File Extension Scanner
   801   auxiliary/scanner/http/rewrite_proxy_bypass                              .                normal  No     Apache Reverse Proxy Bypass Vulnerability Scanner
   802   auxiliary/scanner/http/rfcode_reader_enum                                .                normal  No     RFCode Reader Web Interface Login / Bruteforce Utility
   803   auxiliary/scanner/http/rips_traversal                                    .                normal  No     RIPS Scanner Directory Traversal
   804   auxiliary/scanner/http/riverbed_steelhead_vcx_file_read                  2017-06-01       normal  No     Riverbed SteelHead VCX File Read
   805   auxiliary/scanner/http/robots_txt                                        .                normal  No     HTTP Robots.txt Content Scanner
   806   auxiliary/scanner/http/rpyc_rce                                          2023-02-19       normal  No     RPyC 4.1.0 through 4.1.1 Remote Command Execution
   807   auxiliary/scanner/http/s40_traversal                                     2011-04-07       normal  No     S40 0.4.2 CMS Directory Traversal Vulnerability
   808   auxiliary/scanner/http/sap_businessobjects_user_brute                    .                normal  No     SAP BusinessObjects User Bruteforcer
   809   auxiliary/scanner/http/sap_businessobjects_user_brute_web                .                normal  No     SAP BusinessObjects Web User Bruteforcer
   810   auxiliary/scanner/http/sap_businessobjects_user_enum                     .                normal  No     SAP BusinessObjects User Enumeration
   811   auxiliary/scanner/http/sap_businessobjects_version_enum                  .                normal  No     SAP BusinessObjects Version Detection
   812   auxiliary/scanner/http/scraper                                           .                normal  No     HTTP Page Scraper
   813   auxiliary/scanner/http/sentry_cdu_enum                                   .                normal  No     Sentry Switched CDU Bruteforce Login Utility
   814   auxiliary/scanner/http/servicedesk_plus_traversal                        2015-10-03       normal  No     ManageEngine ServiceDesk Plus Path Traversal
   815   auxiliary/scanner/http/sevone_enum                                       2013-06-07       normal  No     SevOne Network Performance Management Application Brute Force Login Utility
   816   auxiliary/scanner/http/simple_webserver_traversal                        2013-01-03       normal  No     Simple Web Server 2.3-RC1 Directory Traversal
   817   auxiliary/scanner/http/simplehelp_toolbox_path_traversal                 2025-01-12       normal  No     SimpleHelp Path Traversal Vulnerability CVE-2024-57727
   818   auxiliary/scanner/http/smt_ipmi_49152_exposure                           2014-06-19       normal  No     Supermicro Onboard IPMI Port 49152 Sensitive File Exposure
   819   auxiliary/scanner/http/smt_ipmi_cgi_scanner                              2013-11-06       normal  No     Supermicro Onboard IPMI CGI Vulnerability Scanner
   820   auxiliary/scanner/http/smt_ipmi_static_cert_scanner                      2013-11-06       normal  No     Supermicro Onboard IPMI Static SSL Certificate Scanner
   821   auxiliary/scanner/http/smt_ipmi_url_redirect_traversal                   2013-11-06       normal  No     Supermicro Onboard IPMI url_redirect.cgi Authenticated Directory Traversal
   822   auxiliary/scanner/http/soap_xml                                          .                normal  No     HTTP SOAP Verb/Noun Brute Force Scanner
   823   auxiliary/scanner/http/sockso_traversal                                  2012-03-14       normal  No     Sockso Music Host Server 1.5 Directory Traversal
   824   auxiliary/scanner/http/softing_sis_login                                 .                normal  No     Softing Secure Integration Server Login Utility
   825   auxiliary/scanner/http/splunk_web_login                                  .                normal  No     Splunk Web Interface Login Utility
   826   auxiliary/scanner/http/springcloud_directory_traversal                   2020-06-01       normal  No     Directory Traversal in Spring Cloud Config Server
   827   auxiliary/scanner/http/springcloud_traversal                             2019-04-17       normal  No     Spring Cloud Config Server Directory Traversal
   828   auxiliary/scanner/http/squid_pivot_scanning                              .                normal  No     Squid Proxy Port Scanner
   829   auxiliary/scanner/http/squiz_matrix_user_enum                            2011-11-08       normal  No     Squiz Matrix User Enumeration Scanner
   830   auxiliary/scanner/http/strapi_3_password_reset                           2022-02-09       normal  No     Strapi CMS Unauthenticated Password Reset
   831   auxiliary/scanner/http/support_center_plus_directory_traversal           2014-01-28       normal  No     ManageEngine Support Center Plus Directory Traversal
   832   auxiliary/scanner/http/surgenews_user_creds                              2017-06-16       normal  Yes    SurgeNews User Credentials
   833   auxiliary/scanner/http/svn_scanner                                       .                normal  No     HTTP Subversion Scanner
   834   auxiliary/scanner/http/svn_wcdb_scanner                                  .                normal  No     SVN wc.db Scanner
   835   auxiliary/scanner/http/sybase_easerver_traversal                         2011-05-25       normal  No     Sybase Easerver 6.3 Directory Traversal
   836   auxiliary/scanner/http/symantec_brightmail_ldapcreds                     2015-12-17       normal  No     Symantec Messaging Gateway 10 Exposure of Stored AD Password Vulnerability
   837   auxiliary/scanner/http/symantec_brightmail_logfile                       2012-11-30       normal  No     Symantec Messaging Gateway 9.5 Log File Download Vulnerability
   838   auxiliary/scanner/http/symantec_web_gateway_login                        .                normal  No     Symantec Web Gateway Login Utility
   839   auxiliary/scanner/http/syncovery_linux_login                             .                normal  No     Syncovery For Linux Web-GUI Login Utility
   840   auxiliary/scanner/http/syncovery_linux_token_cve_2022_36536              2022-09-06       normal  Yes    Syncovery For Linux Web-GUI Session Token Brute-Forcer
   841   auxiliary/scanner/http/synology_forget_passwd_user_enum                  2011-01-05       normal  No     Synology Forget Password User Enumeration Scanner
   842   auxiliary/scanner/http/telerik_report_server_auth_bypass                 2024-06-04       normal  Yes    Telerik Report Server Auth Bypass
   843   auxiliary/scanner/http/thinvnc_traversal                                 2019-10-16       normal  No     ThinVNC Directory Traversal
   844   auxiliary/scanner/http/titan_ftp_admin_pwd                               .                normal  No     Titan FTP Administrative Password Disclosure
   845   auxiliary/scanner/http/title                                             .                normal  No     HTTP HTML Title Tag Content Grabber
   846   auxiliary/scanner/http/tomcat_enum                                       .                normal  No     Apache Tomcat User Enumeration
   847   auxiliary/scanner/http/tomcat_mgr_login                                  .                normal  No     Tomcat Application Manager Login Utility
   848   auxiliary/scanner/http/totaljs_traversal                                 2019-02-18       normal  Yes    Total.js prior to 3.2.4 Directory Traversal
   849   auxiliary/scanner/http/tplink_traversal_noauth                           .                normal  No     TP-Link Wireless Lite N Access Point Directory Traversal Vulnerability
   850   auxiliary/scanner/http/trace                                             .                normal  No     HTTP Cross-Site Tracing Detection
   851   auxiliary/scanner/http/trace_axd                                         .                normal  No     HTTP trace.axd Content Scanner
   852   auxiliary/scanner/http/tvt_nvms_traversal                                2019-12-12       normal  No     TVT NVMS-1000 Directory Traversal
   853   auxiliary/scanner/http/typo3_bruteforce                                  .                normal  No     Typo3 Login Bruteforcer
   854   auxiliary/scanner/http/vcms_login                                        .                normal  No     V-CMS Login Utility
   855   auxiliary/scanner/http/verb_auth_bypass                                  .                normal  No     HTTP Verb Authentication Bypass Scanner
   856   auxiliary/scanner/http/vhost_scanner                                     .                normal  No     HTTP Virtual Host Brute Force Scanner
   857   auxiliary/scanner/http/vicidial_multiple_sqli                            2022-04-19       normal  No     VICIdial Multiple Authenticated SQLi
   858   auxiliary/scanner/http/vicidial_sql_enum_users_pass                      2024-09-10       normal  No     Vicidial SQL Injection Time-based Admin Credentials Enumeration
   859   auxiliary/scanner/http/wangkongbao_traversal                             .                normal  No     WANGKONGBAO CNS-1000 and 1100 UTM Directory Traversal
   860   auxiliary/scanner/http/web_vulndb                                        .                normal  No     HTTP Vuln Scanner
   861   auxiliary/scanner/http/webdav_internal_ip                                .                normal  No     HTTP WebDAV Internal IP Scanner
   862   auxiliary/scanner/http/webdav_scanner                                    .                normal  No     HTTP WebDAV Scanner
   863   auxiliary/scanner/http/webdav_website_content                            .                normal  No     HTTP WebDAV Website Content Scanner
   864   auxiliary/scanner/http/webpagetest_traversal                             2012-07-13       normal  No     WebPageTest Directory Traversal
   865   auxiliary/scanner/http/wildfly_traversal                                 2014-10-22       normal  No     WildFly Directory Traversal
   866   auxiliary/scanner/http/wordpress_content_injection                       2017-02-01       normal  Yes    WordPress REST API Content Injection
   867   auxiliary/scanner/http/wordpress_cp_calendar_sqli                        2015-03-03       normal  No     WordPress CP Multi-View Calendar Unauthenticated SQL Injection Scanner
   868   auxiliary/scanner/http/wordpress_ghost_scanner                           .                normal  No     WordPress XMLRPC GHOST Vulnerability Scanner
   869   auxiliary/scanner/http/wordpress_login_enum                              .                normal  No     WordPress Brute Force and User Enumeration Utility
   870   auxiliary/scanner/http/wordpress_multicall_creds                         .                normal  No     Wordpress XML-RPC system.multicall Credential Collector
   871   auxiliary/scanner/http/wordpress_pingback_access                         .                normal  No     Wordpress Pingback Locator
   872   auxiliary/scanner/http/wordpress_scanner                                 .                normal  No     Wordpress Scanner
   873   auxiliary/scanner/http/wordpress_xmlrpc_login                            .                normal  No     Wordpress XML-RPC Username/Password Login Scanner
   874   auxiliary/scanner/http/wowza_streaming_engine_manager_login              .                normal  No     Wowza Streaming Engine Manager Login Utility
   875   auxiliary/scanner/http/wp_abandoned_cart_sqli                            2020-11-05       normal  No     Abandoned Cart for WooCommerce SQLi Scanner
   876   auxiliary/scanner/http/wp_arbitrary_file_deletion                        2018-06-26       normal  No     Wordpress Arbitrary File Deletion
   877   auxiliary/scanner/http/wp_bulletproofsecurity_backups                    2021-09-17       normal  No     Wordpress BulletProof Security Backup Disclosure
   878   auxiliary/scanner/http/wp_chopslider_id_sqli                             2020-05-12       normal  No     WordPress ChopSlider3 id SQLi Scanner
   879   auxiliary/scanner/http/wp_contus_video_gallery_sqli                      2015-02-24       normal  No     WordPress Contus Video Gallery Unauthenticated SQL Injection Scanner
   880   auxiliary/scanner/http/wp_dukapress_file_read                            .                normal  No     WordPress DukaPress Plugin File Read Vulnerability
   881   auxiliary/scanner/http/wp_duplicator_file_read                           2020-02-19       normal  No     WordPress Duplicator File Read Vulnerability
   882   auxiliary/scanner/http/wp_easy_wp_smtp                                   2020-12-06       normal  No     WordPress Easy WP SMTP Password Reset
   883   auxiliary/scanner/http/wp_email_sub_news_sqli                            2019-11-13       normal  No     WordPress Email Subscribers and Newsletter Hash SQLi Scanner
   884   auxiliary/scanner/http/wp_fastest_cache_sqli                             2023-11-14       normal  No     WordPress WP Fastest Cache Unauthenticated SQLi (CVE-2023-6063)
   885   auxiliary/scanner/http/wp_gimedia_library_file_read                      .                normal  No     WordPress GI-Media Library Plugin Directory Traversal Vulnerability
   886   auxiliary/scanner/http/wp_learnpress_c_fields_sqli                       2024-09-11       normal  No     WordPress LearnPress Unauthenticated SQLi (CVE-2024-8522, CVE-2024-8529)
   887   auxiliary/scanner/http/wp_learnpress_sqli                                2020-04-29       normal  No     Wordpress LearnPress current_items Authenticated SQLi
   888   auxiliary/scanner/http/wp_loginizer_log_sqli                             2020-10-21       normal  No     WordPress Loginizer log SQLi Scanner
   889   auxiliary/scanner/http/wp_mobile_pack_info_disclosure                    .                normal  No     WordPress Mobile Pack Information Disclosure Vulnerability
   890   auxiliary/scanner/http/wp_mobileedition_file_read                        .                normal  No     WordPress Mobile Edition File Read Vulnerability
   891   auxiliary/scanner/http/wp_modern_events_calendar_sqli                    2021-12-13       normal  Yes    WordPress Modern Events Calendar SQLi Scanner
   892   auxiliary/scanner/http/wp_nextgen_galley_file_read                       .                normal  No     WordPress NextGEN Gallery Directory Read Vulnerability
   893   auxiliary/scanner/http/wp_paid_membership_pro_code_sqli                  2023-01-12       normal  Yes    Wordpress Paid Membership Pro code Unauthenticated SQLi
   894   auxiliary/scanner/http/wp_perfect_survey_sqli                            2021-10-05       normal  Yes    WordPress Plugin Perfect Survey 1.5.1 SQLi (Unauthenticated)
   895   auxiliary/scanner/http/wp_registrationmagic_sqli                         2022-01-23       normal  Yes    Wordpress RegistrationMagic task_ids Authenticated SQLi
   896   auxiliary/scanner/http/wp_secure_copy_content_protection_sqli            2021-11-08       normal  Yes    Wordpress Secure Copy Content Protection and Content Locking sccp_id Unauthenticated SQLi
   897   auxiliary/scanner/http/wp_simple_backup_file_read                        .                normal  No     WordPress Simple Backup File Read Vulnerability
   898   auxiliary/scanner/http/wp_subscribe_comments_file_read                   .                normal  No     WordPress Subscribe Comments File Read Vulnerability
   899   auxiliary/scanner/http/wp_ti_woocommerce_wishlist_sqli                   2024-09-25       normal  No     WordPress TI WooCommerce Wishlist SQL Injection (CVE-2024-43917)
   900   auxiliary/scanner/http/wp_total_upkeep_downloader                        2020-12-12       normal  No     WordPress Total Upkeep Unauthenticated Backup Downloader
   901   auxiliary/scanner/http/wp_ultimate_member_sorting_sqli                   2024-02-10       normal  No     WordPress Ultimate Member SQL Injection (CVE-2024-1071)
   902   auxiliary/scanner/http/wp_woocommerce_payments_add_user                  2023-03-22       normal  Yes    Wordpress Plugin WooCommerce Payments Unauthenticated Admin Creation
   903   auxiliary/scanner/http/wp_wps_hide_login_revealer                        2021-10-27       normal  No     WordPress WPS Hide Login Login Page Revealer
   904   auxiliary/scanner/http/xpath                                             .                normal  No     HTTP Blind XPATH 1.0 Injector
   905   auxiliary/scanner/http/yaws_traversal                                    2011-11-25       normal  No     Yaws Web Server Directory Traversal
   906   auxiliary/scanner/http/zabbix_login                                      .                normal  No     Zabbix Server Brute Force Utility
   907   auxiliary/scanner/http/zenload_balancer_traversal                        2020-04-10       normal  No     Zen Load Balancer Directory Traversal
   908   auxiliary/scanner/http/zenworks_assetmanagement_fileaccess               .                normal  No     Novell ZENworks Asset Management 7.5 Remote File Access
   909   auxiliary/scanner/http/zenworks_assetmanagement_getconfig                .                normal  No     Novell ZENworks Asset Management 7.5 Configuration Access
   910   auxiliary/scanner/ike/cisco_ike_benigncertain                            2016-09-29       normal  No     Cisco IKE Information Disclosure
   911   auxiliary/scanner/imap/imap_version                                      .                normal  No     IMAP4 Banner Grabber
   912   auxiliary/scanner/ip/ipidseq                                             .                normal  No     IPID Sequence Scanner
   913   auxiliary/scanner/ipmi/ipmi_cipher_zero                                  2013-06-20       normal  No     IPMI 2.0 Cipher Zero Authentication Bypass Scanner
   914   auxiliary/scanner/ipmi/ipmi_dumphashes                                   2013-06-20       normal  No     IPMI 2.0 RAKP Remote SHA1 Password Hash Retrieval
   915   auxiliary/scanner/ipmi/ipmi_version                                      .                normal  No     IPMI Information Discovery
   916   auxiliary/scanner/ivanti/ivanti_login                                    .                normal  No     Ivanti Connect Secure HTTP Scanner
   917   auxiliary/scanner/jenkins/jenkins_udp_broadcast_enum                     .                normal  No     Jenkins Server Broadcast Enumeration
   918   auxiliary/scanner/kademlia/server_info                                   .                normal  No     Gather Kademlia Server Information
   919   auxiliary/scanner/kerberos/kerberos_login                                .                normal  No     Kerberos Authentication Check Scanner
   920   auxiliary/scanner/ldap/ldap_login                                        .                normal  No     LDAP Login Scanner
   921   auxiliary/scanner/llmnr/query                                            .                normal  No     LLMNR Query
   922   auxiliary/scanner/lotus/lotus_domino_hashes                              .                normal  No     Lotus Domino Password Hash Collector
   923   auxiliary/scanner/lotus/lotus_domino_login                               .                normal  No     Lotus Domino Brute Force Utility
   924   auxiliary/scanner/lotus/lotus_domino_version                             .                normal  No     Lotus Domino Version
   925   auxiliary/scanner/mdns/query                                             .                normal  No     mDNS Query
   926   auxiliary/scanner/memcached/memcached_amp                                2018-02-27       normal  No     Memcached Stats Amplification Scanner
   927   auxiliary/scanner/memcached/memcached_udp_version                        2003-07-23       normal  No     Memcached UDP Version Scanner
   928   auxiliary/scanner/misc/cctv_dvr_login                                    .                normal  No     CCTV DVR Login Scanning Utility
   929   auxiliary/scanner/misc/cisco_smart_install                               .                normal  No     Identify Cisco Smart Install endpoints
   930   auxiliary/scanner/misc/clamav_control                                    2016-06-08       normal  No     ClamAV Remote Command Transmitter
   931   auxiliary/scanner/misc/cups_browsed_info_disclosure                      .                normal  No     cups-browsed Information Disclosure
   932   auxiliary/scanner/misc/dahua_dvr_auth_bypass                             .                normal  No     Dahua DVR Auth Bypass Scanner
   933   auxiliary/scanner/misc/dvr_config_disclosure                             .                normal  No     Multiple DVR Manufacturers Configuration Disclosure
   934   auxiliary/scanner/misc/easycafe_server_fileaccess                        .                normal  No     EasyCafe Server Remote File Access
   935   auxiliary/scanner/misc/freeswitch_event_socket_login                     .                normal  Yes    FreeSWITCH Event Socket Login
   936   auxiliary/scanner/misc/ib_service_mgr_info                               .                normal  No     Borland InterBase Services Manager Information
   937   auxiliary/scanner/misc/ibm_mq_channel_brute                              .                normal  No     IBM WebSphere MQ Channel Name Bruteforce
   938   auxiliary/scanner/misc/ibm_mq_enum                                       .                normal  No     Identify Queue Manager Name and MQ Version
   939   auxiliary/scanner/misc/ibm_mq_login                                      .                normal  No     IBM WebSphere MQ Login Check
   940   auxiliary/scanner/misc/java_jmx_server                                   2013-05-22       normal  No     Java JMX Server Insecure Endpoint Code Execution Scanner
   941   auxiliary/scanner/misc/java_rmi_server                                   2011-10-15       normal  No     Java RMI Server Insecure Endpoint Code Execution Scanner
   942   auxiliary/scanner/misc/oki_scanner                                       .                normal  No     OKI Printer Default Login Credential Scanner
   943   auxiliary/scanner/misc/poisonivy_control_scanner                         .                normal  No     Poison Ivy Command and Control Scanner
   944   auxiliary/scanner/misc/raysharp_dvr_passwords                            .                normal  No     Ray Sharp DVR Password Retriever
   945   auxiliary/scanner/misc/rocketmq_version                                  .                normal  No     Apache RocketMQ Version Scanner
   946   auxiliary/scanner/misc/rosewill_rxs3211_passwords                        .                normal  No     Rosewill RXS-3211 IP Camera Password Retriever
   947   auxiliary/scanner/misc/sercomm_backdoor_scanner                          2013-12-31       normal  No     SerComm Network Device Backdoor Detection
   948   auxiliary/scanner/misc/sunrpc_portmapper                                 .                normal  No     SunRPC Portmap Program Enumerator
   949   auxiliary/scanner/misc/zenworks_preboot_fileaccess                       .                normal  No     Novell ZENworks Configuration Management Preboot Service Remote File Access
   950   auxiliary/scanner/mongodb/mongodb_login                                  .                normal  No     MongoDB Login Utility
   951   auxiliary/scanner/motorola/timbuktu_udp                                  2009-09-25       normal  No     Motorola Timbuktu Service Detection
   952   auxiliary/scanner/mqtt/connect                                           .                normal  No     MQTT Authentication Scanner
   953   auxiliary/scanner/msf/msf_rpc_login                                      .                normal  No     Metasploit RPC Interface Login Utility
   954   auxiliary/scanner/msf/msf_web_login                                      .                normal  No     Metasploit Web Interface Login Utility
   955   auxiliary/scanner/msmail/exchange_enum                                   2018-11-06       normal  No     Exchange email enumeration
   956   auxiliary/scanner/msmail/host_id                                         2018-11-06       normal  No     Vulnerable domain identification
   957   auxiliary/scanner/msmail/onprem_enum                                     2018-11-06       normal  No     On premise user enumeration
   958   auxiliary/scanner/msmq/cve_2023_21554_queuejumper                        2023-04-11       normal  No     CVE-2023-21554 - QueueJumper - MSMQ RCE Check
   959   auxiliary/scanner/mssql/mssql_hashdump                                   .                normal  No     MSSQL Password Hashdump
   960   auxiliary/scanner/mssql/mssql_login                                      .                normal  No     MSSQL Login Utility
   961   auxiliary/scanner/mssql/mssql_ping                                       .                normal  No     MSSQL Ping Utility
   962   auxiliary/scanner/mssql/mssql_schemadump                                 .                normal  No     MSSQL Schema Dump
   963   auxiliary/scanner/mssql/mssql_version                                    .                normal  No     MSSQL Version Utility
   964   auxiliary/scanner/mysql/mysql_authbypass_hashdump                        2012-06-09       normal  No     MySQL Authentication Bypass Password Dump
   965   auxiliary/scanner/mysql/mysql_file_enum                                  .                normal  No     MYSQL File/Directory Enumerator
   966   auxiliary/scanner/mysql/mysql_hashdump                                   .                normal  No     MYSQL Password Hashdump
   967   auxiliary/scanner/mysql/mysql_login                                      .                normal  No     MySQL Login Utility
   968   auxiliary/scanner/mysql/mysql_schemadump                                 .                normal  No     MYSQL Schema Dump
   969   auxiliary/scanner/mysql/mysql_version                                    .                normal  No     MySQL Server Version Enumeration
   970   auxiliary/scanner/mysql/mysql_writable_dirs                              .                normal  No     MYSQL Directory Write Test
   971   auxiliary/scanner/natpmp/natpmp_portscan                                 .                normal  No     NAT-PMP External Port Scanner
   972   auxiliary/scanner/nessus/nessus_ntp_login                                .                normal  No     Nessus NTP Login Utility
   973   auxiliary/scanner/nessus/nessus_rest_login                               .                normal  No     Nessus RPC Interface Login Utility
   974   auxiliary/scanner/nessus/nessus_xmlrpc_login                             .                normal  No     Nessus XMLRPC Interface Login Utility
   975   auxiliary/scanner/nessus/nessus_xmlrpc_ping                              .                normal  No     Nessus XMLRPC Interface Ping Utility
   976   auxiliary/scanner/netbios/nbname                                         .                normal  No     NetBIOS Information Discovery
   977   auxiliary/scanner/nexpose/nexpose_api_login                              .                normal  No     NeXpose API Interface Login Utility
   978   auxiliary/scanner/nfs/nfsmount                                           .                normal  No     NFS Mount Scanner
   979   auxiliary/scanner/nntp/nntp_login                                        .                normal  No     NNTP Login Utility
   980   auxiliary/scanner/ntp/ntp_monlist                                        .                normal  No     NTP Monitor List Scanner
   981   auxiliary/scanner/ntp/ntp_nak_to_the_future                              .                normal  No     NTP "NAK to the Future"
   982   auxiliary/scanner/ntp/ntp_peer_list_dos                                  2014-08-25       normal  No     NTP Mode 7 PEER_LIST DoS Scanner
   983   auxiliary/scanner/ntp/ntp_peer_list_sum_dos                              2014-08-25       normal  No     NTP Mode 7 PEER_LIST_SUM DoS Scanner
   984   auxiliary/scanner/ntp/ntp_readvar                                        .                normal  No     NTP Clock Variables Disclosure
   985   auxiliary/scanner/ntp/ntp_req_nonce_dos                                  2014-08-25       normal  No     NTP Mode 6 REQ_NONCE DRDoS Scanner
   986   auxiliary/scanner/ntp/ntp_reslist_dos                                    2014-08-25       normal  No     NTP Mode 7 GET_RESTRICT DRDoS Scanner
   987   auxiliary/scanner/ntp/ntp_unsettrap_dos                                  2014-08-25       normal  No     NTP Mode 6 UNSETTRAP DRDoS Scanner
   988   auxiliary/scanner/ntp/timeroast                                          .                normal  No     NTP Timeroast
   989   auxiliary/scanner/openvas/openvas_gsad_login                             .                normal  No     OpenVAS gsad Web Interface Login Utility
   990   auxiliary/scanner/openvas/openvas_omp_login                              .                normal  No     OpenVAS OMP Login Utility
   991   auxiliary/scanner/openvas/openvas_otp_login                              .                normal  No     OpenVAS OTP Login Utility
   992   auxiliary/scanner/oracle/emc_sid                                         .                normal  No     Oracle Enterprise Manager Control SID Discovery
   993   auxiliary/scanner/oracle/isqlplus_login                                  .                normal  No     Oracle iSQL*Plus Login Utility
   994   auxiliary/scanner/oracle/isqlplus_sidbrute                               .                normal  No     Oracle iSQLPlus SID Check
   995   auxiliary/scanner/oracle/oracle_hashdump                                 .                normal  No     Oracle Password Hashdump
   996   auxiliary/scanner/oracle/oracle_login                                    .                normal  No     Oracle RDBMS Login Utility
   997   auxiliary/scanner/oracle/sid_brute                                       .                normal  No     Oracle TNS Listener SID Bruteforce
   998   auxiliary/scanner/oracle/sid_enum                                        2009-01-07       normal  No     Oracle TNS Listener SID Enumeration
   999   auxiliary/scanner/oracle/spy_sid                                         .                normal  No     Oracle Application Server Spy Servlet SID Enumeration
   1000  auxiliary/scanner/oracle/tnslsnr_version                                 2009-01-07       normal  No     Oracle TNS Listener Service Version Query
   1001  auxiliary/scanner/oracle/tnspoison_checker                               2012-04-18       normal  No     Oracle TNS Listener Checker
   1002  auxiliary/scanner/oracle/xdb_sid                                         .                normal  No     Oracle XML DB SID Discovery
   1003  auxiliary/scanner/oracle/xdb_sid_brute                                   .                normal  No     Oracle XML DB SID Discovery via Brute Force
   1004  auxiliary/scanner/pcanywhere/pcanywhere_login                            .                normal  No     PcAnywhere Login Scanner
   1005  auxiliary/scanner/pcanywhere/pcanywhere_tcp                              .                normal  No     PcAnywhere TCP Service Discovery
   1006  auxiliary/scanner/pcanywhere/pcanywhere_udp                              .                normal  No     PcAnywhere UDP Service Discovery
   1007  auxiliary/scanner/pop3/pop3_login                                        .                normal  No     POP3 Login Utility
   1008  auxiliary/scanner/pop3/pop3_version                                      .                normal  No     POP3 Banner Grabber
   1009  auxiliary/scanner/portmap/portmap_amp                                    .                normal  No     Portmapper Amplification Scanner
   1010  auxiliary/scanner/portscan/ack                                           .                normal  No     TCP ACK Firewall Scanner
   1011  auxiliary/scanner/portscan/ftpbounce                                     .                normal  No     FTP Bounce Port Scanner
   1012  auxiliary/scanner/portscan/syn                                           .                normal  No     TCP SYN Port Scanner
   1013  auxiliary/scanner/portscan/tcp                                           .                normal  No     TCP Port Scanner
   1014  auxiliary/scanner/portscan/xmas                                          .                normal  No     TCP "XMas" Port Scanner
   1015  auxiliary/scanner/postgres/postgres_dbname_flag_injection                .                normal  No     PostgreSQL Database Name Command Line Flag Injection
   1016  auxiliary/scanner/postgres/postgres_hashdump                             .                normal  No     Postgres Password Hashdump
   1017  auxiliary/scanner/postgres/postgres_login                                .                normal  No     PostgreSQL Login Utility
   1018  auxiliary/scanner/postgres/postgres_schemadump                           .                normal  No     Postgres Schema Dump
   1019  auxiliary/scanner/postgres/postgres_version                              .                normal  No     PostgreSQL Version Probe
   1020  auxiliary/scanner/printer/canon_iradv_pwd_extract                        .                normal  No     Canon IR-Adv Password Extractor
   1021  auxiliary/scanner/printer/printer_delete_file                            .                normal  No     Printer File Deletion Scanner
   1022  auxiliary/scanner/printer/printer_download_file                          .                normal  No     Printer File Download Scanner
   1023  auxiliary/scanner/printer/printer_env_vars                               .                normal  No     Printer Environment Variables Scanner
   1024  auxiliary/scanner/printer/printer_list_dir                               .                normal  No     Printer Directory Listing Scanner
   1025  auxiliary/scanner/printer/printer_list_volumes                           .                normal  No     Printer Volume Listing Scanner
   1026  auxiliary/scanner/printer/printer_ready_message                          .                normal  No     Printer Ready Message Scanner
   1027  auxiliary/scanner/printer/printer_upload_file                            .                normal  No     Printer File Upload Scanner
   1028  auxiliary/scanner/printer/printer_version_info                           .                normal  No     Printer Version Information Scanner
   1029  auxiliary/scanner/quake/server_info                                      .                normal  No     Gather Quake Server Information
   1030  auxiliary/scanner/rdp/cve_2019_0708_bluekeep                             2019-05-14       normal  Yes    CVE-2019-0708 BlueKeep Microsoft Remote Desktop RCE Check
   1031  auxiliary/scanner/rdp/ms12_020_check                                     .                normal  Yes    MS12-020 Microsoft Remote Desktop Checker
   1032  auxiliary/scanner/rdp/rdp_scanner                                        .                normal  No     Identify endpoints speaking the Remote Desktop Protocol (RDP)
   1033  auxiliary/scanner/redis/file_upload                                      2015-11-11       normal  No     Redis File Upload
   1034  auxiliary/scanner/redis/redis_login                                      .                normal  No     Redis Login Utility
   1035  auxiliary/scanner/redis/redis_server                                     .                normal  No     Redis Command Execute Scanner
   1036  auxiliary/scanner/rogue/rogue_recv                                       .                normal  No     Rogue Gateway Detection: Receiver
   1037  auxiliary/scanner/rogue/rogue_send                                       .                normal  No     Rogue Gateway Detection: Sender
   1038  auxiliary/scanner/rservices/rexec_login                                  .                normal  No     rexec Authentication Scanner
   1039  auxiliary/scanner/rservices/rlogin_login                                 .                normal  No     rlogin Authentication Scanner
   1040  auxiliary/scanner/rservices/rsh_login                                    .                normal  No     rsh Authentication Scanner
   1041  auxiliary/scanner/rsync/modules_list                                     .                normal  No     List Rsync Modules
   1042  auxiliary/scanner/sage/x3_adxsrv_login                                   .                normal  No     Sage X3 AdxAdmin Login Scanner
   1043  auxiliary/scanner/sap/sap_ctc_verb_tampering_user_mgmt                   .                normal  No     SAP CTC Service Verb Tampering User Management
   1044  auxiliary/scanner/sap/sap_hostctrl_getcomputersystem                     .                normal  No     SAP Host Agent Information Disclosure
   1045  auxiliary/scanner/sap/sap_icf_public_info                                .                normal  No     SAP ICF /sap/public/info Service Sensitive Information Gathering
   1046  auxiliary/scanner/sap/sap_icm_urlscan                                    .                normal  No     SAP URL Scanner
   1047  auxiliary/scanner/sap/sap_mgmt_con_abaplog                               .                normal  No     SAP Management Console ABAP Syslog Disclosure
   1048  auxiliary/scanner/sap/sap_mgmt_con_brute_login                           .                normal  No     SAP Management Console Brute Force
   1049  auxiliary/scanner/sap/sap_mgmt_con_extractusers                          .                normal  No     SAP Management Console Extract Users
   1050  auxiliary/scanner/sap/sap_mgmt_con_getaccesspoints                       .                normal  No     SAP Management Console Get Access Points
   1051  auxiliary/scanner/sap/sap_mgmt_con_getenv                                .                normal  No     SAP Management Console getEnvironment
   1052  auxiliary/scanner/sap/sap_mgmt_con_getlogfiles                           .                normal  No     SAP Management Console Get Logfile
   1053  auxiliary/scanner/sap/sap_mgmt_con_getprocesslist                        .                normal  No     SAP Management Console GetProcessList
   1054  auxiliary/scanner/sap/sap_mgmt_con_getprocessparameter                   .                normal  No     SAP Management Console Get Process Parameters
   1055  auxiliary/scanner/sap/sap_mgmt_con_instanceproperties                    .                normal  No     SAP Management Console Instance Properties
   1056  auxiliary/scanner/sap/sap_mgmt_con_listconfigfiles                       .                normal  No     SAP Management Console List Config Files
   1057  auxiliary/scanner/sap/sap_mgmt_con_listlogfiles                          .                normal  No     SAP Management Console List Logfiles
   1058  auxiliary/scanner/sap/sap_mgmt_con_startprofile                          .                normal  No     SAP Management Console getStartProfile
   1059  auxiliary/scanner/sap/sap_mgmt_con_version                               .                normal  No     SAP Management Console Version Detection
   1060  auxiliary/scanner/sap/sap_router_info_request                            .                normal  No     SAPRouter Admin Request
   1061  auxiliary/scanner/sap/sap_router_portscanner                             .                normal  No     SAPRouter Port Scanner
   1062  auxiliary/scanner/sap/sap_service_discovery                              .                normal  No     SAP Service Discovery
   1063  auxiliary/scanner/sap/sap_smb_relay                                      .                normal  No     SAP SMB Relay Abuse
   1064  auxiliary/scanner/sap/sap_soap_bapi_user_create1                         .                normal  No     SAP /sap/bc/soap/rfc SOAP Service BAPI_USER_CREATE1 Function User Creation
   1065  auxiliary/scanner/sap/sap_soap_rfc_brute_login                           .                normal  No     SAP SOAP Service RFC_PING Login Brute Forcer
   1066  auxiliary/scanner/sap/sap_soap_rfc_dbmcli_sxpg_call_system_command_exec  .                normal  No     SAP /sap/bc/soap/rfc SOAP Service SXPG_CALL_SYSTEM Function Command Injection
   1067  auxiliary/scanner/sap/sap_soap_rfc_dbmcli_sxpg_command_exec              .                normal  No     SAP /sap/bc/soap/rfc SOAP Service SXPG_COMMAND_EXEC Function Command Injection
   1068  auxiliary/scanner/sap/sap_soap_rfc_eps_get_directory_listing             .                normal  No     SAP SOAP RFC EPS_GET_DIRECTORY_LISTING Directories Information Disclosure
   1069  auxiliary/scanner/sap/sap_soap_rfc_pfl_check_os_file_existence           .                normal  No     SAP SOAP RFC PFL_CHECK_OS_FILE_EXISTENCE File Existence Check
   1070  auxiliary/scanner/sap/sap_soap_rfc_ping                                  .                normal  No     SAP /sap/bc/soap/rfc SOAP Service RFC_PING Function Service Discovery
   1071  auxiliary/scanner/sap/sap_soap_rfc_read_table                            .                normal  No     SAP /sap/bc/soap/rfc SOAP Service RFC_READ_TABLE Function Dump Data
   1072  auxiliary/scanner/sap/sap_soap_rfc_rzl_read_dir                          .                normal  No     SAP SOAP RFC RZL_READ_DIR_LOCAL Directory Contents Listing
   1073  auxiliary/scanner/sap/sap_soap_rfc_susr_rfc_user_interface               .                normal  No     SAP /sap/bc/soap/rfc SOAP Service SUSR_RFC_USER_INTERFACE Function User Creation
   1074  auxiliary/scanner/sap/sap_soap_rfc_sxpg_call_system_exec                 .                normal  No     SAP /sap/bc/soap/rfc SOAP Service SXPG_CALL_SYSTEM Function Command Execution
   1075  auxiliary/scanner/sap/sap_soap_rfc_sxpg_command_exec                     .                normal  No     SAP SOAP RFC SXPG_COMMAND_EXECUTE
   1076  auxiliary/scanner/sap/sap_soap_rfc_system_info                           .                normal  No     SAP /sap/bc/soap/rfc SOAP Service RFC_SYSTEM_INFO Function Sensitive Information Gathering
   1077  auxiliary/scanner/sap/sap_soap_th_saprel_disclosure                      .                normal  No     SAP /sap/bc/soap/rfc SOAP Service TH_SAPREL Function Information Disclosure
   1078  auxiliary/scanner/sap/sap_web_gui_brute_login                            .                normal  No     SAP Web GUI Login Brute Forcer
   1079  auxiliary/scanner/scada/bacnet_l3                                        .                normal  No     BACnet Scanner
   1080  auxiliary/scanner/scada/digi_addp_reboot                                 .                normal  No     Digi ADDP Remote Reboot Initiator
   1081  auxiliary/scanner/scada/digi_addp_version                                .                normal  No     Digi ADDP Information Discovery
   1082  auxiliary/scanner/scada/digi_realport_serialport_scan                    .                normal  No     Digi RealPort Serial Server Port Scanner
   1083  auxiliary/scanner/scada/digi_realport_version                            .                normal  No     Digi RealPort Serial Server Version
   1084  auxiliary/scanner/scada/indusoft_ntwebserver_fileaccess                  .                normal  No     Indusoft WebStudio NTWebServer Remote File Access
   1085  auxiliary/scanner/scada/koyo_login                                       2012-01-19       normal  No     Koyo DirectLogic PLC Password Brute Force Utility
   1086  auxiliary/scanner/scada/modbus_banner_grabbing                           .                normal  No     Modbus Banner Grabbing
   1087  auxiliary/scanner/scada/modbus_findunitid                                2012-10-28       normal  No     Modbus Unit ID and Station ID Enumerator
   1088  auxiliary/scanner/scada/modbusclient                                     .                normal  No     Modbus Client Utility
   1089  auxiliary/scanner/scada/modbusdetect                                     2011-11-01       normal  No     Modbus Version Scanner
   1090  auxiliary/scanner/scada/moxa_discover                                    .                normal  No     Moxa UDP Device Discovery
   1091  auxiliary/scanner/scada/pcomclient                                       .                normal  No     Unitronics PCOM Client
   1092  auxiliary/scanner/scada/profinet_siemens                                 .                normal  No     Siemens Profinet Scanner
   1093  auxiliary/scanner/scada/sielco_winlog_fileaccess                         .                normal  No     Sielco Sistemi Winlog Remote File Access
   1094  auxiliary/scanner/sip/enumerator                                         .                normal  No     SIP Username Enumerator (UDP)
   1095  auxiliary/scanner/sip/enumerator_tcp                                     .                normal  No     SIP Username Enumerator (TCP)
   1096  auxiliary/scanner/sip/options                                            .                normal  No     SIP Endpoint Scanner (UDP)
   1097  auxiliary/scanner/sip/options_tcp                                        .                normal  No     SIP Endpoint Scanner (TCP)
   1098  auxiliary/scanner/sip/sipdroid_ext_enum                                  .                normal  No     SIPDroid Extension Grabber
   1099  auxiliary/scanner/smb/impacket/dcomexec                                  2018-03-19       normal  No     DCOM Exec
   1100  auxiliary/scanner/smb/impacket/secretsdump                               .                normal  No     DCOM Exec
   1101  auxiliary/scanner/smb/impacket/wmiexec                                   2018-03-19       normal  No     WMI Exec
   1102  auxiliary/scanner/smb/pipe_auditor                                       .                normal  No     SMB Session Pipe Auditor
   1103  auxiliary/scanner/smb/pipe_dcerpc_auditor                                .                normal  No     SMB Session Pipe DCERPC Auditor
   1104  auxiliary/scanner/smb/psexec_loggedin_users                              .                normal  No     Microsoft Windows Authenticated Logged In Users Enumeration
   1105  auxiliary/scanner/smb/smb_enum_gpp                                       .                normal  No     SMB Group Policy Preference Saved Passwords Enumeration
   1106  auxiliary/scanner/smb/smb_enumshares                                     .                normal  No     SMB Share Enumeration
   1107  auxiliary/scanner/smb/smb_enumusers                                      .                normal  No     SMB User Enumeration (SAM EnumUsers)
   1108  auxiliary/scanner/smb/smb_enumusers_domain                               .                normal  No     SMB Domain User Enumeration
   1109  auxiliary/scanner/smb/smb_login                                          .                normal  No     SMB Login Check Scanner
   1110  auxiliary/scanner/smb/smb_lookupsid                                      .                normal  No     SMB SID User Enumeration (LookupSid)
   1111  auxiliary/scanner/smb/smb_ms17_010                                       .                normal  No     MS17-010 SMB RCE Detection
   1112  auxiliary/scanner/smb/smb_uninit_cred                                    .                normal  Yes    Samba _netr_ServerPasswordSet Uninitialized Credential State
   1113  auxiliary/scanner/smb/smb_version                                        .                normal  No     SMB Version Detection
   1114  auxiliary/scanner/smtp/smtp_enum                                         .                normal  No     SMTP User Enumeration Utility
   1115  auxiliary/scanner/smtp/smtp_ntlm_domain                                  .                normal  No     SMTP NTLM Domain Extraction
   1116  auxiliary/scanner/smtp/smtp_relay                                        .                normal  No     SMTP Open Relay Detection
   1117  auxiliary/scanner/smtp/smtp_version                                      .                normal  No     SMTP Banner Grabber
   1118  auxiliary/scanner/snmp/aix_version                                       .                normal  No     AIX SNMP Scanner Auxiliary Module
   1119  auxiliary/scanner/snmp/arris_dg950                                       .                normal  No     Arris DG950A Cable Modem Wifi Enumeration
   1120  auxiliary/scanner/snmp/brocade_enumhash                                  .                normal  No     Brocade Password Hash Enumeration
   1121  auxiliary/scanner/snmp/cisco_config_tftp                                 .                normal  No     Cisco IOS SNMP Configuration Grabber (TFTP)
   1122  auxiliary/scanner/snmp/cisco_upload_file                                 .                normal  No     Cisco IOS SNMP File Upload (TFTP)
   1123  auxiliary/scanner/snmp/cnpilot_r_snmp_loot                               .                normal  No     Cambium cnPilot r200/r201 SNMP Enumeration
   1124  auxiliary/scanner/snmp/epmp1000_snmp_loot                                .                normal  No     Cambium ePMP 1000 SNMP Enumeration
   1125  auxiliary/scanner/snmp/netopia_enum                                      .                normal  No     Netopia 3347 Cable Modem Wifi Enumeration
   1126  auxiliary/scanner/snmp/sbg6580_enum                                      .                normal  No     ARRIS / Motorola SBG6580 Cable Modem SNMP Enumeration Module
   1127  auxiliary/scanner/snmp/snmp_enum                                         .                normal  No     SNMP Enumeration Module
   1128  auxiliary/scanner/snmp/snmp_enum_hp_laserjet                             .                normal  No     HP LaserJet Printer SNMP Enumeration
   1129  auxiliary/scanner/snmp/snmp_enumshares                                   .                normal  No     SNMP Windows SMB Share Enumeration
   1130  auxiliary/scanner/snmp/snmp_enumusers                                    .                normal  No     SNMP Windows Username Enumeration
   1131  auxiliary/scanner/snmp/snmp_login                                        .                normal  No     SNMP Community Login Scanner
   1132  auxiliary/scanner/snmp/snmp_set                                          .                normal  No     SNMP Set Module
   1133  auxiliary/scanner/snmp/ubee_ddw3611                                      .                normal  No     Ubee DDW3611b Cable Modem Wifi Enumeration
   1134  auxiliary/scanner/snmp/xerox_workcentre_enumusers                        .                normal  No     Xerox WorkCentre User Enumeration (SNMP)
   1135  auxiliary/scanner/sonicwall/sonicwall_login                              .                normal  No     SonicWall HTTP Login Scanner
   1136  auxiliary/scanner/ssh/apache_karaf_command_execution                     2016-02-09       normal  No     Apache Karaf Default Credentials Command Execution
   1137  auxiliary/scanner/ssh/cerberus_sftp_enumusers                            2014-05-27       normal  No     Cerberus FTP Server SFTP Username Enumeration
   1138  auxiliary/scanner/ssh/detect_kippo                                       .                normal  No     Kippo SSH Honeypot Detector
   1139  auxiliary/scanner/ssh/eaton_xpert_backdoor                               2018-07-18       normal  No     Eaton Xpert Meter SSH Private Key Exposure Scanner
   1140  auxiliary/scanner/ssh/fortinet_backdoor                                  2016-01-09       normal  No     Fortinet SSH Backdoor Scanner
   1141  auxiliary/scanner/ssh/juniper_backdoor                                   2015-12-20       normal  No     Juniper SSH Backdoor Scanner
   1142  auxiliary/scanner/ssh/karaf_login                                        .                normal  No     Apache Karaf Login Utility
   1143  auxiliary/scanner/ssh/libssh_auth_bypass                                 2018-10-16       normal  No     libssh Authentication Bypass Scanner
   1144  auxiliary/scanner/ssh/ssh_enum_git_keys                                  .                normal  No     Test SSH Github Access
   1145  auxiliary/scanner/ssh/ssh_enumusers                                      .                normal  No     SSH Username Enumeration
   1146  auxiliary/scanner/ssh/ssh_identify_pubkeys                               .                normal  No     SSH Public Key Acceptance Scanner
   1147  auxiliary/scanner/ssh/ssh_login                                          .                normal  No     SSH Login Check Scanner
   1148  auxiliary/scanner/ssh/ssh_login_pubkey                                   .                normal  No     SSH Public Key Login Scanner
   1149  auxiliary/scanner/ssh/ssh_version                                        .                normal  No     SSH Version Scanner
   1150  auxiliary/scanner/ssl/bleichenbacher_oracle                              2009-06-17       normal  No     Scanner for Bleichenbacher Oracle in RSA PKCS #1 v1.5
   1151  auxiliary/scanner/ssl/openssl_ccs                                        2014-06-05       normal  No     OpenSSL Server-Side ChangeCipherSpec Injection Scanner
   1152  auxiliary/scanner/ssl/openssl_heartbleed                                 2014-04-07       normal  Yes    OpenSSL Heartbeat (Heartbleed) Information Leak
   1153  auxiliary/scanner/ssl/ssl_version                                        2014-10-14       normal  No     SSL/TLS Version Detection
   1154  auxiliary/scanner/steam/server_info                                      .                normal  No     Gather Steam Server Information
   1155  auxiliary/scanner/teamcity/teamcity_login                                .                normal  No     JetBrains TeamCity Login Scanner
   1156  auxiliary/scanner/telephony/wardial                                      .                normal  No     Wardialer
   1157  auxiliary/scanner/telnet/brocade_enable_login                            .                normal  No     Brocade Enable Login Check Scanner
   1158  auxiliary/scanner/telnet/lantronix_telnet_password                       .                normal  No     Lantronix Telnet Password Recovery
   1159  auxiliary/scanner/telnet/lantronix_telnet_version                        .                normal  No     Lantronix Telnet Service Banner Detection
   1160  auxiliary/scanner/telnet/satel_cmd_exec                                  2017-04-07       normal  No     Satel Iberia SenNet Data Logger and Electricity Meters Command Injection Vulnerability
   1161  auxiliary/scanner/telnet/telnet_encrypt_overflow                         .                normal  No     Telnet Service Encryption Key ID Overflow Detection
   1162  auxiliary/scanner/telnet/telnet_login                                    .                normal  No     Telnet Login Check Scanner
   1163  auxiliary/scanner/telnet/telnet_ruggedcom                                .                normal  No     RuggedCom Telnet Password Generator
   1164  auxiliary/scanner/telnet/telnet_version                                  .                normal  No     Telnet Service Banner Detection
   1165  auxiliary/scanner/teradata/teradata_odbc_login                           2018-03-30       normal  No     Teradata ODBC Login Scanner Module
   1166  auxiliary/scanner/tftp/ipswitch_whatsupgold_tftp                         2011-12-12       normal  No     IpSwitch WhatsUp Gold TFTP Directory Traversal
   1167  auxiliary/scanner/tftp/netdecision_tftp                                  2009-05-16       normal  No     NetDecision 4.2 TFTP Directory Traversal
   1168  auxiliary/scanner/tftp/tftpbrute                                         .                normal  No     TFTP Brute Forcer
   1169  auxiliary/scanner/ubiquiti/ubiquiti_discover                             .                normal  No     Ubiquiti Discovery Scanner
   1170  auxiliary/scanner/udp/udp_amplification                                  .                normal  No     UDP Amplification Scanner
   1171  auxiliary/scanner/upnp/ssdp_amp                                          .                normal  No     SSDP ssdp:all M-SEARCH Amplification Scanner
   1172  auxiliary/scanner/upnp/ssdp_msearch                                      .                normal  No     UPnP SSDP M-SEARCH Information Discovery
   1173  auxiliary/scanner/varnish/varnish_cli_file_read                          .                normal  No     Varnish Cache CLI File Read
   1174  auxiliary/scanner/varnish/varnish_cli_login                              .                normal  No     Varnish Cache CLI Login Utility
   1175  auxiliary/scanner/vmware/esx_fingerprint                                 .                normal  No     VMWare ESX/ESXi Fingerprint Scanner
   1176  auxiliary/scanner/vmware/vmauthd_login                                   .                normal  No     VMWare Authentication Daemon Login Scanner
   1177  auxiliary/scanner/vmware/vmauthd_version                                 .                normal  No     VMWare Authentication Daemon Version Scanner
   1178  auxiliary/scanner/vmware/vmware_enum_permissions                         .                normal  No     VMWare Enumerate Permissions
   1179  auxiliary/scanner/vmware/vmware_enum_sessions                            .                normal  No     VMWare Enumerate Active Sessions
   1180  auxiliary/scanner/vmware/vmware_enum_users                               .                normal  No     VMWare Enumerate User Accounts
   1181  auxiliary/scanner/vmware/vmware_enum_vms                                 .                normal  No     VMWare Enumerate Virtual Machines
   1182  auxiliary/scanner/vmware/vmware_host_details                             .                normal  No     VMWare Enumerate Host Details
   1183  auxiliary/scanner/vmware/vmware_http_login                               .                normal  No     VMWare Web Login Scanner
   1184  auxiliary/scanner/vmware/vmware_screenshot_stealer                       .                normal  No     VMWare Screenshot Stealer
   1185  auxiliary/scanner/vmware/vmware_server_dir_trav                          .                normal  No     VMware Server Directory Traversal Vulnerability
   1186  auxiliary/scanner/vmware/vmware_update_manager_traversal                 2011-11-21       normal  No     VMWare Update Manager 4 Directory Traversal
   1187  auxiliary/scanner/vnc/ard_root_pw                                        .                normal  No     Apple Remote Desktop Root Vulnerability
   1188  auxiliary/scanner/vnc/vnc_login                                          .                normal  No     VNC Authentication Scanner
   1189  auxiliary/scanner/vnc/vnc_none_auth                                      .                normal  No     VNC Authentication None Detection
   1190  auxiliary/scanner/voice/recorder                                         .                normal  No     Telephone Line Voice Scanner
   1191  auxiliary/scanner/vxworks/urgent11_check                                 2019-08-09       normal  No     URGENT/11 Scanner, Based on Detection Tool by Armis
   1192  auxiliary/scanner/vxworks/wdbrpc_bootline                                .                normal  No     VxWorks WDB Agent Boot Parameter Scanner
   1193  auxiliary/scanner/vxworks/wdbrpc_version                                 .                normal  No     VxWorks WDB Agent Version Scanner
   1194  auxiliary/scanner/winrm/winrm_auth_methods                               .                normal  No     WinRM Authentication Method Detection
   1195  auxiliary/scanner/winrm/winrm_cmd                                        .                normal  No     WinRM Command Runner
   1196  auxiliary/scanner/winrm/winrm_login                                      .                normal  No     WinRM Login Utility
   1197  auxiliary/scanner/winrm/winrm_wql                                        .                normal  No     WinRM WQL Query Runner
   1198  auxiliary/scanner/wproxy/att_open_proxy                                  2017-08-31       normal  No     Open WAN-to-LAN proxy on AT&T routers
   1199  auxiliary/scanner/wsdd/wsdd_query                                        .                normal  No     WS-Discovery Information Discovery
   1200  auxiliary/scanner/x11/open_x11                                           .                normal  No     X11 No-Auth Scanner
   1201  auxiliary/server/android_browsable_msf_launch                            .                normal  No     Android Meterpreter Browsable Launcher
   1202  auxiliary/server/android_mercury_parseuri                                .                normal  No     Android Mercury Browser Intent URI Scheme and Directory Traversal Vulnerability
   1203  auxiliary/server/browser_autopwn                                         .                normal  No     HTTP Client Automatic Exploiter
   1204  auxiliary/server/browser_autopwn2                                        2015-07-05       normal  No     HTTP Client Automatic Exploiter 2 (Browser Autopwn)
   1205  auxiliary/server/capture/drda                                            .                normal  No     Authentication Capture: DRDA (DB2, Informix, Derby)
   1206  auxiliary/server/capture/ftp                                             .                normal  No     Authentication Capture: FTP
   1207  auxiliary/server/capture/http                                            .                normal  No     Authentication Capture: HTTP
   1208  auxiliary/server/capture/http_basic                                      .                normal  No     HTTP Client Basic Authentication Credential Collector
   1209  auxiliary/server/capture/http_javascript_keylogger                       .                normal  No     Capture: HTTP JavaScript Keylogger
   1210  auxiliary/server/capture/http_ntlm                                       .                normal  No     HTTP Client MS Credential Catcher
   1211  auxiliary/server/capture/imap                                            .                normal  No     Authentication Capture: IMAP
   1212  auxiliary/server/capture/ldap                                            .                normal  No     Authentication Capture: LDAP
   1213  auxiliary/server/capture/mssql                                           .                normal  No     Authentication Capture: MSSQL
   1214  auxiliary/server/capture/mysql                                           .                normal  No     Authentication Capture: MySQL
   1215  auxiliary/server/capture/pop3                                            .                normal  No     Authentication Capture: POP3
   1216  auxiliary/server/capture/postgresql                                      .                normal  No     Authentication Capture: PostgreSQL
   1217  auxiliary/server/capture/printjob_capture                                .                normal  No     Printjob Capture Service
   1218  auxiliary/server/capture/sip                                             .                normal  No     Authentication Capture: SIP
   1219  auxiliary/server/capture/smb                                             .                normal  No     Authentication Capture: SMB
   1220  auxiliary/server/capture/smtp                                            .                normal  No     Authentication Capture: SMTP
   1221  auxiliary/server/capture/telnet                                          .                normal  No     Authentication Capture: Telnet
   1222  auxiliary/server/capture/vnc                                             .                normal  No     Authentication Capture: VNC
   1223  auxiliary/server/dhclient_bash_env                                       2014-09-24       normal  No     DHCP Client Bash Environment Variable Code Injection (Shellshock)
   1224  auxiliary/server/dhcp                                                    .                normal  No     DHCP Server
   1225  auxiliary/server/dns/native_server                                       .                normal  No     Native DNS Server (Example)
   1226  auxiliary/server/dns/spoofhelper                                         .                normal  No     DNS Spoofing Helper Service
   1227  auxiliary/server/fakedns                                                 .                normal  No     Fake DNS Service
   1228  auxiliary/server/ftp                                                     .                normal  No     FTP File Server
   1229  auxiliary/server/http_ntlmrelay                                          .                normal  No     HTTP Client MS Credential Relayer
   1230  auxiliary/server/icmp_exfil                                              .                normal  No     ICMP Exfiltration Service
   1231  auxiliary/server/jsse_skiptls_mitm_proxy                                 2015-01-20       normal  No     Java Secure Socket Extension (JSSE) SKIP-TLS MITM Proxy
   1232  auxiliary/server/ldap                                                    .                normal  No     Native LDAP Server (Example)
   1233  auxiliary/server/local_hwbridge                                          .                normal  No     Hardware Bridge Server
   1234  auxiliary/server/ms15_134_mcl_leak                                       2015-12-08       normal  No     MS15-134 Microsoft Windows Media Center MCL Information Disclosure
   1235  auxiliary/server/netbios_spoof_nat                                       2016-06-14       normal  No     NetBIOS Response "BadTunnel" Brute Force Spoof (NAT Tunnel)
   1236  auxiliary/server/openssl_altchainsforgery_mitm_proxy                     2015-07-09       normal  No     OpenSSL Alternative Chains Certificate Forgery MITM Proxy
   1237  auxiliary/server/openssl_heartbeat_client_memory                         2014-04-07       normal  No     OpenSSL Heartbeat (Heartbleed) Client Memory Exposure
   1238  auxiliary/server/pxeexploit                                              .                normal  No     PXE Boot Exploit Server
   1239  auxiliary/server/regsvr32_command_delivery_server                        .                normal  No     Regsvr32.exe (.sct) Command Delivery Server
   1240  auxiliary/server/relay/esc8                                              .                normal  Yes    ESC8 Relay: SMB to HTTP(S)
   1241  auxiliary/server/relay/smb_to_ldap                                       .                normal  No     Microsoft Windows SMB to LDAP Relay
   1242  auxiliary/server/socks_proxy                                             .                normal  No     SOCKS Proxy Server
   1243  auxiliary/server/socks_unc                                               .                normal  No     SOCKS Proxy UNC Path Redirection
   1244  auxiliary/server/teamviewer_uri_smb_redirect                             .                normal  No     TeamViewer Unquoted URI Handler SMB Redirect
   1245  auxiliary/server/tftp                                                    .                normal  No     TFTP File Server
   1246  auxiliary/server/webkit_xslt_dropper                                     .                normal  No     Cross Platform Webkit File Dropper
   1247  auxiliary/server/wget_symlink_file_write                                 2014-10-27       normal  No     GNU Wget FTP Symlink Arbitrary Filesystem Access
   1248  auxiliary/server/wpad                                                    .                normal  No     WPAD.dat File Server
   1249  auxiliary/sniffer/psnuffle                                               .                normal  No     pSnuffle Packet Sniffer
   1250  auxiliary/spoof/arp/arp_poisoning                                        1999-12-22       normal  No     ARP Spoof
   1251  auxiliary/spoof/cisco/cdp                                                .                normal  No     Send Cisco Discovery Protocol (CDP) Packets
   1252  auxiliary/spoof/cisco/dtp                                                .                normal  No     Forge Cisco DTP Packets
   1253  auxiliary/spoof/dns/bailiwicked_domain                                   2008-07-21       normal  Yes    DNS BailiWicked Domain Attack
   1254  auxiliary/spoof/dns/bailiwicked_host                                     2008-07-21       normal  Yes    DNS BailiWicked Host Attack
   1255  auxiliary/spoof/dns/compare_results                                      2008-07-21       normal  No     DNS Lookup Result Comparison
   1256  auxiliary/spoof/dns/native_spoofer                                       .                normal  No     Native DNS Spoofer (Example)
   1257  auxiliary/spoof/llmnr/llmnr_response                                     .                normal  No     LLMNR Spoofer
   1258  auxiliary/spoof/mdns/mdns_response                                       .                normal  No     mDNS Spoofer
   1259  auxiliary/spoof/nbns/nbns_response                                       .                normal  No     NetBIOS Name Service Spoofer
   1260  auxiliary/spoof/replay/pcap_replay                                       .                normal  No     Pcap Replay Utility
   1261  auxiliary/sqli/dlink/dlink_central_wifimanager_sqli                      2019-07-06       normal  Yes    D-Link Central WiFiManager SQL injection
   1262  auxiliary/sqli/openemr/openemr_sqli_dump                                 2019-05-17       normal  Yes    OpenEMR 5.0.1 Patch 6 SQLi Dump
   1263  auxiliary/sqli/oracle/dbms_cdc_ipublish                                  2008-10-22       normal  No     Oracle DB SQL Injection via SYS.DBMS_CDC_IPUBLISH.ALTER_HOTLOG_INTERNAL_CSOURCE
   1264  auxiliary/sqli/oracle/dbms_cdc_publish                                   2008-10-22       normal  No     Oracle DB SQL Injection via SYS.DBMS_CDC_PUBLISH.ALTER_AUTOLOG_CHANGE_SOURCE
   1265  auxiliary/sqli/oracle/dbms_cdc_publish2                                  2010-04-26       normal  No     Oracle DB SQL Injection via SYS.DBMS_CDC_PUBLISH.DROP_CHANGE_SOURCE
   1266  auxiliary/sqli/oracle/dbms_cdc_publish3                                  2010-10-13       normal  No     Oracle DB SQL Injection via SYS.DBMS_CDC_PUBLISH.CREATE_CHANGE_SET
   1267  auxiliary/sqli/oracle/dbms_cdc_subscribe_activate_subscription           2005-04-18       normal  No     Oracle DB SQL Injection via SYS.DBMS_CDC_SUBSCRIBE.ACTIVATE_SUBSCRIPTION
   1268  auxiliary/sqli/oracle/dbms_export_extension                              2006-04-26       normal  No     Oracle DB SQL Injection via DBMS_EXPORT_EXTENSION
   1269  auxiliary/sqli/oracle/dbms_metadata_get_granted_xml                      2008-01-05       normal  No     Oracle DB SQL Injection via SYS.DBMS_METADATA.GET_GRANTED_XML
   1270  auxiliary/sqli/oracle/dbms_metadata_get_xml                              2008-01-05       normal  No     Oracle DB SQL Injection via SYS.DBMS_METADATA.GET_XML
   1271  auxiliary/sqli/oracle/dbms_metadata_open                                 2008-01-05       normal  No     Oracle DB SQL Injection via SYS.DBMS_METADATA.OPEN
   1272  auxiliary/sqli/oracle/droptable_trigger                                  2009-01-13       normal  No     Oracle DB SQL Injection in MDSYS.SDO_TOPO_DROP_FTBL Trigger
   1273  auxiliary/sqli/oracle/jvm_os_code_10g                                    2010-02-01       normal  No     Oracle DB 10gR2, 11gR1/R2 DBMS_JVM_EXP_PERMS OS Command Execution
   1274  auxiliary/sqli/oracle/jvm_os_code_11g                                    2010-02-01       normal  No     Oracle DB 11g R1/R2 DBMS_JVM_EXP_PERMS OS Code Execution
   1275  auxiliary/sqli/oracle/lt_compressworkspace                               2008-10-13       normal  No     Oracle DB SQL Injection via SYS.LT.COMPRESSWORKSPACE
   1276  auxiliary/sqli/oracle/lt_findricset_cursor                               2007-10-17       normal  No     Oracle DB SQL Injection via SYS.LT.FINDRICSET Evil Cursor Method
   1277  auxiliary/sqli/oracle/lt_mergeworkspace                                  2008-10-22       normal  No     Oracle DB SQL Injection via SYS.LT.MERGEWORKSPACE
   1278  auxiliary/sqli/oracle/lt_removeworkspace                                 2008-10-13       normal  No     Oracle DB SQL Injection via SYS.LT.REMOVEWORKSPACE
   1279  auxiliary/sqli/oracle/lt_rollbackworkspace                               2009-05-04       normal  No     Oracle DB SQL Injection via SYS.LT.ROLLBACKWORKSPACE
   1280  auxiliary/voip/asterisk_login                                            .                normal  No     Asterisk Manager Login Utility
   1281  auxiliary/voip/cisco_cucdm_call_forward                                  .                normal  No     Viproy CUCDM IP Phone XML Services - Call Forwarding Tool
   1282  auxiliary/voip/cisco_cucdm_speed_dials                                   .                normal  No     Viproy CUCDM IP Phone XML Services - Speed Dial Attack Tool
   1283  auxiliary/voip/sip_deregister                                            .                normal  No     SIP Deregister Extension
   1284  auxiliary/voip/sip_invite_spoof                                          .                normal  No     SIP Invite Spoof
   1285  auxiliary/voip/telisca_ips_lock_control                                  2015-12-17       normal  No     Telisca IPS Lock Cisco IP Phone Control
   1286  auxiliary/vsploit/malware/dns/dns_mariposa                               .                normal  No     VSploit Mariposa DNS Query Module
   1287  auxiliary/vsploit/malware/dns/dns_query                                  .                normal  No     VSploit DNS Beaconing Emulation
   1288  auxiliary/vsploit/malware/dns/dns_zeus                                   .                normal  No     VSploit Zeus DNS Query Module
   1289  auxiliary/vsploit/pii/email_pii                                          .                normal  No     VSploit Email PII
   1290  auxiliary/vsploit/pii/web_pii                                            .                normal  No     VSploit Web PII
   ```
