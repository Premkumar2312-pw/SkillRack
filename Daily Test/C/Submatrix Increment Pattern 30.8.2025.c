#include <stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);
    int start = 1, copy = 1;
    int size = M * N;
    int mat[size][size];

    for (int i = 0; i < size; i += M) {
        for (int j = 0; j < size; j += M) {
            for (int k = i; k < i + M; k++) {
                for (int l = j; l < j + M; l++) {
                    mat[k][l] = start++;
                }
            }
            start = copy + 1;
            copy++;
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}