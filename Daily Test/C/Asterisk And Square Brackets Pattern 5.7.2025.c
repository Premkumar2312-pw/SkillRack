#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int h = 2 * (n - i);
        for (int j = 0; j < h; j++) printf("-");
        for (int j = 0; j < i; j++) printf("[");
        for (int j = 0; j < 2 * i - 1; j++) printf("*");
        for (int j = 0; j < i; j++) printf("]");
        for (int j = 0; j < h; j++) printf("-");
        printf("\n");
    }
    return 0;
}