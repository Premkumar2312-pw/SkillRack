#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int t[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            int value;
            scanf("%d", &value);
            t[i][j] = value;
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0)
                t[i][j] += t[i - 1][j];
            else if (j == i)
                t[i][j] += t[i - 1][j - 1];
            else
                t[i][j] += (t[i - 1][j - 1] > t[i - 1][j]) ? t[i - 1][j - 1] : t[i - 1][j];
        }
    }

    int maxSum = t[n - 1][0];
    for (int i = 1; i < n; i++) {
        if (t[n - 1][i] > maxSum)
            maxSum = t[n - 1][i];
    }

    printf("%d\n", maxSum);
    return 0;
}