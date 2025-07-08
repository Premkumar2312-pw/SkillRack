r, c = map(int, input().split())
m = [list(map(int, input().split())) for _ in range(r)]
print(sum(m[i][j] == int(f"{i+1}{j+1}") for i in range(r) for j in range(c)))