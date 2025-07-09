#include <stdio.h>
#include <stdlib.h>

int is_sorted_asc(int* arr, int n) {
    for (int i = 1; i < n; i++)
        if (arr[i - 1] > arr[i]) return 0;
    return 1;
}

int all_equal(int* a, int m, int* b, int n) {
    int val = a[0];
    for (int i = 0; i < m; i++) if (a[i] != val) return 0;
    for (int i = 0; i < n; i++) if (b[i] != val) return 0;
    return 1;
}

void print(int* arr, int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int m, n, a[100], b[100];
    scanf("%d", &m);
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    int sa = is_sorted_asc(a, m), sb = is_sorted_asc(b, n);

    if (all_equal(a, m, b, n)) {
        print(a, m);
        print(b, n);
    } else if (sa && !sb) {
        print(a, m);
        print(b, n);
    } else if (!sa && sb) {
        print(b, n);
        print(a, m);
    } else {
        print(a, m);
        print(b, n);
    }
    return 0;
}