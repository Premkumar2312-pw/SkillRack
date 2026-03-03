s = input().strip()
v = "aeiou"

while True:
    d = [i for i, ch in enumerate(s) if ch in v]
    if not d:
        break

    f, l = d[0], d[-1]
    m = list(s)

    m[f] = m[f].upper()
    if f != l:
        m[l] = m[l].upper()

    s = "".join(m)

print(s)