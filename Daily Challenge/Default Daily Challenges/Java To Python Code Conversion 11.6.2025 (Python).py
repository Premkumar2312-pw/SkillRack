import sys

r = ""
for l in sys.stdin:
    w = l.strip().split()
    for x in w:
        r += x[-1]
print(r[::-1])