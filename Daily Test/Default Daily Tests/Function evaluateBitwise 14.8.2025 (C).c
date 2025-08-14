
char* evaluateBitwise(char s1[], char s2[], char op) {
    static char r[1001];
    int n = strlen(s1);
    for (int i = 0; i < n; i++) {
        int x = (s1[i] == 'b');
        int y = (s2[i] == 'b');
        int z;
        if (op == '&') z = x & y;
        else if (op == '|') z = x | y;
        else if (op == '^') z = x ^ y;
        r[i] = (z == 1) ? 'b' : 'a';
    }
    r[n] = '\0';
    return r;
}