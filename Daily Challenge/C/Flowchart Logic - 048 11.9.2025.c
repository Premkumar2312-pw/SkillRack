#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    while (x > 0 || y > 0) {
        if (x > 0) {
            printf("%d ", x);
            y--;
        }
        if (y > 0) {
            printf("%d ", y);
            x--;
        }
        x--;
        y--;
    }
    return 0;
}