n = int(input())
a = list(map(int, input().split()))
a.sort()
f = -1
if a[0] + a[1] != a[2]:
    d = a[1] - a[0]
    for i in range(d):
        if (i + 1) + a[1] == a[2]:
            f = i + 1
            break
if f != -1:
    print(f)
    exit()
for i in range(2, n):
    if a[i] != a[i-1] + a[i-2]:
        print(a[i-1] + a[i-2])
        exit()
print(a[n-1])