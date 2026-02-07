#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int num[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    int x;
    scanf("%d", &x);
    int y = x;

    for (int i = 0; i < n; i++) {
        if (num[i] == x)
            x = x * 2;
    }

    if (x == y)
        printf("0");
    else
        printf("%d", x);

    return 0;
}