n = int(input())
arr = list(map(int, input().split()))
found = False

for i in range(len(arr) - 1):
    for j in range(i + 1, len(arr)):
        if bin(arr[i])[2:] == bin(arr[j])[2:][::-1]:
            found = True
            print(arr[i], arr[j])

if not found:
    print(-1)