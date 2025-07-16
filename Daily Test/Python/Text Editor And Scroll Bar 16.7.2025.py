x, y = map(int, input().split())
w = input().split()
l = []
cur = ""
for wo in w:
    if len(cur) + len(wo) + (1 if cur else 0) <= y:
        cur += (" " if cur else "") + wo
    else:
        l.append(cur)
        cur = wo
if cur:
    l.append(cur)
print(max(0, len(l) - x))