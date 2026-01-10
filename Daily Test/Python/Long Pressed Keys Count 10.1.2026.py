a = input().strip()
b = input().strip()

i = j = cnt = 0

while j < len(b):
    if i < len(a) and a[i] == b[j]:
        i += 1
        j += 1
    elif j > 0 and b[j] == b[j-1]:
        cnt += 1
        while j < len(b) and b[j] == b[j-1]:
            j += 1
    else:
        j += 1

print(cnt)