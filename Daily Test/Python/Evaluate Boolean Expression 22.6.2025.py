s = input().strip()
v = 1 if s[0] == 'T' else 0
i = 1
while i < len(s):
    o = s[i]
    n = 1 if s[i+1] == 'T' else 0
    if o == '&': v &= n
    elif o == '|': v |= n
    elif o == '^': v ^= n
    i += 2
print('T' if v else 'F')