#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    char mat[MAX][MAX][10];
    int ass[MAX*MAX][2];
    int ass_size = 0;

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%s", mat[i][j]);

    for(int i = 0; i < c; i++)
        for(int j = 0; j < r; j++)
            if(strcmp(mat[j][i], "*") == 0) {
                ass[ass_size][0] = j;
                ass[ass_size][1] = i;
                ass_size++;
            }

    int var = 0, cnt = 0;

    for(int k = c-1; k >= 0; k--) {
        for(int l = 0; l < r; l++) {

            if(var >= ass_size) break;

            cnt++;
            int nx = ass[var][0];
            int ny = ass[var][1];

            if(strcmp(mat[l][k], "*") != 0) {
                strcpy(mat[nx][ny], mat[l][k]);
                strcpy(mat[l][k], "*");
                var++;
            }
        }
        if(cnt == ass_size) break;
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%s ", mat[i][j]);
        printf("\n");
    }

    return 0;
}