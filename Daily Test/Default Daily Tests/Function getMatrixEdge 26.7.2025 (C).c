boundedArray* getMatrixEdge(int r, int c, int m[r][c], char e) {
    boundedArray *b = malloc(sizeof(boundedArray));

    if (e == 'T') {
        b->SIZE = c;
        b->arr = malloc(sizeof(int) * c);
        for (int i = 0; i < c; i++)
            b->arr[i] = m[0][i];
    } else if (e == 'R') {
        b->SIZE = r;
        b->arr = malloc(sizeof(int) * r);
        for (int i = 0; i < r; i++)
            b->arr[i] = m[i][c - 1];
    } else if (e == 'B') {
        b->SIZE = c;
        b->arr = malloc(sizeof(int) * c);
        for (int i = c - 1, j = 0; i >= 0; i--, j++)
            b->arr[j] = m[r - 1][i];
    } else if (e == 'L') {
        b->SIZE = r;
        b->arr = malloc(sizeof(int) * r);
        for (int i = r - 1, j = 0; i >= 0; i--, j++)
            b->arr[j] = m[i][0];
    }

    return b;
}