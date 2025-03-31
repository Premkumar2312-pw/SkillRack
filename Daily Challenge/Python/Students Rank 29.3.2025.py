x = int(input().strip())  
m = list(map(int, input().strip().split()))  
n = int(input().strip())  

sm = sorted(set(m), reverse=True)  
r = {s: i+1 for i, s in enumerate(sm)}  

print(r[m[n-1]])
