#include <stdio.h>

int main() {
    int X, Y, D;
    scanf("%d %d %d", &X, &Y, &D);

    while (X <= Y) {
        int temp = X;
        while (temp > 0) {
            if (temp % 10 == D) {
                printf("%d ", X);
                break;
            }
            temp /= 10;
        }
        X++;
    }
    return 0;
}