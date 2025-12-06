#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[1005];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    // remove trailing newline
    size_t len = strlen(s);
    if (len && s[len - 1] == '
') s[len - 1] = '';

    int res[1005], rc = 0;
    char *t = s;

    while (t) {
        char *hash = strchr(t, '#');
        if (hash) *hash = '';

        int tlen = (int)strlen(t);
        for (int i = 0; i < tlen; i++) {
            if (t[i] == 'L') {
                int best = -1;
                for (int j = 0; j < tlen; j++) {
                    if (t[j] == '*') {
                        int d = abs(i - j);
                        if (best == -1 || d < best) best = d;
                    }
                }
                res[rc++] = best;
            }
        }
        if (!hash) break;
        t = hash + 1;
    }

    for (int i = 0; i < rc; i++) {
        if (i) printf(" ");
        printf("%d", res[i]);
    }
    return 0;
}