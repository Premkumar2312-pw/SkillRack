#include <stdio.h>
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    while (1) {
        int n;
        scanf("%d", &n);
        if (n % 2 == 0) {
            n += x;
            y--;
        } else {
            n += y;
            x--;
        }
        printf("%d ", n);
        if (n <= 0) break;
    }
    return 0;
}