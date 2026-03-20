n = int(input())
b = []
le = 0

arr = list(map(int, input().split()))

for i in arr:
    le = max(le, len(bin(i)[2:]))
    b.append(bin(i)[2:])

lsb = -1

while le >= -lsb:
    ans = 0
    for i in range(n):
        if len(b[i]) >= -lsb:
            if b[i][lsb] == '1':
                ans += 1
    lsb -= 1
    print(ans, end=' ')