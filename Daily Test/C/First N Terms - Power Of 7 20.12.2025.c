#include <stdio.h>

// convert decimal i to its binary representation, then
// interpret that binary string as base-7 and return decimal value
int bin_to_base7_value(int x) {
    int bits[64];
    int k = 0;

    // build bits of x in binary (LSB first)
    while (x > 0) {
        bits[k++] = x % 2;
        x /= 2;
    }

    // now interpret those bits as digits of a base-7 number
    int res = 0;
    int pow7 = 1;
    for (int i = k - 1; i >= 0; --i) {
        res += bits[i] * pow7;
        pow7 *= 7;
    }
    return res;
}

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        printf("%d ", bin_to_base7_value(i));
    }
    return 0;
}