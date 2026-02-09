from collections import defaultdict

s = input().split()
d = defaultdict(list)

for w in s:
    d[''.join(sorted(w))].append(w)

for v in d.values():
    print(*v)