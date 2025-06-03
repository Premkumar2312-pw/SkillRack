#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    char g[r][c][2];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%s", g[i][j]);

    int covered[r][c];
    memset(covered, 0, sizeof(covered));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (g[i][j][0] == 'S' || g[i][j][0] == 'L') {
                int d = (g[i][j][0] == 'S') ? 1 : 2;
                for (int x = i - d; x <= i + d; x++) {
                    for (int y = j - d; y <= j + d; y++) {
                        if (x >= 0 && x < r && y >= 0 && y < c)
                            covered[x][y] = 1;
                    }
                }
            }
        }
    }

    int count = 0;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (covered[i][j])
                count++;

    printf("%d\n", count);
    return 0;
}