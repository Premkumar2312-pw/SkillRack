n = int(input())
a = input().split()

a = sorted(a, key=lambda x: (int(x[len(x)//2]), int(x)))

print(' '.join(a))