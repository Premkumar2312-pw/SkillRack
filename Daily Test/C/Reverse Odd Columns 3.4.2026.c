#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int mat[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j % 2 == 0)
                printf("%d ", mat[n-1-i][j]);
            else
                printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}