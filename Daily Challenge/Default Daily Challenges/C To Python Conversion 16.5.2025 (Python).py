n = int(input())
numbers = list(map(int, input().split()))
total = 0
for curr in numbers[:n]:
    s = str(curr)
    total += int(str(len(s)) + s)
print(total)