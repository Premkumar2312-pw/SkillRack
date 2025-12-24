#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char l[105][1005];   // adjust sizes as needed
    char l2[105][1005];

    for (int i = 0; i < n; i++) {
        scanf("%s", l[i]);
    }

    for (int i = 0; i < n; i++) {
        char *s = l[i];
        int len = (int)strlen(s);

        int a = 0, b = len - 1;

        char c = l[(i - 1 + n) % n][strlen(l[(i - 1 + n) % n]) - 1];

        for (int j = 0; j < len; j++) {
            if (c == s[j]) {
                a = j;
                break;
            }
        }

        char d = l[(i + 1) % n][0];

        for (int k = len - 1; k >= 0; k--) {
            if (d == s[k]) {
                b = k;
                break;
            }
        }

        int start = a < b ? a : b;
        int end   = a < b ? b : a;
        int idx = 0;

        for (int p = start; p <= end; p++) {
            l2[i][idx++] = s[p];
        }
        l2[i][idx] = '';
    }

    for (int i = 0; i < n; i++) {
        printf("%s
", l2[i]);
    }

    return 0;
}