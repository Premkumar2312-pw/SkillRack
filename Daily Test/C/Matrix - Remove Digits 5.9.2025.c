#include <stdio.h>
#include <string.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int mat[R][C];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &mat[i][j]);

    int res = 0;
    for (int i = 0; i < C; i++) {
        int small = mat[0][i];
        for (int j = 1; j < R; j++)
            if (mat[j][i] < small) small = mat[j][i];

        int len = snprintf(NULL, 0, "%d", small);

        for (int j = 0; j < R; j++) {
            char str[20];
            sprintf(str, "%d", mat[j][i]);
            str[len] = '\0';
            sscanf(str, "%d", &mat[j][i]);
            res += mat[j][i];
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    printf("%d\n", res);
    return 0;
}