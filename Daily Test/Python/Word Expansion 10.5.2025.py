import re

s = input().strip()
t = re.findall(r'\d+|[A-Za-z]+', s)

n = [int(t[i]) for i in range(0, len(t), 2)]
w = [t[i] for i in range(1, len(t), 2)]

for i in range(len(n)):
    print(' '.join(w[i:] * n[i]))