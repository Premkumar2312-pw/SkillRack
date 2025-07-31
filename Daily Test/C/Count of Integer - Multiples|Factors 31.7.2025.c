#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    int a[n],c=0;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int f=0;
        for(int j=0;j<n;j++)
            if(i!=j && (a[i]%a[j]==0 || a[j]%a[i]==0)) { f=1; break; }
        c+=f;
    }
    printf("%d",c);
}