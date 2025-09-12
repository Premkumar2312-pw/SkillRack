N, K = map(int, input().split())
arr = input().split()

def fact(n):
    b = []
    for i in range(1, int(n ** 0.5) + 1):
        if n % i == 0:
            b.append(i)
            if i != n // i:
                b.append(n // i)
    return sorted(b)

for i in range(0, N, K):
    if i + K <= N:
        a = "".join(x[-1] for x in arr[i:i + K])
        a = int(a)
        if a == 0:
            print(0)
        else:
            print(*fact(a))