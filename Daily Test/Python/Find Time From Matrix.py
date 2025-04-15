m = [input().split() for _ in range(12)]
res = []

for i in range(12):
    for j in range(12):
        if m[i][j] in ('A', 'P'):
            h = i + 1
            mins = j * 5
            ap = m[i][j]
            th = 0 if h == 12 and ap == 'A' else 12 if h == 12 else h if ap == 'A' else h + 12
            total = th * 60 + mins
            disp_h = 12 if h == 12 or h == 0 else h
            res.append((total, f"{disp_h:02}:{mins:02} {ap}M"))

res.sort()
for _, t in res:
    print(t)