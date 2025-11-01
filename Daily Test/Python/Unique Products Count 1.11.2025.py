n = int(input())
l1 = input().split()
l2 = input().split()
l3 = input().split()
d = []

for i in range(n):
    d.append((l1[i], l2[i], l3[i]))

print(len(list(set(d))))