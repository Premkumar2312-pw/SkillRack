import sys

d = sys.stdin.read().split()
t = {}

for i in range(1, int(d[0]) * 2, 2):
    t.setdefault(d[i+1], []).append(d[i])

def f(x):
    return 1 + sum(f(c) for c in t.get(x, []))

print(f(d[-1]))