def count_factors(n):
    c = 0
    for i in range(1, int(n**0.5)+1):
        if n % i == 0:
            c += 1
            if i != n // i:
                c += 1
    return c

n = int(input())
a = list(map(int, input().split()))

from collections import defaultdict
d = defaultdict(list)

for x in a:
    d[count_factors(x)].append(x)

for f in sorted(d.keys(), reverse=True):
    print(*sorted(d[f], reverse=True))