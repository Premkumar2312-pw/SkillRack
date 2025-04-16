#include <stdio.h>
#include <string.h>
#include <math.h>

int binToDec(char *str) {
    int res = 0;
    for (int i = 0; str[i]; i++) {
        res = res * 2 + (str[i] - '0');
    }
    return res;
}

int main() {
    int n, x, c = 0;
    scanf("%d %d", &n, &x);

    char b[20];
    int i = 0, temp = n;
    while (temp > 0) {
        b[i++] = (temp % 2) + '0';
        temp /= 2;
    }
    b[i] = '\0';

    // Reverse the binary string
    for (int j = 0; j < i / 2; j++) {
        char t = b[j];
        b[j] = b[i - j - 1];
        b[i - j - 1] = t;
    }

    for (int j = 1; j <= strlen(b); j++) {
        char p[20];
        strncpy(p, b, j);
        p[j] = '\0';
        int d = binToDec(p);
        if (d % x == 0)
            c++;
    }

    printf("%d\n", c);
    return 0;
}