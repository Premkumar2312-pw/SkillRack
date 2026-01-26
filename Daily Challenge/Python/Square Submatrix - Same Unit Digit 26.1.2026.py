R, C = map(int, input().split())

unit = []
for _ in range(R):
    unit.append([x % 10 for x in map(int, input().split())])

N = int(input())

for i in range(R - N + 1):
    for j in range(C - N + 1):

        val = unit[i][j]
        same = True

        for x in range(i, i + N):
            for y in range(j, j + N):
                if unit[x][y] != val:
                    same = False
                    break
            if not same:
                break

        if same:
            print("Yes")
            exit()

print("No")