#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char s[100];
    scanf("%s", s);
    char *dot = strchr(s, '.');
    int len = strlen(s), decLen = dot - s, fracLen = len - decLen - 1;

    int a = decLen - 1, b = 1;

    for (int i = 0; i < decLen; i++) {
        if (s[i] == '0') {
            printf("0 ");
        } else {
            printf("%d ", (s[i] - '0') * (int)pow(10, a));
        }
        a--;
    }

    for (int i = decLen + 1; i < len; i++) {
        if (s[i] == '0') {
            printf("0 ");
        } else {
            printf("%d/%d ", s[i] - '0', (int)pow(10, b));
        }
        b++;
    }
    return 0;
}