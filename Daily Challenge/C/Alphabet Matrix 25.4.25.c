#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int weight(char ch) {
    return tolower(ch) - 'a' + 1;
}

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    char mat[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf(" %c", &mat[i][j]);

    int a, b, x, y;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &x, &y);
    a--; b--; x--; y--;

    int sum1 = 0, sum2 = 0;
    if (a == x) {
        int e = b < y ? b : y, f = b > y ? b : y;
        for (int j = e; j <= f; j++) sum1 += weight(mat[a][j]);
    } else if (b == y) {
        int e = a < x ? a : x, f = a > x ? a : x;
        for (int i = e; i <= f; i++) sum1 += weight(mat[i][b]);
    } else {
        int minR = a < x ? a : x, maxR = a > x ? a : x;
        int minC = b < y ? b : y, maxC = b > y ? b : y;
        for (int i = minR; i <= maxR; i++) sum1 += weight(mat[i][b]);
        for (int j = minC; j <= maxC; j++) if (j != b) sum1 += weight(mat[x][j]);
        for (int j = minC; j <= maxC; j++) sum2 += weight(mat[a][j]);

        for (int i = minR; i <= maxR; i++) if (i != a) sum2 += weight(mat[i][y]);
        sum1 = sum1 < sum2 ? sum1 : sum2;
    }
    printf("%d\n", sum1);
    return 0;
}