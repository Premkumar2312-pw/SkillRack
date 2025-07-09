m = int(input())
a = list(map(int, input().split()))
n = int(input())
b = list(map(int, input().split()))

def is_asc(x): return all(x[i] <= x[i+1] for i in range(len(x)-1))
def is_desc(x): return all(x[i] >= x[i+1] for i in range(len(x)-1))

if all(x == a[0] for x in a) and all(x == b[0] for x in b):
    if a[0] < b[0]:
        print(*a)
        print(*b)
    elif b[0] < a[0]:
        print(*b)
        print(*a)
    else:
        print(*a)
        print(*b)
elif is_asc(a) and is_desc(b):
    print(*a)
    print(*b)
elif is_desc(a) and is_asc(b):
    print(*b)
    print(*a)
else:
    print(*a)
    print(*b)
