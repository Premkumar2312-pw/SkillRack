#include <stdio.h>
#include <string.h>

int hole_count(char d) {
    switch(d) {
        case '0': case '4': case '6': case '9': return 1;
        case '8': return 2;
        default: return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        char s[10];
        sprintf(s, "%d", i);
        int len = strlen(s), holes = 0;
        for (int j = 0; j < len; j++)
            holes += hole_count(s[j]);
        if (holes >= len)
            printf("%d ", i);
    }
    return 0;
}