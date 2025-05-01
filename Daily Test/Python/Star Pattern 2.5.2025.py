n = int(input())
k = 2
us = 0
for i in range(n):
    l = k
    for j in range(k):
        print('-' * us, end='')
        print('* ' * l, end='')
        print()
        l -= 1
        us += 1
    k += 1