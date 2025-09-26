#include <stdio.h>
int main() {
    int M, N, ctr = 1;
    scanf("%d %d", &M, &N);
    while (M > 0 || N > 0) {
        if (ctr % 2 != 0) {
            printf("%d", N % 10);
            N /= 10;
        } else {
            printf("%d", M % 10);
            M /= 10;
        }
        ctr++;
    }
    return 0;
}