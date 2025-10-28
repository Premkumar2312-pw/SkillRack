n, l, p, i = input().strip(), [], '', 0
while i < len(n):
    if n[i] == '[':
        l1 = []
        i += 1
        while n[i] != ']':
            if n[i].isdigit():
                p += n[i]
            elif n[i] == ' ':
                if p:
                    l1.append(int(p))
                    p = ''
            i += 1
        if p:
            l1.append(int(p))
            p = ''
        for j in l1[::-1]:
            l.append(j)
    elif n[i].isdigit():
        p += n[i]
    elif n[i] == ' ':
        if p:
            l.append(int(p))
            p = ''
    i += 1
if p:
    l.append(int(p))
print(*l)
print(sum(l))