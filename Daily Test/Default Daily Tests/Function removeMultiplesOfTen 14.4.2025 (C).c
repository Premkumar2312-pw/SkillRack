boundedArray* removeMultiplesOfTen(int SIZE, int arr[]) {
    boundedArray* result = (boundedArray*)malloc(sizeof(boundedArray));
    int* temp = (int*)malloc(SIZE * sizeof(int));
    int count = 0;

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 10 != 0) {
            temp[count++] = arr[i];
        }
    }

    if (count == 0) {
        result->SIZE = 1;
        result->arr = (int*)malloc(sizeof(int));
        result->arr[0] = -1;
    } else {
        result->SIZE = count;
        result->arr = (int*)malloc(count * sizeof(int));
        for (int i = 0; i < count; i++) {
            result->arr[i] = temp[i];
        }
    }

    free(temp);
    return result;
}