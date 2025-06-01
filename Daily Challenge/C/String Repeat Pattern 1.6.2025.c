#include <stdio.h>
#include <string.h>

int main() {
    char s1[101], s2[101];
    scanf("%s %s", s1, s2);
    int len = strlen(s2);
    for (int i = 0; i < len; i++) {
        int times = s2[i] - '0';
        for (int t = 0; t < times; t++) {
            for (int j = 0; j <= i; j++) {
                putchar(s1[j]);
            }
        }
        putchar('\n');
    }
    return 0;
}