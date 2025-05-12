import sys

w = [l.strip() for l in sys.stdin if l.strip()]
if len(w) == 1 and " " in w[0]:
    w = w[0].split()
    for i in reversed(w):
        print(i)
else:
    print(*reversed(w))
print(len(w))