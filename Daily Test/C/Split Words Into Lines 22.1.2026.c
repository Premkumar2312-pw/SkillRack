#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char line[1000];
    fgets(line, sizeof(line), stdin);

    int k;
    scanf("%d", &k);

    char *w[200];
    int n = 0;
    w[n] = strtok(line, " \n");
    while (w[n]) w[++n] = strtok(NULL, " \n");

    int c = 0;
    for (int i = 0; i < n; i++) {
        int len = strlen(w[i]);
        c += len + (c > 0);

        if (len > k) {
            printf("NO");
            return 0;
        }

        if (i == n - 1) {
            printf(c <= k ? "YES" : "NO");
        }
        else if (c + 1 + strlen(w[i + 1]) > k) {
            if (c == k || c == k - 1)
                c = 0;
            else {
                printf("NO");
                return 0;
            }
        }
    }
}