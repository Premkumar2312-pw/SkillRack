n = int(input())
e = []

for _ in range(n):
    s, t = input().split()
    h1, m1 = map(int, s.split(":"))
    h2, m2 = map(int, t.split(":"))
    sm = h1 * 60 + m1
    em = h2 * 60 + m2
    e.append((sm, em))

e.sort()
f = 1
for i in range(1, n):
    if e[i][0] < e[i-1][1]:
        f = 0
        break

print("YES" if f else "NO")