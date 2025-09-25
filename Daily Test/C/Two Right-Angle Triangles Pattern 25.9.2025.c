#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            for (int j = 0; j < 2 * n - 2; j++) printf("-");
            printf("*\n");
        } 
        else if (i == n - 1) {
            int c = 0;
            for (int j = 0; j < 4 * (n - 1) + 1; j++) {
                if (c % 2 == 0) printf("*");
                else printf("-");
                c++;
            }
            printf("\n");
        } 
        else {
            for (int j = 0; j < 2 * (n - i) - 2; j++) printf("-");
            printf("*");
            for (int j = 0; j < 2 * i - 1; j++) printf("-");
            printf("*");
            for (int j = 0; j < 2 * i - 1; j++) printf("-");
            printf("*\n");
        }
    }
    return 0;
}