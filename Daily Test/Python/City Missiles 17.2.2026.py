n = int(input())
att = {}

for _ in range(n):
    x, y = map(int, input().split())
    att[x] = x + y

f = False

for x in att:
    tar = att[x]
    if tar in att and att[tar] == x:
        f = True
        break

print("YES" if f else "NO")
