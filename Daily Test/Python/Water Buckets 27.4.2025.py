n = int(input())
buckets = list(map(int, input().split()))
x = int(input())

for i in range(n-1, -1, -1):
    if buckets[i] > x:
        leak = buckets[i] - x
        buckets[i] = x
        if i > 0:
            buckets[i-1] += leak

print(*buckets)
