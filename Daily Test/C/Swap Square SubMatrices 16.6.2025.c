#include <stdio.h>

int main() {
    int r, c, k, i, j;
    scanf("%d %d %d", &r, &c, &k);
    char m[r][c];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf(" %c", &m[i][j]);

    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);
    r1--; c1--; r2--; c2--;
    int hk = k / 2;

    char s1[k][k], s2[k][k];

    for (i = -hk; i <= hk; i++)
        for (j = -hk; j <= hk; j++) {
            s1[i + hk][j + hk] = m[r1 + i][c1 + j];
            s2[i + hk][j + hk] = m[r2 + i][c2 + j];
        }

    for (i = -hk; i <= hk; i++)
        for (j = -hk; j <= hk; j++) {
            m[r1 + i][c1 + j] = s2[i + hk][j + hk];
            m[r2 + i][c2 + j] = s1[i + hk][j + hk];
        }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%c ", m[i][j]);
        printf("\n");
    }
    return 0;
}