import sys

lines = [line.strip() for line in sys.stdin if line.strip()]

if len(lines) == 1:
    nums = list(map(int, lines[0].split()))
    for n in reversed(nums):
        print(n)
else:
    nums = list(map(int, lines))
    print(*reversed(nums))