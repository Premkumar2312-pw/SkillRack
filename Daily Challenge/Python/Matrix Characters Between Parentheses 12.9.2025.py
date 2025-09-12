R, C = map(int, input().split())
m = [''.join(input().split()) for _ in range(R)]
s = ''.join(m)
a, b = s.find('('), s.find(')')
if a < b:
    print(s[a + 1:b])
else:
    print(s[a + 1:] + s[:b])