#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int l[100];
    for (int i = 0; i < n; i++) scanf("%d", &l[i]);

    int s[300];
    for (int i = 0; i < n; i++) s[i] = s[i+n] = s[i+2*n] = l[i];

    int c = 0, j = 0;
    for (int i = 0; i < 3*n; i++) {
        if (i == 0) {
            printf("%d %d\n", s[i], s[c]);
            c += 2;
            j++;
        } else if (j < n + 1) {
            printf("%d %d\n", s[i], s[c]);
            c += 2;
            j++;
        }
    }
    return 0;
}