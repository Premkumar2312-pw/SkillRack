a, b = map(int, input().split())

if a % 10 == b % 10:
    num = max(a, b)
else:
    if a % 10 < b % 10:
        num = a
    else:
        num = b

print(num)