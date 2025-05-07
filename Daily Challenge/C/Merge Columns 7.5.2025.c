#include <stdio.h>

int main() {
    int r, c, l;
    scanf("%d %d", &r, &c);
    int m[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &m[i][j]);

    scanf("%d", &l);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < (l <= c / 2 ? c - l : l); j++) {
            int x = l - j - 1, y = l + j;
            if (x >= 0 && y < c)
                printf("%d ", m[i][x] + m[i][y]);
            else if (y >= c)
                printf("%d ", m[i][x]);
            else
                printf("%d ", m[i][y]);
        }
        printf("\n");
    }
    return 0;
}