N = int(input())
jar = []
lid = []
val = list(map(int, input().split()))
for i in val:
    if i % 2 == 0:
        jar.append(i)
    else:
        lid.append(i)
cnt = 0
for i in jar:
    if i + 1 in lid:
        cnt += 1
        lid.remove(i + 1)
print(cnt)
