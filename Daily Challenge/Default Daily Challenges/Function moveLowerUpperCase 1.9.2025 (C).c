char* moveLowerUpperCase(char *str) {
    int len = strlen(str);
    char *res = malloc((len + 1) * sizeof(char));

    int idx = 0;
    for (int i = 0; i < len; i++) {
        if (islower(str[i])) {
            res[idx++] = str[i];
        }
    }
    for (int i = 0; i < len; i++) {
        if (!islower(str[i]) && !isupper(str[i])) {
            res[idx++] = str[i];
        }
    }
    for (int i = 0; i < len; i++) {
        if (isupper(str[i])) {
            res[idx++] = str[i];
        }
    }

    res[idx] = '\0';
    return res;
}