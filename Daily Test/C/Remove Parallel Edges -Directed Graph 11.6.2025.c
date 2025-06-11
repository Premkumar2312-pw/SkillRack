#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int m[n][n];

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &m[i][j]);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(m[i][j] && m[j][i]) {
                if(m[i][j] > m[j][i]) m[i][j] = 0;
                else m[j][i] = 0;
            }
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
    return 0;
}