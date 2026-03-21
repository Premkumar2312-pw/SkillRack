key = [input().split() for _ in range(5)]
s = input().strip()
res = ""

for i in range(0, len(s) - 1, 2):
    ch1, ch2 = s[i], s[i + 1]

    for r in range(5):
        for c in range(5):
            if ch1 in key[r][c]:
                row1, col1 = r, c
            if ch2 in key[r][c]:
                row2, col2 = r, c

    if row1 == row2 and col1 != col2:
        col1 = (col1 + 1) % 5
        col2 = (col2 + 1) % 5
        res += key[row1][col1][0] + key[row2][col2][0]

    elif col1 == col2 and row1 != row2:
        row1 = (row1 + 1) % 5
        row2 = (row2 + 1) % 5
        res += key[row1][col1][0] + key[row2][col2][0]

    elif row1 == row2 and col1 == col2:
        res += ch1 + ch2

    else:
        if col1 < col2:
            res += key[row2][col1][0] + key[row1][col2][0]
        else:
            res += key[row1][col2][0] + key[row2][col1][0]

print(res)