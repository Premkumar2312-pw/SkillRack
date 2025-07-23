#include <stdio.h>
#include <string.h>
#include <math.h>

int binToDec(char *b) {
    int val = 0;
    for (int i = 0; b[i]; i++)
        val = val * 2 + (b[i] - '0');
    return val;
}

int main() {
    int n, total = 0;
    char b[9];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", b);
        total += binToDec(b);
    }

    int h = total / 3600;
    int m = (total % 3600) / 60;
    int s = total % 60;

    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}