#include <stdio.h>
int main() {
    int N; 
    scanf("%d", &N);
    int cnt = 1 + 4 * (N - 1);

    for (int i = 1; i <= cnt; i++) {
        if (i % 2 == 1) printf("*");
        else printf("-");
    }
    cnt -= 4;
    printf("\n");

    for (int i = 1; i < N; i++) {
        for (int k = 0; k < i * 2; k++) printf("-");
        for (int j = 1; j <= cnt; j++) {
            if (j == 1 || j == cnt / 2 + 1 || j == cnt) printf("*");
            else printf("-");
        }
        cnt -= 4;
        printf("\n");
    }
    return 0;
}