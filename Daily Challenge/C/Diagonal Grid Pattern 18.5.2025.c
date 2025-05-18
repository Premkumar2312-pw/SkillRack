#include <stdio.h>

int main() {
    int N, k = 1;
    scanf("%d", &N);
    printf("*\n");

    for (int i = 2; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            for (int x = 0; x < k; x++) printf("- ");
            for (int y = 0; y < i; y++) printf("* ");
            printf("\n");
        }
        k += i;
    }
    return 0;
}