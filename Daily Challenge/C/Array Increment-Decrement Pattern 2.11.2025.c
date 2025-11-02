#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int *l1 = (int*)malloc(n * sizeof(int));
    int *l = (int*)malloc(n * sizeof(int));
    int *b = (int*)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &l1[i]);
        l[i] = l1[i];
    }
    scanf("%d", &k);

    int i = 0;

    while (i < k) {
        for (int j = 0; j < n; j++) {
            if (i == k) break;

            if (b[j] == 0 && i < k) {
                l[j] = l[j] - 1;
                if (l[j] == 0) b[j] = 1;
            }
            else if (b[j] == 1 && i < k) {
                l[j] = l[j] + 1;
                if (l[j] == l1[j]) b[j] = 0;
            }

            for (int x = 0; x < n; x++) {
                printf("%d ", l[x]);
            }
            printf("
");
            i++;
        }
    }

    free(l1);
    free(l);
    free(b);
    return 0;
}