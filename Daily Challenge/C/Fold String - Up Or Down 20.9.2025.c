#include <stdio.h>
#include <string.h>

int main() {
    char s[100], ch;
    int n;
    scanf("%s %c %d", s, &ch, &n);

    char a[100], b[100];
    int len = strlen(s);

    strcpy(a, s + n - 1);
    strncpy(b, s, n - 1);
    b[n - 1] = '\0';

    int la = strlen(a), lb = strlen(b);
    if (la < lb) {
        for (int i = lb - la - 1; i >= 0; i--) putchar('*');
        printf("%s\n%s\n", a, b);
    } else if (la > lb) {
        for (int i = la - lb - 1; i >= 0; i--) putchar('*');
        printf("%s\n%s\n", b, a);
    }
    return 0;
}