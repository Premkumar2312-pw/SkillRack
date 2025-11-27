n = int(input())
l = []
r = []
for _ in range(n):
    a, b = map(int, input().split())
    l.append([a, b])

for k in l:
    l1 = []
    i = k[0]
    j = k[1]
    c = 1
    for m in range(1, (i * j) + j + 1, j):
        s = [x for x in range(c, m)]
        c = m
        l1.append('[' + ' '.join(map(str, s)) + ']')
    r.append('[' + ' '.join(map(str, l1)) + ']')

for idx in range(len(r)):
    r[idx] = '[' + r[idx][3:]

for i in r:
    print('[' + i[2:] + ']')