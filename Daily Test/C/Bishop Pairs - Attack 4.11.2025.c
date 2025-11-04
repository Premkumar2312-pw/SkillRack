#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char board[n][n][5];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%s", board[i][j]);
    int res = 0;
    int diag[2] = {1, 1};
    int rev[2] = {1, -1};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (strcmp(board[i][j], "1") == 0) {
                int nc = i + diag[0], nr = j + diag[1];
                while (nc >= 0 && nc < n && nr >= 0 && nr < n) {
                    if (strcmp(board[nc][nr], "1") == 0)
                        res++;
                    nc++;
                    nr++;
                }
                int ec = i + rev[0], er = j + rev[1];
                while (ec >= 0 && ec < n && er >= 0 && er < n) {
                    if (strcmp(board[ec][er], "1") == 0)
                        res++;
                    ec++;
                    er--;
                }
            }
        }
    }
    printf("%d
", res);
    return 0;
}