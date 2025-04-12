#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    char matrix[R][C][100];
    
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%s", matrix[i][j]);
    
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    char *target = matrix[X - 1][Y - 1];
    int len = strlen(target);
    int n = (int)sqrt(len);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%c ", target[i * n + j]);
        printf("\n");
    }
    
    return 0;
}