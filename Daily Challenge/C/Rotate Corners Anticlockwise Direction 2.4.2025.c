#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char m[n][n][10];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%s", m[i][j]);

    for (int l = 0; l < n / 2; l++) {
        int a = l, b = n - l - 1;
        char temp[10];

        // Swap elements
        strcpy(temp, m[a][a]);
        strcpy(m[a][a], m[a][b]);
        strcpy(m[a][b], m[b][b]);
        strcpy(m[b][b], m[b][a]);
        strcpy(m[b][a], temp);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%s ", m[i][j]);
        printf("\n");
    }

    return 0;
}