#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int k;
    scanf("%s", s);
    scanf("%d", &k);

    int i = 0, d = 1;
    for (int idx = 0; idx < strlen(s); idx++) {
        for (int j = 0; j < i; j++) printf("*");
        printf("%c\n", s[idx]);
        i += d;
        if (i == k) {
            d = -1;
            i -= 2;
        }
        if (i < 0) {
            d = 1;
            i = 1;
        }
    }
    return 0;
}