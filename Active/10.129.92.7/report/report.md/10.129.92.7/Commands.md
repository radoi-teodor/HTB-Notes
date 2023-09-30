```bash
nmap -vv --reason -Pn -T4 -sV -sC --version-all -A --osscan-guess -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/_quick_tcp_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/xml/_quick_tcp_nmap.xml" 10.129.92.7

nmap -vv --reason -Pn -T4 -sV -sC --version-all -A --osscan-guess -p- -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/_full_tcp_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/xml/_full_tcp_nmap.xml" 10.129.92.7

nmap -vv --reason -Pn -T4 -sU -A --top-ports 100 -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/_top_100_udp_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/xml/_top_100_udp_nmap.xml" 10.129.92.7

dig -p 53 -x 10.129.92.7 @10.129.92.7

dig AXFR -p 53 @10.129.92.7

nmap -vv --reason -Pn -T4 -sV -p 53 --script="banner,(dns* or ssl*) and not (brute or broadcast or dos or external or fuzzer)" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp53/tcp_53_dns_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp53/xml/tcp_53_dns_nmap.xml" 10.129.92.7

nmap -vv --reason -Pn -T4 -sV -p 88 --script="banner,krb5-enum-users" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp88/tcp_88_kerberos_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp88/xml/tcp_88_kerberos_nmap.xml" 10.129.92.7

impacket-getArch -target 10.129.92.7

nmap -vv --reason -Pn -T4 -sV -p 135 --script="banner,msrpc-enum,rpc-grind,rpcinfo" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp135/tcp_135_rpc_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp135/xml/tcp_135_rpc_nmap.xml" 10.129.92.7

impacket-rpcdump -port 135 10.129.92.7

enum4linux -a -M -l -d 10.129.92.7 2>&1

nbtscan -rvh 10.129.92.7 2>&1

nmap -vv --reason -Pn -T4 -sV -p 139 --script="banner,(nbstat or smb* or ssl*) and not (brute or broadcast or dos or external or fuzzer)" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp139/tcp_139_smb_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp139/xml/tcp_139_smb_nmap.xml" 10.129.92.7

smbclient -L //10.129.92.7 -N -I 10.129.92.7 2>&1

smbmap -H 10.129.92.7 -P 139 2>&1

nmap -vv --reason -Pn -T4 -sV -p 389 --script="banner,(ldap* or ssl*) and not (brute or broadcast or dos or external or fuzzer)" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp389/tcp_389_ldap_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp389/xml/tcp_389_ldap_nmap.xml" 10.129.92.7

nmap -vv --reason -Pn -T4 -sV -p 445 --script="banner,(nbstat or smb* or ssl*) and not (brute or broadcast or dos or external or fuzzer)" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp445/tcp_445_smb_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp445/xml/tcp_445_smb_nmap.xml" 10.129.92.7

smbmap -H 10.129.92.7 -P 445 2>&1

nmap -vv --reason -Pn -T4 -sV -p 464 --script="banner,krb5-enum-users" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp464/tcp_464_kerberos_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp464/xml/tcp_464_kerberos_nmap.xml" 10.129.92.7

impacket-rpcdump -port 593 10.129.92.7

nmap -vv --reason -Pn -T4 -sV -p 3268 --script="banner,(ldap* or ssl*) and not (brute or broadcast or dos or external or fuzzer)" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp3268/tcp_3268_ldap_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp3268/xml/tcp_3268_ldap_nmap.xml" 10.129.92.7

nmap -vv --reason -Pn -T4 -sV -p 49152 --script="banner,msrpc-enum,rpc-grind,rpcinfo" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49152/tcp_49152_rpc_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49152/xml/tcp_49152_rpc_nmap.xml" 10.129.92.7

nmap -vv --reason -Pn -T4 -sV -p 49153 --script="banner,msrpc-enum,rpc-grind,rpcinfo" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49153/tcp_49153_rpc_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49153/xml/tcp_49153_rpc_nmap.xml" 10.129.92.7

nmap -vv --reason -Pn -T4 -sV -p 49154 --script="banner,msrpc-enum,rpc-grind,rpcinfo" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49154/tcp_49154_rpc_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49154/xml/tcp_49154_rpc_nmap.xml" 10.129.92.7

nmap -vv --reason -Pn -T4 -sV -p 49155 --script="banner,msrpc-enum,rpc-grind,rpcinfo" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49155/tcp_49155_rpc_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49155/xml/tcp_49155_rpc_nmap.xml" 10.129.92.7

nmap -vv --reason -Pn -T4 -sV -p 49158 --script="banner,msrpc-enum,rpc-grind,rpcinfo" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49158/tcp_49158_rpc_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49158/xml/tcp_49158_rpc_nmap.xml" 10.129.92.7

nmap -vv --reason -Pn -T4 -sV -p 49165 --script="banner,msrpc-enum,rpc-grind,rpcinfo" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49165/tcp_49165_rpc_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49165/xml/tcp_49165_rpc_nmap.xml" 10.129.92.7

smbmap -u null -p "" -H 10.129.92.7 -P 445 2>&1

smbmap -u null -p "" -H 10.129.92.7 -P 139 2>&1

smbmap -H 10.129.92.7 -P 445 -R 2>&1

smbmap -H 10.129.92.7 -P 139 -R 2>&1

smbmap -u null -p "" -H 10.129.92.7 -P 445 -R 2>&1

smbmap -u null -p "" -H 10.129.92.7 -P 139 -R 2>&1

smbmap -H 10.129.92.7 -P 445 -x "ipconfig /all" 2>&1

smbmap -H 10.129.92.7 -P 139 -x "ipconfig /all" 2>&1

smbmap -u null -p "" -H 10.129.92.7 -P 445 -x "ipconfig /all" 2>&1

smbmap -u null -p "" -H 10.129.92.7 -P 139 -x "ipconfig /all" 2>&1

nmap -vv --reason -Pn -T4 -sV -p 5722 --script="banner,msrpc-enum,rpc-grind,rpcinfo" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp5722/tcp_5722_rpc_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp5722/xml/tcp_5722_rpc_nmap.xml" 10.129.92.7

nmap -vv --reason -Pn -T4 -sV -p 49170 --script="banner,msrpc-enum,rpc-grind,rpcinfo" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49170/tcp_49170_rpc_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49170/xml/tcp_49170_rpc_nmap.xml" 10.129.92.7

nmap -vv --reason -Pn -T4 -sV -p 49171 --script="banner,msrpc-enum,rpc-grind,rpcinfo" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49171/tcp_49171_rpc_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp49171/xml/tcp_49171_rpc_nmap.xml" 10.129.92.7

dig -p 53 -x 10.129.92.7 @10.129.92.7

dig AXFR -p 53 @10.129.92.7

nmap -vv --reason -Pn -T4 -sU -sV -p 53 --script="banner,(dns* or ssl*) and not (brute or broadcast or dos or external or fuzzer)" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/udp53/udp_53_dns_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/udp53/xml/udp_53_dns_nmap.xml" 10.129.92.7

nmap -vv --reason -Pn -T4 -sU -sV -p 88 --script="banner,krb5-enum-users" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/udp88/udp_88_kerberos_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/udp88/xml/udp_88_kerberos_nmap.xml" 10.129.92.7

nmap -vv --reason -Pn -T4 -sU -sV -p 123 --script="banner,(ntp* or ssl*) and not (brute or broadcast or dos or external or fuzzer)" -oN "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/udp123/udp_123_ntp_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/udp123/xml/udp_123_ntp_nmap.xml" 10.129.92.7


```