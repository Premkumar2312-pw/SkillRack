#include <stdio.h>
#include <limits.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int mat[r][c];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    for(int j = 0; j < c; j++) {
        int max = INT_MIN;

        for(int i = 0; i < r; i++) {
            if(mat[i][j] > max)
                max = mat[i][j];
        }

        printf("%d ", max);
    }

    return 0;
}