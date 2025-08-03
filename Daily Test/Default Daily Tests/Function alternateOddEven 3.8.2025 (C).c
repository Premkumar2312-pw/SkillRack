#include <stdlib.h>

int* alternateOddEven(int arr[], int N) {
    int *res = malloc(N * sizeof(int));
    int odd[N], even[N], o = 0, e = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] % 2) odd[o++] = arr[i];
        else even[e++] = arr[i];
    }

    int idx = 0;
    for (int i = 0; i < o; i++) {
        res[idx++] = odd[i];
        res[idx++] = even[i];
    }

    return res;
}