from itertools import groupby

s = input().strip()
runs = [''.join(g) for _, g in groupby(s)]

for run in runs:
    if len(run) > 1:
        k = run[0]
        for j in range(len(run)):
            ch = chr((ord(k) - ord('a') + j) % 26 + ord('a'))
            print(ch, end="")
    else:
        print(run[0], end="")