void findNextWordPosition(char *str)
{
    str[strlen(str)]=' ';
    char arr[30];
    int u = 0;

    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ') {
            arr[u++] = str[i-1];
        }
    }

    for (int i = 0; i < u; i++) {
        int f = 0;
        for (int j = i + 1; j < u; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", j + 1);
                f = 1;
                break;
            }
        }

        if (f == 0) {
            for (int k = 0; k <= i; k++) {
                if (arr[i] == arr[k]) {
                    printf("%d ", k + 1);
                    break;
                }
            }
        }
    }
}