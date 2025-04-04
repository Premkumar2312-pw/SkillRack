import sys 
from collections import defaultdict

numbers = sys.stdin.read().strip().split()
num_count_map = {}

for num in numbers:
    num = int(num)
    num_count_map[num] = num_count_map.get(num,0) + 1

for key in sorted(num_count_map,reverse = True):
    print(key,num_count_map[key])