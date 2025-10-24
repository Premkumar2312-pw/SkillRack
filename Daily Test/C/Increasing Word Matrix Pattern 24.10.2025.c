#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char s[] = "abcdefghijklmnopqrstuvwxyz";
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n + i; j++) {
            if (j < 26) {
                for (int k = 0; k < j; ++k) putchar(s[k]);
            } else {
                int len = j % 26;
                for (int k = 0; k < len; ++k) putchar(s[k]);
                for (int k = 0; k < len; ++k) putchar(s[k]);
            }
            putchar(' ');
        }
        putchar('
');
    }
    return 0;
}