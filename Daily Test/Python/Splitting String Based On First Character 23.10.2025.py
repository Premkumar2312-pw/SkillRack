s = input().strip()
s1, c, l, p = s + s[0], s[0], [], ''
for i in range(len(s1)):
    if s1[i] == c and i > 0:
        l.append(p)
        p = ''
        c = s1[i]
    else:
        p += s1[i]
s2 = sorted(l)
print(*s2)