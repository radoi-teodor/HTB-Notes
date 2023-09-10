```bash
whatweb --color=never --no-errors -a 3 -v http://10.129.103.141:80 2>&1
```

[/home/kali/Documents/HTB/HTB-Notes/Pilgrimage/recon_scan/10.129.103.141/scans/tcp80/tcp_80_http_whatweb.txt](file:///home/kali/Documents/HTB/HTB-Notes/Pilgrimage/recon_scan/10.129.103.141/scans/tcp80/tcp_80_http_whatweb.txt):

```
WhatWeb report for http://10.129.103.141:80
Status    : 301 Moved Permanently
Title     : 301 Moved Permanently
IP        : 10.129.103.141
Country   : RESERVED, ZZ

Summary   : HTTPServer[nginx/1.18.0], nginx[1.18.0], RedirectLocation[http://pilgrimage.htb/]

Detected Plugins:
[ HTTPServer ]
	HTTP server header string. This plugin also attempts to
	identify the operating system from the server header.

	String       : nginx/1.18.0 (from server string)

[ RedirectLocation ]
	HTTP Server string location. used with http-status 301 and
	302

	String       : http://pilgrimage.htb/ (from location)

[ nginx ]
	Nginx (Engine-X) is a free, open-source, high-performance
	HTTP server and reverse proxy, as well as an IMAP/POP3
	proxy server.

	Version      : 1.18.0
	Website     : http://nginx.net/

HTTP Headers:
	HTTP/1.1 301 Moved Permanently
	Server: nginx/1.18.0
	Date: Sun, 10 Sep 2023 09:59:05 GMT
	Content-Type: text/html
	Content-Length: 169
	Connection: close
	Location: http://pilgrimage.htb/



```
