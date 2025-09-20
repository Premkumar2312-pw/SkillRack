n = int(input())
l = list(map(str, input().split()))
l2 = [[int(j) for j in i] for i in l]

for i in range(len(l2)):
    s = max(l2[i])
    b = int(bin(s)[2:])
    l2[i][l2[i].index(s)] = b

g = 0
for row in l2:
    g += int("".join(str(x) for x in row))
print(g)