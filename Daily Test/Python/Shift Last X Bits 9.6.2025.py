n, x = map(int, input().split())
b = format(n, '032b')
s = b[-x:]
s = s[-1] + s[:-1]
print(int(b[:-x] + s, 2))