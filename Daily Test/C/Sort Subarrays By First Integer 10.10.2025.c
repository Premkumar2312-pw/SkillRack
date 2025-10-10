#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    int* arrA = *(int**)a;
    int* arrB = *(int**)b;
    return arrA[0] - arrB[0];
}
int main() {
    int N, K;
    scanf("%d", &N);
    int arr[N];
    for(int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &K);
    int blocks = (N+K-1)/K;
    int* slices[blocks];
    int sizes[blocks];
    for(int i=0, b=0; i<N; i+=K, b++) {
        int sz = (i+K < N) ? K : (N-i);
        slices[b] = malloc(sz * sizeof(int));
        sizes[b] = sz;
        for(int j=0; j<sz; j++)
            slices[b][j] = arr[i+j];
    }
    qsort(slices, blocks, sizeof(int*), cmp);
    for(int b=0; b<blocks; b++) {
        for(int j=0; j<sizes[b]; j++)
            printf("%d ", slices[b][j]);
        free(slices[b]);
    }
    return 0;
}