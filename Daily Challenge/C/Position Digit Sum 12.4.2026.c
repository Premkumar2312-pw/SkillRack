#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    while(a > 0 || b > 0) {
        printf("%d ", (a % 10 + b % 10));
        a /= 10;
        b /= 10;
    }

    return 0;
}