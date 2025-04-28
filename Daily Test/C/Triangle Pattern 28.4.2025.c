#include <stdio.h>
#include <string.h>

int main() {
    int n, i = 1, p = 0, l;
    char s[10000] = "";
    scanf("%d", &n);
    while (strlen(s) < n * n) {
        char t[10];
        sprintf(t, "%d", i++);
        strcat(s, t);
    }
    for (l = 1; l <= n; l++) {
        for (int j = 0; j < n - l; j++) printf("*");
        for (int j = 0; j < 2 * l - 1; j++) printf("%c", s[p++]);
        printf("\n");
    }
}