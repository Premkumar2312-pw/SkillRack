import shlex

s = input()
words = shlex.split(s)

for word in words:
    print(word)