#include <stdio.h>
int main(){
    int n,a[100],f=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n-2;i++)
        for(int j=i+1;j<n-1;j++)
            for(int k=j+1;k<n;k++)
                if(a[j]-a[i]==a[k]-a[j]){printf("%d %d %d\n",a[i],a[j],a[k]);f=1;}
    if(!f)printf("-1");
}