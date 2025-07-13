n = int(input())
a = list(map(int, input().split()))
x = int(input())
f = 0
for i in range(n - 1):
    p, q = a[i], a[i + 1]
    ab = int(str(p) + str(q))
    ba = int(str(q) + str(p))
    if ab % x == 0:
        print(p, q)
        f = 1
    elif ba % x == 0:
        print(q, p)
        f = 1
if not f:
    print(-1)