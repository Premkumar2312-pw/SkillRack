n = int(input())
p = []

for _ in range(n):
    b, d = map(int, input().split())
    p.append((b, d))

y = int(input())
c = 0

for b, d in p:
    if b <= y < d:
        c += 1

print(c)