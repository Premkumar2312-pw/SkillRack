#include <stdlib.h>

boundedArray* getXthDiagonal(int R, int C, int matrix[R][C], int X) {
    boundedArray *b = (boundedArray *)malloc(sizeof(boundedArray));
    b->arr = (int *)malloc(sizeof(int) * (R < C ? R : C));
    b->SIZE = 0;

    int r, c;
    if (X <= R) {
        r = R - X;
        c = 0;
    } else {
        r = 0;
        c = X - R;
    }

    while (r < R && c < C) {
        b->arr[b->SIZE++] = matrix[r][c];
        r++;
        c++;
    }

    return b;
}