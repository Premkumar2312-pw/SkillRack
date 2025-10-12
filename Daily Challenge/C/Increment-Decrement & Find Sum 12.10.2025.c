#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    char val[1000];
    scanf(" %[^
]", val);
    int ans[1000], k = 0;
    char *token = strtok(val, " ");
    while (token) {
        char s[100] = {0}, sign[100] = {0};
        int len = strlen(token);
        int found = 0;
        for (int j = 0; j < len - 1; j++) {
            if (token[j] == token[j+1] && !(token[j] >= '0' && token[j] <= '9')) {
                sign[0] = token[j];
                found = 1;
                break;
            } else {
                int l = strlen(s);
                s[l] = token[j];
                s[l+1] = '';
            }
        }
        if (!found) {
            ans[k++] = atoi(token);
        } else if (sign[0] == '+') {
            ans[k++] = atoi(s) + 1;
        } else {
            ans[k++] = atoi(s) - 1;
        }
        token = strtok(NULL, " ");
    }
    int res = 0;
    for (int i = 0; i < k; i++) res += ans[i];
    printf("%d
", res);
    return 0;
}