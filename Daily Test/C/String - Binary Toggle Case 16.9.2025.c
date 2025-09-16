#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[101];
    int k;
    scanf("%s", str);
    scanf("%d", &k);

    char bin[128];
    int idx = 0;
    while (k > 0) {
        bin[idx++] = (k % 2) + '0';
        k /= 2;
    }
    for (int i = 0; i < idx / 2; i++) {
        char t = bin[i];
        bin[i] = bin[idx - 1 - i];
        bin[idx - 1 - i] = t;
    }
    bin[idx] = '\0';

    int n = strlen(bin);
    int len = strlen(str);

    char result[201] = "";
    for (int i = 0; i < n; i++) {
        if (bin[i] == '0')
            strncat(result, (char[]){(char)tolower(str[i]), '\0'}, 1);
        else
            strncat(result, (char[]){(char)toupper(str[i]), '\0'}, 1);
    }
    strcat(result, str + n);
    printf("%s\n", result);

    int m = len - n;
    char res[201] = "";
    strncat(res, str, m);

    for (int i = 0; i < n; i++) {
        if (bin[i] == '0')
            strncat(res, (char[]){(char)tolower(str[i + m]), '\0'}, 1);
        else
            strncat(res, (char[]){(char)toupper(str[i + m]), '\0'}, 1);
    }
    printf("%s\n", res);
    return 0;
}