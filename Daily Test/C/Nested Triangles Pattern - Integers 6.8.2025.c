#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("*");
        for(int j=1;j<=i;j++) printf("%d",j);
        for(int j=i-1;j>0;j--) printf("%d",j);
        if(i) printf("*");
        printf("\n");
    }
    for(int i=n-1;i>=0;i--){
        printf("*");
        for(int j=1;j<=i;j++) printf("%d",j);
        for(int j=i-1;j>0;j--) printf("%d",j);
        if(i) printf("*");
        printf("\n");
    }
}