s1 = input().strip()
s2 = input().strip()
pos = [s1.index(c) for c in s2]
print(s1[min(pos):max(pos)+1])