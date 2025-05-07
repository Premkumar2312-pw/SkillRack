s = input().strip().split()
d = {}
o = []

for w in s:
    k = w[-1]
    if k not in d:
        d[k] = []
        o.append(k)
    d[k].append(w)

for k in sorted(o):
    print(' '.join(d[k]))