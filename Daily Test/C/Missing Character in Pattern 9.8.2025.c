#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    scanf("%s", s);
    int n = strlen(s);
    for (int i = 1; i <= n / 2; i++) {
        if (n / i < 2) continue;
        char p[101];
        int valid = 1;
        for (int j = 0; j < i; j++) {
            int freq[256] = {0}, max = 0;
            char maxc = 0;
            for (int k = j; k < n; k += i) {
                if (s[k] != '_') {
                    freq[(int)s[k]]++;
                    if (freq[(int)s[k]] > max) {
                        max = freq[(int)s[k]];
                        maxc = s[k];
                    }
                }
            }
            if (max == 0) {
                valid = 0;
                break;
            }
            p[j] = maxc;
        }
        if (!valid) continue;
        int match = 1;
        for (int j = 0; j < n; j++) {
            if (s[j] != '_' && s[j] != p[j % i]) {
                match = 0;
                break;
            }
        }
        if (match) {
            for (int j = 0; j < n; j++) {
                if (s[j] == '_') {
                    printf("%c\n", p[j % i]);
                    return 0;
                }
            }
        }
    }
    return 0;
}
