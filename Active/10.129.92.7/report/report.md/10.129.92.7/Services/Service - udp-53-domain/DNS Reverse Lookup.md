```bash
dig -p 53 -x 10.129.92.7 @10.129.92.7
```

[/home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/udp53/udp_53_dns_reverse-lookup.txt](file:///home/kali/Documents/HTB/HTB-Notes/Active/10.129.92.7/scans/udp53/udp_53_dns_reverse-lookup.txt):

```

; <<>> DiG 9.18.12-1-Debian <<>> -p 53 -x 10.129.92.7 @10.129.92.7
;; global options: +cmd
;; Got answer:
;; ->>HEADER<<- opcode: QUERY, status: FORMERR, id: 41615
;; flags: qr rd; QUERY: 1, ANSWER: 0, AUTHORITY: 0, ADDITIONAL: 1
;; WARNING: recursion requested but not available

;; OPT PSEUDOSECTION:
; EDNS: version: 0, flags:; udp: 1232
; COOKIE: bde4a5575b52c8da (echoed)
;; QUESTION SECTION:
;7.92.129.10.in-addr.arpa.	IN	PTR

;; Query time: 60 msec
;; SERVER: 10.129.92.7#53(10.129.92.7) (UDP)
;; WHEN: Sat Sep 30 11:49:26 EDT 2023
;; MSG SIZE  rcvd: 65



```
