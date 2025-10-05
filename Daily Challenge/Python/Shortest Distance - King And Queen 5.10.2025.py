n = int(input())
m = [input().split() for _ in range(n)]
l, f, d, l3 = [], 0, 0, []

for i in range(n):
    for j in range(n):
        if m[i][j] == 'K':
            f, d = i, j
        if m[i][j] == 'Q':
            l.append((i, j))

for i, j in l:
    if abs(f - i) == 0:
        l3.append(abs(d - j))
    if abs(d - j) == 0:
        l3.append(abs(f - i))
    if abs(d - j) == abs(f - i):
        l3.append(abs(f - i))

print(min(l3) if l3 else -1)