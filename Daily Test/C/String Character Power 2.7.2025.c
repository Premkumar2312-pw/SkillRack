#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    int k, c[256] = {0}, p[256] = {0}, t = 0;
    scanf("%s %d", s, &k);
    for (int i = 0; s[i]; i++) {
        char ch = s[i];
        c[ch]++;
        if (c[ch] > k) continue;
        if (c[ch] == 1) p[ch] = 1;
        else p[ch] *= 2;
        t += p[ch];
    }
    printf("%d", t);
    return 0;
}