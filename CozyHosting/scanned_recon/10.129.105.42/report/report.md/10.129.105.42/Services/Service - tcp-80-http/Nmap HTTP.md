```bash
nmap -vv --reason -Pn -T4 -sV -p 80 --script="banner,(http* or ssl*) and not (brute or broadcast or dos or external or http-slowloris* or fuzzer)" -oN "/home/kali/Documents/HTB-Notes/CozyHosting/scanned_recon/10.129.105.42/scans/tcp80/tcp_80_http_nmap.txt" -oX "/home/kali/Documents/HTB-Notes/CozyHosting/scanned_recon/10.129.105.42/scans/tcp80/xml/tcp_80_http_nmap.xml" 10.129.105.42
```

[/home/kali/Documents/HTB-Notes/CozyHosting/scanned_recon/10.129.105.42/scans/tcp80/tcp_80_http_nmap.txt](file:///home/kali/Documents/HTB-Notes/CozyHosting/scanned_recon/10.129.105.42/scans/tcp80/tcp_80_http_nmap.txt):

```
# Nmap 7.94 scan initiated Fri Sep  8 06:56:40 2023 as: nmap -vv --reason -Pn -T4 -sV -p 80 "--script=banner,(http* or ssl*) and not (brute or broadcast or dos or external or http-slowloris* or fuzzer)" -oN /home/kali/Documents/HTB-Notes/CozyHosting/scanned_recon/10.129.105.42/scans/tcp80/tcp_80_http_nmap.txt -oX /home/kali/Documents/HTB-Notes/CozyHosting/scanned_recon/10.129.105.42/scans/tcp80/xml/tcp_80_http_nmap.xml 10.129.105.42
Nmap scan report for 10.129.105.42
Host is up, received user-set (0.065s latency).
Scanned at 2023-09-08 06:56:43 EDT for 159s

Bug in http-security-headers: no string output.
PORT   STATE SERVICE REASON         VERSION
80/tcp open  http    syn-ack ttl 63 nginx 1.18.0 (Ubuntu)
|_http-mobileversion-checker: No mobile version detected.
|_http-devframework: Couldn't determine the underlying framework or CMS. Try increasing 'httpspider.maxpagecount' value to spider more pages.
| http-headers: 
|   Server: nginx/1.18.0 (Ubuntu)
|   Date: Fri, 08 Sep 2023 10:56:56 GMT
|   Content-Type: text/html
|   Content-Length: 178
|   Connection: close
|   Location: http://cozyhosting.htb
|   
|_  (Request type: GET)
|_http-passwd: ERROR: Script execution failed (use -d to debug)
| http-useragent-tester: 
|   Status for browser useragent: false
|   Redirected To: http://cozyhosting.htb
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
|_http-litespeed-sourcecode-download: Request with null byte did not work. This web server might not be vulnerable
|_http-csrf: Couldn't find any CSRF vulnerabilities.
|_http-referer-checker: Couldn't find any cross-domain scripts.
|_http-config-backup: ERROR: Script execution failed (use -d to debug)
|_http-drupal-enum: Nothing found amongst the top 100 resources,use --script-args number=<number|all> for deeper analysis)
|_http-errors: Couldn't find any error pages.
|_http-wordpress-users: [Error] Wordpress installation was not found. We couldn't find wp-login.php
|_http-chrono: ERROR: Script execution failed (use -d to debug)
|_http-feed: Couldn't find any feeds.
|_http-date: Fri, 08 Sep 2023 10:56:54 GMT; 0s from local time.
| http-vhosts: 
|_128 names had status 301
|_http-fetch: Please enter the complete path of the directory to save data in.
|_http-dombased-xss: Couldn't find any DOM based XSS.
|_http-title: Did not follow redirect to http://cozyhosting.htb
|_http-malware-host: Host appears to be clean
| http-methods: 
|_  Supported Methods: GET HEAD POST OPTIONS
|_http-jsonp-detection: Couldn't find any JSONP endpoints.
|_http-comments-displayer: Couldn't find any comments.
| http-sitemap-generator: 
|   Directory structure:
|   Longest directory structure:
|     Depth: 0
|     Dir: /
|   Total files found (by extension):
|_    
|_http-stored-xss: Couldn't find any stored XSS vulnerabilities.
|_http-server-header: nginx/1.18.0 (Ubuntu)
|_http-wordpress-enum: Nothing found amongst the top 100 resources,use --script-args search-limit=<number|all> for deeper analysis)
Service Info: OS: Linux; CPE: cpe:/o:linux:linux_kernel

Read data files from: /usr/bin/../share/nmap
Service detection performed. Please report any incorrect results at https://nmap.org/submit/ .
# Nmap done at Fri Sep  8 06:59:22 2023 -- 1 IP address (1 host up) scanned in 162.13 seconds

```
