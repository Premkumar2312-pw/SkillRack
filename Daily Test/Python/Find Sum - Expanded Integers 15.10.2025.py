n, l = int(input()), []
for i in range(n):
    s = input().strip()
    s1 = s[0]
    c = 0
    l1 = []
    for j in range(len(s)):
        if s[j] == s1:
            c += 1
            if c > int(s[j]):
                c = 1
            if c == int(s[j]):
                l1.append(s1)
                c = 0
        else:
            s1 = s[j]
            c = 1
            if int(s1) == c:
                l1.append(s1)
    l.append(l1)
d = sum([int("".join(i)) for i in l])
print(d)