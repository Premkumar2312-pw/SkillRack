n = int(input())
a = list(map(int, input().split()))
r, c = map(int, input().split())
m = [[0]*c for _ in range(r)]
i = 0

while i < n:
    for x in range(r-1, -1, -1):
        y = range(c-1, -1, -1) if (r-1-x)%2==0 else range(c)
        for j in y:
            m[x][j] = a[i]
            i += 1
            if i == n: break
        if i == n: break

for row in m:
    print(*row)