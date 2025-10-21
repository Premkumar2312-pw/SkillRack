def main():
    try:
        N1, N2, N3 = map(int, input().split())
    except ValueError:
        return

    ctr = N2
    while ctr >= N1 or ctr <= N3:
        if ctr == 1:
            print(ctr, end=' ')
        else:
            print(1, end=' ')

        if ctr <= N3:
            print(N2, end=' ')
        else:
            print(N3, end=' ')
        print()

        ctr = 1
        ctr += 1
        if ctr > N3:
            break

if __name__ == "__main__":
    main()