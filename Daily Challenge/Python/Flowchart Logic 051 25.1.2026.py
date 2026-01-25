X, Y, D = map(int, input().split())

while X <= Y:
    temp = X
    while temp > 0:
        if temp % 10 == D:
            print(X, end=" ")
            break
        temp //= 10
    X += 1