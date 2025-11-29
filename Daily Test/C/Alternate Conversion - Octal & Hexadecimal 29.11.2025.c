#include <stdio.h>
#include <string.h>

int main() {
    unsigned int n;
    scanf("%u", &n);

    char b[64] = "";
    int len = 0;
    while (n > 0) {
        b[len++] = (n & 1) ? '1' : '0';
        n >>= 1;
    }
    if (len == 0) { b[len++] = '0'; }
    b[len] = '';

    char res[64] = "";
    int rlen = 0;
    int i = 0;
    int octa = 1;

    while (i < len) {
        int bits = octa ? 3 : 4;
        if (i + bits > len) bits = len - i;

        int val = 0;
        int pow2 = 1;
        for (int k = 0; k < bits; k++) {
            if (b[i + k] == '1') val += pow2;
            pow2 <<= 1;
        }

        char ch;
        if (octa) {
            ch = '0' + val;
        } else {
            if (val < 10) ch = '0' + val;
            else ch = 'A' + (val - 10);
        }
        res[rlen++] = ch;
        i += bits;
        octa = !octa;
    }
    for (int k = rlen - 1; k >= 0; k--) putchar(res[k]);
    putchar('
');
    return 0;
}