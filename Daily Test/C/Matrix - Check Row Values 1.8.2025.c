#include <stdio.h>

int main() {
    int r,c; scanf("%d%d",&r,&c);
    int n=r*c,a[r][c],freq[n+1]; 
    for(int i=1;i<=n;i++) freq[i]=0;
    
    for(int i=0;i<r;i++) 
        for(int j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
            if(a[i][j]>=1 && a[i][j]<=n) freq[a[i][j]]=1;
        }

    for(int i=1;i<=n;i++) if(!freq[i]){printf("No");return 0;}

    for(int i=0;i<r;i++){
        int l=i*c+1,h=(i+1)*c,ok=0;
        for(int j=0;j<c;j++)
            if(a[i][j]>=l && a[i][j]<=h){ok=1;break;}
        if(!ok){printf("No");return 0;}
    }
    printf("Yes");
    return 0;
}