N = bin(int(input()))[2:]
b = len(N)
res = []
for i in N:
    if i == '1':
        res.append(str(pow(2, b - 1)))
    b -= 1
print('+'.join(res))