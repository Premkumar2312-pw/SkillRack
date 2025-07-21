#include <stdio.h>

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    int c = 0, r = 0;
    while (x > 0 || y > 0) {
        int a = x % 10;
        int b = y % 10;
        if (a + b + c >= 10) {
            c = 1;
            r++;
        } else {
            c = 0;
        }
        x /= 10;
        y /= 10;
    }
    printf("%d", r);
    return 0;
}