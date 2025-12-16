#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }

    int l1[10000], k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (b[i] == b[j]) {
                if (a[i] > a[j])
                    l1[k++] = a[i] - a[j];
                else
                    l1[k++] = a[j] - a[i];
            }
        }
    }

    if (k == 0) {
        printf("-1");
        return 0;
    }

    for (int i = 0; i < k - 1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (l1[i] > l1[j]) {
                int t = l1[i];
                l1[i] = l1[j];
                l1[j] = t;
            }
        }
    }

    for (int i = 0; i < k; i++)
        printf("%d ", l1[i]);

    return 0;
}