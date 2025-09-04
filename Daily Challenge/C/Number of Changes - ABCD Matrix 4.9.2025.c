#include <stdio.h>
#include <string.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    char a[4] = {'A', 'B', 'C', 'D'};
    char mat[100][100][2]; 
    int res = 0;

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%s", mat[i][j]);

    for (int i = 0; i < R; i += 2) {
        for (int j = 0; j < C; j += 2) {
            int idx = 0;
            for (int k = i; k < i + 2; k++) {
                for (int l = j; l < j + 2; l++) {
                    if (mat[k][l][0] != a[idx]) res++;
                    idx++;
                }
            }
        }
    }

    printf("%d\n", res);
    return 0;
}