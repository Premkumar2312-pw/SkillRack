N = int(input())
b = [bin(i)[2:] for i in range(N, 0, -1)]
m = max(len(x) for x in b)
for i in range(m):
    s = ""
    for x in b:
        if i < len(x):
            s += x[i]
    print(s)