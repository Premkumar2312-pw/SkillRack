s = input().strip()
a, b = s.index('['), s.index(']')
p, o, q = s[:a], s[a+1:b].split('|'), s[b+1:]
r = [p + x + q for x in o]
print(' '.join(sorted(r)))