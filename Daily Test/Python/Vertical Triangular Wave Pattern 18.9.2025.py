s = input().strip()
k = int(input())
i, d = 0, 1

for c in s:
    print("*" * i + c)
    i += d
    if i == k:
        d = -1
        i -= 2
    if i < 0:
        d = 1
        i = 1