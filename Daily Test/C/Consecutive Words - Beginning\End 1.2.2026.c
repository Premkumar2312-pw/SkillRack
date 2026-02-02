#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[100][100];
    int n = 0;

    while (scanf("%s", s[n]) != EOF) {
        n++;
    }

    for (int i = 1; i < n; i++) {
        if (strstr(s[i], s[i-1]) != NULL &&
            strlen(s[i]) == strlen(s[i-1]) + 1) {
            continue;
        } else {
            printf("NO");
            return 0;
        }
    }

    printf("YES");
    return 0;
}