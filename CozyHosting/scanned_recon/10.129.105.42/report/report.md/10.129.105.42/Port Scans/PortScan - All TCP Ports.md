```bash
nmap -vv --reason -Pn -T4 -sV -sC --version-all -A --osscan-guess -p- -oN "/home/kali/Documents/HTB-Notes/CozyHosting/scanned_recon/10.129.105.42/scans/_full_tcp_nmap.txt" -oX "/home/kali/Documents/HTB-Notes/CozyHosting/scanned_recon/10.129.105.42/scans/xml/_full_tcp_nmap.xml" 10.129.105.42
```

[/home/kali/Documents/HTB-Notes/CozyHosting/scanned_recon/10.129.105.42/scans/_full_tcp_nmap.txt](file:///home/kali/Documents/HTB-Notes/CozyHosting/scanned_recon/10.129.105.42/scans/_full_tcp_nmap.txt):

```
# Nmap 7.94 scan initiated Fri Sep  8 06:56:17 2023 as: nmap -vv --reason -Pn -T4 -sV -sC --version-all -A --osscan-guess -p- -oN /home/kali/Documents/HTB-Notes/CozyHosting/scanned_recon/10.129.105.42/scans/_full_tcp_nmap.txt -oX /home/kali/Documents/HTB-Notes/CozyHosting/scanned_recon/10.129.105.42/scans/xml/_full_tcp_nmap.xml 10.129.105.42
adjust_timeouts2: packet supposedly had rtt of -62128 microseconds.  Ignoring time.
adjust_timeouts2: packet supposedly had rtt of -62128 microseconds.  Ignoring time.
Nmap scan report for 10.129.105.42
Host is up, received user-set (0.060s latency).
Scanned at 2023-09-08 06:56:19 EDT for 87s
Not shown: 65533 closed tcp ports (reset)
PORT   STATE SERVICE REASON         VERSION
22/tcp open  ssh     syn-ack ttl 63 OpenSSH 8.9p1 Ubuntu 3ubuntu0.3 (Ubuntu Linux; protocol 2.0)
| ssh-hostkey: 
|   256 43:56:bc:a7:f2:ec:46:dd:c1:0f:83:30:4c:2c:aa:a8 (ECDSA)
| ecdsa-sha2-nistp256 AAAAE2VjZHNhLXNoYTItbmlzdHAyNTYAAAAIbmlzdHAyNTYAAABBBEpNwlByWMKMm7ZgDWRW+WZ9uHc/0Ehct692T5VBBGaWhA71L+yFgM/SqhtUoy0bO8otHbpy3bPBFtmjqQPsbC8=
|   256 6f:7a:6c:3f:a6:8d:e2:75:95:d4:7b:71:ac:4f:7e:42 (ED25519)
|_ssh-ed25519 AAAAC3NzaC1lZDI1NTE5AAAAIHVzF8iMVIHgp9xMX9qxvbaoXVg1xkGLo61jXuUAYq5q
80/tcp open  http    syn-ack ttl 63 nginx 1.18.0 (Ubuntu)
| http-methods: 
|_  Supported Methods: GET HEAD POST OPTIONS
|_http-title: Did not follow redirect to http://cozyhosting.htb
|_http-server-header: nginx/1.18.0 (Ubuntu)
Aggressive OS guesses: Linux 5.0 (99%), Linux 5.0 - 5.4 (95%), HP P2000 G3 NAS device (93%), Linux 4.15 - 5.8 (93%), Linux 2.6.32 (92%), Linux 2.6.32 - 3.1 (92%), Ubiquiti AirMax NanoStation WAP (Linux 2.6.32) (92%), Linux 3.7 (92%), Linux 5.3 - 5.4 (92%), Linux 2.6.32 - 3.13 (92%)
No exact OS matches for host (If you know what OS is running on it, see https://nmap.org/submit/ ).
TCP/IP fingerprint:
OS:SCAN(V=7.94%E=4%D=9/8%OT=22%CT=1%CU=39566%PV=Y%DS=2%DC=T%G=Y%TM=64FAFE2A
OS:%P=x86_64-pc-linux-gnu)SEQ(SP=105%GCD=1%ISR=103%TI=Z%CI=Z%II=I%TS=A)OPS(
OS:O1=M53CST11NW7%O2=M53CST11NW7%O3=M53CNNT11NW7%O4=M53CST11NW7%O5=M53CST11
OS:NW7%O6=M53CST11)WIN(W1=FE88%W2=FE88%W3=FE88%W4=FE88%W5=FE88%W6=FE88)ECN(
OS:R=Y%DF=Y%T=40%W=FAF0%O=M53CNNSNW7%CC=Y%Q=)T1(R=Y%DF=Y%T=40%S=O%A=S+%F=AS
OS:%RD=0%Q=)T2(R=N)T3(R=N)T4(R=Y%DF=Y%T=40%W=0%S=A%A=Z%F=R%O=%RD=0%Q=)T5(R=
OS:Y%DF=Y%T=40%W=0%S=Z%A=S+%F=AR%O=%RD=0%Q=)T6(R=Y%DF=Y%T=40%W=0%S=A%A=Z%F=
OS:R%O=%RD=0%Q=)T7(R=N)U1(R=Y%DF=N%T=40%IPL=164%UN=0%RIPL=G%RID=G%RIPCK=G%R
OS:UCK=G%RUD=G)IE(R=Y%DFI=N%T=40%CD=S)

Uptime guess: 5.729 days (since Sat Sep  2 13:27:39 2023)
Network Distance: 2 hops
TCP Sequence Prediction: Difficulty=261 (Good luck!)
IP ID Sequence Generation: All zeros
Service Info: OS: Linux; CPE: cpe:/o:linux:linux_kernel

TRACEROUTE (using port 587/tcp)
HOP RTT      ADDRESS
1   58.71 ms 10.10.14.1
2   58.82 ms 10.129.105.42

Read data files from: /usr/bin/../share/nmap
OS and Service detection performed. Please report any incorrect results at https://nmap.org/submit/ .
# Nmap done at Fri Sep  8 06:57:46 2023 -- 1 IP address (1 host up) scanned in 90.60 seconds

```
