#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char board[n][n][11]; // assuming each cell can go up to 10 chars

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%s", board[i][j]);

    int res = 0;
    // main diagonal (top-left to bottom-right)
    for (int i = 0; i < n; i++)
        if (strcmp(board[i][i], board[0][0]) == 0)
            res++;

    // anti diagonal (top-right to bottom-left)
    for (int i = 0; i < n; i++)
        if (strcmp(board[i][n-1-i], board[0][n-1]) == 0)
            res++;

    printf("%d
", res);
    return 0;
}