#include <stdio.h>
#include <string.h>

int main() {
    char str[100][100];
    int n = 0;

    while (scanf("%s", str[n]) != EOF) n++;

    char ans[1000];
    strcpy(ans, str[0]);

    for (int i = 1; i < n; i++) {
        int al = strlen(ans);
        int cl = strlen(str[i]);

        for (int k = (al < cl ? al : cl); k >= 0; k--) {
            if (strncmp(ans + al - k, str[i], k) == 0) {
                strcat(ans, str[i] + k);
                break;
            }
        }
    }

    printf("%s", ans);
    return 0;
}