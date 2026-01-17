#include <stdio.h>
#include <string.h>

int main() {
    int R, C, x, y;
    scanf("%d %d %d %d", &R, &C, &x, &y);
    char S[100];
    scanf("%s", S);

    int vis[26][26] = {0};
    vis[x][y] = 1;

    for (int i = 0; S[i]; i++) {
        if (S[i] == 'N') {
            if (x > 1) x--;
            while (vis[x][y] && x > 1) x--;
        }
        if (S[i] == 'S') {
            if (x < R) x++;
            while (vis[x][y] && x < R) x++;
        }
        if (S[i] == 'E') {
            if (y < C) y++;
            while (vis[x][y] && y < C) y++;
        }
        if (S[i] == 'W') {
            if (y > 1) y--;
            while (vis[x][y] && y > 1) y--;
        }
        vis[x][y] = 1;
    }

    printf("%d %d", x, y);
    return 0;
}