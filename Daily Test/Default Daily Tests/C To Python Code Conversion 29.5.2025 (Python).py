try:
    while True:
        line = input()
        words = line.split()
        for word in words:
            print(f"{len(word)} ", end="")
        print()
except EOFError:
    pass