from itertools import permutations as p
n, a = input().split()
print(min(x for x in sorted(set(int(''.join(i)) for i in p(n))) if x >= int(a)))