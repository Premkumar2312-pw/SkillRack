def isVow(ch):
    return ch in "aeiouAEIOU"

s = input().strip()
arr = list(s)

idx = -1

# find last vowel
for i in range(len(arr)):
    if isVow(arr[i]):
        idx = i

# reverse from 0 to idx
i, j = 0, idx
while i < j:
    arr[i], arr[j] = arr[j], arr[i]
    i += 1
    j -= 1

print("".join(arr))