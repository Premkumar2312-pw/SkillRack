#include <stdio.h>

int main() {
    int M, N, P = 0;
    scanf("%d %d", &M, &N);

    while (M > 0 || N > 0) {
        if (M % 10 != N % 10) {
            if (M % 10 > N % 10) {
                printf("%d", M % 10);
                P = 1;
            } else {
                printf("%d", N % 10);
                P = 1;
            }
        }
        M /= 10;
        N /= 10;
    }

    if (P == 0)
        printf("-1");
    return 0;
}