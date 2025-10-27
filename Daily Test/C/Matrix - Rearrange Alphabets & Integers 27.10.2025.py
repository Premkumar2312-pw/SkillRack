#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int r, c, k, f = 0, g = 0;
    scanf("%d %d %d", &r, &c, &k);
    char l[r][c][21]; // assuming max input word length = 20
    char a[r*c][21], n[r*c][21]; // collect alpha and numeric
    int na = 0, nn = 0;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            scanf("%s", l[i][j]);
            int all_alpha = 1;
            for (int x = 0; l[i][j][x]; x++)
                if (!isalpha(l[i][j][x])) all_alpha = 0;
            if (all_alpha) strcpy(a[na++], l[i][j]);
            else strcpy(n[nn++], l[i][j]);
        }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i >= r - k) {
                if (j >= c - k) {
                    printf("%s ", a[f++]);
                } else {
                    printf("%s ", n[g++]);
                }
            } else {
                printf("%s ", n[g++]);
            }
        }
        printf("
");
    }
    return 0;
}