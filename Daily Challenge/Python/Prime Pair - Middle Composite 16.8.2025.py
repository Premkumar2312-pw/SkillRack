n = int(input())
limit = n + 100
p = [1] * (limit + 1)
p[0] = p[1] = 0

for i in range(2, int(limit ** 0.5) + 1):
    if p[i]:
        for j in range(i * i, limit + 1, i):
            p[j] = 0

primes = [i for i in range(2, limit + 1) if p[i]]

for i in range(len(primes) - 1):
    if primes[i] + primes[i+1] == 2 * n:
        print(primes[i], primes[i+1])
        break
else:
    print(-1)