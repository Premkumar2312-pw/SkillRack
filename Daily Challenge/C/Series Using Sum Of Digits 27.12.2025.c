#include <stdio.h>

int digitSum(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[k];
    arr[0] = n;

    for (int i = 1; i < k; i++)
        arr[i] = arr[i - 1] + digitSum(arr[i - 1]);

    for (int i = 0; i < k; i++)
        printf("%d ", arr[i]);

    return 0;
}