#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    scanf("%s", s);
    int len = strlen(s);
    int a = (len + 1) / 2 - 1;

    for (int i = 1; i <= len; i += 2) {
        if (i == 1) {
            for (int j = 0; j < a; j++) printf("*");
            for (int j = 0; j < i; j++) printf("%c", s[j]);
            a--;
        } else {
            int n = i, c = i;
            while (n >= 1) {
                if (n == c) {
                    for (int j = 0; j < a; j++) printf("*");
                    for (int j = 0; j < n; j++) printf("%c", s[j]);
                } else {
                    for (int j = 0; j < a + a; j++) printf("*");
                    for (int j = 0; j < n; j++) printf("%c", s[j]);
                }
                n -= 2;
            }
        }
        a--;
        printf("\n");
    }
    return 0;
}