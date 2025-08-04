#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    int start=-1, minLen=n+1, lastStart=-1, lastLen=0;
    for(int i=0;i<=n;i++){
        int val = (i<n ? a[i] : 0);
        if(val>=100){
            if(start==-1) start=i;
        } else if(start!=-1){
            int len = i-start;
            if(len<minLen){ minLen=len; lastStart=start; lastLen=len; minLen=len; }
            else if(len==minLen){ lastStart=start; lastLen=len; }
            start=-1;
        }
    }

    double sum=0;
    for(int i=lastStart;i<lastStart+lastLen;i++) sum+=a[i];
    printf("%.2f", sum/lastLen);
    return 0;
}