N = int(input())
pages = list(map(int, input().split()))
S, R, X = map(int, input().split())

cache = []
c = S
p = 0

for i in range(N):
    page = pages[i]

    if page in cache:
        cache.remove(page)
        cache.append(page)
    else:
        p += 1
        if len(cache) >= c:
            cache.pop(0)
        cache.append(page)

    if (i + 1) == R:
        c += X

print(p)