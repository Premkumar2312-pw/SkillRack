boundedArray* getLargestSquareMatrix(int R, int C, int matrix[R][C], int sRow, int sCol)
{
    boundedArray* result = malloc(sizeof(boundedArray));
    result->SIZE = 0;
    result->matrix = malloc(R * sizeof(int *));
    for(int i = 0; i < R; i++) {
        result->matrix[i] = malloc(C * sizeof(int));
    }
    sRow -= 1;
    sCol -= 1;
    int r = R - sRow;
    int c = C - sCol;
    int mat = (r < c) ? r : c;
    for(int i = 0; i < mat; i++) {
        for(int j = 0; j < mat; j++) {
            result->matrix[i][j] = matrix[sRow + i][sCol + j];
        }
        result->SIZE += 1;
    }
    return result;
}