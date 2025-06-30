#include <stdio.h>

int main() {
    int n, r, c;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d %d", &r, &c);
    int m[r][c], i = 0;

    while(i < n) {
        for(int x = r - 1; x >= 0 && i < n; x--) {
            if ((r - 1 - x) % 2 == 0) {
                for(int j = c - 1; j >= 0 && i < n; j--)
                    m[x][j] = a[i++];
            } else {
                for(int j = 0; j < c && i < n; j++)
                    m[x][j] = a[i++];
            }
        }
    }

    for(int x = 0; x < r; x++) {
        for(int j = 0; j < c; j++)
            printf("%d ", m[x][j]);
        printf("\n");
    }
    return 0;
}