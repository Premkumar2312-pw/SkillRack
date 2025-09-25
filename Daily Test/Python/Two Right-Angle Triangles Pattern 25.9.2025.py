n = int(input())
for i in range(n):
    if i == 0:
        for j in range(2 * n - 2):
            print("-", end="")
        print("*")
    elif i == n - 1:
        c = 0
        for j in range(4 * (n - 1) + 1):
            if c % 2 == 0:
                print("*", end="")
            else:
                print("-", end="")
            c += 1
        print()
    else:
        for j in range(2 * (n - i) - 2):
            print("-", end="")
        print("*", end="")
        for j in range(2 * i - 1):
            print("-", end="")
        print("*", end="")
        for j in range(2 * i - 1):
            print("-", end="")
        print("*")