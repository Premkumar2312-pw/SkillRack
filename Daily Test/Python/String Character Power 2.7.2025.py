s = input().strip()
k = int(input())
c = {}
p = {}
t = 0
for ch in s:
    c[ch] = c.get(ch, 0) + 1
    if c[ch] > k:
        continue
    if c[ch] == 1:
        p[ch] = 1
    else:
        p[ch] *= 2
    t += p[ch]
print(t)