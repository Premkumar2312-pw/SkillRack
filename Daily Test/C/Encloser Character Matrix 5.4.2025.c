#include <stdio.h>
#include <string.h>

int main() {
    int r, c, k;
    scanf("%d %d", &r, &c);
    char m[r][c][5];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%s", m[i][j]);
    scanf("%d", &k);

    int a = r + 2 * k, b = c + 2 * k;
    char g[a][b][5];
    memset(g, 0, sizeof(g));

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            strcpy(g[i + k][j + k], m[i][j]);

    for (int i = 0; i < a; i += k) {
        for (int j = 0; j < b; j += k) {
            char bv = ((i / k + j / k) % 2 == 0) ? '1' : '0';
            for (int x = i; x < i + k && x < a; x++) {
                for (int y = j; y < j + k && y < b; y++) {
                    if (strlen(g[x][y]) == 0)
                        sprintf(g[x][y], "%c", bv);
                }
            }
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++)
            printf("%s", g[i][j]);
        printf("\n");
    }
    return 0;
}