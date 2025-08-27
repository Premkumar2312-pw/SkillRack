n = input()
l = [i for i in n]
i = 0
s = 1
c = 0
while len(l) > 1:
    if len(l) == 1:
        break
    elif i == len(l) - 1:
        c += 1
        s = int(l[i])
        i = 0
        l = [i for i in str(s)]
        s = 1
    else:
        s *= int(l[i])
        i += 1
print(c)
