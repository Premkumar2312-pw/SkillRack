#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char s[101], p[101], q[101], temp[101];
    char *res[100];
    int idx = 0;
    
    scanf("%s", s);
    int a = strchr(s, '[') - s;
    int b = strchr(s, ']') - s;

    strncpy(p, s, a); p[a] = '\0';
    strcpy(q, s + b + 1);

    strncpy(temp, s + a + 1, b - a - 1); temp[b - a - 1] = '\0';

    char *tok = strtok(temp, "|");
    while (tok) {
        res[idx] = (char *)malloc(101);
        sprintf(res[idx], "%s%s%s", p, tok, q);
        idx++;
        tok = strtok(NULL, "|");
    }

    qsort(res, idx, sizeof(char *), cmp);

    for (int i = 0; i < idx; i++) {
        printf("%s ", res[i]);
        free(res[i]);
    }

    return 0;
}