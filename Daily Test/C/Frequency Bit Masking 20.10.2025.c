#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[101];
    int c[26] = {0};
    scanf("%s", s);
    int n = strlen(s);
    for (int i = 0; i < n; ++i)
        c[s[i] - 'a']++;

    while (1) {
        int zero_count = 0;
        for (int i = 0; i < 26; ++i)
            if (c[i] == 0)
                zero_count++;
        if (zero_count == 26)
            break;

        char b[27] = "";
        for (int i = 0; i < 26; ++i) {
            if (c[i] == 1 || c[i] > 1) {
                strcat(b, "1");
                c[i]--;
            } else {
                strcat(b, "0");
            }
        }
        // Reverse b string
        int len = strlen(b);
        for (int i = 0; i < len / 2; ++i) {
            char tmp = b[i];
            b[i] = b[len - i - 1];
            b[len - i - 1] = tmp;
        }
        printf("%d
", (int)strtol(b, NULL, 2));
    }
    return 0;
}