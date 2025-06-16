r, c, k = map(int, input().split())
m = []
for _ in range(r):
    m.append(input().split())

r1, c1 = map(int, input().split())
r2, c2 = map(int, input().split())
r1 -= 1
c1 -= 1
r2 -= 1
c2 -= 1

hk = k // 2
s1 = []
s2 = []

for i in range(-hk, hk + 1):
    row1 = []
    row2 = []
    for j in range(-hk, hk + 1):
        row1.append(m[r1 + i][c1 + j])
        row2.append(m[r2 + i][c2 + j])
    s1.append(row1)
    s2.append(row2)

for i in range(-hk, hk + 1):
    for j in range(-hk, hk + 1):
        m[r1 + i][c1 + j] = s2[i + hk][j + hk]
        m[r2 + i][c2 + j] = s1[i + hk][j + hk]

for row in m:
    print(' '.join(row))