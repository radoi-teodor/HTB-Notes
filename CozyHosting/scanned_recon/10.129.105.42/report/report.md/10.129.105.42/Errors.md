```
[*] Service scan wkhtmltoimage (tcp/80/http/wkhtmltoimage) ran a command which returned a non-zero exit code (1).
[-] Command: wkhtmltoimage --format png http://10.129.105.42:80/ /home/kali/Documents/HTB-Notes/CozyHosting/scanned_recon/10.129.105.42/scans/tcp80/tcp_80_http_screenshot.png
[-] Error Output:
QStandardPaths: XDG_RUNTIME_DIR not set, defaulting to '/tmp/runtime-root'
Loading page (1/2)
[>                                                           ] 0%
Error: Failed to load http://cozyhosting.htb/, with network status code 3 and http status code 0 - Host cozyhosting.htb not found
[============================================================] 100%
Error: Failed loading page http://10.129.105.42:80/ (sometimes it will work just to ignore this error with --load-error-handling ignore)
Exit with code 1 due to network error: HostNotFoundError



```