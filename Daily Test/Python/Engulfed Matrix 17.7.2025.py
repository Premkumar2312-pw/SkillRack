r, c = map(int, input().split())
m = [list(map(int, input().split())) for _ in range(r)]
a, b = map(int, input().split())
x, y = map(int, input().split())
for i in range(min(a, b), max(a, b)-1):
    print(*m[i][min(x, y):max(x, y)-1])