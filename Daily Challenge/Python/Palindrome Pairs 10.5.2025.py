w = input().split()
f = 0
for i in range(len(w)):
    for j in range(len(w)):
        if i != j:
            c = w[i] + w[j]
            if c == c[::-1]:
                print(c)
                f = 1
                exit()
if not f:
    print(-1)