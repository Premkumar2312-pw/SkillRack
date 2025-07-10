#include <stdio.h>
int main() {
    int n, t, i, j;
    scanf("%d %d", &n, &t);
    int a[100] = {0};  // max t <= 50 from constraints
    a[n - 1] = 1;
    for(i = n; i < t; i++) {
        for(j = 1; j <= n; j++)
            a[i] += a[i - j];
    }
    for(i = 0; i < t; i++) printf("%d ", a[i]);
}