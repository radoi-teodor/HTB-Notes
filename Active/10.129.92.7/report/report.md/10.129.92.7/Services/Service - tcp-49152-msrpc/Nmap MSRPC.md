```bash
nmap -vv --reason -Pn -T4 -sV -p 49152 --script="banner,msrpc-enum,rpc-grind,rpcinfo" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49152/tcp_49152_rpc_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49152/xml/tcp_49152_rpc_nmap.xml" 10.129.92.7
```

[/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49152/tcp_49152_rpc_nmap.txt](file:///home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49152/tcp_49152_rpc_nmap.txt):

```
# Nmap 7.94 scan initiated Sat Sep 30 11:45:29 2023 as: nmap -vv --reason -Pn -T4 -sV -p 49152 --script=banner,msrpc-enum,rpc-grind,rpcinfo -oN /home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49152/tcp_49152_rpc_nmap.txt -oX /home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49152/xml/tcp_49152_rpc_nmap.xml 10.129.92.7
Nmap scan report for 10.129.92.7
Host is up, received user-set (0.071s latency).
Scanned at 2023-09-30 11:45:29 EDT for 75s

PORT      STATE SERVICE REASON          VERSION
49152/tcp open  msrpc   syn-ack ttl 127 Microsoft Windows RPC
Service Info: OS: Windows; CPE: cpe:/o:microsoft:windows

Read data files from: /usr/bin/../share/nmap
Service detection performed. Please report any incorrect results at https://nmap.org/submit/ .
# Nmap done at Sat Sep 30 11:46:44 2023 -- 1 IP address (1 host up) scanned in 75.69 seconds

```
