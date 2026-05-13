#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int dash = 1;
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        for(int k = 1; k <= dash; k++) {
            printf("-");
        }
        dash += 2;
        for(int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
