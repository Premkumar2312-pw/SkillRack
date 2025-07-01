n = int(input())
a = list(map(int, input().split()))
print(*[a[i] * a[a[i]-1] if a[i] > 0 else a[i] * a[a[i]] for i in range(n)])