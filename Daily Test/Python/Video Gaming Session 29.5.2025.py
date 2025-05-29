from datetime import datetime as d, timedelta as t

s, e = input().split()
x, y = map(int, input().split())

s, e = d.strptime(s, "%H:%M"), d.strptime(e, "%H:%M")
r = []

while s + t(minutes=x) <= e:
    p = s + t(minutes=x)
    r.append(f"{s.strftime('%H:%M')}-{p.strftime('%H:%M')}")
    s = p + t(minutes=y)

print('\n'.join(r) if r else "-1")