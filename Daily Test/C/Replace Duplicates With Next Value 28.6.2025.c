#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[100], r[100], used[128] = {0};
    scanf("%s", s);
    int k = 0;

    for (int i = 0; s[i]; i++) {
        char c = s[i];
        char l = tolower(c);
        if (!used[(int)l]) {
            r[k++] = c;
            used[(int)l] = 1;
        } else if (isalpha(c)) {
            int x = l;
            while (used[(int)(x = 97 + (x - 96) % 26)]);
            used[x] = 1;
            r[k++] = islower(c) ? x : toupper(x);
        } else {
            int x = c - '0';
            while (used[(int)(x = (x + 1) % 10 + '0')]);
            used[x] = 1;
            r[k++] = x;
        }
    }
    r[k] = '\0';
    printf("%s", r);
    return 0;
}