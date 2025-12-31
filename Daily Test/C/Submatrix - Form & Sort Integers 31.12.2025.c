#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int m[r][c];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&m[i][j]);

    int l[10000], idx=0;

    for(int i=0;i<r;i+=3){
        for(int j=0;j<c;j+=3){
            char a[50]="",b[50]="",d[50]="";
            for(int y=0;y<3;y++){
                char row[50]="";
                for(int n=0;n<3;n++){
                    char t[5];
                    sprintf(t,"%d",m[i+y][j+n]);
                    strcat(row,t);
                    if(n==0) strcat(a,t);
                    if(n==1) strcat(b,t);
                    if(n==2) strcat(d,t);
                }
                l[idx++]=atoi(row);
            }
            l[idx++]=atoi(a);
            l[idx++]=atoi(b);
            l[idx++]=atoi(d);
            l[idx++]=m[i][j]+m[i+1][j+1]+m[i+2][j+2];
            l[idx++]=m[i][j+2]+m[i+1][j+1]+m[i+2][j];
        }
    }

    for(int i=0;i<idx;i++)
        for(int j=i+1;j<idx;j++)
            if(l[i]>l[j]){
                int t=l[i]; l[i]=l[j]; l[j]=t;
            }

    for(int i=0;i<idx;i++)
        printf("%d ",l[i]);
}