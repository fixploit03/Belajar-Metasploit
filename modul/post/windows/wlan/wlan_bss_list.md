# wlan_bss_list

Module `wlan_bss_list` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk mengambil daftar jaringan WiFi (BSS - Basic Service Set) yang terdeteksi oleh antarmuka nirkabel target, termasuk `SSID`, `BSSID` (MAC address), `kekuatan sinyal`, dan `informasi lainnya`. Modul ini memungkinkan penyerang yang sudah memiliki akses ke sistem target untuk melihat jaringan WiFi di sekitar perangkat tersebut, yang berguna untuk pemetaan jaringan nirkabel dalam fase pasca-eksploitasi.

## Cara Penggunaan di Metasploit

```
use post/windows/wlan/wlan_bss_list
set SESSION <ID>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[*] Number of Networks: 8
[+] SSID: Chamisul 
	BSSID: 68:59:11:22:25:b0 
	Type: Infrastructure
	PHY: 802.11n PHY type 
	RSSI: -84 
	Signal: 46

[+] SSID: ghaisa cantik 
	BSSID: 74:da:da:82:1c:b7 
	Type: Infrastructure
	PHY: 802.11n PHY type 
	RSSI: -84 
	Signal: 48

[+] SSID: PUNYA BAPAK MANTA 
	BSSID: d4:9e:04:65:eb:c8 
	Type: Infrastructure
	PHY: 802.11n PHY type 
	RSSI: -76 
	Signal: 56

[+] SSID: REVITHA CHANTIK 
	BSSID: d4:9e:04:68:6a:be 
	Type: Infrastructure
	PHY: 802.11n PHY type 
	RSSI: -78 
	Signal: 56

[+] SSID: COMPASS CIKARANG 
	BSSID: 68:59:11:25:43:24 
	Type: Infrastructure
	PHY: Unknown Association Type 
	RSSI: -56 
	Signal: 84

[+] SSID: LABKOM 
	BSSID: 68:59:11:25:43:25 
	Type: Infrastructure
	PHY: Unknown Association Type 
	RSSI: -56 
	Signal: 86

[+] SSID: OPPO A54 
	BSSID: be:25:c3:ce:ec:7c 
	Type: Infrastructure
	PHY: Unknown Association Type 
	RSSI: -62 
	Signal: 92

[+] SSID: COMPASS CIKARANG 
	BSSID: 68:59:11:25:43:20 
	Type: Infrastructure
	PHY: 802.11n PHY type 
	RSSI: -48 
	Signal: 100

[*] WlanAPI Handle Closed Successfully
[*] Post module execution completed
```
