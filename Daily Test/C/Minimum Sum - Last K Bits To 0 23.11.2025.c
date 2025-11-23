#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    long base = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        base += arr[i];
    }
    long minn = LONG_MAX;
    int k;
    scanf("%d", &k);
    for (int i = 0; i < n; i++) {
        long mo = ((long)(arr[i]) >> k) << k;
        long neww = base - arr[i] + mo;
        if (neww < minn)
            minn = neww;
    }
    printf("%ld
", minn);
    return 0;
}