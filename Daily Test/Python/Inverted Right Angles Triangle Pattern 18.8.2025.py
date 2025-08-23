N = int(input())
cnt = 1
cnt += 4 * (N - 1)
for i in range(1, cnt + 1):
    if i % 2 == 1:
        print('*', end='')
    else:
        print('-', end='')
cnt -= 4
print()
for i in range(1, N):
    print(i * 2 * '-', end="")
    for j in range(1, cnt + 1):
        if j == 1 or j == cnt // 2 + 1 or j == cnt:
            print('*', end='')
        else:
            print('-', end='')
    cnt -= 4
    print()