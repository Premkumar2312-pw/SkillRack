#include <stdio.h>
int main() {
    int r;
    scanf("%d", &r);
    int mat[r][r];
    for(int i=0;i<r;i++)
        for(int j=0;j<r;j++)
            scanf("%d", &mat[i][j]);

    for(int i=0;i<r;i++) {
        int row = 1, col = 1;
        for(int k=0;k<r;k++) {
            if(k!=i && mat[i][k]!=0) row=0;
            if(k!=i && mat[k][i]!=1) col=0;
        }
        if(row && col) {
            printf("%d", i+1);
            return 0;
        }
    }
    printf("-1");
    return 0;
}