#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C], i, j, x, y;
    char res[R][C];
    int dir[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
    
    for(i=0;i<R;i++)
        for(j=0;j<C;j++) {
            scanf("%d", &a[i][j]);
            res[i][j] = '0';
        }

    for(i=0;i<R;i++) {
        for(j=0;j<C;j++) {
            if(a[i][j] == 1) {
                res[i][j] = 'C';
                for(int d=0;d<8;d++) {
                    x = i + dir[d][0];
                    y = j + dir[d][1];
                    if(x>=0 && x<R && y>=0 && y<C)
                        res[x][y] = 'C';
                }
            }
        }
    }

    for(i=0;i<R;i++) {
        for(j=0;j<C;j++)
            printf("%c ", res[i][j]);
        printf("\n");
    }
    return 0;
}