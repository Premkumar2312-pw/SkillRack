#include <stdio.h>
#include <string.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    char mat[r][c][101], pat[101];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%s", mat[i][j]);
    scanf("%s", pat);

    for (int i = 0; i < r; i++) {
        for (int j = i + 1; j < r; j++) {
            if (pat[i] == pat[j]) {
                for (int k = 0; k < c; k++) {
                    if (strcmp(mat[i][k], mat[j][k]) != 0) {
                        printf("NO\n");
                        return 0;
                    }
                }
            } else {
                int same = 1;
                for (int k = 0; k < c; k++) {
                    if (strcmp(mat[i][k], mat[j][k]) != 0) {
                        same = 0;
                        break;
                    }
                }
                if (same) {
                    printf("NO\n");
                    return 0;
                }
            }
        }
    }
    printf("YES\n");
    return 0;
}