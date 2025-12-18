n = int(input())
keys = []
vals = []
seen = set()

for _ in range(n):
    a, b = map(str, input().split(":"))
    b = b.strip()
    keys.append(a)
    vals.append(b)

for k, v in zip(reversed(keys), reversed(vals)):
    if k not in seen:
        print(k + ":" + v)
        seen.add(k)