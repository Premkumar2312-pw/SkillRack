x, y = int(input()), int(input())
c = r = 0
while x or y:
    a, b = x % 10, y % 10
    if a + b + c >= 10:
        c = 1
        r += 1
    else:
        c = 0
    x //= 10
    y //= 10
print(r)