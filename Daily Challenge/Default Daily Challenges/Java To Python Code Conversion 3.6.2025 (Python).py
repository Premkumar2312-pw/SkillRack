import sys

r = c = s = 0

for line in sys.stdin:
    if line.strip() == "":
        continue
    r += 1
    nums = list(map(int, line.strip().split()))
    if c == 0:
        c = len(nums)
    s += sum(nums)

print(r, c)
print(s)