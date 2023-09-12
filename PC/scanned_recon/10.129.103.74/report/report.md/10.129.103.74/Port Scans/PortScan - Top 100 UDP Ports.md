```bash
nmap -vv --reason -Pn -T4 -sU -A --top-ports 100 -oN "/home/kali/Documents/HTB-Notes/PC/scanned_recon/10.129.103.74/scans/_top_100_udp_nmap.txt" -oX "/home/kali/Documents/HTB-Notes/PC/scanned_recon/10.129.103.74/scans/xml/_top_100_udp_nmap.xml" 10.129.103.74
```

[/home/kali/Documents/HTB-Notes/PC/scanned_recon/10.129.103.74/scans/_top_100_udp_nmap.txt](file:///home/kali/Documents/HTB-Notes/PC/scanned_recon/10.129.103.74/scans/_top_100_udp_nmap.txt):

```
# Nmap 7.94 scan initiated Tue Sep 12 02:25:31 2023 as: nmap -vv --reason -Pn -T4 -sU -A --top-ports 100 -oN /home/kali/Documents/HTB-Notes/PC/scanned_recon/10.129.103.74/scans/_top_100_udp_nmap.txt -oX /home/kali/Documents/HTB-Notes/PC/scanned_recon/10.129.103.74/scans/xml/_top_100_udp_nmap.xml 10.129.103.74
Nmap scan report for 10.129.103.74
Host is up, received user-set (0.058s latency).
Scanned at 2023-09-12 02:25:32 EDT for 1822s
All 100 scanned ports on 10.129.103.74 are in ignored states.
Not shown: 100 open|filtered udp ports (no-response)
Too many fingerprints match this host to give specific OS details
TCP/IP fingerprint:
SCAN(V=7.94%E=4%D=9/12%OT=%CT=%CU=%PV=Y%DS=2%DC=T%G=N%TM=65000B7A%P=x86_64-pc-linux-gnu)
SEQ(II=I)
U1(R=N)
IE(R=Y%DFI=N%TG=40%CD=S)

Network Distance: 2 hops

TRACEROUTE (using proto 1/icmp)
HOP RTT      ADDRESS
1   57.31 ms 10.10.14.1
2   60.80 ms 10.129.103.74

Read data files from: /usr/bin/../share/nmap
OS and Service detection performed. Please report any incorrect results at https://nmap.org/submit/ .
# Nmap done at Tue Sep 12 02:55:54 2023 -- 1 IP address (1 host up) scanned in 1822.46 seconds

```
