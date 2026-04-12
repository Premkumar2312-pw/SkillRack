a, b = map(int, input().split())

while a > 0 or b > 0:
    print((a % 10 + b % 10), end=" ")
    a //= 10
    b //= 10