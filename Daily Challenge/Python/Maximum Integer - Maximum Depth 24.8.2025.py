s = input().strip()
d, md, m = 0, 0, {}
i = 0
while i < len(s):
    if s[i] == '(':
        d += 1; md = max(md, d); i += 1
    elif s[i] == ')':
        d -= 1; i += 1
    elif s[i].isdigit():
        n = 0
        while i < len(s) and s[i].isdigit():
            n = n * 10 + int(s[i]); i += 1
        m.setdefault(d, []).append(n)
    else: i += 1

while md > 0 and md not in m: md -= 1
print(max(m.get(md, [0])))