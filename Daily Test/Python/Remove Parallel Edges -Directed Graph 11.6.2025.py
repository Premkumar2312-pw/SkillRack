n = int(input())
m = [list(map(int, input().split())) for _ in range(n)]

for i in range(n):
    for j in range(i+1, n):
        if m[i][j] and m[j][i]:
            if m[i][j] > m[j][i]:
                m[i][j] = 0
            else:
                m[j][i] = 0

for r in m:
    print(*r)