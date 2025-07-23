n = int(input())
total = 0
for _ in range(n):
    b = input().strip()
    total += int(b, 2)

h = total // 3600
m = (total % 3600) // 60
s = total % 60

print(f"{h:02}:{m:02}:{s:02}")