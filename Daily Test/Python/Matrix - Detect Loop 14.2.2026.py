r, c = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(r)]
i, j = map(int, input().split())
i -= 1
j -= 1

visited = set()

while True:
    if i < 0 or i >= r or j < 0 or j >= c:
        print("NO")
        break

    if (i, j) in visited:
        print("YES")
        break

    visited.add((i, j))

    val = matrix[i][j]

    if val >= 0:
        if val % 2 == 0:
            i -= 1
        else:
            j += 1
    else:
        if (-val) % 2 == 0:
            i += 1
        else:
            j -= 1