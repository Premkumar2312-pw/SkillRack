n = int(input())
a = list(map(int, input().split()))
bl = 0
bs = 0
for i in range(n):
    c = set(str(a[i]))
    s = a[i]
    for j in range(i + 1, n):
        c &= set(str(a[j]))
        if not c: break
        s += a[j]
        l = j - i + 1
        if l > bl or (l == bl and s > bs):
            bl = l
            bs = s
if bl == 0:
    bs = max(a)
print(bs)