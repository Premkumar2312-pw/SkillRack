r, c = map(int, input().split())
m = [input().split() for _ in range(r)]
a, k = 0, input().strip()
if k.isupper():
    a = 65
    k = ord(k) - ord('A')
else:
    a = 97
    k = ord(k) - ord('a')
b = [chr(i) for i in range(a, a + 26)]
for i in range(r):
    for j in range(c):
        if m[i][j] == '1':
            m[i][j] = b[k % 26]
            k += 1
for row in m:
    print(*row)