n = int(input())
for i in range(n):
    print('-' * (n - 1 - i) + '*' * n if i == 0 else ('*' * n if i == n - 1 else '-' * (n - 1 - i) + '*' + '-' * (n - 2) + '*'))