N = int(input())
print('*')
k = 1
for i in range(2, N + 1):
    for j in range(i):
        print('- ' * k + '* ' * i)
    k += i