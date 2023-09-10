```bash
nmap -vv --reason -Pn -T4 -sV -p 80 --script="banner,(http* or ssl*) and not (brute or broadcast or dos or external or http-slowloris* or fuzzer)" -oN "/home/kali/Documents/HTB/HTB-Notes/Pilgrimage/recon_scan/10.129.103.141/scans/tcp80/tcp_80_http_nmap.txt" -oX "/home/kali/Documents/HTB/HTB-Notes/Pilgrimage/recon_scan/10.129.103.141/scans/tcp80/xml/tcp_80_http_nmap.xml" 10.129.103.141
```

[/home/kali/Documents/HTB/HTB-Notes/Pilgrimage/recon_scan/10.129.103.141/scans/tcp80/tcp_80_http_nmap.txt](file:///home/kali/Documents/HTB/HTB-Notes/Pilgrimage/recon_scan/10.129.103.141/scans/tcp80/tcp_80_http_nmap.txt):

```
# Nmap 7.94 scan initiated Sun Sep 10 05:59:05 2023 as: nmap -vv --reason -Pn -T4 -sV -p 80 "--script=banner,(http* or ssl*) and not (brute or broadcast or dos or external or http-slowloris* or fuzzer)" -oN /home/kali/Documents/HTB/HTB-Notes/Pilgrimage/recon_scan/10.129.103.141/scans/tcp80/tcp_80_http_nmap.txt -oX /home/kali/Documents/HTB/HTB-Notes/Pilgrimage/recon_scan/10.129.103.141/scans/tcp80/xml/tcp_80_http_nmap.xml 10.129.103.141
Nmap scan report for 10.129.103.141
Host is up, received user-set (0.058s latency).
Scanned at 2023-09-10 05:59:05 EDT for 148s

Bug in http-security-headers: no string output.
PORT   STATE SERVICE REASON         VERSION
80/tcp open  http    syn-ack ttl 63 nginx 1.18.0
|_http-passwd: ERROR: Script execution failed (use -d to debug)
|_http-stored-xss: Couldn't find any stored XSS vulnerabilities.
|_http-config-backup: ERROR: Script execution failed (use -d to debug)
|_http-dombased-xss: Couldn't find any DOM based XSS.
|_http-chrono: Request times for /; avg: 12.75ms; min: 6.79ms; max: 18.06ms
|_http-server-header: nginx/1.18.0
|_http-vuln-cve2013-7091: ERROR: Script execution failed (use -d to debug)
| http-headers: 
|   Server: nginx/1.18.0
|   Date: Sun, 10 Sep 2023 09:59:16 GMT
|   Content-Type: text/html
|   Content-Length: 169
|   Connection: close
|   Location: http://pilgrimage.htb/
|   
|_  (Request type: GET)
|_http-title: Did not follow redirect to http://pilgrimage.htb/
| http-methods: 
|_  Supported Methods: GET HEAD POST OPTIONS
|_http-date: Sun, 10 Sep 2023 09:59:11 GMT; -1s from local time.
|_http-wordpress-users: [Error] Wordpress installation was not found. We couldn't find wp-login.php
| http-vhosts: 
|_128 names had status 200
|_http-referer-checker: Couldn't find any cross-domain scripts.
|_http-comments-displayer: Couldn't find any comments.
|_http-litespeed-sourcecode-download: Request with null byte did not work. This web server might not be vulnerable
|_http-wordpress-enum: Nothing found amongst the top 100 resources,use --script-args search-limit=<number|all> for deeper analysis)
|_http-drupal-enum: Nothing found amongst the top 100 resources,use --script-args number=<number|all> for deeper analysis)
|_http-errors: Couldn't find any error pages.
|_http-devframework: Couldn't determine the underlying framework or CMS. Try increasing 'httpspider.maxpagecount' value to spider more pages.
|_http-mobileversion-checker: No mobile version detected.
|_http-fetch: Please enter the complete path of the directory to save data in.
| http-sitemap-generator: 
|   Directory structure:
|   Longest directory structure:
|     Depth: 0
|     Dir: /
|   Total files found (by extension):
|_    
|_http-feed: Couldn't find any feeds.
|_http-csrf: Couldn't find any CSRF vulnerabilities.
|_http-malware-host: Host appears to be clean
|_http-jsonp-detection: Couldn't find any JSONP endpoints.
| http-useragent-tester: 
|   Status for browser useragent: false
|   Redirected To: http://pilgrimage.htb/
|   Allowed User Agents: 
|     Mozilla/5.0 (compatible; Nmap Scripting Engine; https://nmap.org/book/nse.html)
|     libwww
|     lwp-trivial
|     libcurl-agent/1.0
|     PHP/
|     Python-urllib/2.5
|     GT::WWW
|     Snoopy
|     MFC_Tear_Sample
|     HTTP::Lite
|     PHPCrawl
|     URI::Fetch
|     Zend_Http_Client
|     http client
|     PECL::HTTP
|     Wget/1.13.4 (linux-gnu)
|_    WWW-Mechanize/1.34

Read data files from: /usr/bin/../share/nmap
Service detection performed. Please report any incorrect results at https://nmap.org/submit/ .
# Nmap done at Sun Sep 10 06:01:33 2023 -- 1 IP address (1 host up) scanned in 148.20 seconds

```
