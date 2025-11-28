n = int(input())
pairs = [list(map(int, input().split())) for _ in range(n)]
s = sorted(pairs, key=lambda p: (p[1], p[0]))
for x, y in s:
    print(x, y)