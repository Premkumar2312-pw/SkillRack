#include <stdio.h>
#include <limits.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int a[R][C];
    int min = INT_MAX, max = INT_MIN;
    int minR, minC, maxR, maxC;

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);

            if(a[i][j] < min) {
                min = a[i][j];
                minR = i; minC = j;
            }
            if(a[i][j] > max) {
                max = a[i][j];
                maxR = i; maxC = j;
            }
        }
    }

    int r1 = minR < maxR ? minR : maxR;
    int r2 = minR > maxR ? minR : maxR;
    int c1 = minC < maxC ? minC : maxC;
    int c2 = minC > maxC ? minC : maxC;

    for(int i = r1; i <= r2; i++) {
        for(int j = c1; j <= c2; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}