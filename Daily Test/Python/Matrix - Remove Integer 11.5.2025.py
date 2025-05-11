r, c = map(int, input().split())
m = [list(map(int, input().split())) for _ in range(r)]
x, y = map(int, input().split())

z = [m[a][b] if b % 2 == 0 else m[r - a - 1][b] 
     for b in range(c) for a in range(r)]

z.pop((y - 1) * r + (x - 1 if (y - 1) % 2 == 0 else (r - x)))
z.append(-1)

idx = 0
for b in range(c):
    for a in (range(r) if b % 2 == 0 else range(r - 1, -1, -1)):
        m[a][b] = z[idx]
        idx += 1

for row in m:
    print(*row)