s = input()
i = 0
p = []

while i < len(s):
    n = 0
    while i < len(s) and s[i].isdigit():
        n = n * 10 + int(s[i])
        i += 1
    if i < len(s) and s[i].isalpha():
        p.append((n, s[i]))
        i += 1

for i in range(len(p)):
    t = ''.join(c for _, c in p[i:])
    print(t * p[i][0])