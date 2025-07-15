#include <stdio.h>

int main() {
    int r, c, k;
    scanf("%d %d", &r, &c);
    int m[r][c];
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            scanf("%d", &m[i][j]);
    scanf("%d", &k);
    k %= 4;

    int a[r/2][c/2], b[r/2][c/2], c1[r/2][c/2], d[r/2][c/2];
    for(int i=0; i<r/2; i++)
        for(int j=0; j<c/2; j++) {
            a[i][j] = m[i][j];
            b[i][j] = m[i][j+c/2];
            c1[i][j] = m[i+r/2][j];
            d[i][j] = m[i+r/2][j+c/2];
        }

    while(k--) {
        int tmp[r/2][c/2];
        // rotate: a <- c1, c1 <- d, d <- b, b <- a
        for(int i=0; i<r/2; i++)
            for(int j=0; j<c/2; j++) tmp[i][j] = a[i][j];

        for(int i=0; i<r/2; i++)
            for(int j=0; j<c/2; j++) a[i][j] = c1[i][j];

        for(int i=0; i<r/2; i++)
            for(int j=0; j<c/2; j++) c1[i][j] = d[i][j];

        for(int i=0; i<r/2; i++)
            for(int j=0; j<c/2; j++) d[i][j] = b[i][j];

        for(int i=0; i<r/2; i++)
            for(int j=0; j<c/2; j++) b[i][j] = tmp[i][j];
    }

    for(int i=0; i<r/2; i++) {
        for(int j=0; j<c/2; j++) printf("%d ", a[i][j]);
        for(int j=0; j<c/2; j++) printf("%d ", b[i][j]);
        printf("\n");
    }
    for(int i=0; i<r/2; i++) {
        for(int j=0; j<c/2; j++) printf("%d ", c1[i][j]);
        for(int j=0; j<c/2; j++) printf("%d ", d[i][j]);
        printf("\n");
    }
    return 0;
}
