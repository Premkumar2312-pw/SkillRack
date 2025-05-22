n = int(input())
w = [input().strip() for _ in range(n)]
s = input().strip()
m = {c: i for i, c in enumerate(s)}
w.sort(key=lambda x: [m[c] for c in x])
for i in w:
    print(i)