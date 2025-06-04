#include <stdio.h>
#include <string.h>

int main() {
    int m, n, r, c;
    scanf("%d %d", &m, &n);

    char a[m][n][101];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%s", a[i][j]);

    scanf("%d %d", &r, &c);
    char b[r][c][101];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%s", b[i][j]);

    int k = m < n ? (m < r ? (m < c ? m : c) : (r < c ? r : c)) : (n < r ? (n < c ? n : c) : (r < c ? r : c));
    int found = 0;

    for (int s = k; s > 0 && !found; s--) {
        int ok = 1;
        for (int i = 0; i < s && ok; i++) {
            for (int j = 0; j < s; j++) {
                if (strcmp(a[m - s + i][n - s + j], b[r - s + i][c - s + j]) != 0) {
                    ok = 0;
                    break;
                }
            }
        }
        if (ok) {
            for (int i = m - s; i < m; i++) {
                for (int j = n - s; j < n; j++) {
                    printf("%s", a[i][j]);
                    if (j != n - 1) printf(" ");
                }
                printf("\n");
            }
            found = 1;
        }
    }

    if (!found) printf("-1\n");

    return 0;
}