#include <stdio.h>

int main() {
    int n, k = 2, underscore = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int l = k;
        for (int j = 0; j < k; j++) {
            for (int u = 0; u < underscore; u++) {
                printf("-");
            }
            for (int s = 0; s < l; s++) {
                printf("* ");
            }
            printf("\n");
            l--;
            underscore++;
        }
        k++;
    }
    return 0;
}