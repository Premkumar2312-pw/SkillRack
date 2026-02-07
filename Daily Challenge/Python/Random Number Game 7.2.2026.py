n = int(input())
num = list(map(int, input().split()))
x = int(input())
y = x

for i in num:
    if i == x:
        x = x * 2

print(0 if y == x else x)