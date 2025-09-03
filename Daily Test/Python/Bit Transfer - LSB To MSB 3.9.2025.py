N = int(input())
val = list(map(int, input().split()))
binary = []

for i in val:
    binary.append(bin(i)[2:])

binary.append(binary[N-1][-1] + ''.join(binary[0][:-1]))

for i in range(1, N):
    binary.append(binary[i-1][-1] + ''.join(binary[i][:-1]))

for i in binary:
    print(int(i, 2), end=" ")