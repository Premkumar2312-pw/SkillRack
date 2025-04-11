boundedArray* getArrayFromMatrix(int R, int C, int matrix[R][C]) {

    boundedArray* result = (boundedArray*)malloc(sizeof(boundedArray));
    result->SIZE = R * C;
    result->arr = (int*)malloc(result->SIZE * sizeof(int));

    int idx = 0;
    for (int i = R - 1; i >= 0; i--) {
        for (int j = C - 1; j >= 0; j--) {
            result->arr[idx++] = matrix[i][j];
        }
    }

    return result;
}