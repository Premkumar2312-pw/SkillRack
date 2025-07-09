m = int(input())
a = list(map(int, input().split()))
n = int(input())
b = list(map(int, input().split()))

sa = a == sorted(a)
sb = b == sorted(b)

if all(x == a[0] for x in a + b):
    print(*a)
    print(*b)
elif sa and not sb:
    print(*a)
    print(*b)
elif not sa and sb:
    print(*b)
    print(*a)
else:
    print(*a)
    print(*b)