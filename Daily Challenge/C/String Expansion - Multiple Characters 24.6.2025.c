#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);
    int p[50], len = 0;
    char ch[50];
    int i = 0, n = 0;

    while (s[i]) {
        if (isdigit(s[i])) {
            n = n * 10 + (s[i] - '0');
        } else if (isalpha(s[i])) {
            p[len] = n;
            ch[len++] = s[i];
            n = 0;
        }
        i++;
    }

    for (i = 0; i < len; i++) {
        for (int k = 0; k < p[i]; k++) {
            for (int j = i; j < len; j++) {
                printf("%c", ch[j]);
            }
        }
        printf("\n");
    }

    return 0;
}