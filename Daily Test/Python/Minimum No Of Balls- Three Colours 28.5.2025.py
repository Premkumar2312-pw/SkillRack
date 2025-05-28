n = int(input())
a = [list(map(int, input().split())) for _ in range(n)]
r, g, b = a[0]

for i in range(1, n):
    r, g, b = a[i][0] + min(g, b), a[i][1] + min(r, b), a[i][2] + min(r, g)

print(min(r, g, b))