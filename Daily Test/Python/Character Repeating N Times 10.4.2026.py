s = input()
n = int(input())

freq = [0]*26

for ch in s:
    freq[ord(ch)-ord('a')] += 1

res = []
seen = set()

for ch in s:
    if freq[ord(ch)-ord('a')] == n and ch not in seen:
        res.append(ch)
        seen.add(ch)

print("".join(res))