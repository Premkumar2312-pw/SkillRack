n = int(input())
a = list(map(int, input().split()))
k = int(input())
s = 0

for x in a:
    if x.bit_length() >= k:
        x ^= 1 << (k - 1)
    s += x

print(s)