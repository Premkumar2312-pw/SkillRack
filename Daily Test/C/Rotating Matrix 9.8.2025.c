#include <stdio.h>
int main(){
    int n,x,i,j,k;scanf("%d%d",&n,&x);x%=4;
    int m[n][n],t[n][n];
    for(i=0;i<n;i++)for(j=0;j<n;j++)m[i][j]=i*n+j+1;
    while(x--){
        for(i=0;i<n;i++)for(j=0;j<n;j++)t[i][j]=m[n-j-1][i];
        for(i=0;i<n;i++)for(j=0;j<n;j++)m[i][j]=t[i][j];
    }
    int a=0,b=0,c=0,d=0;
    for(j=0;j<n;j++)a+=m[0][j];
    for(i=0;i<n;i++)b+=m[i][n-1];
    for(j=0;j<n;j++)c+=m[n-1][j];
    for(i=0;i<n;i++)d+=m[i][0];
    char w='A';int mx=a;
    if(b>mx){mx=b;w='B';}
    if(c>mx){mx=c;w='C';}
    if(d>mx){mx=d;w='D';}
    printf("%c %d",w,mx);
}