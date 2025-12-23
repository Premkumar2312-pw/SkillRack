num = int(input())
val = 0
count = 0

while num > 0:
    if num % 10 != 0:
        val = val * 10 + (num % 10)
    else:
        count += 1
    num //= 10

while count > 0:
    val *= 10
    count -= 1

print(val)