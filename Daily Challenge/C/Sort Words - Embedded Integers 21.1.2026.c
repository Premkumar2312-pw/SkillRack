#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int get_num(const char *w) {
    char num[20] = "";
    int idx = 0;
    for (int i = 0; w[i]; i++)
        if (isdigit(w[i])) num[idx++] = w[i];
    num[idx] = '\0';
    return atoi(num);
}

int cmp(const void *a, const void *b) {
    char *wa = *(char **)a;
    char *wb = *(char **)b;
    int na = get_num(wa), nb = get_num(wb);
    return na - nb;
}

int main() {
    char line[1000];
    fgets(line, sizeof(line), stdin);
    int n = 0;
    char *words[100];
    char *token = strtok(line, " \n");
    while (token) {
        words[n++] = token;
        token = strtok(NULL, " \n");
    }

    qsort(words, n, sizeof(char *), cmp);

    for (int i = 0; i < n; i++)
        printf("%s ", words[i]);
    printf("\n");
    return 0;
}