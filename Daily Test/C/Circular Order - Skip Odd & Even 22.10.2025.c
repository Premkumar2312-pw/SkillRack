#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, q;
    scanf("%d", &n);
    int* reg = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &reg[i]);
    }
    scanf("%d", &q);
    int* marks = malloc(q * sizeof(int));
    for (int i = 0; i < q; i++) {
        scanf("%d", &marks[i]);
    }

    int* res = calloc(n, sizeof(int));

    int* order = malloc(3 * n * sizeof(int));
    int idx = 0;

    // order += range(n)
    for (int i = 0; i < n; i++) {
        order[idx++] = i;
    }
    // order += [i for i in range(n) if reg[i] % 2 == 0]
    for (int i = 0; i < n; i++) {
        if (reg[i] % 2 == 0) {
            order[idx++] = i;
        }
    }
    // order += [i for i in range(n) if reg[i] % 2 != 0]
    for (int i = 0; i < n; i++) {
        if (reg[i] % 2 != 0) {
            order[idx++] = i;
        }
    }

    int order_len = idx;

    for (int i = 0; i < q; i++) {
        res[order[i % order_len]] += marks[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", res[i]);
    }
    printf("
");

    free(reg);
    free(marks);
    free(res);
    free(order);
    return 0;
}