long long int everyTwoDigitsToInteger(int N) {
    char s[15];
    long long t = 0, v;
    int i = 0, j, a, b, d, l = sprintf(s, "%d", N);
    for (; i < l - 1; i++, t += v)
        for (a = s[i]-48, b = s[i+1]-48, d = a < b ? 1 : -1, v = 0, j = a; v = v * 10 + j, j != b; j += d);
    return t;
}