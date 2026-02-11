code = input().split()
s = [input().split() for _ in range(5)]

out = []

for i in range(0, len(code), 2):
    r = len(code[i]) - 1
    c = len(code[i + 1]) - 1

    if len(s[r][c]) > 1:
        out.append(s[r][c][0])
    else:
        out.append(s[r][c])

print("".join(out))