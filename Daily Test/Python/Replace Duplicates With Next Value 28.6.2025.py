s = input().strip(); u = set(); r = ''
for c in s:
    l = c.lower() if c.isalpha() else c
    if l not in u: r += c; u.add(l)
    else:
        if c.isalpha():
            x = ord(c.lower())
            while (ch := chr(97 + (x - 96) % 26)) in u: x = ord(ch)
            r += ch if c.islower() else ch.upper(); u.add(ch)
        else:
            x = int(c)
            while (d := str((x + 1) % 10)) in u: x = int(d)
            r += d; u.add(d)
print(r)