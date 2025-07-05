#include <stdio.h>

int main() {
    int r, c, m[50][50];
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &m[i][j]);
    int x, y, k;
    scanf("%d %d %d", &x, &y, &k);
    x--; y--;
    for (int i = 0; i < k / 2; i++) {
        for (int j = 0; j < k; j++) {
            int t = m[x + i][y + j];
            m[x + i][y + j] = m[x + k - 1 - i][y + j];
            m[x + k - 1 - i][y + j] = t;
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
    return 0;
}