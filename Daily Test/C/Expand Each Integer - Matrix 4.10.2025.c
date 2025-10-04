#include <stdio.h>
#include <string.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    char arr[R][C][101];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%s", arr[i][j]);
    for (int i = 0; i < R; i++) {
        char res[101 * C] = "", cnt[101 * C] = "";
        for (int j = 0; j < C; j++) {
            int idx = 0;
            for (int k = 0; arr[i][j][k]; k++) {
                if (idx < 2) {
                    int len = strlen(res);
                    res[len] = arr[i][j][k];
                    res[len + 1] = ' ';
                    res[len + 2] = '';
                    idx++;
                } else {
                    int len = strlen(cnt);
                    cnt[len] = arr[i][j][k];
                    cnt[len + 1] = ' ';
                    cnt[len + 2] = '';
                }
            }
        }
        printf("%s
%s
", res, cnt);
    }
    return 0;
}