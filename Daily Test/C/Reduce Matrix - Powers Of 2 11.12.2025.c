#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[64][64];          /* adjust max size if needed */

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    while (n > 1) {
        int b[64][64];
        int new_n = n / 2;

        for (int i = 0; i < n; i += 2) {
            for (int j = 0; j < n; j += 2) {
                int s = a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1];
                b[i/2][j/2] = s;
            }
        }

        for (int i = 0; i < new_n; i++) {
            for (int j = 0; j < new_n; j++)
                printf("%d ", b[i][j]);
            printf("
");
        }

        n = new_n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                a[i][j] = b[i][j];
    }
    return 0;
}