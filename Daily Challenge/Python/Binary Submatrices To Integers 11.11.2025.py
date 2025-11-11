R, C = map(int, input().split())
a = [input().split() for _ in range(R)]
K = int(input())
for i in range(0, R, K):
    o = []
    for j in range(0, C, K):
        s = ''.join(a[x][y] for x in range(i, i + K) for y in range(j, j + K))
        o.append(int(s, 2))
    print(*o)