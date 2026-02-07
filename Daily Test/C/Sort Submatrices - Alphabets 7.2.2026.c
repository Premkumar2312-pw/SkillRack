#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    return strcmp(*(char **)a, *(char **)b);
}

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    char mat[r][c][20];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%s", mat[i][j]);

    int k;
    scanf("%d", &k);

    for (int i = 0; i < r; i += k) {
        for (int j = 0; j < c; j += k) {
            char *res[k * k];
            int idx = 0;

            for (int x = i; x < i + k; x++)
                for (int y = j; y < j + k; y++)
                    res[idx++] = mat[x][y];

            qsort(res, idx, sizeof(char *), cmp);

            idx = 0;
            for (int x = i; x < i + k; x++)
                for (int y = j; y < j + k; y++)
                    strcpy(mat[x][y], res[idx++]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%s ", mat[i][j]);
        printf("\n");
    }
    return 0;
}