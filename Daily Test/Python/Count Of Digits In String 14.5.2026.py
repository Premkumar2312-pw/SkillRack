n, x = map(int, input().split())

arr = input().split()

for w in arr:

    cnt = 0

    for ch in w:
        if ch.isdigit() and int(ch) == x:
            cnt += 1

    print(cnt, end=" ")