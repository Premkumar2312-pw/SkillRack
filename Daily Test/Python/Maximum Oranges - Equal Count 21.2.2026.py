n = int(input())
l = list(map(int, input().split()))

m = 0
for i in range(n):
    d = min(l[i:])
    t = d * (n - i)
    m = max(m, t)

print(m)