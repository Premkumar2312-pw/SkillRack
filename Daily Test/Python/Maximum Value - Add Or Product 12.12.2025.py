n = int(input())
arr = list(map(int, input().split()))

for x in arr:
    s = 0
    p = 1
    t = x

    while t > 0:
        d = t % 10
        s += d
        p *= d
        t //= 10

    print(max(s, p), end=" ")