a, b = map(str.strip, [input(), input()])
c, d = len(a) // 2, len(b) // 2

def gs(s, m):
    return [s[m - h:m + h + 1] for ln in range(min(len(s) - m - 1, m) * 2 + 1, 0, -1) if (h := ln // 2) >= 0]

if not a or not b:
    print(-1)
else:
    e, f = gs(a, c), set(gs(b, d))
    print(next((sub for sub in e if sub in f), -1))
