#include <stdio.h>
#include <string.h>

int main() {
    int N, X;
    scanf("%d", &N);
    int height[N];
    for (int i = 0; i < N; i++) scanf("%d", &height[i]);
    scanf("%d", &X);

    int maxH = height[0];
    for (int i = 1; i < N; i++)
        if (height[i] > maxH) maxH = height[i];

    char tot[N * X][maxH + 1];
    int idx = 0;

    for (int i = 0; i < N; i++) {
        for (int c = 0; c < X; c++) {
            int k = 0;
            for (int j = 0; j < maxH - height[i]; j++) tot[idx][k++] = '.';
            for (int j = 0; j < height[i]; j++) tot[idx][k++] = '*';
            tot[idx][k] = '\0';
            idx++;
        }
    }

    for (int i = 0; i < maxH; i++) {
        for (int j = 0; j < idx; j++) {
            printf("%c ", tot[j][i]);
        }
        printf("\n");
    }
    return 0;
}