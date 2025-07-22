r, c = map(int, input().split())
m = [input().split() for _ in range(r)]
p = input().strip()
rm, pm = {}, {}

for i in range(r):
    t = tuple(m[i])
    ch = p[i]
    if ch in pm:
        if pm[ch] != t:
            print("NO")
            exit()
    else:
        pm[ch] = t
    if t in rm:
        if rm[t] != ch:
            print("NO")
            exit()
    else:
        rm[t] = ch

print("YES")