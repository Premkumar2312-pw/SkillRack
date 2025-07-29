#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            for(int j = 0; j < n - 1 - i; j++) printf("-");
            for(int j = 0; j < n; j++) printf("*");
        } else if(i == n - 1) {
            for(int j = 0; j < n; j++) printf("*");
        } else {
            for(int j = 0; j < n - 1 - i; j++) printf("-");
            printf("*");
            for(int j = 0; j < n - 2; j++) printf("-");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}