#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int m[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &m[i][j]);
    int a, b, x, y;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &x, &y);
    int rowStart = a < b ? a : b;
    int rowEnd = a > b ? a : b;
    int colStart = x < y ? x : y;
    int colEnd = x > y ? x : y;

    for (int i = rowStart; i < rowEnd - 1; i++) {
        for (int j = colStart; j < colEnd - 1; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }

    return 0;
}