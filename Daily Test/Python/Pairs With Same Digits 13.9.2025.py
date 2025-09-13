N = int(input())
val = input().split()
flag = True
for i in range(N):
    for j in range(i + 1, N):
        if sorted(set(val[i])) == sorted(set(val[j])):
            flag = False
            print(val[i], val[j])
if flag:
    print(-1)