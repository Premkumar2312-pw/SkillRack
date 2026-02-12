import sys

entries = sys.stdin.read().strip().split("\n")

stack = []
result = []

for entry in entries:
    level = entry.count("\t")
    name = entry.replace("\t", "")

    while len(stack) > level:
        stack.pop()

    stack.append(name)

    if '.' in name:
        result.append("/".join(stack))

if not result:
    print(-1)
else:
    for path in result:
        print(path)