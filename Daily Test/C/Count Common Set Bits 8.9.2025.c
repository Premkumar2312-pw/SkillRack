#include <stdio.h>

int countBits(int x) {
    int cnt = 0;
    while (x) {
        cnt += (x & 1);
        x >>= 1;
    }
    return cnt;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int res = arr[0];
    for (int i = 1; i < n; i++) res &= arr[i];

    printf("%d\n", countBits(res));
    return 0;
}