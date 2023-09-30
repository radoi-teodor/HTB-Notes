```bash
smbmap -H 10.129.92.7 -P 139 2>&1
```

[/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp139/smbmap-share-permissions.txt](file:///home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp139/smbmap-share-permissions.txt):

```
[!] Authentication error on 10.129.92.7


```
```bash
smbmap -u null -p "" -H 10.129.92.7 -P 139 2>&1
```

[/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp139/smbmap-share-permissions.txt](file:///home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp139/smbmap-share-permissions.txt):

```
[!] Authentication error on 10.129.92.7


```
```bash
smbmap -H 10.129.92.7 -P 139 -R 2>&1
```

[/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp139/smbmap-list-contents.txt](file:///home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp139/smbmap-list-contents.txt):

```
[!] Authentication error on 10.129.92.7


```
```bash
smbmap -u null -p "" -H 10.129.92.7 -P 139 -R 2>&1
```

[/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp139/smbmap-list-contents.txt](file:///home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp139/smbmap-list-contents.txt):

```
[!] Authentication error on 10.129.92.7


```
```bash
smbmap -H 10.129.92.7 -P 139 -x "ipconfig /all" 2>&1
```

[/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp139/smbmap-execute-command.txt](file:///home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp139/smbmap-execute-command.txt):

```
[!] Authentication error on 10.129.92.7


```
```bash
smbmap -u null -p "" -H 10.129.92.7 -P 139 -x "ipconfig /all" 2>&1
```

[/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp139/smbmap-execute-command.txt](file:///home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp139/smbmap-execute-command.txt):

```
[!] Authentication error on 10.129.92.7


```
