s = input()
v = "aeiouAEIOU"
l = list(s)
idx = []

for i in range(len(l)):
    if l[i] in v:
        idx.append(i)

for i in range(0, len(idx) - 1, 2):
    a, b = idx[i], idx[i + 1]
    l[a], l[b] = l[b], l[a]

print(''.join(l))