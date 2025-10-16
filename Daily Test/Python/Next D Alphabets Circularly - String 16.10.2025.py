s=input().strip()
for i in range(len(s)):
    if s[i].isdigit():
        d=int(s[i]);cnt=0;j=i+1
        while cnt<d:
            if s[j%len(s)].isalpha():
                print(s[j%len(s)],end='');cnt+=1
            j+=1
        print()