a, b, c = input(), input(), input()
rows = [set(a), set(b), set(c)]
s = input()
cr = -1; count = 0; ml = [0, 0, 0]
for ch in s:
    for i in range(3):
        if ch in rows[i]:
            count = count + 1 if cr == i else 1
            cr = i
            ml[i] = max(ml[i], count)
            break
    else:
        cr = -1
        count = 0
m = max(ml)
print("-1" if m < 2 else '\n'.join([x for i, x in enumerate([a, b, c]) if ml[i] == m]))