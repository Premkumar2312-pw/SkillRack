#include <stdio.h>
int main(){
    int n,p,x,y;
    scanf("%d%d",&n,&p);
    while(n--){
        scanf("%d%d",&x,&y);
        if(p==x)p=y;
        else if(p==y)p=x;
    }
    printf("%d",p);
}