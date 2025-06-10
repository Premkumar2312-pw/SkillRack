boundedArray* concatEveryTwoIntegers(int SIZE, int *arr)
{
    boundedArray* bArr = (boundedArray*)malloc(sizeof(boundedArray));
    bArr->SIZE = SIZE / 2;
    bArr->arr = (long long int*)malloc(bArr->SIZE * sizeof(long long int));

    for (int i = 0, j = 0; i < SIZE; i += 2, j++) {
        int a = arr[i], b = arr[i + 1];
        long long multiplier = 1;
        int temp = b;
        while (temp > 0) {
            multiplier *= 10;
            temp /= 10;
        }
        bArr->arr[j] = (long long)a * multiplier + b;
    }

    return bArr;
}
