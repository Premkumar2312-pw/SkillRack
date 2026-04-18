n = int(input())

nums = list(map(int, input().split()))

for x in nums:
    if x % 6 == 0:
        print(x, end=" ")