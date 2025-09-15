#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    long long res = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        char bin[64];
        int len = 0;
        while (x > 0) {
            bin[len++] = (x % 2) + '0';
            x /= 2;
        }
        if (len == 0) bin[len++] = '0';
        bin[len] = '\0';

        // reverse
        for (int j = 0; j < len / 2; j++) {
            char t = bin[j];
            bin[j] = bin[len - 1 - j];
            bin[len - 1 - j] = t;
        }
        bin[0] = '0';               // replace MSB with 0

        long long val = 0;
        for (int j = 0; j < len; j++)
            val = val * 2 + (bin[j] - '0');
        res += val;
    }
    printf("%lld\n", res);
    return 0;
}