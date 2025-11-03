#include <stdio.h>
#include <string.h>

void get_digits(int num, int *arr) {
    memset(arr, 0, 10 * sizeof(int));
    while (num > 0) {
        arr[num % 10] = 1;
        num /= 10;
    }
}

int is_empty(int *arr) {
    for (int i = 0; i < 10; i++) if (arr[i]) return 0;
    return 1;
}

void and_digits(int *a, int *b) {
    for (int i = 0; i < 10; i++) a[i] = a[i] & b[i];
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n], bl = 0, bs = 0;
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        int c[10];
        get_digits(a[i], c);
        int s = a[i];
        for (int j = i + 1; j < n; j++) {
            int cj[10];
            get_digits(a[j], cj);
            and_digits(c, cj);
            if (is_empty(c)) break;
            s += a[j];
            int l = j - i + 1;
            if (l > bl || (l == bl && s > bs)) {
                bl = l;
                bs = s;
            }
        }
    }
    if (bl == 0) {
        bs = a[0];
        for (int i = 1; i < n; i++) if (a[i] > bs) bs = a[i];
    }
    printf("%d
", bs);
    return 0;
}