n = int(input())
arr = list(map(int, input().split()))
res = arr[0]
for num in arr[1:]:
    res &= num
count = bin(res).count("1")
print(count)