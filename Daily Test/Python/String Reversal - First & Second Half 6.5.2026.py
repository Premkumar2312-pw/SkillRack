s = input().strip()
n = len(s)
m = n // 2

if n % 2 == 1:
    print(s[:m][::-1] + s[m] + s[m+1:][::-1])
else:
    print(s[:m][::-1] + s[m:][::-1])