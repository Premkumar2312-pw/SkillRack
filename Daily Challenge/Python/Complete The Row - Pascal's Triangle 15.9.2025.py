n = int(input().strip())
nums = list(map(int, input().split()))

def generate_row(r):
    row = [1]
    for k in range(1, r + 1):
        val = row[-1] * (r - k + 1) // k
        row.append(val)
    return row

for r in range(n - 1, 50):
    row = generate_row(r)
    i = 0
    for val in row:
        if i < n and val == nums[i]:
            i += 1
    if i == n:
        print(' '.join(map(str, row)))
        break
