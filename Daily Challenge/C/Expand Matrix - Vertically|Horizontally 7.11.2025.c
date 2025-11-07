#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int r, c, k;
    scanf("%d %d", &r, &c);
    char mat[r][c][101];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%s", mat[i][j]);
    scanf("%d", &k);

    if(k > 0) {
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                for(int t = 0; t < k; t++)
                    printf("%s ", mat[i][j]);
            }
            printf("
");
        }
    } else {
        int reps = atoi(&((char[]){0,0,0,0,0,0,0,0,0,0})[0]);
        sprintf((char*)&reps, "%d", k);
        reps = atoi(&((char*)&reps)[1]); // skip '-'
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < reps; j++) {
                for(int q = 0; q < c; q++)
                    printf("%s%s", mat[i][q], (q == c-1) ? "
" : " ");
            }
        }
    }
    return 0;
}