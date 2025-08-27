#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int m[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &m[i][j]);

    int p[3][3] = {
        {1,0,1},
        {0,1,0},
        {1,0,1}
    };

    int cnt = 0;
    for (int i = 0; i <= r-3; i++) {
        for (int j = 0; j <= c-3; j++) {
            int match = 1;
            for (int x = 0; x < 3; x++) {
                for (int y = 0; y < 3; y++) {
                    if (m[i+x][j+y] != p[x][y]) {
                        match = 0;
                        break;
                    }
                }
                if (!match) break;
            }
            if (match) cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}