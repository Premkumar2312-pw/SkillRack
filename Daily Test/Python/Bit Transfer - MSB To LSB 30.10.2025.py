n = int(input())
l = list(map(int, input().split()))
l1 = [bin(i)[3:] + bin(i)[2] for i in l]
for i in l1:
    print(int(i, 2), end=" ")