r, c = map(int, input().split())
m = [input().split() for _ in range(r)]

num_cols = []
char_cols = []

for j in range(c):
    col = [m[i][j] for i in range(r)]
    if all(x.isdigit() for x in col):
        num_cols.append(str(sum(int(x) for x in col)))
    else:
        char_cols.append(''.join(col[::-1]))

print(' '.join(num_cols + char_cols))