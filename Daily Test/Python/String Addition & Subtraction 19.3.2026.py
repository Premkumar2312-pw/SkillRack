s = input().strip()
f = [0] * 26
t = ""
op = '+'

for ch in s + "#":
    if ch in ['+', '-', '#']:
        for c in t:
            i = ord(c) - ord('a')
            if op == '+':
                f[i] += 1
            else:
                f[i] -= 1
        op = ch
        t = ""
    else:
        t += ch

p, n = [], []
for i in range(26):
    if f[i] > 0:
        p.append(chr(i + ord('a')) * f[i])
    elif f[i] < 0:
        n.append(chr(i + ord('a')) * (-f[i]))

r = "".join(p)
if n:
    r += "-" + "".join(n)

print(r)