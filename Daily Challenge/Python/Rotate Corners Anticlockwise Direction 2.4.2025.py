n = int(input().strip())  
m = [input().split() for _ in range(n)]  

for l in range(n // 2):  
    a, b = l, n - l - 1  
    m[a][a], m[a][b], m[b][b], m[b][a] = m[a][b], m[b][b], m[b][a], m[a][a]  

for r in m:  
    print(" ".join(r))
