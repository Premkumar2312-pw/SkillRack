def g(n, x):
    l = [0] * (n + 2)
    l[1] = l[2] = 2
    for i in range(3, n + 1):
        l[i] = 2 + l[i - 1] + l[i - 2]

    def f(n, x):
        if n <= 2:
            return '(' if x == 1 else ')'
        if x == 1:
            return '('
        if x == l[n]:
            return ')'
        if x <= 1 + l[n - 1]:
            return f(n - 1, x - 1)
        else:
            return f(n - 2, x - 1 - l[n - 1])

    return f(n, x)

n, x = map(int, input().split())
print(g(n, x))