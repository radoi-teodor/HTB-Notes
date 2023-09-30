```bash
smbclient -L //10.129.92.7 -N -I 10.129.92.7 2>&1
```

[/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp139/smbclient.txt](file:///home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp139/smbclient.txt):

```
do_connect: Connection to 10.129.92.7 failed (Error NT_STATUS_RESOURCE_NAME_NOT_FOUND)
Anonymous login successful

	Sharename       Type      Comment
	---------       ----      -------
	ADMIN$          Disk      Remote Admin
	C$              Disk      Default share
	IPC$            IPC       Remote IPC
	NETLOGON        Disk      Logon server share
	Replication     Disk
	SYSVOL          Disk      Logon server share
	Users           Disk
Reconnecting with SMB1 for workgroup listing.
Unable to connect with SMB1 -- no workgroup available


```
