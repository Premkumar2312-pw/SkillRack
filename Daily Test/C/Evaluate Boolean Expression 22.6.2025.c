#include <stdio.h>
int main() {
    char s[100]; scanf("%s", s);
    int v = s[0] == 'T', i = 1, n;
    while (s[i]) {
        n = s[i+1] == 'T';
        if (s[i] == '&') v &= n;
        else if (s[i] == '|') v |= n;
        else if (s[i] == '^') v ^= n;
        i += 2;
    }
    printf("%c", v ? 'T' : 'F');
    return 0;
}