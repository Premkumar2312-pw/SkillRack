#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char l[100][500];
    int len[100];
    int c = 1;
    char g[500] = "";

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            int k = 0;
            l[i][k++] = '*';
            for (int x = 0; x < n*2-2; x++) l[i][k++] = '-';
            l[i][k] = '\0';
            strrev(l[i]);
            len[i] = strlen(l[i]);
        }
        else if (i < n-1) {
            char p[500] = "*";
            for (int x = 0; x < c; x++) strcat(p, "-");
            strcat(p, "*");
            for (int x = 0; x < c; x++) strcat(p, "-");
            strcat(p, "*");

            int need = len[i-1] - strlen(p) + 2;
            for (int x = 0; x < need; x++) strcat(p, "-");

            strcpy(l[i], p);
            strrev(l[i]);
            len[i] = strlen(l[i]);
            c += 2;
        }
        else {
            for (int j = 0; j < len[i-1] + 2; j++) {
                if (j % 2 == 0) strcat(g, "*");
                else strcat(g, "-");
            }
        }
    }

    for (int i = 0; i < n; i++) printf("%s\n", l[i]);
    printf("%s\n", g);
    for (int i = n-1; i >= 0; i--) printf("%s\n", l[i]);

    return 0;
}