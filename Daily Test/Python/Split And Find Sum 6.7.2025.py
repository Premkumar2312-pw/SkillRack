s = input().strip()

print(sum(map(int, [''.join(g) for k, g in __import__('itertools').groupby(s)])))
