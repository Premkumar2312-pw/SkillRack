n = int(input())
arr = list(map(int, input().split()))

sum_val = 0

for x in arr:
    sum_val += (x // 10) % 10

print(sum_val)