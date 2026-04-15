#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int num;

    if(a % 10 == b % 10) {
        num = (a > b) ? a : b;
    } else {
        if(a % 10 < b % 10)
            num = a;
        else
            num = b;
    }

    printf("%d", num);
    return 0;
}