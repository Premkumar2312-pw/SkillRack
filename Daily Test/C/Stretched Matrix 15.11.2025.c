#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n, x, a;
    scanf("%d", &n);
    char mat1[n][n][101];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%s", mat1[i][j]);
    scanf("%d", &x);
    char mat2[x][x][101];
    for (int i = 0; i < x; i++)
        for (int j = 0; j < x; j++)
            scanf("%s", mat2[i][j]);
    a = x / n;

    for (int i = 0; i < x; i += a) {
        for (int j = 0; j < x; j += a) {
            for (int k = i; k < i + a; k++) {
                for (int l = j; l < j + a; l++) {
                    if (strcmp(mat1[i / a][j / a], mat2[k][l]) != 0) {
                        printf("No
");
                        return 0;
                    }
                }
            }
        }
    }
    printf("Yes
");
    return 0;
}