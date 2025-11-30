x = input().strip()
y = input().strip()
y = y.zfill(len(x))
bc = 0
c = 0

for i in range(len(x) - 1, -1, -1):
    xd = int(x[i])
    yd = int(y[i])
    xd -= c
    c = 0
    if xd < yd:
        bc += 1
        c = 1
        xd += 10

print(bc)