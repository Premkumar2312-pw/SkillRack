def toMin(t):
    h, m = map(int, t.split(':'))
    return h*60 + m

n = int(input())
arr = []

for _ in range(n):
    s, e = input().split()
    arr.append((toMin(s), toMin(e)))

arr.sort()

freeTime = 0
prevEnd = 0

for s, e in arr:
    if s > prevEnd:
        freeTime += s - prevEnd
    prevEnd = max(prevEnd, e)

freeTime += 1440 - prevEnd
print(freeTime)