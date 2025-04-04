import sys
s = sys.stdin.read().strip().split('-')
d = {}
for p in s:
    n,c = "",""
    for ch in p:
        (n:=n+ch) if ch.isdigit() else (c:=c+ch)
    d[int(n)] = c
print(''.join(d[k] for k in sorted(d)))