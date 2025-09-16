M, N = map(int, input().split())
P = 0

while M > 0 or N > 0:
    if M % 10 != N % 10:
        if M % 10 > N % 10:
            print(M % 10, end='')
            P = 1
        else:
            print(N % 10, end='')
            P = 1
    M //= 10
    N //= 10

if P == 0:
    print("-1", end='')