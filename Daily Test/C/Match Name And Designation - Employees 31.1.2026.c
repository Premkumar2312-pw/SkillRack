#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    char des[50];
} Emp;

int cmp(const void *a, const void *b) {
    return ((Emp*)a)->id - ((Emp*)b)->id;
}

int main() {
    char file1[100], file2[100];
    scanf("%s", file1);
    scanf("%s", file2);

    FILE *f1 = fopen(file1, "r");
    FILE *f2 = fopen(file2, "r");

    int n;
    fscanf(f1, "%d", &n);

    Emp e[n];

    for (int i = 0; i < n; i++)
        fscanf(f1, "%d %s", &e[i].id, e[i].name);

    int temp;
    fscanf(f2, "%d", &temp);

    for (int i = 0; i < n; i++)
        fscanf(f2, "%d %s", &e[i].id, e[i].des);

    qsort(e, n, sizeof(Emp), cmp);

    for (int i = 0; i < n; i++)
        printf("%d %s %s\n", e[i].id, e[i].name, e[i].des);

    fclose(f1);
    fclose(f2);
}