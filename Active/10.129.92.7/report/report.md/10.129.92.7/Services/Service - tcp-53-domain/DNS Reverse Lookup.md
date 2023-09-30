```bash
dig -p 53 -x 10.129.92.7 @10.129.92.7
```

[/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp53/tcp_53_dns_reverse-lookup.txt](file:///home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/tcp53/tcp_53_dns_reverse-lookup.txt):

```

; <<>> DiG 9.18.12-1-Debian <<>> -p 53 -x 10.129.92.7 @10.129.92.7
;; global options: +cmd
;; Got answer:
;; ->>HEADER<<- opcode: QUERY, status: FORMERR, id: 1330
;; flags: qr rd; QUERY: 1, ANSWER: 0, AUTHORITY: 0, ADDITIONAL: 1
;; WARNING: recursion requested but not available

;; OPT PSEUDOSECTION:
; EDNS: version: 0, flags:; udp: 1232
; COOKIE: b1a92cdf35f78641 (echoed)
;; QUESTION SECTION:
;7.92.129.10.in-addr.arpa.	IN	PTR

;; Query time: 55 msec
;; SERVER: 10.129.92.7#53(10.129.92.7) (UDP)
;; WHEN: Sat Sep 30 11:45:29 EDT 2023
;; MSG SIZE  rcvd: 65



```
