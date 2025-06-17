import datetime as d, calendar as c

m, n = map(int, input().split())
y = int(input())

dt, ed = d.date(y, 1, 1), d.date(y, 12, 31)
a, b = [], []
f = lambda x: f"{x.day:02d}-{c.month_abbr[x.month]}-{x.year:04d}"
city = 'A'

while dt <= ed:
    s = dt
    t = min(dt + d.timedelta(m - 1 if city == 'A' else n - 1), ed)
    (a if city == 'A' else b).append((s, t))
    dt = t + d.timedelta(1)  # ✅ move to next available day
    city = 'B' if city == 'A' else 'A'

print("City A:")
for s, t in a:
    print(f"{f(s)} to {f(t)}")

print("City B:")
for s, t in b:
    print(f"{f(s)} to {f(t)}")
