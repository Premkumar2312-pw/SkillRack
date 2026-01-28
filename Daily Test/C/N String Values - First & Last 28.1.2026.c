#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d\n", &n);

    char s[100][1001];
    for (int i = 0; i < n; i++)
        fgets(s[i], 1001, stdin);

    for (int i = 0; i < n; i++) {
        int len = strlen(s[i]);
        if (s[i][len - 1] == '\n')
            s[i][len - 1] = '\0';
    }

    int k;
    scanf("%d", &k);

    bool done = false;

    while (!done) {
        done = true;

        for (int i = 0; i < n; i++) {
            int len = strlen(s[i]);

            if (len == 0) {
                k++;
                continue;
            }

            done = false;
            int take = (k < len) ? k : len;

            if (k > len)
                k++;

            if (i % 2 == 0) {
                for (int j = 0; j < take; j++)
                    printf("%c", s[i][j]);

                memmove(s[i], s[i] + take, len - take + 1);
            } else {
                for (int j = len - take; j < len; j++)
                    printf("%c", s[i][j]);

                s[i][len - take] = '\0';
            }
        }
    }
    return 0;
}