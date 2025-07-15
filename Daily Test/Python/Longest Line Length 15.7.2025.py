n = int(input())
a = [tuple(map(int, input().split())) for _ in range(n)]
from collections import defaultdict
b = defaultdict(list)
for c, d in a: b[d].append(c)
e = -1
for f in b.values():
    if len(f) >= 2: f.sort(); e = max(e, f[-1] - f[0])
print(e)