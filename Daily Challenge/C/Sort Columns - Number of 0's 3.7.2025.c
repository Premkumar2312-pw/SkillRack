#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int a[r][c], b[c][r], z[c], t[r][c];

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(j = 0; j < c; j++) {
        int cnt = 0;
        for(i = 0; i < r; i++)
            b[j][i] = a[i][j];
        qsort(b[j], r, sizeof(int), cmp);
        for(i = 0; i < r; i++)
            if(b[j][i] == 0) cnt++;
        z[j] = cnt;
    }

    for(i = 0; i < c - 1; i++)
        for(j = i + 1; j < c; j++)
            if(z[i] > z[j]) {
                int tmp = z[i]; z[i] = z[j]; z[j] = tmp;
                for(int k = 0; k < r; k++) {
                    int t = b[i][k]; b[i][k] = b[j][k]; b[j][k] = t;
                }
            }

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++)
            printf("%d ", b[j][i]);
        printf("\n");
    }
    return 0;
}