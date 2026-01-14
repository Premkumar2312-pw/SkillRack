n = int(input())
arr = list(map(int, input().split()))
k = input().strip()

sum_ = 0
for d in k:
    found = [num for num in arr if d in str(num)]
    if found:
        sum_ += min(found)

print(sum_)