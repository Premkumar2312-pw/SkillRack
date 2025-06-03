def f(s):
    h = s // 3600
    m = (s % 3600) // 60
    s = s % 60
    return f"{h:02}:{m:02}:{s:02}"

n = int(input())
a = []
for _ in range(n):
    x, y = map(int, input().split(':'))
    a.append(x * 60 + y)

t = sum(a)
print("Total Duration:", f(t))

c = 0
for i in range(n - 1):
    c += a[i]
    print(f(c))