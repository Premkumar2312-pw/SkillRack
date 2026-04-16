s = input().strip()
e = input().strip()

cnt = 0

for i in range(len(s)):
    for j in range(i, len(s)):
        if s[i:j+1] == e:
            cnt += 1

print(cnt)


//2nd
a = input().strip()
b = input().strip()

count = 0
index = 0

while True:
    index = a.find(b, index)
    if index == -1:
        break
    count += 1
    index += 1   # move forward for overlapping

print(count)