```bash
nmap -vv --reason -Pn -T4 -sU -sV -p 123 --script="banner,(ntp* or ssl*) and not (brute or broadcast or dos or external or fuzzer)" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/udp123/udp_123_ntp_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/udp123/xml/udp_123_ntp_nmap.xml" 10.129.92.7
```

[/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/udp123/udp_123_ntp_nmap.txt](file:///home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/udp123/udp_123_ntp_nmap.txt):

```
# Nmap 7.94 scan initiated Sat Sep 30 11:49:26 2023 as: nmap -vv --reason -Pn -T4 -sU -sV -p 123 "--script=banner,(ntp* or ssl*) and not (brute or broadcast or dos or external or fuzzer)" -oN /home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/udp123/udp_123_ntp_nmap.txt -oX /home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/udp123/xml/udp_123_ntp_nmap.xml 10.129.92.7
Nmap scan report for 10.129.92.7
Host is up, received user-set (0.057s latency).
Scanned at 2023-09-30 11:49:26 EDT for 10s

PORT    STATE SERVICE REASON               VERSION
123/udp open  ntp     udp-response ttl 127 NTP v3
| ntp-info: 
|_  receive time stamp: 2023-09-30T15:49:28

Read data files from: /usr/bin/../share/nmap
Service detection performed. Please report any incorrect results at https://nmap.org/submit/ .
# Nmap done at Sat Sep 30 11:49:36 2023 -- 1 IP address (1 host up) scanned in 10.69 seconds

```
