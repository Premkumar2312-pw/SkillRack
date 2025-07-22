char* hexCodeToString(char *hexCode) {
    char *res = (char *)malloc(strlen(hexCode) + 1);
    int i = 0;
    char *token = strtok(hexCode, " ");
    while (token != NULL) {
        int val;
        sscanf(token, "%x", &val);
        res[i++] = (char)val;
        token = strtok(NULL, " ");
    }
    res[i] = '\0';
    return res;
}