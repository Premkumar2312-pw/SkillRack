#include <stdio.h>
#include <string.h>
int main(){
    char n[20],a[20],t; int q,x,y;
    scanf("%s%d",n,&q);
    strcpy(a,n);
    while(q--){
        scanf("%d%d",&x,&y);
        t=a[x-1]; a[x-1]=a[y-1]; a[y-1]=t;
    }
    if(strcmp(a,n)==0)printf("YES");
    else printf("%d",atoi(a)*2);
}