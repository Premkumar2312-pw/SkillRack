#include <stdio.h>
int main(){
    int n,k,i,j,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<k;i++) for(j=k;j<n;j++) a[j]+=a[j]%a[i];
    for(i=0;i<n;i++) printf("%d ",a[i]);
}