#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n*n; i++) {
        for (int j = 0; j < n*n; j++)
            printf("%c", (i % n == j % n) ? '*' : '-');
        printf("\n");
    }
    return 0;
}