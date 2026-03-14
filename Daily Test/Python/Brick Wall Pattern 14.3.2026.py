l, h = map(int, input().split())
r, c = map(int, input().split())

k = l // 2

for i in range(r):
    t = (r - i - 1) % 4

    for _ in range(h):
        row = ""

        if t == 0:
            for j in range(c):
                ch = '*' if j % 2 == 0 else '#'
                row += ch

        elif t == 1:
            row += '#' * k
            for j in range(c):
                ch = '*' if j % 2 == 0 else '#'
                row += ch

        elif t == 2:
            for j in range(c):
                ch = '#' if j % 2 == 0 else '*'
                row += ch

        else:
            row += '*' * k
            for j in range(c):
                ch = '#' if j % 2 == 0 else '*'
                row += ch

        print(row[:c])