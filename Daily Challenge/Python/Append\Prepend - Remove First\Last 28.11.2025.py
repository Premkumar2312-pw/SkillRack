n = int(input())
l = input().split()
s = ""

for i in l:
    if i[0] == '+':
        s += i[1:]
    elif i[0] == '-':
        if i[1:] in s:
            b = len(s) - s[::-1].find(i[1:]) - 1
            s = s[:b] + s[b+1:]
    elif i[-1] == '+':
        s = i[:len(i)-1] + s
    elif i[-1] == '-':
        if i[:len(i)-1] in s:
            a = s.find(i[:len(i)-1])
            s = s[:a] + s[a+1:]

if s:
    print(s)
else:
    print(-1)