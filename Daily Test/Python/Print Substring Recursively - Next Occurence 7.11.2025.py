s = input().strip()
for idx, i in enumerate(s):
    b = s.find(i, idx + 1, len(s))
    if b != -1:
        print(s[idx : b + 1])
    else:
        break