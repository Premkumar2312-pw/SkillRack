N = int(input()); triangle = 0
val = list(map(int, input().split()))
for i in range(len(val) - 2):
    a = val[i]; b = val[i+1]; c = val[i+2]
    if a + b > c and a + c > b and b + c > a:
        triangle += 1
print(triangle)