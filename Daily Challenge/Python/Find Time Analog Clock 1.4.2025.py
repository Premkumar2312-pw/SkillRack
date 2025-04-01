mat = [input().split() for _ in range(5)]

n1, n2 = map(int, input().split())

Clock = [
    ["", "11", "12", "1", ""],
    ["10", "", "", "", "2"],
    ["9", "", "", "", "3"],
    ["8", "", "", "", "4"],
    ["", "7", "6", "5", "8"]
]

row, col, flag = 0, 0, 0
for i in range(5):
    for j in range(5):
        if mat[i][j].isdigit():
            x = int(mat[i][j])
            if x == n1:
                row, col, flag = i, j, 1
                break
    if flag:
        break

hour = int(Clock[row][col])
if hour >= 24:
    print("00:", end="")
elif hour < 10:
    print(f"0{hour}:", end="")
else:
    print(f"{hour}:", end="")

row, col, flag = 0, 0, 0
for i in range(5):
    for j in range(5):
        if mat[i][j].isdigit():
            x = int(mat[i][j])
            if x == n2:
                row, col, flag = i, j, 1
                break
    if flag:
        break

minute = int(Clock[row][col]) * 5
if minute >= 60:
    print("00")
elif minute < 10:
    print("05")
else:
    print(minute)