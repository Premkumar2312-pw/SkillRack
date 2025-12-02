#include <stdio.h>

long long arr[200000];   // enough for 1e5 front/back operations
int left = 100000, right = 100000; // center index

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        long long x;
        scanf("%lld", &x);

        if (i % 2 == 1)
            arr[--left] = x;  // addFirst
        else
            arr[right++] = x; // addLast
    }

    // If N is even -> print reversed
    if (n % 2 == 0) {
        for (int i = right - 1; i >= left; i--)
            printf("%lld ", arr[i]);
    } 
    else {
        for (int i = left; i < right; i++)
            printf("%lld ", arr[i]);
    }

    return 0;
}