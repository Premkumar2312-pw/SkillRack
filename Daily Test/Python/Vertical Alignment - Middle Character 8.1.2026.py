n = int(input())
a = [input().strip() for _ in range(n)]

maxLen = max(len(s) for s in a)
b = []

for s in a:
    if len(s) < maxLen:
        diff = maxLen - len(s)
        pad = diff // 2
        s = "*" * pad + s + "*" * pad
    b.append(s)

for i in range(len(b[0])):
    for s in b:
        print(s[i], end="")
    print()