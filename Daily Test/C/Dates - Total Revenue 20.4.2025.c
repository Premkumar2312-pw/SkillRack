#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct DateRev {
    char date[15];
    int revenue;
};

int cmp(const void *a, const void *b) {
    return strcmp(((struct DateRev*)a)->date, ((struct DateRev*)b)->date);
}

int main() {
    int n, x, count = 0;
    scanf("%d", &n);
    struct DateRev d[n], res[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d", d[i].date, &d[i].revenue);
    }

    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (d[i].revenue >= x) {
            res[count++] = d[i];
        }
    }

    if (count == 0) {
        printf("-1\n");
    } else {
        qsort(res, count, sizeof(struct DateRev), cmp);
        for (int i = 0; i < count; i++) {
            printf("%s\n", res[i].date);
        }
    }

    return 0;
}