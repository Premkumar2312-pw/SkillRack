S = input().strip()
st = []
for i in S:
    if i.isalpha():
        st.append(i)
    else:
        print(st[0] * int(i), end='')
        st.pop(0)
