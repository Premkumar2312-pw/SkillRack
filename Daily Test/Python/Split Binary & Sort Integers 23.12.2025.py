# Python
n = int(input())
num = list(map(int, input().split()))
res = []
for x in num:
    b = bin(x)[2:]
    l = len(b)
    mid = l // 2
    if l % 2 == 0:
        left = b[:mid]
        right = b[mid:]
    else:
        left = b[:mid+1]
        right = b[mid+1:]
    res.append(int(left, 2))
    res.append(int(right, 2))
res.sort()
print(*res)