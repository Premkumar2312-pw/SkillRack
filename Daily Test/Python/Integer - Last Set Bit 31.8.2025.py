N = int(input())
val = list(map(int, input().split()))
tot = 0

for i in val:
    b = bin(i)[2:]
    l = b[::-1].index('1')
    tot += pow(2, l)

print(tot)