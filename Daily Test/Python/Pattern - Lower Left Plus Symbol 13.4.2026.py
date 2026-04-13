m = int(input())
num = m

for i in range(1, m+1):
    
    # print '+'
    for j in range(1, i):
        print("+", end=" ")
    
    # print numbers
    for j in range(num):
        print(num, end=" ")
    
    print()
    num -= 1