import re
s = input().strip()
d = {}
for l, n in re.findall(r'([a-z])(\d+)', s):
    d[l] = d.get(l, 0) + int(n)
print(''.join(f'{k}{d[k]}' for k in sorted(d)))