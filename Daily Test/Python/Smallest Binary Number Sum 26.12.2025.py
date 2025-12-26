n = int(input())
sum_ = 0

for _ in range(n):
    x = int(input())
    k = 1
    while True:
        bin_str = bin(k)[2:]
        dec = int(bin_str)
        if dec % x == 0:
            sum_ += k
            break
        k += 1

print(sum_)