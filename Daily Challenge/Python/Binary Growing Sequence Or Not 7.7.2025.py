n, a = int(input()), list(map(int, input().split()))
print("NO" if any(a[i] & a[i+1] != a[i] for i in range(n-1)) else "YES")