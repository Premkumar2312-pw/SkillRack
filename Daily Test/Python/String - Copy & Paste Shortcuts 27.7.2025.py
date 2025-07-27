s = input().split()
r = []
c = []
for w in s:
    if w == "Ctrl+C": c = r[:]
    elif w == "Ctrl+V": r += c
    else: r.append(w)
print(*r)