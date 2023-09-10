```bash
nmap -vv --reason -Pn -T4 -sU -A --top-ports 100 -oN "/home/kali/Documents/HTB/HTB-Notes/Pilgrimage/recon_scan/10.129.103.141/scans/_top_100_udp_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Pilgrimage/recon_scan/10.129.103.141/scans/xml/_top_100_udp_nmap.xml" 10.129.103.141
```

[/home/kali/Documents/HTB/HTB-Notes/Pilgrimage/recon_scan/10.129.103.141/scans/_top_100_udp_nmap.txt](file:///home/kali/Documents/HTB/HTB-Notes/Pilgrimage/recon_scan/10.129.103.141/scans/_top_100_udp_nmap.txt):

```
# Nmap 7.94 scan initiated Sun Sep 10 05:58:45 2023 as: nmap -vv --reason -Pn -T4 -sU -A --top-ports 100 -oN /home/kali/Documents/HTB/HTB-Notes/Pilgrimage/recon_scan/10.129.103.141/scans/_top_100_udp_nmap.txt -oX /home/kali/Documents/HTB/HTB-Notes/Pilgrimage/recon_scan/10.129.103.141/scans/xml/_top_100_udp_nmap.xml 10.129.103.141
Increasing send delay for 10.129.103.141 from 0 to 50 due to 11 out of 16 dropped probes since last increase.
Warning: 10.129.103.141 giving up on port because retransmission cap hit (6).
Increasing send delay for 10.129.103.141 from 200 to 400 due to 11 out of 12 dropped probes since last increase.
Increasing send delay for 10.129.103.141 from 400 to 800 due to 11 out of 11 dropped probes since last increase.
Nmap scan report for 10.129.103.141
Host is up, received user-set (0.061s latency).
Scanned at 2023-09-10 05:58:46 EDT for 253s

PORT      STATE         SERVICE         REASON              VERSION
7/udp     closed        echo            port-unreach ttl 63
9/udp     closed        discard         port-unreach ttl 63
17/udp    open|filtered qotd            no-response
19/udp    closed        chargen         port-unreach ttl 63
49/udp    closed        tacacs          port-unreach ttl 63
53/udp    closed        domain          port-unreach ttl 63
67/udp    open|filtered dhcps           no-response
68/udp    open|filtered dhcpc           no-response
69/udp    closed        tftp            port-unreach ttl 63
80/udp    open|filtered http            no-response
88/udp    open|filtered kerberos-sec    no-response
111/udp   closed        rpcbind         port-unreach ttl 63
120/udp   closed        cfdptkt         port-unreach ttl 63
123/udp   closed        ntp             port-unreach ttl 63
135/udp   closed        msrpc           port-unreach ttl 63
136/udp   closed        profile         port-unreach ttl 63
137/udp   open|filtered netbios-ns      no-response
138/udp   closed        netbios-dgm     port-unreach ttl 63
139/udp   closed        netbios-ssn     port-unreach ttl 63
158/udp   closed        pcmail-srv      port-unreach ttl 63
161/udp   closed        snmp            port-unreach ttl 63
162/udp   closed        snmptrap        port-unreach ttl 63
177/udp   open|filtered xdmcp           no-response
427/udp   closed        svrloc          port-unreach ttl 63
443/udp   closed        https           port-unreach ttl 63
445/udp   closed        microsoft-ds    port-unreach ttl 63
497/udp   closed        retrospect      port-unreach ttl 63
500/udp   closed        isakmp          port-unreach ttl 63
514/udp   open|filtered syslog          no-response
515/udp   closed        printer         port-unreach ttl 63
518/udp   open|filtered ntalk           no-response
520/udp   closed        route           port-unreach ttl 63
593/udp   open|filtered http-rpc-epmap  no-response
623/udp   closed        asf-rmcp        port-unreach ttl 63
626/udp   closed        serialnumberd   port-unreach ttl 63
631/udp   closed        ipp             port-unreach ttl 63
996/udp   closed        vsinet          port-unreach ttl 63
997/udp   closed        maitrd          port-unreach ttl 63
998/udp   closed        puparp          port-unreach ttl 63
999/udp   closed        applix          port-unreach ttl 63
1022/udp  closed        exp2            port-unreach ttl 63
1023/udp  open|filtered unknown         no-response
1025/udp  closed        blackjack       port-unreach ttl 63
1026/udp  open|filtered win-rpc         no-response
1027/udp  open|filtered unknown         no-response
1028/udp  open|filtered ms-lsa          no-response
1029/udp  closed        solid-mux       port-unreach ttl 63
1030/udp  closed        iad1            port-unreach ttl 63
1433/udp  open|filtered ms-sql-s        no-response
1434/udp  closed        ms-sql-m        port-unreach ttl 63
1645/udp  closed        radius          port-unreach ttl 63
1646/udp  open|filtered radacct         no-response
1701/udp  closed        L2TP            port-unreach ttl 63
1718/udp  open|filtered h225gatedisc    no-response
1719/udp  open|filtered h323gatestat    no-response
1812/udp  open|filtered radius          no-response
1813/udp  open|filtered radacct         no-response
1900/udp  closed        upnp            port-unreach ttl 63
2000/udp  open|filtered cisco-sccp      no-response
2048/udp  open|filtered dls-monitor     no-response
2049/udp  closed        nfs             port-unreach ttl 63
2222/udp  closed        msantipiracy    port-unreach ttl 63
2223/udp  closed        rockwell-csp2   port-unreach ttl 63
3283/udp  closed        netassistant    port-unreach ttl 63
3456/udp  closed        IISrpc-or-vat   port-unreach ttl 63
3703/udp  closed        adobeserver-3   port-unreach ttl 63
4444/udp  open|filtered krb524          no-response
4500/udp  closed        nat-t-ike       port-unreach ttl 63
5000/udp  closed        upnp            port-unreach ttl 63
5060/udp  open|filtered sip             no-response
5353/udp  open|filtered zeroconf        no-response
5632/udp  closed        pcanywherestat  port-unreach ttl 63
9200/udp  closed        wap-wsp         port-unreach ttl 63
10000/udp closed        ndmp            port-unreach ttl 63
17185/udp open|filtered wdbrpc          no-response
20031/udp closed        bakbonenetvault port-unreach ttl 63
30718/udp open|filtered unknown         no-response
31337/udp closed        BackOrifice     port-unreach ttl 63
32768/udp closed        omad            port-unreach ttl 63
32769/udp open|filtered filenet-rpc     no-response
32771/udp open|filtered sometimes-rpc6  no-response
32815/udp closed        unknown         port-unreach ttl 63
33281/udp open|filtered unknown         no-response
49152/udp closed        unknown         port-unreach ttl 63
49153/udp closed        unknown         port-unreach ttl 63
49154/udp closed        unknown         port-unreach ttl 63
49156/udp closed        unknown         port-unreach ttl 63
49181/udp closed        unknown         port-unreach ttl 63
49182/udp closed        unknown         port-unreach ttl 63
49185/udp open|filtered unknown         no-response
49186/udp closed        unknown         port-unreach ttl 63
49188/udp closed        unknown         port-unreach ttl 63
49190/udp closed        unknown         port-unreach ttl 63
49191/udp closed        unknown         port-unreach ttl 63
49192/udp closed        unknown         port-unreach ttl 63
49193/udp closed        unknown         port-unreach ttl 63
49194/udp closed        unknown         port-unreach ttl 63
49200/udp closed        unknown         port-unreach ttl 63
49201/udp closed        unknown         port-unreach ttl 63
65024/udp closed        unknown         port-unreach ttl 63
Too many fingerprints match this host to give specific OS details
TCP/IP fingerprint:
SCAN(V=7.94%E=4%D=9/10%OT=%CT=%CU=7%PV=Y%DS=2%DC=T%G=N%TM=64FD9453%P=x86_64-pc-linux-gnu)
SEQ(CI=Z%II=I)
T5(R=Y%DF=Y%T=40%W=0%S=Z%A=S+%F=AR%O=%RD=0%Q=)
T6(R=Y%DF=Y%T=40%W=0%S=A%A=Z%F=R%O=%RD=0%Q=)
U1(R=Y%DF=N%T=40%IPL=164%UN=0%RIPL=G%RID=G%RIPCK=G%RUCK=G%RUD=G)
IE(R=Y%DFI=N%T=40%CD=S)

Network Distance: 2 hops

TRACEROUTE (using port 49191/udp)
HOP RTT      ADDRESS
1   61.16 ms 10.10.14.1
2   61.24 ms 10.129.103.141

Read data files from: /usr/bin/../share/nmap
OS and Service detection performed. Please report any incorrect results at https://nmap.org/submit/ .
# Nmap done at Sun Sep 10 06:02:59 2023 -- 1 IP address (1 host up) scanned in 253.89 seconds

```
