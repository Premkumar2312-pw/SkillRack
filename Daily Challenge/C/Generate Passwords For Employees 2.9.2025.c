#include <stdio.h>

int main() {
    int N, C, D, copy;
    scanf("%d %d %d", &N, &C, &D);
    copy = C;

    for (int i = 1; i <= D; i++) {
        for (int j = 1; j <= N; j++) {
            printf("%d ", C + j);
        }
        printf("\n");
        C = copy + i;
    }
    return 0;
}