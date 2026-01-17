n = int(input())

mp = {
    "zero":0,"one":1,"two":2,"three":3,"four":4,
    "five":5,"six":6,"seven":7,"eight":8,"nine":9
}

a = []

for _ in range(n):
    w, num = input().split()
    cur = ""
    val = 0
    for ch in w:
        cur += ch
        if cur in mp:
            val = val * 10 + mp[cur]
            cur = ""
    a.append((val, int(num)))

for i in range(n):
    for j in range(n):
        if a[i][0] == a[j][1]:
            print(j + 1, end=" ")