s = input().strip()
if len(set(s)) != 2:
    print("NO")
else:
    for i in range(1, (len(s)-1)//2+1):
        if s[:i]==s[-i:] and set(s[:i])=={s[0]} and set(s[i:-i])=={s[i]} and s[i]!=s[0]:
            print("YES")
            break
    else:
        print("NO")