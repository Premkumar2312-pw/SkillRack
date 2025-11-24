n = int(input())
a = input().split()
b = a[::-1]
f = 0
if a[0] == '*': f = 1
for i in range(n):
    if a[i] == '*':
        if b[i] != '*':
            a[i] = b[i]
        else:
            a[i] = '1'
    elif f == 1 and a[i] == '*':
        a[i] = '1'
if a == a[::-1]:
    print(*a)
else:
    print("-1")