boundedArray* integerToArray(int N)
{
    boundedArray* res = (boundedArray*)malloc(sizeof(boundedArray));
    char str[20];
    sprintf(str, "%d", N);

    int len = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '-') {
            len++;
        }
    }

    res->arr = (int*)malloc(len * sizeof(int));
    res->SIZE = len;

    int idx = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '-') {
            res->arr[idx++] = str[i] - '0'; 
        }
    }

    return res;
}