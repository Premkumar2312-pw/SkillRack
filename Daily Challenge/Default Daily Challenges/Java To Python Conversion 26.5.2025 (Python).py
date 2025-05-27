import sys

num_set = set()

for line in sys.stdin:
    if line.strip():
        num_list = list(map(int, line.strip().split()))
        num_set.update(num_list)

for num in sorted(num_set):
    print(num, end=' ')