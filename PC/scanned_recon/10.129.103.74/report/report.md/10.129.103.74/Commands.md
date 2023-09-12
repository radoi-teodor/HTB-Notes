```bash
nmap -vv --reason -Pn -T4 -sV -sC --version-all -A --osscan-guess -oN "/home/kali/Documents/HTB-Notes/PC/scanned_recon/10.129.103.74/scans/_quick_tcp_nmap.txt" -oX "/home/kali/Documents/HTB-Notes/PC/scanned_recon/10.129.103.74/scans/xml/_quick_tcp_nmap.xml" 10.129.103.74

nmap -vv --reason -Pn -T4 -sV -sC --version-all -A --osscan-guess -p- -oN "/home/kali/Documents/HTB-Notes/PC/scanned_recon/10.129.103.74/scans/_full_tcp_nmap.txt" -oX "/home/kali/Documents/HTB-Notes/PC/scanned_recon/10.129.103.74/scans/xml/_full_tcp_nmap.xml" 10.129.103.74

nmap -vv --reason -Pn -T4 -sU -A --top-ports 100 -oN "/home/kali/Documents/HTB-Notes/PC/scanned_recon/10.129.103.74/scans/_top_100_udp_nmap.txt" -oX "/home/kali/Documents/HTB-Notes/PC/scanned_recon/10.129.103.74/scans/xml/_top_100_udp_nmap.xml" 10.129.103.74

nmap -vv --reason -Pn -T4 -sV -p 22 --script="banner,ssh2-enum-algos,ssh-hostkey,ssh-auth-methods" -oN "/home/kali/Documents/HTB-Notes/PC/scanned_recon/10.129.103.74/scans/tcp22/tcp_22_ssh_nmap.txt" -oX "/home/kali/Documents/HTB-Notes/PC/scanned_recon/10.129.103.74/scans/tcp22/xml/tcp_22_ssh_nmap.xml" 10.129.103.74


```