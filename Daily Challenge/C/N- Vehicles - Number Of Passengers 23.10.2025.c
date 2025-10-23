#include <stdio.h>
#include <stdlib.h>

void combine(int arr[], int n, int r, int idx, int data[], int i, int* sums, int* k) {
    if (idx == r) {
        int s = 0;
        for (int j = 0; j < r; j++) s += data[j];
        sums[(*k)++] = s;
        return;
    }
    if (i >= n) return;
    data[idx] = arr[i];
    combine(arr, n, r, idx + 1, data, i + 1, sums, k);
    combine(arr, n, r, idx, data, i + 1, sums, k);
}

int cmp(const void* a, const void* b) { return (*(int*)a - *(int*)b); }

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], data[n], sums[1 << n], k = 0;
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int r = 1; r <= n; r++) combine(arr, n, r, 0, data, 0, sums, &k);
    qsort(sums, k, sizeof(int), cmp);
    for (int i = 0; i < k; i++) printf("%d ", sums[i]);
    return 0;
}