#include <stdio.h>

int main() {
    int num, val = 0, count = 0;
    scanf("%d", &num);

    while (num > 0) {
        if (num % 10 != 0) {
            val = val * 10 + (num % 10);
        } else {
            count += 1;
        }
        num /= 10;
    }

    while (count > 0) {
        val = val * 10;
        count -= 1;
    }

    printf("%d
", val);
    return 0;
}