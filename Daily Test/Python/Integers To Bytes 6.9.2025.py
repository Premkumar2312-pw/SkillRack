N = int(input())
mat = list(map(int, input().split()))
s = ''
for i in mat:
    s += bin(i)[2:]

s = s[::-1]
e = []
for i in range(0, len(s), 8):
    q = s[i:i+8]
    e.append(int(q[::-1], 2))

e.reverse()
print(*e)