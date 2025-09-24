#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXN 100

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    char l[MAXN][32], b[MAXN][32];
    for (int i = 0; i < n; ++i)
        scanf("%s", l[i]);
    int uniq_cnt = 0;
    for (int i = 0; i < n; ++i) {
        char c[32] = "", p[32] = "";
        int ci = 0, pi = 0;
        for (int j = 0; l[i][j]; ++j) {
            if (isalpha(l[i][j]))
                c[ci++] = l[i][j];
            else if (isdigit(l[i][j]))
                p[pi++] = l[i][j];
        }
        c[ci] = 0; p[pi] = 0;
        snprintf(b[i], sizeof(b[i]), "%s%s", c, p);
    }
    // Remove duplicates
    char a[MAXN][32]; int a_count = 0;
    for (int i = 0; i < n; ++i) {
        int unique = 1;
        for (int j = 0; j < a_count; ++j) {
            if (strcmp(b[i], a[j]) == 0) {
                unique = 0;
                break;
            }
        }
        if (unique) strcpy(a[a_count++], b[i]);
    }
    for (int i = 0; i < a_count; ++i) {
        int num = atoi(a[i] + 1);
        sum += num;
    }
    printf("%d
", sum);
    return 0;
}