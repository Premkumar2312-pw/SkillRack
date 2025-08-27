import sys

lines = [list(map(int, line.split())) for line in sys.stdin.read().strip().splitlines()]

rows, cols = 0, len(lines[0])
for row in lines:
    if len(row) == cols:
        rows += 1
    else:
        print(rows, cols)
        rows, cols = 1, len(row)
print(rows, cols)