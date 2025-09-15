#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int row;
    int col;
    char val[100];
} Cell;

int cmp(const void *p1, const void *p2) {
    const Cell *a = p1, *b = p2;
    if (a->row != b->row) return a->row - b->row;
    return a->col - b->col;
}

int main() {
    char line[1000];
    fgets(line, sizeof(line), stdin);

    char *token = strtok(line, " \n");
    Cell arr[200];
    int n = 0;

    while (token) {
        int r, c;
        char ch[100];
        sscanf(token, "%d%*[^0-9]%d%[A-Za-z]", &r, &c, ch);
        arr[n].row = r;
        arr[n].col = c;
        strcpy(arr[n].val, ch);
        n++;
        token = strtok(NULL, " \n");
    }

    qsort(arr, n, sizeof(Cell), cmp);

    int currentRow = arr[0].row;
    for (int i = 0; i < n; i++) {
        if (arr[i].row != currentRow) {
            printf("\n");
            currentRow = arr[i].row;
        }
        printf("%s ", arr[i].val);
    }
    return 0;
}