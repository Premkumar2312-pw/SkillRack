#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int l[n], sum = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &l[i]);
        sum += l[i];
    }
    int d = 1;
    while (1) {
        d = d * 2;
        if (sum <= d) {
            printf("%d
", d);
            break;
        }
    }
    return 0;
}