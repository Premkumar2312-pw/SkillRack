#include <stdio.h>
#include <string.h>

int main() {
    int n, l;
    scanf("%d", &n);

    char grid[n][n][2];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%s", grid[i][j]);

    scanf("%d", &l);

    int r[n], c[n];
    memset(r, 0, sizeof(r));
    memset(c, 0, sizeof(c));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j][0] == '*') {
                r[i]++;
                c[j]++;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i <= n - l; i++) {
        int sr = 0, sc = 0;
        for (int k = i; k < i + l; k++) {
            sr += r[k];
            sc += c[k];
        }
        if (sr > ans) ans = sr;
        if (sc > ans) ans = sc;
    }

    printf("%d", ans);
    return 0;
}