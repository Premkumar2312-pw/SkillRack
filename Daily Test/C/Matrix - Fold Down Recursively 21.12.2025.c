#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int **mat = malloc(r * sizeof(int*));
    for(int i = 0; i < r; i++) {
        mat[i] = malloc(c * sizeof(int));
        for(int j = 0; j < c; j++) scanf("%d", &mat[i][j]);
    }
    while(r % 2 == 0) {
        int **new = malloc((r/2) * sizeof(int*));
        for(int i = 0; i < r/2; i++) {
            new[i] = malloc(c * sizeof(int));
            for(int j = 0; j < c; j++) {
                new[i][j] = mat[i][j] + mat[r-1-i][j];
            }
        }
        for(int i = 0; i < r/2; i++) free(mat[i]);
        free(mat);
        mat = new; r /= 2;
        for(int i = r-1; i >= 0; i--) {
            for(int j = 0; j < c; j++) printf("%d ", mat[i][j]);
            printf("
");
        }
    }
    return 0;
}