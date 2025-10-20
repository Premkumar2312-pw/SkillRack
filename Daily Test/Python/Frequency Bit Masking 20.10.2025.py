s = input().strip()
c = [0] * 26
for idx, i in enumerate(s):
    c[ord(i) - ord('a')] += 1
while c.count(0) != 26:
    b = ''
    for idx, i in enumerate(c):
        if i == 1:
            b += '1'
            c[idx] = c[idx] - 1
        elif i > 1:
            b += '1'
            c[idx] = c[idx] - 1
        else:
            b += '0'
    print(int(b[::-1], 2))