#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);
    int freq[26] = {0}, i = 0, n;

    while (s[i]) {
        if (isalpha(s[i])) {
            char ch = s[i++];
            n = 0;
            while (isdigit(s[i])) {
                n = n * 10 + (s[i++] - '0');
            }
            freq[ch - 'a'] += n;
        }
    }

    for (i = 0; i < 26; i++) {
        if (freq[i] > 0)
            printf("%c%d", i + 'a', freq[i]);
    }
    return 0;
}