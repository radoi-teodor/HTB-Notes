```bash
nmap -vv --reason -Pn -T4 -sU -sV -p 88 --script="banner,krb5-enum-users" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/udp88/udp_88_kerberos_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/udp88/xml/udp_88_kerberos_nmap.xml" 10.129.92.7
```

[/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/udp88/udp_88_kerberos_nmap.txt](file:///home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/udp88/udp_88_kerberos_nmap.txt):

```
# Nmap 7.94 scan initiated Sat Sep 30 11:49:26 2023 as: nmap -vv --reason -Pn -T4 -sU -sV -p 88 --script=banner,krb5-enum-users -oN /home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/udp88/udp_88_kerberos_nmap.txt -oX /home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/udp88/xml/udp_88_kerberos_nmap.xml 10.129.92.7
Nmap scan report for 10.129.92.7
Host is up, received user-set (0.058s latency).
Scanned at 2023-09-30 11:49:26 EDT for 0s

PORT   STATE SERVICE      REASON               VERSION
88/udp open  kerberos-sec udp-response ttl 127 Microsoft Windows Kerberos (server time: 2023-09-30 15:49:27Z)
Service Info: OS: Windows; CPE: cpe:/o:microsoft:windows

Read data files from: /usr/bin/../share/nmap
Service detection performed. Please report any incorrect results at https://nmap.org/submit/ .
# Nmap done at Sat Sep 30 11:49:26 2023 -- 1 IP address (1 host up) scanned in 0.37 seconds

```
