n = int(input())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))
for idx, i in enumerate(arr2):
    cnt = 0
    c = []
    ele = arr1[idx]
    b = 1
    for j in range(idx, n):
        if arr1[j] == ele:
            c.append(arr1[j])
            cnt += 1
            if cnt >= i:
                b = 0
                print(len(c), end=' ')
                break
        else:
            c.append(arr1[j])
    if b:
        print(-1, end=' ')