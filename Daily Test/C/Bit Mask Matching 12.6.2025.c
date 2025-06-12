#include <stdio.h>
#include <string.h>

int main() {
    unsigned int n;
    char s[101];
    scanf("%u %s", &n, s);
    for (int i = 0; s[i]; i++) {
        int idx = s[i] - 'A';
        if (((n >> idx) & 1) == 0) {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}