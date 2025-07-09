s = input().strip()
n = len(s)
for l in range(1, n // 2 + 1):
    if n % l not in (0, 1): continue
    if all(s[i + j] in (p := s[:l])[j]+'_' for i in range(0, n, l) for j in range(min(l, n - i))):
        print(p[s.index('_') % l]); break