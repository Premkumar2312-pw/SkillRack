n = int(input())
dash = 1
for i in range(n, 0, -1):
    print(str(i) * i, end="")
    print("-" * dash, end="")
    dash += 2
    print(str(i) * i)
