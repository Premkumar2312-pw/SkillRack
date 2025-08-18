N = int(input().strip())
values = [input().strip() for _ in range(N)]
parsed = []
for v in values:
    num = int(v[:-1])
    ch = v[-1].lower()
    parsed.append((ch, num))

parsed.sort(key=lambda x: x[0])
nums = [num for _, num in parsed]
is_increasing = all(nums[i] < nums[i+1] for i in range(len(nums)-1))
print("Yes" if is_increasing else "No")