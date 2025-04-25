def w(ch):
    return ord(ch.lower()) - 96

r, c = map(int, input().split())
m = [input().split() for _ in range(r)]

a, b = map(int, input().split())
c, d = map(int, input().split())
a -= 1
b -= 1
c -= 1
d -= 1

def s(p):
    return sum(w(m[i][j]) for i, j in p)

if a == c:
    e, f = sorted([b, d])
    p = [(a, y) for y in range(e, f + 1)]
    res = s(p)
elif b == d:
    e, f = sorted([a, c])
    p = [(x, b) for x in range(e, f + 1)]
    res = s(p)
else:
    p1 = [(x, b) for x in range(min(a, c), max(a, c) + 1)]
    p1 += [(c, y) for y in range(min(b, d), max(b, d) + 1) if y != b]

    p2 = [(a, y) for y in range(min(b, d), max(b, d) + 1)]
    p2 += [(x, d) for x in range(min(a, c), max(a, c) + 1) if x != a]
    res = min(s(p1), s(p2))

print(res)