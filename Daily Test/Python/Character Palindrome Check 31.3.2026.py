from collections import Counter

s = input().strip()
count = Counter(s)

odd = 0
for v in count.values():
    if v % 2 != 0:
        odd += 1

print("yes" if odd <= 1 else "no")