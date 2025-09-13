#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int size = N * 2;
    char hyp[size][size];

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            hyp[i][j] = '-';

    for (int i = 0; i < size; i += N) {
        for (int j = 0; j < size; j += N) {
            int row = i + N - 1, col = j, cnt = 0;
            while (cnt < N) {
                hyp[row][col] = '*';
                row--;
                col++;
                cnt++;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            printf("%c", hyp[i][j]);
        printf("\n");
    }
    return 0;
}