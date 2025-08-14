#include <stdio.h>
int main(){
    int r,c,i,j,t[10000],n=0,x;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
        if(a[i][j]%2) t[n++]=a[i][j];
    }
    for(i=0;i<n-1;i++)for(j=i+1;j<n;j++)if(t[i]>t[j]){x=t[i];t[i]=t[j];t[j]=x;}
    x=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]%2) printf("%d ",t[x++]); else printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}