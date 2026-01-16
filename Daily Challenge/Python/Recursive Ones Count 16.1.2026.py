s = input().strip()

while True:
    count = s.count('1')
    print(count, end='')

    if count == 1:
        break

    print(" ", end='')
    s = bin(count)[2:]