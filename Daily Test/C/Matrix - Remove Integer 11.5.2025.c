#include <stdio.h>

int main() {
    int r, c, x, y;
    scanf("%d %d", &r, &c);
    int m[r][c], z[r * c], idx = 0;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &m[i][j]);

    scanf("%d %d", &x, &y);

    for (int j = 0; j < c; j++) {
        if (j % 2 == 0)
            for (int i = 0; i < r; i++) z[idx++] = m[i][j];
        else
            for (int i = r - 1; i >= 0; i--) z[idx++] = m[i][j];
    }

    int pos = (y - 1) * r + (x - 1) * (y % 2 == 1) + (r - x) * (y % 2 == 0);
    for (int i = pos; i < r * c - 1; i++) z[i] = z[i + 1];
    z[r * c - 1] = -1;

    idx = 0;
    for (int j = 0; j < c; j++) {
        if (j % 2 == 0)
            for (int i = 0; i < r; i++) m[i][j] = z[idx++];
        else
            for (int i = r - 1; i >= 0; i--) m[i][j] = z[idx++];
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }

    return 0;
}