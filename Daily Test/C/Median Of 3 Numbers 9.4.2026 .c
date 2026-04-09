#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int l[3]={a,b,c};

    for(int i=0;i<3;i++)
        for(int j=i+1;j<3;j++)
            if(l[i]>l[j]){
                int t=l[i]; l[i]=l[j]; l[j]=t;
            }

    int d=3/2;
    int e=l[d];

    int flag=0;
    for(int i=0;i<3;i++){
        if(i!=d && l[i]==e) flag=1;
    }

    if(!flag) printf("%d",e);
    else printf("-1");

    return 0;
}