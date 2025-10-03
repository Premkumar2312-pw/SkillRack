#include <stdio.h>
int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    int l[n], l1[q];
    for (int i = 0; i < n; i++) scanf("%d", &l[i]);
    int I = 0, jj = 0;
    while (I < q) {
        int j = 0;
        while (j < n && I < q) {
            j++;
            l1[I++] = j;
        }
        int k = n - 1;
        while (k > 1 && I < q) {
            l1[I++] = k;
            k--;
        }
    }
    for (int i = 1; i <= n; i++) {
        int d = 0;
        for (int j = 0; j < q; j++)
            if (i == l1[j])
                d += l[j];
        printf("%d ", d);
    }
    return 0;
}