s = input().strip()
r = []

for t in s.split('#'):
    for i, c in enumerate(t):
        if c == 'L':
            d = min((abs(i - j) for j, x in enumerate(t) if x == '*'),
                    default=-1)
            r.append(d)

print(*r)