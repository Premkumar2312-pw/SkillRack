n, x = map(int, input().split())
b = bin(n)[2:]
c = 0

for i in range(1, len(b) + 1):
    p = b[:i]
    d = int(p, 2)
    if d % x == 0:
        c += 1
print(c)