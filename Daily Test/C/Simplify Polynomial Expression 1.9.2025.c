#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct {
    int coef;
    int exp;
} Term;

int cmp(const void *a, const void *b) {
    return ((Term*)b)->exp - ((Term*)a)->exp;
}

int main() {
    char S[1000];
    scanf("%s", S);

    Term terms[100];
    int n = 0;

    for (char *p = strtok(S, "+-"); p; p = strtok(NULL, "+-")) {
        int coef, exp;
        sscanf(p, "%dx^%d", &coef, &exp);
        terms[n].coef = coef;
        terms[n].exp = exp;
        n++;
    }

    qsort(terms, n, sizeof(Term), cmp);

    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (terms[i].coef == 0) continue;
        if (terms[i].coef > 0) printf("+");
        printf("%d%s^%d", terms[i].coef, "x", terms[i].exp);
        flag = 1;
    }

    if (!flag) printf("0");
    return 0;
}
