s1 = input().strip()
s2 = input().strip()
total_moves = 0

for i in range(len(s1)):
    d1 = int(s1[i])
    d2 = int(s2[i])
    clockwise = abs(d1 - d2)
    anticlockwise = 10 - clockwise
    total_moves += min(clockwise, anticlockwise)

print(total_moves)