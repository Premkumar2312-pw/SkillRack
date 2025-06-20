#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Data {
    char letter[10];
    int number;
};

int cmp(const void *a, const void *b) {
    struct Data *x = (struct Data *)a;
    struct Data *y = (struct Data *)b;
    int cmp = strcmp(x->letter, y->letter);
    if (cmp == 0)
        return x->number - y->number;
    return cmp;
}

int main() {
    int n;
    scanf("%d", &n);
    struct Data arr[1000];
    char str[100];

    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        char l[10] = "";
        char d[10] = "";
        int li = 0, di = 0;

        for (int j = 0; str[j]; j++) {
            if (isalpha(str[j]))
                l[li++] = str[j];
            else if (isdigit(str[j]))
                d[di++] = str[j];
        }
        l[li] = '\0';
        d[di] = '\0';

        strcpy(arr[i].letter, l);
        arr[i].number = atoi(d);
    }

    qsort(arr, n, sizeof(struct Data), cmp);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i].number);
    }
    return 0;
}