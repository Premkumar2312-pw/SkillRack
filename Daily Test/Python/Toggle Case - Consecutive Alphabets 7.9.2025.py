s = input().strip()
out = []
i, n = 0, len(s)
while i < n:
    j = i + 1
    while j < n and (s[i].isupper() == s[j].isupper()):
        j += 1
    if j - i >= 2:
        out.append(s[i:j].swapcase())
    else:
        out.append(s[i])
    i = j
print("".join(out))