s=input().strip().lower()
w={'a':0,'b':1}
for i in range(2,26):
    w[chr(ord('a')+i)]=w[chr(ord('a')+i-2)]+w[chr(ord('a')+i-1)]
print(sum(w[c] for c in s))
