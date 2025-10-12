#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s1[1000], s2[1000];
    scanf("%s", s1);
    scanf("%s", s2);

    int total = 0, i = 0;
    char *p = s2;
    while (*p) {
        int d = 0, sign = 1;
        if (*p == '-') {
            sign = -1;
            p++;
        }
        while (*p && *p >= '0' && *p <= '9') {
            d = d * 10 + (*p - '0');
            p++;
        }
        d *= sign;
        int num = 0;
        char sub[20] = {0};
        strncpy(sub, s1 + i, abs(d));
        num = atoi(sub);
        if (d < 0) total -= num;
        else total += num;
        i += abs(d);
        while (*p && (*p < '0' || *p > '9') && *p != '-') p++;
    }
    printf("%d
", total);
    return 0;
}