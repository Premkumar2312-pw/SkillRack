#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int R, C, K;
    scanf("%d %d", &R, &C);
    char a[R][C+1];
    for (int i = 0; i < R; i++)
        scanf("%s", a[i]);
    scanf("%d", &K);

    for (int i = 0; i < R; i += K) {
        for (int j = 0; j < C; j += K) {
            char s[K*K+1];
            int idx = 0;
            for (int x = i; x < i + K; x++)
                for (int y = j; y < j + K; y++)
                    s[idx++] = a[x][y];
            s[idx] = '';
            printf("%d ", (int)strtol(s, NULL, 2));
        }
        printf("
");
    }
    return 0;
}