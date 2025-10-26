s = input().strip()
L = ['zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine']
i = 0
while i < len(s):
    if s[i].isdigit():
        print(s[i], end="")
        i += 1
    else:
        p = ''
        while i < len(s) and s[i].isalpha():
            p += s[i]
            i += 1
        for j in range(len(L)):
            if p == L[j]:
                print(j, end="")
                break