#include <stdio.h>
int main() {
    int n; scanf("%d", &n);
    int x = 1;
    for(int i=1; i<n; i++) {
        for(int j=0;j<i-1;j++) printf("*");
        printf("%d\n", x++);
    }
    for(int i=x+n-1;i>=x;i--) printf("%d", i);
    printf("\n"); x+=n;
    for(int i=1;i<n;i++) {
        for(int j=0;j<i;j++) printf("*");
        printf("%d\n", x++);
    }
}