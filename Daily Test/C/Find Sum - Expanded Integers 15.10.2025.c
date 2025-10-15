#include <stdio.h>
#include <string.h>

int main() {
    int n, d = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char s[105], l1[105] = "";
        scanf("%s", s);
        char s1 = s[0];
        int c = 0, l1_idx = 0;
        for (int j = 0; j < strlen(s); j++) {
            if (s[j] == s1) {
                c++;
                if (c > s[j] - '0') c = 1;
                if (c == s[j] - '0') {
                    l1[l1_idx++] = s1;
                    c = 0;
                }
            } else {
                s1 = s[j];
                c = 1;
                if ((s1 - '0') == c) l1[l1_idx++] = s1;
            }
        }
        l1[l1_idx] = '';
        d += atoi(l1);
    }
    printf("%d
", d);
    return 0;
}