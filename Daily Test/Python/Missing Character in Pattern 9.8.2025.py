s = input().strip()
n = len(s)
for i in range(1, n // 2 + 1):
    if n // i < 2: continue
    p, v = [], True
    for j in range(i):
        f = {}
        for k in range(j, n, i):
            if s[k] != '_':
                f[s[k]] = f.get(s[k], 0) + 1
        if not f:
            v = False
            break
        p.append(max(f, key=f.get))
    if not v: continue
    if all(s[j] == '_' or s[j] == p[j % i] for j in range(n)):
        print(p[s.index('_') % i])
        break
