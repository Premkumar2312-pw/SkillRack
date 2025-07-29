#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int s[n];
    s[0] = 0; s[1] = 1;
    for(int i = 2; i < n; i++)
        s[i] = s[i-1] + 2 * s[i-2] + 3;
    printf("%d\n", s[n-1]);
    return 0;
}