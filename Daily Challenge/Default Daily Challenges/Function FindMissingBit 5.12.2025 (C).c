int FindMissingBit(char *str, int X)
{
    int x = X;
    int p = strlen(str);
    while (x > 0) {
        int r = x % 2;

        if ((r + '0') != str[p - 1]) {
            return r;
        }
        p--;
        x = x / 2;
    }
}