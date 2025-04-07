#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int m[r][c];
    
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &m[i][j]);

    int x, y;
    scanf("%d %d", &x, &y);
    x--; y--;

    for (int i = 0; i < c; i++) {
        int a = m[x][i];
        int b = m[y][c - 1 - i];
        printf("%d ", a * b);
    }
    return 0;
}