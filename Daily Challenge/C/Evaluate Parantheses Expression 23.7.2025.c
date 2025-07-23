#include <stdio.h>
#include <ctype.h>

int main() {
    char s[101];
    scanf("%s", s);
    int i = 0, d = 0, t = 0;
    while (s[i]) {
        if (s[i] == '(') d++, i++;
        else if (s[i] == ')') d--, i++;
        else if (isdigit(s[i])) {
            int n = 0;
            while (s[i] && isdigit(s[i])) {
                n = n * 10 + (s[i] - '0');
                i++;
            }
            t += n * d;
        } else i++;
    }
    printf("%d\n", t);
    return 0;
}