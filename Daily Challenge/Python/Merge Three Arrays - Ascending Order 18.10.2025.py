A = int(input())
val1 = list(map(int, input().split()))
B = int(input())
val2 = list(map(int, input().split()))
C = int(input())
val3 = list(map(int, input().split()))
d = {}

for i in range(A):
    d['a'+str(i)] = val1[i]
for i in range(B):
    d['b'+str(i)] = val2[i]
for i in range(C):
    d['c'+str(i)] = val3[i]

new = dict(sorted(d.items(), key=lambda item: item[1]))
for k, v in new.items():
    print(k, end=" ")