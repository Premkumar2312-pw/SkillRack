n = int(input())
s = [input().strip() for _ in range(n)]

def k(x):
    m = len(x) // 2
    return (x[m], x[0], x[-1])

s_sorted = sorted(enumerate(s), key=lambda x: (k(x[1]), x[0]))
for _, v in s_sorted:
    print(v)