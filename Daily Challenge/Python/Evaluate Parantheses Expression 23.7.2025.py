s = input().strip()
d = t = i = 0
while i < len(s):
    if s[i] == '(': d += 1; i += 1
    elif s[i] == ')': d -= 1; i += 1
    elif s[i].isdigit():
        n = 0
        while i < len(s) and s[i].isdigit():
            n = n * 10 + int(s[i])
            i += 1
        t += n * d
    else: i += 1
print(t)