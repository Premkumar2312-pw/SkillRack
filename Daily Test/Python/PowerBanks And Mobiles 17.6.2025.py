input(); c = sum(map(int, input().split()))
input(); m = sorted(100 - int(x) for x in input().split())
print(sum((c := c - i) >= 0 for i in m))
