n = input()
res = []
l = len(n)
for i in range(l):
    if n[i] != '0':
        res.append(n[i] + '0' * (l - i - 1))
print('+'.join(res))
