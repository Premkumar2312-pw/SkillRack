s = input().strip()
r, c = map(int, input().split())

cnt = 0

for _ in range(r):
    row = ''.join(input().split())
    idx = row.find(s)

    while idx != -1:
        cnt += 1
        idx = row.find(s, idx + 1)

print(cnt)