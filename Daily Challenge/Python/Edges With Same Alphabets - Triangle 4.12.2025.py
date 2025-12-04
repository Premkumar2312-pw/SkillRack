n = int(input())
s = n - 2
b = 1

print('*' * (n - 1) + 'a')

for i in range(1, n - 1):
    print('*' * s + 'c' + '*' * b + 'a')
    s -= 1
    b += 2

print('c' + ' ' * (n - 1))