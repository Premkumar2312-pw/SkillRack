n, t = map(int, input().split())
a = [0] * (n - 1) + [1]
[a.append(sum(a[-n:])) for _ in range(t - n)]
print(*a[:t])