#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[10000];
    int n;
    scanf("%s", s);
    scanf("%d", &n);

    char l1[10000] = "", l2[10000] = "";
    int i;

    for (i = 0; s[i]; i++) {
        if (isalpha(s[i])) {
            int len = strlen(l1);
            l1[len] = s[i];
            l1[len + 1] = '\0';
        } else {
            int len = strlen(l2);
            l2[len] = s[i];
            l2[len + 1] = '\0';
        }
    }

    int a = strlen(l1) / (n * n);
    int b = strlen(l2) / (n * n);
    int c = a, d = b;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = c - a; k < c; k++)
                printf("%c", l1[k]);
            printf(" ");
            c += a;
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = d - b; k < d; k++)
                printf("%c", l2[k]);
            printf(" ");
            d += b;
        }
        printf("\n");
    }

    return 0;
}