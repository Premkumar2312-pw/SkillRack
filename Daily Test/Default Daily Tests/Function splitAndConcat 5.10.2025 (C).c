char* splitAndConcat(char *s)
{
    char *s1 = malloc(strlen(s) + 2), s2[100];
    int m = 0, n = 0, p = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') {
            m++;
            int f = 0;
            for (int j = 0; j < p; j++) {
                if (j < p / 2)
                    s1[n++] = s2[j];
                else {
                    if (f == 0) s1[n++] = ' ';
                    s1[n++] = s2[j];
                    f = 1;
                }
            }
            s2[0] = '';
            p = 0;
        } else {
            s2[p++] = s[i];
        }
    }
    int f = 0;
    for (int k = 0; k < p; k++) {
        if (k < p / 2)
            s1[n++] = s2[k];
        else {
            if (f == 0) s1[n++] = ' ';
            s1[n++] = s2[k];
            f = 1;
        }
    }
    return s1;
}