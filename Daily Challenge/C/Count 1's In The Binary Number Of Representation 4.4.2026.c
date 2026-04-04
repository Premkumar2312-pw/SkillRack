#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    int count = 0;

    while (n > 0) {
        n = n & (n - 1); // remove last set bit
        count++;
    }

    printf("%d", count); // e.g input:22 → output:3
    return 0;
}