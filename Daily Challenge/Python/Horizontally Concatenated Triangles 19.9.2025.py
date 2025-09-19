s = input().strip()
a = (len(s) + 1) // 2 - 1

for i in range(1, len(s) + 1, 2):
    if i == 1:
        print("*" * a + s[:i], end="")
        a -= 1
    else:
        n = i
        c = i
        while n >= 1:
            if n == c:
                print("*" * a + s[:n], end="")
            else:
                print("*" * (a + a) + s[:n], end="")
            n -= 2
    a -= 1
    print()