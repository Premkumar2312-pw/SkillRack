import sys

n = int(sys.stdin.readline())
grid = [sys.stdin.readline().split() for _ in range(n)]
l = int(sys.stdin.readline())

r = [row.count('*') for row in grid]
c = [col.count('*') for col in zip(*grid)]

ans = 0
for i in range(n - l + 1):
    ans = max(ans, sum(r[i:i+l]), sum(c[i:i+l]))

print(ans)