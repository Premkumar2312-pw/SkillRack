#include <stdio.h>

int main() {
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);

    int val = 1, ctr = 1;

    while (ctr <= n) {
        printf("%d ", val);

        if (val == a)
            val = b;
        else if (val == c)
            val = 0;

        val++;
        ctr++;
    }
    return 0;
}