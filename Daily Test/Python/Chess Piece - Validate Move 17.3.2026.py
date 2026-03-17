a = input().strip()
b, c = input().split()

d = b[1] + str(ord(b[0]) - ord('a'))
e = c[1] + str(ord(c[0]) - ord('a'))

moves = []

if a == 'R':  # Rook
    for i in range(8):
        moves.append(d[0] + str(i))
        moves.append(str(i) + d[1])

elif a == 'B':  # Bishop
    r1 = int(d[0]) + 1
    r2 = int(d[0]) - 1
    c1 = int(d[1]) + 1
    c2 = int(d[1]) - 1

    for _ in range(8):
        if 0 <= r1 < 8 and 0 <= c1 < 8:
            moves.append(str(r1) + str(c1))
        if 0 <= r1 < 8 and 0 <= c2 < 8:
            moves.append(str(r1) + str(c2))
        if 0 <= r2 < 8 and 0 <= c1 < 8:
            moves.append(str(r2) + str(c1))
        if 0 <= r2 < 8 and 0 <= c2 < 8:
            moves.append(str(r2) + str(c2))

        r1 += 1; r2 -= 1; c1 += 1; c2 -= 1

else:  # Knight
    r = int(d[0])
    c0 = int(d[1])

    pos = [
        (r+2,c0+1),(r+2,c0-1),
        (r-2,c0+1),(r-2,c0-1),
        (r+1,c0+2),(r+1,c0-2),
        (r-1,c0+2),(r-1,c0-2)
    ]

    for x,y in pos:
        if 0 <= x < 8 and 0 <= y < 8:
            moves.append(str(x)+str(y))

print("Yes" if e in moves else "No")