num1, num2 = map(int, input().split())
while num1 > 0:
    num2 *= 10
    num2 += (num1 % 10)
    num1 //= 10
sum1 = num2
while num2 > 0:
    num1 *= 10
    num1 += (num2 % 10)
    num2 //= 10
sum1 += num1
print(sum1)