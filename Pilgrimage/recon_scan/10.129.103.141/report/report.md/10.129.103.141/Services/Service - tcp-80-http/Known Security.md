```bash
curl -sSikf http://10.129.103.141:80/.well-known/security.txt
```

[/home/kali/Documents/HTB/HTB-Notes/Pilgrimage/recon_scan/10.129.103.141/scans/tcp80/tcp_80_http_known-security.txt](file:///home/kali/Documents/HTB/HTB-Notes/Pilgrimage/recon_scan/10.129.103.141/scans/tcp80/tcp_80_http_known-security.txt):

```
HTTP/1.1 301 Moved Permanently
Server: nginx/1.18.0
Date: Sun, 10 Sep 2023 09:59:04 GMT
Content-Type: text/html
Content-Length: 169
Connection: keep-alive
Location: http://pilgrimage.htb/.well-known/security.txt

<html>
<head><title>301 Moved Permanently</title></head>
<body>
<center><h1>301 Moved Permanently</h1></center>
<hr><center>nginx/1.18.0</center>
</body>
</html>

```
