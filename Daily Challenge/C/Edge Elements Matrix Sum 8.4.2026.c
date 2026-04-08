#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int mat[R][C];
    int sum = 0;

    for(int i = 0; i < R; i++)
        for(int j = 0; j < C; j++)
            scanf("%d", &mat[i][j]);

    for(int i = 0; i < R; i++)
        for(int j = 0; j < C; j++)
            if(i == 0 || i == R-1 || j == 0 || j == C-1)
                sum += mat[i][j];

    printf("%d\n", sum);
    return 0;
}