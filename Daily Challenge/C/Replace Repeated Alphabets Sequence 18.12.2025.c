#include <stdio.h>
#include <string.h>

int main() {
    char s[100005];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    // strip trailing newline
    size_t n = strlen(s);
    if (n > 0 && s[n - 1] == '
') s[--n] = '';

    for (size_t i = 0; i < n;) {
        size_t j = i + 1;
        while (j < n && s[j] == s[i]) j++;      // run [i, j)

        size_t len = j - i;
        if (len > 1) {
            char k = s[i];
            for (size_t t = 0; t < len; t++) {
                char ch = (char)((((k - 'a') + t) % 26) + 'a');
                putchar(ch);
            }
        } else {
            putchar(s[i]);
        }
        i = j;
    }

    return 0;
}