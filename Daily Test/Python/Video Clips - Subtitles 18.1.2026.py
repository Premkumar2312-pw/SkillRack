def to_sec(t):
    m, s = map(int, t.split(":"))
    return m * 60 + s

n = int(input())
subs = []

for _ in range(n):
    t = input().split()[0]
    line = input()
    p = line.rfind(' ')
    dur = int(line[p+1:])
    subs.append((to_sec(t), to_sec(t) + dur, line[1:p]))

x, y = map(to_sec, input().split())

if not any(s <= t < e for t in range(x, y+1) for s, e, _ in subs):
    print(-1)
    exit()

for t in range(x, y+1):
    res = [txt for s, e, txt in subs if s <= t < e]
    print(f"{t//60:02d}:{t%60:02d}", end="")
    if res:
        print(" " + " | ".join(res))
    else:
        print()