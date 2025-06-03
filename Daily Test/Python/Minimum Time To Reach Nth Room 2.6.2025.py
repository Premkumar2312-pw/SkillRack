n = int(input())
d = list(map(int, input().split()))
p = t = f = 0
while p < n:
    cur = d[p] ^ f
    if cur == 0:
        while p < n and (d[p] ^ f) == 0:
            p += 1
    else:
        f ^= 1
        t += 1
print(t)