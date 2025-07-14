#include <stdio.h>
#define MAX 50
int min(int a, int b, int c, int d) {
    int m=a;
    if(b<m) m=b;
    if(c<m) m=c;
    if(d<m) m=d;
    return m;
}
int main() {
    int r,c,i,j,a=0;
    scanf("%d %d",&r,&c);
    int m[MAX][MAX],u[MAX][MAX]={0},d[MAX][MAX]={0},l[MAX][MAX]={0},ri[MAX][MAX]={0};
    for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&m[i][j]);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            if(m[i][j]==1){
                u[i][j]=1+(i?u[i-1][j]:0);
                l[i][j]=1+(j?l[i][j-1]:0);
            }
    for(i=r-1;i>=0;i--)
        for(j=c-1;j>=0;j--)
            if(m[i][j]==1){
                d[i][j]=1+(i<r-1?d[i+1][j]:0);
                ri[i][j]=1+(j<c-1?ri[i][j+1]:0);
            }
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            if(m[i][j]==1){
                int x=min(u[i][j],d[i][j],l[i][j],ri[i][j]);
                if(x>a) a=x;
            }
    printf("%d\n",a>=2?a:-1);
    return 0;
}