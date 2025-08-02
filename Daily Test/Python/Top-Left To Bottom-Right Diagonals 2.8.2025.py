n = int(input())
for i in range(n*n):
    print(''.join('*' if (i % n) == (j % n) else '-' for j in range(n*n)))