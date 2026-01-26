#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int unit[R][C];

    // Store unit digits
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            int x;
            scanf("%d", &x);
            unit[i][j] = x % 10;
        }
    }

    int N;
    scanf("%d", &N);

    for (int i = 0; i <= R - N; i++) {
        for (int j = 0; j <= C - N; j++) {

            int val = unit[i][j];
            int same = 1;

            for (int x = i; x < i + N; x++) {
                for (int y = j; y < j + N; y++) {
                    if (unit[x][y] != val) {
                        same = 0;
                        break;
                    }
                }
                if (!same) break;
            }

            if (same) {
                printf("Yes");
                return 0;
            }
        }
    }

    printf("No");
    return 0;
}