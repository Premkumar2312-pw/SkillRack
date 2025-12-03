#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[1000];
    if (scanf("%s", s) != 1) return 0;

    char *res[1000], *p[1000];
    int resCount = 0, pCount = 0;

    res[resCount++] = strdup(s);

    while (1) {
        pCount = 0;
        for (int k = 0; k < resCount; k++) {
            char *str = res[k];
            int len = strlen(str);
            if (len == 1) {
                p[pCount++] = str;
                continue;
            }
            int split = len / 2;
            char *left = (char *)malloc(split + 1);
            char *right = (char *)malloc(len - split + 1);
            strncpy(left, str, split);
            left[split] = '';
            strcpy(right, str + split);
            p[pCount++] = left;
            p[pCount++] = right;
            free(str);
        }

        for (int i = 0; i < pCount; i++) {
            if (i) printf(" ");
            printf("%s", p[i]);
        }
        printf("
");

        resCount = pCount;
        for (int i = 0; i < resCount; i++) res[i] = p[i];

        if (resCount == (int)strlen(s)) break;
    }
    return 0;
}