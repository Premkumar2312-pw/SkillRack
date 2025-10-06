s1, s2 = input().strip().lower(), input().strip().lower()
l1 = [i for i in s1]
l2 = [i for i in s2]
l3 = [s1[i] for i in range(0, len(l1), 2)]
l4 = [s1[i] for i in range(1, len(l1), 2)]
l5 = [s2[i] for i in range(0, len(l1), 2)]
l6 = [s2[i] for i in range(1, len(l1), 2)]
if s1 == s2:
    print("NO")
elif l3 == l5:
    print("YES")
elif l4 == l6:
    print("YES")
else:
    print("NO")