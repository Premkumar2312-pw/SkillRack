x = int(input())
s = input().strip()

count = 0

for c in s:
    if c.lower() in "aeiou":
        print(c, end="")
        count += 1
    if count == x:
        break