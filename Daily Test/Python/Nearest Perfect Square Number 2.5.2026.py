n = int(input())

r = int(n**0.5)
l = r*r
u = (r+1)*(r+1)

print(l if n-l <= u-n else u)
