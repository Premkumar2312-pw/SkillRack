from itertools import permutations

n = int(input())
l = list(map(int, input().split()))
l1 = []

for i in range(1, 4):
    for p in permutations(l, i):
        s = int(''.join(map(str, p)))
        c = 0
        for j in range(2, s):
            if s % j == 0:
                c = 1
                break
        if c == 0 and s != 0 and s != 1:
            l1.append(s)

print(*sorted(list(set(l1))))