n = int(input())

odd = 0
even = 0

while n > 0:
    if (n % 10) % 2 == 0:
        even += 1
    else:
        odd += 1
    n //= 10

print(max(odd, even))