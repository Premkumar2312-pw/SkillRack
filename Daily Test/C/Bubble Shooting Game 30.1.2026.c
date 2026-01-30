#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf(" %c", &mat[i][j]);

    int m, miss = 0;
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        int flag = 1;
        char dir, color;
        int row;
        scanf(" %c %d %c", &dir, &row, &color);

        if (dir == 'T') {
            for (int j = 0; j < n; j++)
                if (mat[j][row - 1] == color) {
                    mat[j][row - 1] = '*';
                    flag = 0;
                    break;
                }
        } else if (dir == 'B') {
            for (int j = n - 1; j >= 0; j--)
                if (mat[j][row - 1] == color) {
                    mat[j][row - 1] = '*';
                    flag = 0;
                    break;
                }
        } else if (dir == 'L') {
            for (int j = 0; j < n; j++)
                if (mat[row - 1][j] == color) {
                    mat[row - 1][j] = '*';
                    flag = 0;
                    break;
                }
        } else if (dir == 'R') {
            for (int j = n - 1; j >= 0; j--)
                if (mat[row - 1][j] == color) {
                    mat[row - 1][j] = '*';
                    flag = 0;
                    break;
                }
        }

        if (flag) miss++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%c ", mat[i][j]);
        printf("\n");
    }

    printf("%d", miss);
    return 0;
}