n = int(input())
reg = list(map(int, input().split()))
q = int(input())
marks = list(map(int, input().split()))

res = [0] * n
order = []
order += range(n)
order += [i for i in range(n) if reg[i] % 2 == 0]
order += [i for i in range(n) if reg[i] % 2]

for i in range(q):
    res[order[i % len(order)]] += marks[i]

print(*res)