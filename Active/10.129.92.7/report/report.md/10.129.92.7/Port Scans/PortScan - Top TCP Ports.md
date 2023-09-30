```bash
nmap -vv --reason -Pn -T4 -sV -sC --version-all -A --osscan-guess -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/_quick_tcp_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/xml/_quick_tcp_nmap.xml" 10.129.92.7
```

[/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/_quick_tcp_nmap.txt](file:///home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/_quick_tcp_nmap.txt):

```
# Nmap 7.94 scan initiated Sat Sep 30 11:43:48 2023 as: nmap -vv --reason -Pn -T4 -sV -sC --version-all -A --osscan-guess -oN /home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/_quick_tcp_nmap.txt -oX /home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/xml/_quick_tcp_nmap.xml 10.129.92.7
Increasing send delay for 10.129.92.7 from 0 to 5 due to 74 out of 184 dropped probes since last increase.
adjust_timeouts2: packet supposedly had rtt of -67898 microseconds.  Ignoring time.
adjust_timeouts2: packet supposedly had rtt of -67898 microseconds.  Ignoring time.
Nmap scan report for 10.129.92.7
Host is up, received user-set (0.058s latency).
Scanned at 2023-09-30 11:43:48 EDT for 100s
Not shown: 982 closed tcp ports (reset)
PORT      STATE SERVICE       REASON          VERSION
53/tcp    open  domain        syn-ack ttl 127 Microsoft DNS 6.1.7601 (1DB15D39) (Windows Server 2008 R2 SP1)
| dns-nsid: 
|_  bind.version: Microsoft DNS 6.1.7601 (1DB15D39)
88/tcp    open  kerberos-sec  syn-ack ttl 127 Microsoft Windows Kerberos (server time: 2023-09-30 15:44:04Z)
135/tcp   open  msrpc         syn-ack ttl 127 Microsoft Windows RPC
139/tcp   open  netbios-ssn   syn-ack ttl 127 Microsoft Windows netbios-ssn
389/tcp   open  ldap          syn-ack ttl 127 Microsoft Windows Active Directory LDAP (Domain: active.htb, Site: Default-First-Site-Name)
445/tcp   open  microsoft-ds? syn-ack ttl 127
464/tcp   open  kpasswd5?     syn-ack ttl 127
593/tcp   open  ncacn_http    syn-ack ttl 127 Microsoft Windows RPC over HTTP 1.0
636/tcp   open  tcpwrapped    syn-ack ttl 127
3268/tcp  open  ldap          syn-ack ttl 127 Microsoft Windows Active Directory LDAP (Domain: active.htb, Site: Default-First-Site-Name)
3269/tcp  open  tcpwrapped    syn-ack ttl 127
49152/tcp open  msrpc         syn-ack ttl 127 Microsoft Windows RPC
49153/tcp open  msrpc         syn-ack ttl 127 Microsoft Windows RPC
49154/tcp open  msrpc         syn-ack ttl 127 Microsoft Windows RPC
49155/tcp open  msrpc         syn-ack ttl 127 Microsoft Windows RPC
49157/tcp open  ncacn_http    syn-ack ttl 127 Microsoft Windows RPC over HTTP 1.0
49158/tcp open  msrpc         syn-ack ttl 127 Microsoft Windows RPC
49165/tcp open  msrpc         syn-ack ttl 127 Microsoft Windows RPC
Aggressive OS guesses: Microsoft Windows 7 SP1 (95%), Microsoft Windows 7 SP1 or Windows Server 2008 SP2 (95%), Microsoft Windows Windows 7 SP1 (95%), Microsoft Windows Vista Home Premium SP1, Windows 7, or Windows Server 2008 (95%), Microsoft Windows Vista SP1 (94%), Microsoft Windows 7 Ultimate (93%), Microsoft Windows Server 2008 R2 (93%), Microsoft Windows 8 (93%), Microsoft Windows 7 SP1 or Windows Server 2008 (93%), Microsoft Windows 8.1 (93%)
No exact OS matches for host (If you know what OS is running on it, see https://nmap.org/submit/ ).
TCP/IP fingerprint:
OS:SCAN(V=7.94%E=4%D=9/30%OT=53%CT=1%CU=41628%PV=Y%DS=2%DC=T%G=Y%TM=6518429
OS:8%P=x86_64-pc-linux-gnu)SEQ(SP=FF%GCD=1%ISR=105%CI=I%II=I%TS=7)SEQ(SP=FF
OS:%GCD=1%ISR=105%TI=I%CI=I%II=I%TS=7)SEQ(SP=FF%GCD=1%ISR=105%TI=I%CI=I%II=
OS:I%SS=S%TS=7)SEQ(SP=FF%GCD=2%ISR=105%TI=I%CI=I%II=I%SS=S%TS=7)OPS(O1=M53C
OS:NW8ST11%O2=M53CNW8ST11%O3=M53CNW8NNT11%O4=M53CNW8ST11%O5=M53CNW8ST11%O6=
OS:M53CST11)WIN(W1=2000%W2=2000%W3=2000%W4=2000%W5=2000%W6=2000)ECN(R=Y%DF=
OS:Y%T=80%W=2000%O=M53CNW8NNS%CC=N%Q=)T1(R=Y%DF=Y%T=80%S=O%A=S+%F=AS%RD=0%Q
OS:=)T2(R=N)T3(R=N)T4(R=Y%DF=Y%T=80%W=0%S=A%A=O%F=R%O=%RD=0%Q=)T5(R=Y%DF=Y%
OS:T=80%W=0%S=Z%A=S+%F=AR%O=%RD=0%Q=)T6(R=Y%DF=Y%T=80%W=0%S=A%A=O%F=R%O=%RD
OS:=0%Q=)T7(R=N)U1(R=N)U1(R=Y%DF=N%T=80%IPL=164%UN=0%RIPL=G%RID=G%RIPCK=G%R
OS:UCK=G%RUD=G)IE(R=Y%DFI=N%T=80%CD=Z)

Uptime guess: 0.003 days (since Sat Sep 30 11:41:32 2023)
Network Distance: 2 hops
TCP Sequence Prediction: Difficulty=255 (Good luck!)
IP ID Sequence Generation: Busy server or unknown class
Service Info: Host: DC; OS: Windows; CPE: cpe:/o:microsoft:windows_server_2008:r2:sp1, cpe:/o:microsoft:windows

Host script results:
| smb2-time: 
|   date: 2023-09-30T15:45:18
|_  start_date: 2023-09-30T15:41:58
|_clock-skew: 0s
| p2p-conficker: 
|   Checking for Conficker.C or higher...
|   Check 1 (port 22561/tcp): CLEAN (Couldn't connect)
|   Check 2 (port 26477/tcp): CLEAN (Couldn't connect)
|   Check 3 (port 14777/udp): CLEAN (Timeout)
|   Check 4 (port 15766/udp): CLEAN (Timeout)
|_  0/4 checks are positive: Host is CLEAN or ports are blocked
| smb2-security-mode: 
|   2:1:0: 
|_    Message signing enabled and required

TRACEROUTE (using port 554/tcp)
HOP RTT      ADDRESS
1   61.20 ms 10.10.14.1
2   60.31 ms 10.129.92.7

Read data files from: /usr/bin/../share/nmap
OS and Service detection performed. Please report any incorrect results at https://nmap.org/submit/ .
# Nmap done at Sat Sep 30 11:45:28 2023 -- 1 IP address (1 host up) scanned in 100.29 seconds

```
