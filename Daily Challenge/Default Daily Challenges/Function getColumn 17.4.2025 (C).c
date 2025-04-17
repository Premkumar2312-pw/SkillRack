boundedArray* getColumn(int R, int C, int matrix[][C], int K)
{
    boundedArray* result = (boundedArray*)malloc(sizeof(boundedArray));
    result->arr = (int*)malloc(R * sizeof(int));
    result->SIZE = R;

    for (int i = 0; i < R; i++) {
        result->arr[i] = matrix[i][K - 1]; 
    }

    return result;
}
