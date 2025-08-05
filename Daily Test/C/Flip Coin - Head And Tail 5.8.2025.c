#include <stdio.h>
int main() {
    int n,h=0,t=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    char f; scanf(" %c",&f);
    for(int i=0;i<n;i++){
        if(a[i]%2) f=(f=='H'?'T':'H');
        if(f=='H') h++; else t++;
    }
    printf("%d %d",h,t);
}