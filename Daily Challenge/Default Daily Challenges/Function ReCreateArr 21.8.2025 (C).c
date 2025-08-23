void recreateArr(int *arr, int X, int Y)
{
    int len = Y - X + 1;
    for (int i = 0; i < len; i++) {
        arr[i] = arr[i] + X - 1;
    }
}