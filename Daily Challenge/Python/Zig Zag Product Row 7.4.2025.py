r, c = map(int, input().split())
m = [list(map(int, input().split())) for _ in range(r)]
x, y = map(int, input().split())

a = m[x-1]
b = m[y-1][::-1]

res = [a[i] * b[i] for i in range(c)]
print(*res)