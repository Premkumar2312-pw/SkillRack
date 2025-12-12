a, b = map(int, input().split())

while a > 0 and b > 0:
    print(a, end=' ')
    print(b)

    a = a - 1
    b = b - 1

    if a % 10 == 0:
        temp = a
        a = b
        b = temp