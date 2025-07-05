n = int(input())
for i in range(1, n + 1):
    s = '*' * (2 * i - 1)
    b = '[' * i + s + ']' * i
    h = '-' * (2 * (n - i))
    print(h + b + h)