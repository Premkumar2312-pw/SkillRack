#include <stdio.h>
int main() {
    int n, a[1000], i;
    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    for(i = 0; i < n - 1; i++)
        if((a[i] & a[i + 1]) != a[i]) {
            printf("NO");
            return 0;
        }
    printf("YES");
    return 0;
}