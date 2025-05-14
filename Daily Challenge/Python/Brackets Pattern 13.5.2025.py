s = input().strip()
n, o = int(s[1:-1]), s[0]

c = {'(':')', '[':']', '{':'}', '<':'>'}[o]

for i in range(1, n + 1):
    print("".join(o * j + c * j for j in range(i, 0, -1)))