n = int(input())
arr = list(map(int, input().split()))
res = 0
for i in arr:
    s = bin(i)[2:]        # binary string
    s = '0' + s[1:]       # replace MSB with 0
    res += int(s, 2)      # back to decimal
print(res)