n = int(input())
a = list(map(int, input().split()))

a.sort()

start = True

for i in range(n - 1):
    if start:
        print(f"{a[i]}-", end="")

    if a[i] == a[i+1] or a[i] == a[i+1] - 1:
        start = False
    else:
        print(a[i], end=" ")
        start = True

if start:
    print(f"{a[-1]}-{a[-1]}")
else:
    print(a[-1])