matrix = [list(map(int, input().split())) for _ in range(9)]
N = input().strip()
result = 0
for col in range(9):
    digits_to_take = int(N[col])
    num_str = ''.join(str(matrix[row][col]) for row in range(digits_to_take))
    result += int(num_str)
print(result)