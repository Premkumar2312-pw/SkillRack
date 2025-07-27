#include <stdio.h>
#include <string.h>

int main() {
    char w[1000][100], c[1000][100], r[1000][100];
    int n = 0, rc = 0, cc = 0;
    while (scanf("%s", w[n]) != EOF) {
        if (strcmp(w[n], "Ctrl+C") == 0) {
            cc = rc;
            for (int i = 0; i < rc; i++) strcpy(c[i], r[i]);
        } else if (strcmp(w[n], "Ctrl+V") == 0) {
            for (int i = 0; i < cc; i++) strcpy(r[rc++], c[i]);
        } else strcpy(r[rc++], w[n]);
        n++;
    }
    for (int i = 0; i < rc; i++) printf("%s ", r[i]);
    return 0;
}