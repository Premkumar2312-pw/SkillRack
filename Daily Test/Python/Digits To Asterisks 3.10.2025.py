n = input().strip()
c = [int(i) for i in n]
s = 0
l = []
m = [[] for _ in range(max(c))]

for i in range(len(c)):
    if i > 0:
        s += c[i-1]
    m[c[i] - 1] += (s - len(m[c[i] - 1])) * '-' + c[i] * '*'

for i in m[::-1]:
    print(''.join(i) + '-' * (sum(c) - len(i)))