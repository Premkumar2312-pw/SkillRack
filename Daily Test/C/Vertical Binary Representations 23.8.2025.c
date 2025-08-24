#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    char b[N][64]; // store binaries, 64-bit max
    int maxLen = 0;

    for (int i = N, k = 0; i >= 1; i--, k++) {
        char temp[64];
        int len = 0, num = i;

        // convert to binary
        while (num > 0) {
            temp[len++] = (num % 2) + '0';
            num /= 2;
        }
        temp[len] = '\0';

        // reverse string
        for (int j = 0; j < len; j++) b[k][j] = temp[len - j - 1];
        b[k][len] = '\0';

        if (len > maxLen) maxLen = len;
    }

    // vertical printing
    for (int i = 0; i < maxLen; i++) {
        for (int j = 0; j < N; j++) {
            if (i < strlen(b[j])) printf("%c", b[j][i]);
        }
        printf("\n");
    }
    return 0;
}