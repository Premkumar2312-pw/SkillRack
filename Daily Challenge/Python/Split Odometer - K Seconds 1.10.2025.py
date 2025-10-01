s = input().strip()
k = int(input())
for i in range(1, k+1):
    for j in range(0, len(s), 3):
        print(str((int(s[j:j+3]) + i) % 1000).zfill(3), end='')
    print()