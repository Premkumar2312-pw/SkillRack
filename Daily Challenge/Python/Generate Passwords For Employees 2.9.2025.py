N = int(input())
C = int(input())
D = int(input())
copy = C

for i in range(1, D + 1):
    for j in range(1, N + 1):
        print(C + j, end=' ')
    print()
    C = copy + i