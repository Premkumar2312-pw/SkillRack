r, c = map(int, input().split())
m = [list(map(int, input().split())) for _ in range(r)]
l = int(input())

for i in range(r):
    for j in range((c - l) if l <= c // 2 else l):
        x, y = l - j - 1, l + j
        if x >= 0 and y < c:
            print(m[i][x] + m[i][y], end=' ')
        elif y >= c:
            print(m[i][x], end=' ')
        else:
            print(m[i][y], end=' ')
    print()