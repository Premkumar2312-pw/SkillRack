n = int(input())
s = input().strip()
m = list(map(int, input().split()))

words = []
i = 0
for l in m:
    words.append(s[i:i+l])
    i += l

# Python’s sort is stable -> preserves order for equal lengths
words.sort(key=len)

print(''.join(words))