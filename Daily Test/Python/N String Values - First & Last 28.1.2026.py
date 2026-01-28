n = int(input())
s = [input() for _ in range(n)]
k = int(input())

done = False

while not done:
    done = True

    for i in range(n):
        if len(s[i]) == 0:
            k += 1
            continue

        done = False
        take = min(k, len(s[i]))

        if k > len(s[i]):
            k += 1

        if i % 2 == 0:
            print(s[i][:take], end="")
            s[i] = s[i][take:]
        else:
            print(s[i][-take:], end="")
            s[i] = s[i][:-take]