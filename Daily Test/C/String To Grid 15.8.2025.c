#include <stdio.h>

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    char s[1000];
    scanf("%s", s);

    char g[500][500];
    for(int i = 0; i < n * x; i++)
        for(int j = 0; j < n * x; j++)
            g[i][j] = '*';

    int c = x / 2, k = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            g[i * x + c][j * x + c] = s[k++];
        }
    }

    for(int i = 0; i < n * x; i++) {
        for(int j = 0; j < n * x; j++)
            printf("%c ", g[i][j]);
        printf("\n");
    }
    return 0;
}