s = input().strip()
n = int(input())

l1, l2 = '', ''
for ch in s:
    if ch.isalpha():
        l1 += ch
    else:
        l2 += ch

a = len(l1) // (n * n)
b = len(l2) // (n * n)

c, d = a, b
m1, m2 = [], []

for _ in range(n):
    row1, row2 = [], []
    for _ in range(n):
        row2.append(l2[d - b:d])
        d += b
        row1.append(l1[c - a:c])
        c += a
    m1.append(row1)
    m2.append(row2)

for row in m1:
    print(*row)
for row in m2:
    print(*row)