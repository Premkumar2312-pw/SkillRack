#include <stdio.h>
#include <string.h>

int main() {
    char n[20];
    int k;
    scanf("%s", n);
    scanf("%d", &k);
    int len = strlen(n);
    if (len < k) {
        printf("-1\n");
        return 0;
    }
    int max = -1;
    for (int i = 0; i <= len - k; i++) {
        char sub[20];
        strncpy(sub, n + i, k);
        sub[k] = '\0';
        int val = atoi(sub);
        if (val > max) max = val;
    }
    printf("%d\n", max);
    return 0;
}
