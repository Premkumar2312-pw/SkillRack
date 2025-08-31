#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    char mat[R][C][10];

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%s", mat[i][j]);
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (isdigit(mat[i][j][0])) continue;
            if (mat[i][j][0] == '+') {
                int up = atoi(mat[i-1][j]);
                int down = atoi(mat[i+1][j]);
                sprintf(mat[i][j], "%d", up + down);
            } else {
                int up = atoi(mat[i-1][j]);
                int down = atoi(mat[i+1][j]);
                sprintf(mat[i][j], "%d", abs(up - down));
            }
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("%s ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}