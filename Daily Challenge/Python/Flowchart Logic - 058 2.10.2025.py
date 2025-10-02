n = int(input())
while n > 0:
    d = n % 10
    while d > 0:
        print(d, end = "")
        if n % 2 == 0:
            break
        d -= 1
    n = n // 10