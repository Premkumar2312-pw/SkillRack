void invertSubmatrix(int R, int C, int matrix[R][C], int sRow, int sCol, int K)
{
    sRow--; sCol--; // If input is 1-based

    for(int i = sRow; i < sRow + K && i < R; i++) {
        for(int j = sCol; j < sCol + K && j < C; j++) {
            matrix[i][j] = 1 - matrix[i][j];
        }
    }
}