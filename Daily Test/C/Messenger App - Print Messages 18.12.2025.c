#include <stdio.h>
#include <string.h>

#define MAXN 1000
#define MAXLEN 1005

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    char keys[MAXN][MAXLEN];
    char vals[MAXN][MAXLEN];
    char line[MAXLEN];

    for (int i = 0; i < n; i++) {
        scanf("%s", line);          // read "key:value"
        char *colon = strchr(line, ':');
        *colon = '';              // split
        strcpy(keys[i], line);
        strcpy(vals[i], colon + 1);
        // trim leading spaces in value
        int idx = 0;
        while (vals[i][idx] == ' ') idx++;
        if (idx > 0) memmove(vals[i], vals[i] + idx, strlen(vals[i]) - idx + 1);
    }

    int printed[MAXN] = {0};
    for (int i = n - 1; i >= 0; i--) {
        int seen = 0;
        for (int j = n - 1; j > i; j--) {
            if (!printed[j] && strcmp(keys[i], keys[j]) == 0) {
                seen = 1;
                break;
            }
        }
        if (!seen) {
            printf("%s:%s
", keys[i], vals[i]);
            printed[i] = 1;
        }
    }
    return 0;
}