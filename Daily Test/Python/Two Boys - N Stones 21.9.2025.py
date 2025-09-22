n = int(input())
l = list(map(int, input().split()))
c = 0
j = 0
s = l + l + l

for i in range(len(s)):
    if i == 0:
        print(s[i], s[c])
        c += 2
        j += 1
    if i > 0 and j < n + 1:
        print(s[i], s[c])
        c += 2
        j += 1