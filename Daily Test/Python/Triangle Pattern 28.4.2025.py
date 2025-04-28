n = int(input())
s = ''
i = 1

while len(s) < n*n:
    s += str(i)
    i += 1
p = 0

for l in range(1, n+1):
    print('*'*(n-l) + s[p:p+(2*l-1)])
    p += 2*l-1