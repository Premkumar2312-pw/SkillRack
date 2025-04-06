#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int t[n][n];

    for (int i = 0; i < n; i++) {
        t[i][0] = t[i][i] = 1;
        for (int j = 1; j < i; j++)
            t[i][j] = t[i-1][j-1] + t[i-1][j];
    }

    for (int i = 0; i < n; i++) {
        for (int s = 0; s < n - i - 1; s++) printf("-");
        for (int j = 0; j <= i; j++)
            printf(j < i ? "%d * " : "%d", t[i][j]);
        printf("\n");
    }
    return 0;
}