#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    int n; scanf("%d", &n);
    char bin[100]; int len = 0;
    while (n > 0) {
        bin[len++] = (n % 2) + '0';
        n /= 2;
    }
    bin[len] = '\0';
    // reverse string
    for (int i = 0; i < len / 2; i++) {
        char t = bin[i]; bin[i] = bin[len - i - 1]; bin[len - i - 1] = t;
    }
    int first = 1;
    for (int i = 0; i < len; i++) {
        if (bin[i] == '1') {
            if (!first) printf("+");
            printf("%d", (int)pow(2, len - i - 1));
            first = 0;
        }
    }
    return 0;
}