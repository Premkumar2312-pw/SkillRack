n = int(input())
max_v = 0
res = ""

for _ in range(n):
    s = input()
    count = sum(1 for c in s.lower() if c in "aeiou")
    
    if count > max_v:
        max_v = count
        res = s

print(res)