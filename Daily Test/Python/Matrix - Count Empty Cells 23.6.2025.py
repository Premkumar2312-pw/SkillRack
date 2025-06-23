r, c = map(int, input().split())
q = int(input())

rows = set()
cols = set()

for _ in range(q):
    x, y = map(int, input().split())
    rows.add(x)
    cols.add(y)
    filled = len(rows) * c + len(cols) * r - len(rows) * len(cols)
    print(r * c - filled)