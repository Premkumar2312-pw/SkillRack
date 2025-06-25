char* encryptPAN(char *str) {
    char rev[] = "zyxwvtsrqpnmlkjhgfdcb";
    int i = 0, k = 0;
    char *res = (char*)malloc(2 * strlen(str) + 1);

    while (str[i]) {
        char c = str[i];

        if (strchr("AEIOUaeiou", c)) {
            // Skip vowel
        }
        else if (isalpha(c)) {
            res[k++] = '*';

            if (isupper(c) && !strchr("AEIOU", c)) {
                int p = 0;
                for (char ch = 'A'; ch < c; ch++) {
                    if (!strchr("AEIOU", ch)) p++;
                }
                res[k++] = rev[p];
            } else {
                res[k++] = c;
            }
        }
        else {
            res[k++] = c;
        }

        i++;
    }

    res[k] = '\0';
    return res;
}
