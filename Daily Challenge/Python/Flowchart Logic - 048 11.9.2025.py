x, y = map(int, input().split())
while x > 0 or y > 0:
    if x > 0:
        print(x, end=' ')
        y -= 1
    if y > 0:
        print(y, end=' ')
        x -= 1
    x -= 1
    y -= 1