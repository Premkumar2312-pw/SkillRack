n = int(input())
l = input().split()
l1 = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
for i in l:
    c = ""
    for j in range(len(i)):
        if i[j].isalpha():
            d = ""
            for k in range(j, len(i)):
                if i[k].isalpha():
                    d += i[k]
                    break
            for h in range(len(l1)):
                if l1[h].startswith(d):
                    c = str(h)
                    break
        elif i[j].isdigit():
            c = i[j]
    s = int(c)
    print(s)