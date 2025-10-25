N = int(input())
nums = list(map(int, input().split()))
k = int(input())
mask = (1 << k) - 1
sum_ = nums[0]
currLast = nums[0] & mask
for index in range(1, N):
    if currLast == (nums[index] & mask):
        sum_ += nums[index]
    else:
        print(sum_, end=" ")
        sum_ = nums[index]
        currLast = nums[index] & mask
print(sum_)