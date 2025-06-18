#include <stdio.h>

int main() {
    int n, k, s = 0;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    for(int i = 0; i < n; i++) {
        if(a[i] >= (1 << (k - 1))) {
            a[i] ^= (1 << (k - 1));
        }
        s += a[i];
    }

    printf("%d\n", s);
    return 0;
}