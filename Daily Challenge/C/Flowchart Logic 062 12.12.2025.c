#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    while (a > 0 && b > 0) {
        printf("%d ", a);
        printf("%d
", b);

        a = a - 1;
        b = b - 1;

        if (a % 10 == 0) {
            int temp = a;
            a = b;
            b = temp;
        }
    }

    return 0;
}