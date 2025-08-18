n = input().strip()
res = 0
for i, d in enumerate(n):
    b = bin(int(d))[2:]
    num = int(n[:i] + b + n[i+1:])
    res = max(res, num)
print(res)