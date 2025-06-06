a = input().strip()
b = input().strip()
p = {c: i for i, c in enumerate(b)}
print(''.join(sorted(a, key=lambda x: p[x])))