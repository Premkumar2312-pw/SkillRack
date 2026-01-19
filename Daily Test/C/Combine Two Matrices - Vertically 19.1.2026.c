#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&A[i][j]);

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&B[i][j]);

    int match = -1, kfirst = 0;

    for(int k=0;k<c;k++){
        int ok = 1;
        for(int i=0;i<r;i++)
            if(A[i][k] != B[i][0]) ok = 0;
        if(ok){ match = k; kfirst = 0; break; }
    }

    for(int k=0;k<c;k++){
        int ok = 1;
        for(int i=0;i<r;i++)
            if(A[i][k] != B[i][c-1]) ok = 0;
        if(ok){ match = k; kfirst = c-1; break; }
    }

    int s = (kfirst == 0) ? match : match - (c - 1);
    int mn = s < 0 ? s : 0;
    int mx = (s + c - 1 > c - 1) ? s + c - 1 : c - 1;
    int w = mx - mn + 1;

    int res[r][w];
    for(int i=0;i<r;i++)
        for(int j=0;j<w;j++)
            res[i][j]=0;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            res[i][-mn + j] += A[i][j];
            res[i][s - mn + j] += B[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<w;j++)
            printf("%d ",res[i][j]);
        printf("\n");
    }
}