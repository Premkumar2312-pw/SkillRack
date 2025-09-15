S = input().strip()
N = int(input())
a = [input().strip() for _ in range(N)]

for ch in S:
    flag = False
    for j in a:
        middle = len(j) // 2
        if j[middle].lower() == ch.lower():
            flag = True
            print(j)
            break
    if not flag:
        middle = len(a[0]) // 2 if a else 0
        print('*' * middle + ch + '*' * (len(a[0]) - middle - 1) if a else ch)