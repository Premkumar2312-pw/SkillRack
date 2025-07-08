#include <stdio.h>

int main() {
    int r, c, m[50][50], cnt = 0;
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &m[i][j]);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int val = (i+1)*10 + (j+1);
            if (m[i][j] == val) cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}