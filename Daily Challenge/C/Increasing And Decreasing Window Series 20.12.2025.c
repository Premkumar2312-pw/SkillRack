#include <stdio.h>

int main(void) {
    int n, f;
    scanf("%d %d", &n, &f);

    int size = n * n;
    int c[size];
    int idx = 0;

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) {                      // odd row
            int s = (i - 1) * n + 1;
            for (int j = s; j <= i * n; ++j) {
                c[idx++] = j;
            }
        } else {                               // even row
            for (int k = i * n; k > (i - 1) * n; --k) {
                c[idx++] = k;
            }
        }
    }

    printf("%d
", c[f - 1]);
    return 0;
}