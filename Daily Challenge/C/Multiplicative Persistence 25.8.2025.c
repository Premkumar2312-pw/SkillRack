#include <stdio.h>
#include <string.h>
int main() {
    char n, l;
    int i = 0, s = 1, c = 0;
    scanf("%s", n);
    strcpy(l, n);
    int len = strlen(l);
    while (len > 1) {
        if (len == 1) break;
        if (i == len - 1) {
            c++;
            s = l[i] - '0';
            i = 0;
            sprintf(l, "%d", s);
            len = strlen(l);
            s = 1;
        } else {
            s *= l[i] - '0';
            i++;
        }
    }
    printf("%d\n", c);
    return 0;
}
