str_val = input().strip()
n = int(input())

cnt = 0

for ch in str_val:
    print(ch, end="")
    cnt += 1

    if cnt == n:
        print()
        cnt = 0