n = int(input())

rows = (n + 1) // 2
mid = n // 2
sum_val = 0

for i in range(rows):
    row = list(map(int, input().split()))
    for j in range(n):
        val = row[j]

        if i == 0 and j == mid:
            sum_val += val
        elif i == rows - 1 and val != 0:
            sum_val += val
        elif j == mid - i or j == mid + i:
            sum_val += val

print(sum_val)