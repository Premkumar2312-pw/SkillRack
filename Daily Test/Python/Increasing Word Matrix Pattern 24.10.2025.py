n = int(input())
s = 'abcdefghijklmnopqrstuvwxyz'
for i in range(1, n + 1):
    for j in range(i, n + i):
        if j < 26:
            print(s[:j], end=' ')
        else:
            print(s[:j % 26] + s[:j % 26], end=' ')
    print()