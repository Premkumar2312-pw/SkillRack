ch1, ch2 = input().split()

alpha = [chr(i) for i in range(97, 123) if chr(i) != ch1]
m = [alpha[i * 5:(i + 1) * 5] for i in range(5)]

dx = [-1, 1, 0, 0, -1, -1, 1, 1]
dy = [0, 0, -1, 1, -1, 1, -1, 1]

for i in range(5):
    for j in range(5):
        if m[i][j] == ch2:
            for d in range(8):
                ni, nj = i + dx[d], j + dy[d]
                if 0 <= ni < 5 and 0 <= nj < 5:
                    m[ni][nj] = m[ni][nj].upper()
            break
    else:
        continue
    break

for row in m:
    print(" ".join(row))