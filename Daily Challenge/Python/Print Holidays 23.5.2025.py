cal = []
try:
    while True:
        l = input().strip()
        if l:
            cal.append(l.split())
except EOFError:
    pass

r, c = len(cal), len(cal[0])
wd = ['Sun', 'Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat']
p = -1

if c == 7:
    for i in range(r):
        for j in range(c):
            if cal[i][j].isdigit() or cal[i][j] == '#':
                p = j
                break
        if p != -1:
            break
else:
    for j in range(c):
        for i in range(r):
            if cal[i][j].isdigit() or cal[i][j] == '#':
                p = i
                break
        if p != -1:
            break

d2w = [wd[(p + i - 1) % 7] for i in range(1, 32)]
dc, hc = {}, 0

if c == 7:
    for i in range(r):
        for j in range(c):
            v = cal[i][j]
            if v == '#':
                hc += 1
            elif v.isdigit():
                d = int(v)
                dc[d] = dc.get(d, 0) + 1
else:
    for j in range(c):
        for i in range(r):
            v = cal[i][j]
            if v == '#':
                hc += 1
            elif v.isdigit():
                d = int(v)
                dc[d] = dc.get(d, 0) + 1

for d, ct in dc.items():
    if ct == 1:
        hc += 1

f = False
for i in range(1, hc + 1):
    if i not in dc:
        f = True
        print(f"{i} {d2w[i - 1]}")

if not f:
    print("-1")