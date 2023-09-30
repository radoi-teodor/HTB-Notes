```bash
nmap -vv --reason -Pn -T4 -sV -p 135 --script="banner,msrpc-enum,rpc-grind,rpcinfo" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp135/tcp_135_rpc_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp135/xml/tcp_135_rpc_nmap.xml" 10.129.92.7
```

[/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp135/tcp_135_rpc_nmap.txt](file:///home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp135/tcp_135_rpc_nmap.txt):

```
# Nmap 7.94 scan initiated Sat Sep 30 11:45:28 2023 as: nmap -vv --reason -Pn -T4 -sV -p 135 --script=banner,msrpc-enum,rpc-grind,rpcinfo -oN /home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp135/tcp_135_rpc_nmap.txt -oX /home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp135/xml/tcp_135_rpc_nmap.xml 10.129.92.7
Nmap scan report for 10.129.92.7
Host is up, received user-set (0.058s latency).
Scanned at 2023-09-30 11:45:29 EDT for 22s

PORT    STATE SERVICE REASON          VERSION
135/tcp open  msrpc   syn-ack ttl 127 Microsoft Windows RPC
Service Info: OS: Windows; CPE: cpe:/o:microsoft:windows

Read data files from: /usr/bin/../share/nmap
Service detection performed. Please report any incorrect results at https://nmap.org/submit/ .
# Nmap done at Sat Sep 30 11:45:51 2023 -- 1 IP address (1 host up) scanned in 22.41 seconds

```
