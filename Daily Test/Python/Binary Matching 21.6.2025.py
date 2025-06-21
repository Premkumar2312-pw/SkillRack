x, n = map(int, input().split())
a = list(map(int, input().split()))
xb = bin(x)[2:]
c = 0
for i in a:
    if xb.endswith(bin(i)[2:]):
        c += 1
print(c)