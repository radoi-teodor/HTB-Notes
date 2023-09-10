```bash
nikto -ask=no -Tuning=x4567890ac -nointeractive -host http://10.129.103.141:80 2>&1 | tee "/home/kali/Documents/HTB/HTB-Notes/Pilgrimage/recon_scan/10.129.103.141/scans/tcp80/tcp_80_http_nikto.txt"
```

[/home/kali/Documents/HTB/HTB-Notes/Pilgrimage/recon_scan/10.129.103.141/scans/tcp80/tcp_80_http_nikto.txt](file:///home/kali/Documents/HTB/HTB-Notes/Pilgrimage/recon_scan/10.129.103.141/scans/tcp80/tcp_80_http_nikto.txt):

```
- Nikto v2.5.0
---------------------------------------------------------------------------
+ Target IP:          10.129.103.141
+ Target Hostname:    10.129.103.141
+ Target Port:        80
+ Start Time:         2023-09-10 05:59:05 (GMT-4)
---------------------------------------------------------------------------
+ Server: nginx/1.18.0
+ /: The anti-clickjacking X-Frame-Options header is not present. See: https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Frame-Options
+ /: The X-Content-Type-Options header is not set. This could allow the user agent to render the content of the site in a different fashion to the MIME type. See: https://www.netsparker.com/web-vulnerability-scanner/vulnerabilities/missing-content-type-header/
+ Root page / redirects to: http://pilgrimage.htb/
+ No CGI Directories found (use '-C all' to force check all possible dirs)
+ /: Cookie PHPSESSID created without the httponly flag. See: https://developer.mozilla.org/en-US/docs/Web/HTTP/Cookies
+ 7729 requests: 0 error(s) and 3 item(s) reported on remote host
+ End Time:           2023-09-10 06:07:16 (GMT-4) (491 seconds)
---------------------------------------------------------------------------
+ 1 host(s) tested

```
