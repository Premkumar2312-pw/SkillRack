from itertools import permutations as per

d = list(filter(str.isdigit, input()))
res = set()
for l in range(1, 4):
    for p in per(d, l):
        if p[0] != '0':
            n = int(''.join(p))
            if n > 1 and all(n % i for i in range(2, int(n**0.5) + 1)):
                res.add(n)
print(*sorted(res))