import re

S = input().split()
a = []
for i in S:
    r, c, col = re.split(r"\D", i)
    a.append((int(r), int(col), c))

a = sorted(a, key=lambda x: (x[0], x[1]))
cnt = 1
for r, col, c in a:
    if r == cnt:
        print(c, end=' ')
    else:
        print()
        print(c, end=' ')
        cnt += 1