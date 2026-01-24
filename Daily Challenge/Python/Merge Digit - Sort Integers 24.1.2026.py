N = int(input())
nums = list(map(int, input().split()))

res = []

for i in range(0, N, 2):
    a, b = nums[i], nums[i+1]

    ah, at, ao = a // 100, (a // 10) % 10, a % 10
    bh, bt, bo = b // 100, (b // 10) % 10, b % 10

    merged = int(
        str(max(ah, bh)) + str(min(ah, bh)) +
        str(max(at, bt)) + str(min(at, bt)) +
        str(max(ao, bo)) + str(min(ao, bo))
    )

    res.append(merged)

res.sort()
print(*res)