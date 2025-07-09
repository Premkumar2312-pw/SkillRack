#include <stdio.h>
#include <string.h>

int main() {
    char s[1001], p[1001];
    scanf("%s", s);
    int n = strlen(s);
    for (int l = 1; l <= n / 2; l++) {
        if (n % l != 0 && n % l != 1) continue;
        strncpy(p, s, l);
        p[l] = '\0';
        int ok = 1;
        for (int i = 0; i < n; i += l) {
            for (int j = 0; j < l && i + j < n; j++) {
                if (s[i + j] != p[j] && s[i + j] != '_') {
                    ok = 0;
                    break;
                }
            }
            if (!ok) break;
        }
        if (ok) {
            for (int i = 0; i < n; i++) {
                if (s[i] == '_') {
                    printf("%c\n", p[i % l]);
                    return 0;
                }
            }
        }
    }
    return 0;
}