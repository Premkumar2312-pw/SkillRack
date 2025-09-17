struct Date* getDateFromString(char *s) {
    struct Date* d = malloc(sizeof(struct Date));
    char e[25];
    int j = 0;
    int length = strlen(s);
    for (int I = 0; I <= length; I++) {
        if (s[I] == '-' || s[I] == '') {
            e[j] = '';
            if (strlen(e) == 2) {
                d->day = atoi(e);
            } else if (strlen(e) == 4) {
                d->year = atoi(e);
            } else if (strlen(e) == 3) {
                strcpy(d->month, e);
            }
            j = 0;
        } else {
            e[j++] = s[I];
        }
    }
    return d;
}