#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    unsigned int n;
    int x;
    scanf("%u %d", &n, &x);

    char b[33];
    for (int i = 31; i >= 0; i--)
        b[31 - i] = ((n >> i) & 1) + '0';
    b[32] = '\0';

    char shifted[33];
    strncpy(shifted, b, 32 - x);
    for (int i = 0; i < x; i++)
        shifted[32 - x + ((i + 1) % x)] = b[32 - x + i];
    shifted[32 - x] = b[31];  // rotate last bit to front
    shifted[32] = '\0';

    unsigned int res = 0;
    for (int i = 0; i < 32; i++)
        if (shifted[i] == '1')
            res += 1u << (31 - i);

    printf("%u", res);
    return 0;
}