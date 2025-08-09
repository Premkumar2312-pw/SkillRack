#include <stdio.h>
int main(){
    int n,x,s,i;
    scanf("%d",&n);
    for(x=1;x<=n;x++){
        s=x*x-(x-1)*2;
        for(i=s;i<=x*x;i+=2) printf("%d ",i);
        printf("\n");
    }
}