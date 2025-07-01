val = input().split()
a = []
max_value = max(len(word) for word in val)

for i, word in enumerate(val):
    pad = max_value - len(word)
    if (i + 1) % 2 == 1:
        col = list(word) + ['*'] * pad
    else:
        col = ['*'] * pad + list(word)
    a.append(col)

for row in range(max_value):
    for cols in a:
        print(cols[row], end="")
    print()