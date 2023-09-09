```bash
nmap -vv --reason -Pn -T4 -sU -A --top-ports 100 -oN "/home/kali/Documents/HTB-Notes/CozyHosting/scanned_recon/10.129.105.42/scans/_top_100_udp_nmap.txt" -oX "/home/kali/Documents/HTB-Notes/CozyHosting/scanned_recon/10.129.105.42/scans/xml/_top_100_udp_nmap.xml" 10.129.105.42
```

[/home/kali/Documents/HTB-Notes/CozyHosting/scanned_recon/10.129.105.42/scans/_top_100_udp_nmap.txt](file:///home/kali/Documents/HTB-Notes/CozyHosting/scanned_recon/10.129.105.42/scans/_top_100_udp_nmap.txt):

```
# Nmap 7.94 scan initiated Fri Sep  8 06:56:17 2023 as: nmap -vv --reason -Pn -T4 -sU -A --top-ports 100 -oN /home/kali/Documents/HTB-Notes/CozyHosting/scanned_recon/10.129.105.42/scans/_top_100_udp_nmap.txt -oX /home/kali/Documents/HTB-Notes/CozyHosting/scanned_recon/10.129.105.42/scans/xml/_top_100_udp_nmap.xml 10.129.105.42
Increasing send delay for 10.129.105.42 from 50 to 100 due to 11 out of 15 dropped probes since last increase.
Warning: 10.129.105.42 giving up on port because retransmission cap hit (6).
Increasing send delay for 10.129.105.42 from 200 to 400 due to 11 out of 11 dropped probes since last increase.
Increasing send delay for 10.129.105.42 from 400 to 800 due to 11 out of 12 dropped probes since last increase.
Nmap scan report for 10.129.105.42
Host is up, received user-set (0.065s latency).
Scanned at 2023-09-08 06:56:20 EDT for 302s

PORT      STATE         SERVICE         REASON              VERSION
7/udp     closed        echo            port-unreach ttl 63
9/udp     closed        discard         port-unreach ttl 63
17/udp    closed        qotd            port-unreach ttl 63
19/udp    closed        chargen         port-unreach ttl 63
49/udp    closed        tacacs          port-unreach ttl 63
53/udp    open|filtered domain          no-response
67/udp    closed        dhcps           port-unreach ttl 63
68/udp    open|filtered dhcpc           no-response
69/udp    closed        tftp            port-unreach ttl 63
80/udp    closed        http            port-unreach ttl 63
88/udp    closed        kerberos-sec    port-unreach ttl 63
111/udp   open|filtered rpcbind         no-response
120/udp   open|filtered cfdptkt         no-response
123/udp   open|filtered ntp             no-response
135/udp   closed        msrpc           port-unreach ttl 63
136/udp   open|filtered profile         no-response
137/udp   open|filtered netbios-ns      no-response
138/udp   closed        netbios-dgm     port-unreach ttl 63
139/udp   closed        netbios-ssn     port-unreach ttl 63
158/udp   open|filtered pcmail-srv      no-response
161/udp   open|filtered snmp            no-response
162/udp   closed        snmptrap        port-unreach ttl 63
177/udp   open|filtered xdmcp           no-response
427/udp   closed        svrloc          port-unreach ttl 63
443/udp   open|filtered https           no-response
445/udp   closed        microsoft-ds    port-unreach ttl 63
497/udp   closed        retrospect      port-unreach ttl 63
500/udp   open|filtered isakmp          no-response
514/udp   open|filtered syslog          no-response
515/udp   closed        printer         port-unreach ttl 63
518/udp   open|filtered ntalk           no-response
520/udp   closed        route           port-unreach ttl 63
593/udp   open|filtered http-rpc-epmap  no-response
623/udp   open|filtered asf-rmcp        no-response
626/udp   closed        serialnumberd   port-unreach ttl 63
631/udp   open|filtered ipp             no-response
996/udp   closed        vsinet          port-unreach ttl 63
997/udp   closed        maitrd          port-unreach ttl 63
998/udp   open|filtered puparp          no-response
999/udp   open|filtered applix          no-response
1022/udp  closed        exp2            port-unreach ttl 63
1023/udp  open|filtered unknown         no-response
1025/udp  closed        blackjack       port-unreach ttl 63
1026/udp  closed        win-rpc         port-unreach ttl 63
1027/udp  closed        unknown         port-unreach ttl 63
1028/udp  closed        ms-lsa          port-unreach ttl 63
1029/udp  open|filtered solid-mux       no-response
1030/udp  closed        iad1            port-unreach ttl 63
1433/udp  closed        ms-sql-s        port-unreach ttl 63
1434/udp  closed        ms-sql-m        port-unreach ttl 63
1645/udp  closed        radius          port-unreach ttl 63
1646/udp  open|filtered radacct         no-response
1701/udp  closed        L2TP            port-unreach ttl 63
1718/udp  closed        h225gatedisc    port-unreach ttl 63
1719/udp  closed        h323gatestat    port-unreach ttl 63
1812/udp  open|filtered radius          no-response
1813/udp  closed        radacct         port-unreach ttl 63
1900/udp  open|filtered upnp            no-response
2000/udp  closed        cisco-sccp      port-unreach ttl 63
2048/udp  open|filtered dls-monitor     no-response
2049/udp  open|filtered nfs             no-response
2222/udp  closed        msantipiracy    port-unreach ttl 63
2223/udp  closed        rockwell-csp2   port-unreach ttl 63
3283/udp  open|filtered netassistant    no-response
3456/udp  closed        IISrpc-or-vat   port-unreach ttl 63
3703/udp  open|filtered adobeserver-3   no-response
4444/udp  closed        krb524          port-unreach ttl 63
4500/udp  open|filtered nat-t-ike       no-response
5000/udp  closed        upnp            port-unreach ttl 63
5060/udp  closed        sip             port-unreach ttl 63
5353/udp  closed        zeroconf        port-unreach ttl 63
5632/udp  closed        pcanywherestat  port-unreach ttl 63
9200/udp  closed        wap-wsp         port-unreach ttl 63
10000/udp closed        ndmp            port-unreach ttl 63
17185/udp open|filtered wdbrpc          no-response
20031/udp closed        bakbonenetvault port-unreach ttl 63
30718/udp open|filtered unknown         no-response
31337/udp open|filtered BackOrifice     no-response
32768/udp open|filtered omad            no-response
32769/udp open|filtered filenet-rpc     no-response
32771/udp closed        sometimes-rpc6  port-unreach ttl 63
32815/udp closed        unknown         port-unreach ttl 63
33281/udp closed        unknown         port-unreach ttl 63
49152/udp open|filtered unknown         no-response
49153/udp closed        unknown         port-unreach ttl 63
49154/udp closed        unknown         port-unreach ttl 63
49156/udp closed        unknown         port-unreach ttl 63
49181/udp open|filtered unknown         no-response
49182/udp closed        unknown         port-unreach ttl 63
49185/udp closed        unknown         port-unreach ttl 63
49186/udp closed        unknown         port-unreach ttl 63
49188/udp closed        unknown         port-unreach ttl 63
49190/udp closed        unknown         port-unreach ttl 63
49191/udp closed        unknown         port-unreach ttl 63
49192/udp closed        unknown         port-unreach ttl 63
49193/udp closed        unknown         port-unreach ttl 63
49194/udp open|filtered unknown         no-response
49200/udp open|filtered unknown         no-response
49201/udp closed        unknown         port-unreach ttl 63
65024/udp closed        unknown         port-unreach ttl 63
Too many fingerprints match this host to give specific OS details
TCP/IP fingerprint:
SCAN(V=7.94%E=4%D=9/8%OT=%CT=%CU=7%PV=Y%DS=2%DC=T%G=N%TM=64FAFF02%P=x86_64-pc-linux-gnu)
SEQ(CI=Z%II=I)
T5(R=Y%DF=Y%T=40%W=0%S=Z%A=S+%F=AR%O=%RD=0%Q=)
T6(R=Y%DF=Y%T=40%W=0%S=A%A=Z%F=R%O=%RD=0%Q=)
U1(R=Y%DF=N%T=40%IPL=164%UN=0%RIPL=G%RID=G%RIPCK=G%RUCK=G%RUD=G)
IE(R=Y%DFI=N%T=40%CD=S)

Network Distance: 2 hops

TRACEROUTE (using port 1028/udp)
HOP RTT      ADDRESS
1   58.84 ms 10.10.14.1
2   58.99 ms 10.129.105.42

Read data files from: /usr/bin/../share/nmap
OS and Service detection performed. Please report any incorrect results at https://nmap.org/submit/ .
# Nmap done at Fri Sep  8 07:01:22 2023 -- 1 IP address (1 host up) scanned in 306.52 seconds

```
