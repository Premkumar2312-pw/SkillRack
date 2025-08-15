#include <stdio.h>
int main(){
    int a[100],n=0,x; 
    while(scanf("%d",&x)==1) a[n++]=x;
    int b[1000],k=0;
    for(int i=0;i<n;i++) b[k++]=a[i];
    for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) b[k++]=a[i]+a[j];
    for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) for(int m=j+1;m<n;m++) b[k++]=a[i]+a[j]+a[m];
    for(int i=0;i<k;i++) for(int j=i+1;j<k;j++) if(b[i]>b[j]){int t=b[i];b[i]=b[j];b[j]=t;}
    for(int i=0;i<k;i++) printf("%d ",b[i]);
}