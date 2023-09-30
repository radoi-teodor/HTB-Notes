```bash
nmap -vv --reason -Pn -T4 -sV -p 464 --script="banner,krb5-enum-users" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp464/tcp_464_kerberos_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp464/xml/tcp_464_kerberos_nmap.xml" 10.129.92.7
```

[/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp464/tcp_464_kerberos_nmap.txt](file:///home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp464/tcp_464_kerberos_nmap.txt):

```
# Nmap 7.94 scan initiated Sat Sep 30 11:45:29 2023 as: nmap -vv --reason -Pn -T4 -sV -p 464 --script=banner,krb5-enum-users -oN /home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp464/tcp_464_kerberos_nmap.txt -oX /home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp464/xml/tcp_464_kerberos_nmap.xml 10.129.92.7
Nmap scan report for 10.129.92.7
Host is up, received user-set (0.067s latency).
Scanned at 2023-09-30 11:45:29 EDT for 20s

PORT    STATE SERVICE   REASON          VERSION
464/tcp open  kpasswd5? syn-ack ttl 127

Read data files from: /usr/bin/../share/nmap
Service detection performed. Please report any incorrect results at https://nmap.org/submit/ .
# Nmap done at Sat Sep 30 11:45:49 2023 -- 1 IP address (1 host up) scanned in 20.91 seconds

```
