#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    int a[100000], temp[100000];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    int days = 0;
    while(1){
        int k = 0, removed = 0;
        temp[k++] = a[0];

        for(int i=1;i<n;i++){
            if(a[i] > a[i-1]) removed = 1;
            else temp[k++] = a[i];
        }

        if(!removed) break;
        days++;
        n = k;
        for(int i=0;i<n;i++) a[i] = temp[i];
    }
    printf("%d", days);
    return 0;
}