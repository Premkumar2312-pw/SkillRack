a = input().split()
b = input().split()

if len(a) != len(b):
    print("NO")

elif any(len(a[i]) != len(b[i]) for i in range(len(a))):
    print("NO")

else:
    flag = True
    for i in range(len(a)):
        for ch in a[i]:
            if ch in b[i]:
                print("NO")
                flag = False
                break
        if not flag:
            break

    if flag:
        print("YES")