#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char s[n][2][100];
    for (int i = 0; i < n; i++) {
        scanf("%s %s", s[i][0], s[i][1]);
    }

    char c[100];
    scanf("%s", c);

    int found = 0;
    printf("%s -> ", c);
    for (int i = 0; i < n; i++) {
        if (strstr(s[i][0], c)) {
            printf("%s ", s[i][1]);
            found = 1;
        }
    }
    if (!found) printf("-1");

    found = 0;
    printf("\n%s <- ", c);
    for (int i = 0; i < n; i++) {
        if (strstr(s[i][1], c)) {
            printf("%s ", s[i][0]);
            found = 1;
        }
    }
    if (!found) printf("-1");

    return 0;
}