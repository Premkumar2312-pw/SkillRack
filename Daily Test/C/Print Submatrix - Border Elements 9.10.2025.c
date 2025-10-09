#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int val[100][100];
    for(int i = 0; i < R; i++)
        for(int j = 0; j < C; j++)
            scanf("%d", &val[i][j]);
    int X, Y;
    scanf("%d %d", &X, &Y);

    int a = R - X + 1, b = C - Y + 1;
    int top = X - 1, bottom = X - 1 + a - 1;
    int left = Y - 1, right = Y - 1 + b - 1;
    int border[400], n = 0;

    for(int i = left; i <= right; i++)
        border[n++] = val[top][i];
    for(int i = top + 1; i <= bottom; i++)
        border[n++] = val[i][right];
    for(int i = right - 1; i >= left; i--)
        border[n++] = val[bottom][i];
    for(int i = bottom - 1; i > top; i--)
        border[n++] = val[i][left];

    for(int i = 0; i < n; i++)
        printf("%d ", border[i]);
    printf("
");
    return 0;
}