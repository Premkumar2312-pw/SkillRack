a, b = map(int, input().split())
c = bin(a)[2:]
d = bin(b)[2:]
maxi = max(len(c), len(d))
c = c.rjust(maxi, '0')
d = d.rjust(maxi, '0')
ans = ''
for i in range(-1, -maxi-1, -2):
    if c[i] == d[i]:
        ans += c[i]
print(int(ans[::-1], 2) if ans else -1)